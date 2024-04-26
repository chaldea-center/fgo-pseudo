// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  ClassBoardEffectListDialogSkillListComponent_c *v5; // x8
  int v6; // s0
  int v7; // s1
  int v8; // s2
  struct UnityEngine_Color_o v9; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_4353AE3 & 1) == 0 )
  {
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4353AE3 = 1;
  }
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DEFAULT_SKILL_LV = 1;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA1_CLASS_BASE_ID = 8;
  v5 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->EXTRA2_CLASS_BASE_ID = 9;
  v5->static_fields->classIconOneDispFixPosY = -1.0;
  v6 = 1050319515;
  v9 = (struct UnityEngine_Color_o)0LL;
  v7 = 1050319515;
  v8 = 1050319515;
  UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v9);
  ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->DISABLED_COLOR = v9;
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
        v12 = sub_B70798(this);
        sub_B70738(v12, 0LL);
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
    sub_B7076C(this, a);
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
  System_Collections_Generic_List_int__o *v7; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v8; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct System_Int32_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4353ADC & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Union_int___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4353ADC = 1;
  }
  memset(&i, 0, sizeof(i));
  v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  for ( i = v24;
        ;
        System_Collections_Generic_List_int___Add(
          v7,
          HIDWORD(i.fields.current[1].klass),
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__) )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !i.fields.current )
      sub_B7076C(v10, v11);
    if ( !v7 )
      sub_B7076C(v10, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v8 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v8 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v15->static_fields->Extra2SortOrderClassIds;
      goto LABEL_25;
    }
    if ( v7 )
    {
      v17 = System_Collections_Generic_List_int___ToArray(
              v7,
              (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_28;
    }
LABEL_31:
    sub_B7076C(v8, v9);
  }
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->Extra1SortOrderClassIds;
LABEL_25:
  v16 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (const MethodInfo_1CCB95C *)Method_System_Linq_Enumerable_Union_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_28:
  this->fields.arrayForSort = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.arrayForSort,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v9; // x8

  v6 = this;
  if ( (byte_4353ADE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4353ADE = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v9 = skillDispDataList->fields._items->m_Items[index];
  if ( !v9 || !this )
LABEL_10:
    sub_B7076C(this, obj);
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
           v9->fields.detail,
           v7);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v19; // x22
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v23; // x3
  ClassBoardSquareEntity_array *v24; // x21

  if ( (byte_4353AE0 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_B70694(&Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    sub_B70694(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo);
    byte_4353AE0 = 1;
  }
  v9 = sub_B70764(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_DWORD *)(v9 + 24) = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v9 + 16) = Master_WarQuestSelectionMaster;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), Master_WarQuestSelectionMaster, v13, v14, v15, v16, v17, v18);
  if ( openedSquareIdArray )
  {
    v19 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      (const MethodInfo_29A71E0 *)Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v19,
                                                           (const MethodInfo_1CC29A4 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v21 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v20,
            (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v9 + 24), 0LL);
  }
  v24 = OpenedSquareEntityArray;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v24,
           dispType,
           ignoreTurnOrCountPassive,
           v23);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  System_Xml_XmlQualifiedName_o *IsContainsTurnOrCountBuff; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v9; // x26
  signed int max_length; // w8
  int v11; // w25
  int v12; // w24
  unsigned int v13; // w27
  ClassBoardSquareEntity_o *v14; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  int32_t skillType; // w8
  System_Xml_XmlQualifiedName_o *v17; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v20; // x21
  SkillLvEntity_o *v21; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v23; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_Xml_XmlQualifiedName_o *v30; // x26
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v34; // x0
  FuncDispEntity_o *v35; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v42; // w26
  int32_t v43; // w24
  int32_t v44; // w25
  int32_t v45; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v46; // x20
  __int64 v47; // x1
  int v48; // w8
  System_String_o *v49; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t v54; // w24
  System_String_o *v55; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v56; // x20
  int v57; // w23
  _BOOL8 v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x26
  __int64 v63; // x8
  __int64 v64; // x1
  __int64 v65; // x8
  __int64 v66; // x25
  int32_t v67; // w24
  int32_t v68; // w8
  Il2CppObject *v69; // x19
  __int64 v70; // x0
  __int64 v71; // x1
  _DWORD *v72; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v74; // x8
  __int64 v75; // x10
  __int64 v76; // x11
  bool v77; // cc
  _DWORD *v78; // x8
  int v79; // w26
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v83; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v85; // x19
  System_String_o *v86; // x0
  __int64 v87; // x1
  System_String_o *v88; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v89; // x8
  _DWORD *v90; // x9
  int32_t v91; // w25
  _DWORD *v92; // x9
  int32_t v93; // w26
  _DWORD *v94; // x8
  int32_t v95; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v96; // x22
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x0
  int v100; // w20
  ClassBoardEffectListDialogSkillListComponent___c_c *v101; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_0; // x20
  Il2CppObject *v104; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v112; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v113; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v114; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v115; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_1; // x20
  Il2CppObject *v117; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  __int64 v127; // x0
  ClassBoardCommandSpellMaster_o *v129; // [xsp+10h] [xbp-180h]
  int v130; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v131; // [xsp+20h] [xbp-170h]
  int32_t v132; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v133; // [xsp+30h] [xbp-160h]
  int v134; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v135; // [xsp+40h] [xbp-150h]
  int v136; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v137; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v138; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v139; // [xsp+60h] [xbp-130h]
  System_String_o *v140; // [xsp+60h] [xbp-130h]
  _WORD v141[26]; // [xsp+68h] [xbp-128h] BYREF
  int v142; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v144; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v145; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v146; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v148; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v150; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  if ( (byte_4353AE1 & 1) == 0 )
  {
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B70694(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_B70694(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_B70694(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    sub_B70694(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_B70694(&Method_System_String_Join_int___);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353AE1 = 1;
  }
  v150 = 0LL;
  entity = 0LL;
  v148 = 0LL;
  entitys = 0LL;
  v146 = 0LL;
  v144 = 0LL;
  memset(&v147, 0, sizeof(v147));
  memset(&v145, 0, sizeof(v145));
  memset(&v143, 0, sizeof(v143));
  v142 = 0;
  v138 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v138,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v138;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
  v135 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v139 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v137 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v137,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v11 = 0;
  v133 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v136 = 0;
    v132 = dispType;
    v131 = openedSquareArray;
    v129 = v9;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v127 = sub_B70798(IsContainsTurnOrCountBuff);
        sub_B70738(v127, 0LL);
      }
      v14 = openedSquareArray->m_Items[v13];
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v15,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v15;
      if ( !v14 )
        break;
      skillType = v14->fields.skillType;
      if ( skillType == 1 )
      {
        if ( dispType != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                         Master_WarQuestSelectionMaster,
                                                                         &entity,
                                                                         v14->fields.targetId,
                                                                         (const MethodInfo_21C049C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
          {
            IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v135;
            if ( !v135 )
              break;
            IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                                           v135,
                                                                           &v150,
                                                                           v14->fields.targetId,
                                                                           v14->fields.upSkillLv,
                                                                           0LL);
            if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_174;
              IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v150;
              if ( !v150 )
                break;
              IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(
                                                                             v150,
                                                                             0LL);
              if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) == 0 )
              {
LABEL_174:
                if ( !v150 )
                  break;
                IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v139;
                if ( !v139 )
                  break;
                IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                                               v139,
                                                                               &v148,
                                                                               v150->fields.funcId,
                                                                               0LL);
                if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
                {
                  if ( !v150 )
                    break;
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                                 (System_String_o *)StringLiteral_712/*","*/,
                                                                                 (System_Collections_Generic_IEnumerable_T__o *)v150->fields.funcId,
                                                                                 (const MethodInfo_1D5F1D0 *)Method_System_String_Join_int___);
                  if ( !v137 )
                    break;
                  v17 = IsContainsTurnOrCountBuff;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v137,
                          IsContainsTurnOrCountBuff,
                          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v18,
                      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v137,
                      v17,
                      (System_Xml_Schema_XmlSchemaObject_o *)v18,
                      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v137,
                           (System_Type_o *)v17,
                           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v20 = v148;
                  v21 = v150;
                  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v23 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B70764(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v23, v20, v21, 0LL, v14, 0LL);
                  if ( !v22 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v22,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v133;
                  dispType = v132;
                  openedSquareArray = v131;
                }
                else
                {
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v134 = v11;
                  v130 = v12;
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName(
                                                                                 (SkillEntity_o *)entity,
                                                                                 0LL);
                  if ( !entity )
                    break;
                  v49 = (System_String_o *)IsContainsTurnOrCountBuff;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v14->fields.priority;
                  id = v14->fields.id;
                  iconId = v14->fields.iconId;
                  v54 = v14->fields.skillType;
                  v55 = EffectExplanation;
                  v56 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B70764(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v56,
                    v49,
                    v55,
                    id,
                    priority,
                    iconId,
                    v54,
                    0LL);
                  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v138;
                  if ( !v138 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v138,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v133;
                  dispType = v132;
                  openedSquareArray = v131;
                  v12 = v130;
                  v11 = v134;
                }
              }
            }
          }
        }
      }
      else if ( dispType != 1 && skillType == 2 )
      {
        if ( !v9 )
          break;
        IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                                       v9,
                                                                       &entitys,
                                                                       v14->fields.targetId,
                                                                       v14->fields.upSkillLv,
                                                                       0LL);
        if ( ((unsigned __int8)IsContainsTurnOrCountBuff & 1) != 0 )
        {
          v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v24,
            (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
          IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)entitys;
          if ( !entitys )
            break;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v141,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
          v147 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
          while ( 1 )
          {
            v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v147,
                    (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
            if ( !v25 )
              break;
            current = v147.fields.current;
            if ( !v147.fields.current )
              sub_B7076C(v25, v26);
            if ( !v139 )
              sub_B7076C(0LL, v26);
            if ( FuncDispMaster__IsContainFuncIds(v139, &v146, (System_Int32_array *)v147.fields.current[3].klass, 0LL) )
            {
              v28 = System_String__Join_int_(
                      (System_String_o *)StringLiteral_712/*","*/,
                      (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                      (const MethodInfo_1D5F1D0 *)Method_System_String_Join_int___);
              if ( !v24 )
                sub_B7076C(v28, v29);
              v30 = (System_Xml_XmlQualifiedName_o *)v28;
              v31 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                      (WarBoardManager_TaskList_o *)v28,
                      (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
              if ( !v31 )
              {
                if ( !v137 )
                  sub_B7076C(v31, v32);
                if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        v137,
                        v30,
                        (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v33,
                    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                    v137,
                    v30,
                    (System_Xml_Schema_XmlSchemaObject_o *)v33,
                    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v34 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v137,
                        (System_Type_o *)v30,
                        (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v35 = v146;
                v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34;
                v37 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B70764(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                  v37,
                  v35,
                  0LL,
                  (ClassBoardCommandSpellEntity_o *)current,
                  v14,
                  0LL);
                if ( !v36 )
                  sub_B7076C(v38, v39);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v36,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            else
            {
              klass = (System_String_o *)current[2].klass;
              monitor = (System_String_o *)current[2].monitor;
              v42 = v14->fields.priority;
              v44 = v14->fields.id;
              v43 = v14->fields.iconId;
              v45 = v14->fields.skillType;
              v46 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B70764(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
              ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                v46,
                klass,
                monitor,
                v44,
                v42,
                v43,
                v45,
                0LL);
              if ( !v138 )
                sub_B7076C(0LL, v47);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v138,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
            }
          }
          *(_DWORD *)&v141[2 * v136 + 20] = 569;
          v12 = ++v142;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v147,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
          Master_WarQuestSelectionMaster = v133;
          dispType = v132;
          openedSquareArray = v131;
          v9 = v129;
          v11 = v12;
          if ( v12 )
          {
            v48 = v12 - 1;
            v136 = v12;
            if ( *(_DWORD *)&v141[2 * v12 + 18] == 569 )
            {
              v11 = --v12;
              v142 = v48;
              v136 = v48;
            }
          }
          else
          {
            v136 = 0;
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_65;
    }
LABEL_157:
    sub_B7076C(IsContainsTurnOrCountBuff, v7);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsContainsTurnOrCountBuff = (System_Xml_XmlQualifiedName_o *)v137;
  if ( !v137 )
    goto LABEL_157;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v141,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v137,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v145 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v141;
  v57 = v11;
  while ( 1 )
  {
    v58 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v145,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v58 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v145.fields.current.fields.value;
    if ( !v145.fields.current.fields.value )
      sub_B7076C(v58, v59);
    if ( SLODWORD(v145.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v145.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B7076C(v58, v59);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v63 = data[3];
        if ( !v63 )
          sub_B7076C(v58, v59);
        if ( !v133 )
          sub_B7076C(0LL, v59);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v133,
               &v144,
               *(_DWORD *)(v63 + 16),
               (const MethodInfo_21C049C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v144 )
            sub_B7076C(0LL, v64);
          Name = SkillEntity__getName((SkillEntity_o *)v144, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v145.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v65 = data[4];
        if ( !v65 )
          sub_B7076C(v58, v59);
        Name = *(System_String_o **)(v65 + 32);
      }
      v66 = sub_B706AC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v141,
        value,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v67 = 0;
      v140 = Name;
      v143 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v143,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v141[2 * v57 + 20] = 947;
        v79 = v142 + 1;
        v142 = v79;
        v57 = v79;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v143,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v79 && *(_DWORD *)&v141[2 * v79 + 18] == 947 )
        {
          v57 = v79 - 1;
          v142 = v79 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v83 = value->fields._items->m_Items[0];
        if ( !v83 )
          sub_B7076C(v80, v81);
        buff = v83->fields.buff;
        if ( !buff )
          sub_B7076C(v80, v81);
        v85 = *(System_String_o **)&buff->fields.isUse;
        if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        }
        v86 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(v85, (System_Int32_array *)v66, v82);
        v88 = v86;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v89 = value->fields._items->m_Items[0];
        if ( !v89 )
          sub_B7076C(v86, v87);
        v90 = v89[1].monitor;
        if ( !v90 )
          sub_B7076C(v86, v87);
        v91 = v90[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v92 = v89[1].monitor;
        if ( !v92 )
          sub_B7076C(v86, v87);
        v93 = v92[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v94 = v89[1].monitor;
        if ( !v94 )
          sub_B7076C(v86, v87);
        v95 = v94[14];
        v96 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B70764(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v96, v140, v88, v91, v67, v93, v95, 0LL);
        if ( !v138 )
          sub_B7076C(0LL, v97);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v138,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v69 = v143.fields.current;
      v70 = sub_B706AC(int___TypeInfo, 0LL);
      if ( !v69 )
        sub_B7076C(v70, v71);
      v72 = v69[1].monitor;
      if ( v72 )
      {
        if ( !v135 )
          sub_B7076C(v70, v71);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v135,
                                                               v72[4],
                                                               v72[5],
                                                               0LL);
LABEL_95:
        v74 = (__int64)DispValFromSkill;
      }
      else
      {
        v74 = v70;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v69[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_95;
        }
      }
      if ( !v66 )
        sub_B7076C(DispValFromSkill, v71);
      v75 = *(_QWORD *)(v66 + 24);
      if ( v75 )
      {
        if ( (int)v75 >= 1 )
        {
          v76 = 8LL;
          do
          {
            if ( v76 - 8 >= (unsigned __int64)(unsigned int)v75 )
            {
              v98 = sub_B70798(DispValFromSkill);
              sub_B70738(v98, 0LL);
            }
            if ( !v74 )
              sub_B7076C(DispValFromSkill, v71);
            if ( v76 - 8 >= (unsigned __int64)*(unsigned int *)(v74 + 24) )
            {
              v99 = sub_B70798(DispValFromSkill);
              sub_B70738(v99, 0LL);
            }
            v77 = v76 - 7 < (int)v75;
            *(_DWORD *)(v66 + 4 * v76) += *(_DWORD *)(v74 + 4 * v76);
            ++v76;
          }
          while ( v77 );
        }
      }
      else
      {
        v66 = v74;
      }
      v78 = v69[2].monitor;
      if ( !v78 )
        sub_B7076C(DispValFromSkill, v71);
      v68 = v78[20];
      if ( v68 > v67 )
        v67 = v68;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v141[2 * v57 + 20] = 1073;
  v100 = ++v142;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v145,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v100 && *(_DWORD *)&v141[2 * v100 + 18] == 1073 )
    v142 = v100 - 1;
  v101 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v101 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v101->static_fields;
  _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v101);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v104 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_0,
      v104,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v105 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v105->__9__33_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v105->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
  }
  v112 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v138,
           (System_Func_TSource__TKey__o *)_9__33_0,
           (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v113 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v114 = v112;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v113 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v115 = v113->static_fields;
  _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v115->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v113);
      v115 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v117 = (Il2CppObject *)v115->__9;
    _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_1,
      v117,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v118 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v118->__9__33_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v118->__9__33_1,
      (System_Int32_array **)_9__33_1,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
  }
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v114,
                                                                (System_Func_TSource__TKey__o *)_9__33_1,
                                                                (const MethodInfo_1CC7F60 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v125, (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  sub_B70630(
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
    sub_B7076C(gameObject, v10);
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
  __int64 v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x28
  System_String_o *v10; // x0
  System_String_o *v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x26
  System_String_o *v14; // x0
  System_String_o *v15; // x25
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  System_String_o *v27; // x20
  System_String_o *v28; // x20
  System_String_o *v29; // x20
  System_String_o *v30; // x20
  unsigned __int64 v31; // x8
  System_String_o *v32; // x20
  unsigned __int64 v33; // x8
  System_String_o *v34; // x20
  unsigned __int64 v35; // x8
  System_String_o *v36; // x20
  unsigned __int64 v37; // x8
  __int64 v39; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v41; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4353AE2 & 1) == 0 )
  {
    sub_B70694(&SkillDetailParamFormatResolver_TypeInfo);
    sub_B70694(&StringLiteral_24059/*"{x"*/);
    sub_B70694(&StringLiteral_23854/*"{"*/);
    sub_B70694(&StringLiteral_23789/*"xx}"*/);
    sub_B70694(&StringLiteral_23788/*"xxx}"*/);
    sub_B70694(&StringLiteral_24080/*"}"*/);
    sub_B70694(&StringLiteral_24062/*"{xxxx"*/);
    sub_B70694(&StringLiteral_24060/*"{xx"*/);
    sub_B70694(&StringLiteral_23787/*"xxxx}"*/);
    sub_B70694(&StringLiteral_23790/*"x}"*/);
    sub_B70694(&StringLiteral_24061/*"{xxx"*/);
    byte_4353AE2 = 1;
  }
  v41 = 0LL;
  if ( funcVals )
  {
    v5 = *(_QWORD *)&funcVals->max_length;
    if ( v5 )
    {
      HIDWORD(v41) = 0;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v6 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v7 = System_String__Concat_44760452(
                 (System_String_o *)StringLiteral_23854/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_23787/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v9 = System_String__Concat_44760452(
                 (System_String_o *)StringLiteral_23854/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_23788/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v11 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_23854/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_23789/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v13 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_23854/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_23790/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v15 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_23854/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_24080/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v17 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_24059/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_24080/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v19 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_24060/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_24080/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          oldValue = System_String__Concat_44760452(
                       (System_String_o *)StringLiteral_24061/*"{xxx"*/,
                       v20,
                       (System_String_o *)StringLiteral_24080/*"}"*/,
                       0LL);
          v21 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v22 = System_String__Concat_44760452(
                  (System_String_o *)StringLiteral_24062/*"{xxxx"*/,
                  v21,
                  (System_String_o *)StringLiteral_24080/*"}"*/,
                  0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v23 = v22;
          LODWORD(v41) = 10000 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(text, v7, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v26 = v22;
          LODWORD(v41) = 1000 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v26 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v26, v9, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v27 = v22;
          LODWORD(v41) = 100 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v27 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v27, v11, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v28 = v22;
          LODWORD(v41) = 10 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v28, v13, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v29 = v22;
          v24 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v41) + 32, 0LL);
          if ( !v29 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v29, v15, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v30 = v22;
          v31 = 1717986919LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v31 >> 63) + (SHIDWORD(v31) >> 2);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v30, v17, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v32 = v22;
          v33 = 1374389535LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v33 >> 63) + (SHIDWORD(v33) >> 5);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v32, v19, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_30;
          v34 = v22;
          v35 = 274877907LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v35 >> 63) + (SHIDWORD(v35) >> 6);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_31;
          v22 = System_String__Replace_44765404(v34, oldValue, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
          {
LABEL_30:
            v39 = sub_B70798(v22);
            sub_B70738(v39, 0LL);
          }
          v36 = v22;
          v37 = 1759218605LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v37 >> 63) + (SHIDWORD(v37) >> 12);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
LABEL_31:
            sub_B7076C(v24, v25);
          text = System_String__Replace_44765404(v36, v23, v24, 0LL);
          ++HIDWORD(v41);
        }
        while ( SHIDWORD(v41) < (signed int)funcVals->max_length );
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
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int32_t id; // w20
  ClassBoardEffectListDialogSkillListComponent_c *v13; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v15; // w20
  System_Collections_Generic_List_ClassBoardClassEntity__o *v16; // x22
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v17; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v19; // x22
  float v20; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v29; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  struct UIGrid_o *v34; // x8
  int v35; // w20
  UnityEngine_Object_o *v36; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x20
  UnityEngine_GameObject_o *v43; // x0
  bool v44; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353ADB & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_System_Comparison_ClassBoardClassEntity___ctor__);
    sub_B70694(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_3079/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/);
    byte_4353ADB = 1;
  }
  entitys = 0LL;
  memset(&v46, 0, sizeof(v46));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_78;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &entitys,
          classBoardBaseEntity->fields.id,
          0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v13 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v13 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_20;
  v15 = classBoardBaseEntity->fields.id;
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v15 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_20:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v11);
    v16 = entitys;
    v17 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v17,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    if ( !v16 )
      goto LABEL_78;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
      (System_Comparison_T__o *)v17,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v19 = this->fields.subjectClassLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3079/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/,
                                                                  0LL);
    if ( !v19 )
      goto LABEL_78;
    UILabel__set_text(v19, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)entitys;
  v44 = isAll;
  if ( !entitys )
    goto LABEL_78;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v20 = 0.0;
  v46 = v45;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
    {
      v35 = 114;
      goto LABEL_55;
    }
    current = (ClassBoardClassEntity_o *)v46.fields.current;
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v24 = Object;
    if ( !Object )
      sub_B7076C(0LL, v23);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        Object,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    if ( v26 )
      break;
    if ( !current )
      sub_B7076C(v26, v27);
    if ( !Component_srcLineSprite )
      sub_B7076C(v26, v27);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_srcLineSprite, current->fields.classId, 0LL);
    if ( !supportClassBoard )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
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
                 (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_44;
    }
LABEL_45:
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_srcLineSprite,
      v29->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v24, 0LL);
    if ( !classIconGrid )
      sub_B7076C(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v24, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v24, 1, 0LL);
    v34 = this->fields.classIconGrid;
    if ( !v34 )
      sub_B7076C(v32, v33);
    v20 = v20 + (float)(v34->fields.cellHeight * 0.5);
  }
  v35 = 229;
LABEL_55:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  if ( v35 != 229 )
  {
    v36 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      v38 = -v20;
      GameObjectExtensions__AddLocalPositionX(gameObject, v38, 0LL);
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_78;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__AddLocalPositionX(v39, v38, 0LL);
      if ( !v44
        && System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
             (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
             (const MethodInfo_1CB85E8 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
      {
        Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
        if ( Master_WarQuestSelectionMaster )
        {
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
          v41 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          v42 = v40;
          if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
            v41 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPositionX(v42, v41->static_fields->classIconOneDispFixPosY, 0LL);
          Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
          if ( Master_WarQuestSelectionMaster )
          {
            v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
            GameObjectExtensions__AddLocalPositionX(
              v43,
              ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
              0LL);
            goto LABEL_70;
          }
        }
LABEL_78:
        sub_B7076C(Master_WarQuestSelectionMaster, v10);
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
    sub_B7076C(0LL, v5);
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
    sub_B7076C(0LL, sprite);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


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
  ClassBoardClassMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v14; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v15; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x24
  Il2CppObject *v18; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  bool v26; // w0
  int v27; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v29; // x8
  int32_t v30; // w23
  int v31; // w25
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD **v34; // x23
  __int64 v35; // x22
  __int16 v36; // w8
  __int64 v37; // x22
  __int64 v38; // x22
  __int64 v39; // x22
  int32_t v40; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v51; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v54; // x8
  System_Func_T1__T2__TResult__o *v55; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v56; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v59; // x22
  System_Action_T1__T2__o *v60; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v62; // x21
  float v63; // s9
  Il2CppObject *current; // x25
  UnityEngine_GameObject_o *Object; // x0
  __int64 v66; // x1
  UnityEngine_GameObject_o *v67; // x20
  srcLineSprite_o *v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v76; // x22
  __int64 v77; // x0
  __int64 v78; // x1
  const MethodInfo *v79; // x6
  float v80; // s8
  System_String_o *v81; // x0
  System_String_o *v82; // x22
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-60h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v7 = isAll;
  v9 = baseId;
  baseIda = baseId;
  if ( (byte_4353ADF & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GameObject__int___ctor__);
    sub_B70694(&System_Action_GameObject__int__TypeInfo);
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_B70694(&Method_System_Func_ClassBoardClassEntity__bool___ctor__);
    sub_B70694(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_B70694(&Method_System_Func_GameObject__int__float___ctor__);
    sub_B70694(&System_Func_GameObject__int__float__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_B70694(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__);
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_3078/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_B70694(&StringLiteral_3077/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    byte_4353ADF = 1;
  }
  entitys = 0LL;
  memset(&v84, 0, sizeof(v84));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_112;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entitys, v9, 0LL) )
  {
    v14 = entitys;
    v15 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v15 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v18,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__,
        (const MethodInfo_29AC578 *)Method_System_Func_ClassBoardClassEntity__bool___ctor__);
      v19 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v19->__9__31_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__31_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v19->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14,
            (System_Func_TSource__bool__o *)_9__31_0,
            (const MethodInfo_1CA7D8C *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v27 = v26;
  }
  else
  {
    v27 = 1;
  }
  v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v29 = v28->static_fields;
  if ( v9 == v29->EXTRA1_CLASS_BASE_ID )
    goto LABEL_26;
  v30 = baseIda;
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v30 == v29->EXTRA2_CLASS_BASE_ID )
  {
LABEL_26:
    v31 = 1;
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
    v31 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v34 = (_QWORD **)Method_System_Array_Empty_int___;
      v35 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v36 = *(_WORD *)(v35 + 306);
      if ( (v36 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v36 = *(_WORD *)(v35 + 306);
      }
      if ( (v36 & 0x400) != 0 )
      {
        v37 = *v34[6];
        if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
          sub_B08394(*v34[6]);
        if ( !*(_DWORD *)(v37 + 224) )
        {
          v38 = *v34[6];
          if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
            sub_B08394(*v34[6]);
          j_il2cpp_runtime_class_init_0(v38);
        }
      }
      v39 = *v34[6];
      if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
        sub_B08394(*v34[6]);
      squareIds = **(System_Int32_array ***)(v39 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v40 = baseIda;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v40, dispType, 0, squareIds, v13);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillDispDataList,
    (System_Int32_array **)OpenSkillList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !this->fields.skillDispDataList )
LABEL_112:
    sub_B7076C(Master_WarQuestSelectionMaster, v12);
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
                                                                    (System_String_o *)StringLiteral_3077/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/,
                                                                    0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      v62 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
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
      if ( (v31 & v27) != 0 )
      {
        v81 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v82 = System_String__Concat_44758168((System_String_o *)StringLiteral_3078/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v81, 0LL);
      }
      else
      {
        v82 = (System_String_o *)StringLiteral_3077/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(v82, 0LL);
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
    v51 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_112;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_skillDetailObjForAll,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v31 & v7) != 0 )
        {
          v54 = this->fields.recycler;
          if ( !v54 )
            goto LABEL_112;
          v54->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v55 = (System_Func_T1__T2__TResult__o *)sub_B70764(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v55,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          (const MethodInfo_29B6EB4 *)Method_System_Func_GameObject__int__float___ctor__);
        v56 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_B70764(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v56, (System_Func_GameObject__int__float__o *)v55, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v59 = this->fields.recycler;
          v60 = (System_Action_T1__T2__o *)sub_B70764(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v60,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            (const MethodInfo_2659B7C *)Method_System_Action_GameObject__int___ctor__);
          if ( v59 )
          {
            ScrollItemRecycler__Init(
              v59,
              size,
              v51,
              (System_Action_GameObject__int__o *)v60,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v56,
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
        &v83,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v63 = 0.0;
      v84 = v83;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v84,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v84.fields.current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v51, 0LL, 0LL, 0LL);
        v67 = Object;
        if ( !Object )
          sub_B7076C(0LL, v66);
        v68 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                Object,
                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v76 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v68;
        if ( !v68 )
          sub_B7076C(0LL, v69);
        *(_QWORD *)&v68->fields.miLineH = this;
        sub_B70630(
          (BattleServantConfConponent_o *)&v68->fields.miLineH,
          (System_Int32_array **)this,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
        if ( !current )
          sub_B7076C(v77, v78);
        v80 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v76,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v79);
        GameObjectExtensions__SetParent_32503320(v67, this->fields.skillListParent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v67, one, 0LL);
        GameObjectExtensions__SetLocalPosition_32497536(v67, 0.0, -v63, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v67, 1, 0LL);
        v63 = v63 + v80;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v84,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v13; // x20
  const MethodInfo *v14; // x6
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v16; // x8

  v6 = this;
  if ( (byte_4353ADD & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4353ADD = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !this )
    goto LABEL_10;
  v13 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this;
  this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillListParent,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v16 = skillDispDataList->fields._items->m_Items[index];
  if ( !v16 )
LABEL_10:
    sub_B7076C(this, obj);
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v13,
    v16->fields.name,
    v16->fields.detail,
    v16->fields.iconId,
    v16->fields.skillType,
    0,
    v14);
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
  sub_B70630(&this->fields);
  this->fields.skillLvEntity = skillLvEntity;
  sub_B70630(&this->fields.skillLvEntity);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_B70630(&this->fields.commandSpellEntity);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_B70630(&this->fields.classBoardSquareEntity);
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
  sub_B70630(&v14->fields);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_B70630(v14);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434ED9B & 1) == 0 )
  {
    sub_B70694(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_434ED9B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__31_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B7076C(this, 0LL);
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
    sub_B7076C(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}