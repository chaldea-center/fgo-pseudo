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

  if ( (byte_4217B0A & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_4217B0A = 1;
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
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
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
    sub_B0D97C(this);
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
  _BOOL8 v20; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217B03 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4217B03 = 1;
  }
  memset(&i, 0, sizeof(i));
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    entityList);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  for ( i = v33;
        ;
        System_Collections_Generic_List_int___Add(
          v18,
          HIDWORD(i.fields.current[1].klass),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__) )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v20 )
      break;
    if ( !i.fields.current )
      sub_B0D97C(v20);
    if ( !v18 )
      sub_B0D97C(v20);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
      v24 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v24->static_fields->Extra2SortOrderClassIds;
      goto LABEL_25;
    }
    if ( v18 )
    {
      v26 = System_Collections_Generic_List_int___ToArray(
              v18,
              (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_28;
    }
LABEL_31:
    sub_B0D97C(v19);
  }
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v22->static_fields->Extra1SortOrderClassIds;
LABEL_25:
  v25 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_1B5945C *)Method_System_Linq_Enumerable_Union_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_28:
  this->fields.arrayForSort = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.arrayForSort,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  if ( (byte_4217B05 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B0D8A4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4217B05 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  skillDispDataList = v6->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v10 = skillDispDataList->fields._items->m_Items[index];
  if ( !v10 || !this )
LABEL_10:
    sub_B0D97C(this);
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
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_int__BattleActionData_SideEffectData__o *v29; // x22
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v33; // x3
  ClassBoardSquareEntity_array *v34; // x21

  if ( (byte_4217B07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_B0D8A4(&Method_System_Func_int__ClassBoardSquareEntity___ctor__, v14);
    sub_B0D8A4(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v15);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__, v16);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo, v17);
    byte_4217B07 = 1;
  }
  v18 = sub_B0D974(
          ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo,
          *(_QWORD *)&dispType,
          ignoreTurnOrCountPassive);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B0D97C(v19);
  *(_DWORD *)(v18 + 24) = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v18 + 16) = Master_WarQuestSelectionMaster;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), Master_WarQuestSelectionMaster, v21, v22, v23, v24, v25, v26);
  if ( openedSquareIdArray )
  {
    v29 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                   System_Func_int__ClassBoardSquareEntity__TypeInfo,
                                                                   v27,
                                                                   v28);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v29,
      (Il2CppObject *)v18,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      (const MethodInfo_26145DC *)Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v29,
                                                           (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v31 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v30,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v18 + 24), 0LL);
  }
  v34 = OpenedSquareEntityArray;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v34,
           dispType,
           ignoreTurnOrCountPassive,
           v33);
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
  System_Xml_XmlQualifiedName_o *IsPassive; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v61; // x26
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  signed int max_length; // w8
  int v67; // w25
  int v68; // w24
  unsigned int v69; // w27
  ClassBoardSquareEntity_o *v70; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x19
  System_Xml_XmlQualifiedName_o *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v77; // x21
  SkillLvEntity_o *v78; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x19
  __int64 v80; // x1
  __int64 v81; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v82; // x20
  const MethodInfo *v83; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x22
  _BOOL8 v85; // x0
  Il2CppObject *current; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  System_String_o *v89; // x0
  System_Xml_XmlQualifiedName_o *v90; // x26
  _BOOL8 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v95; // x0
  FuncDispEntity_o *v96; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v97; // x23
  __int64 v98; // x1
  __int64 v99; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v100; // x21
  __int64 v101; // x0
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v104; // w26
  int32_t v105; // w24
  int32_t v106; // w25
  int32_t v107; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v108; // x20
  int v109; // w8
  System_String_o *v110; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v116; // x25
  __int64 v117; // x1
  __int64 v118; // x2
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v119; // x20
  int v120; // w23
  _BOOL8 v121; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x26
  __int64 v125; // x8
  __int64 v126; // x8
  __int64 v127; // x25
  int32_t v128; // w24
  int32_t v129; // w8
  Il2CppObject *v130; // x19
  __int64 v131; // x0
  const MethodInfo *v132; // x1
  _DWORD *v133; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v135; // x8
  __int64 v136; // x10
  __int64 v137; // x11
  bool v138; // cc
  _DWORD *v139; // x8
  int v140; // w26
  __int64 v141; // x0
  const MethodInfo *v142; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v143; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v145; // x19
  System_String_o *v146; // x0
  __int64 v147; // x1
  __int64 v148; // x2
  System_String_o *v149; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v150; // x8
  _DWORD *v151; // x9
  int32_t v152; // w25
  _DWORD *v153; // x9
  int32_t v154; // w26
  _DWORD *v155; // x8
  int32_t v156; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v157; // x22
  __int64 v158; // x0
  __int64 v159; // x0
  int v160; // w20
  __int64 v161; // x1
  __int64 v162; // x2
  ClassBoardEffectListDialogSkillListComponent___c_c *v163; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_0; // x20
  Il2CppObject *v166; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v174; // x0
  __int64 v175; // x1
  __int64 v176; // x2
  ClassBoardEffectListDialogSkillListComponent___c_c *v177; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v178; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v179; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_1; // x20
  Il2CppObject *v181; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v189; // x0
  __int64 v191; // x0
  ClassBoardCommandSpellMaster_o *v193; // [xsp+10h] [xbp-180h]
  int v194; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v195; // [xsp+20h] [xbp-170h]
  int32_t v196; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v197; // [xsp+30h] [xbp-160h]
  int v198; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v199; // [xsp+40h] [xbp-150h]
  int v200; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v201; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v202; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v203; // [xsp+60h] [xbp-130h]
  System_String_o *v204; // [xsp+60h] [xbp-130h]
  _WORD v205[26]; // [xsp+68h] [xbp-128h] BYREF
  int v206; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v207; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v208; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v209; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v210; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v211; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v212; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v214; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4217B08 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v22);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v23);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v24);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v30);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_B0D8A4(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v32);
    sub_B0D8A4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v33);
    sub_B0D8A4(&int___TypeInfo, v34);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v35);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v44);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v45);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v46);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v47);
    sub_B0D8A4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_B0D8A4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v49);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v50);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v52);
    sub_B0D8A4(&Method_System_String_Join_int___, v53);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__, v54);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__, v55);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v56);
    sub_B0D8A4(&StringLiteral_705/*","*/, v57);
    sub_B0D8A4(&StringLiteral_1/*""*/, v58);
    byte_4217B08 = 1;
  }
  v214 = 0LL;
  entity = 0LL;
  v212 = 0LL;
  entitys = 0LL;
  v210 = 0LL;
  v208 = 0LL;
  memset(&v211, 0, sizeof(v211));
  memset(&v209, 0, sizeof(v209));
  memset(&v207, 0, sizeof(v207));
  v206 = 0;
  v202 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                                                                   *(_QWORD *)&dispType,
                                                                                                   ignoreTurnOrCountPassive);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v202,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v202;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  v199 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v61 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v203 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v201 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                         System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                                         v62,
                                                                                         v63);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v201,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v67 = 0;
  v197 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v68 = 0;
    v69 = 0;
    v200 = 0;
    v196 = v4;
    v195 = openedSquareArray;
    v193 = v61;
    while ( 1 )
    {
      if ( v69 >= max_length )
      {
        v191 = sub_B0D9A8(IsPassive);
        sub_B0D948(v191, 0LL);
      }
      v70 = openedSquareArray->m_Items[v69];
      v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v64, v65);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v71,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v71;
      if ( !v70 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v70, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v70->fields.targetId,
                                                         (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v199;
            if ( !v199 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v199,
                                                           &v214,
                                                           v70->fields.targetId,
                                                           v70->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_174;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v214;
              if ( !v214 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v214, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_174:
                if ( !v214 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v203;
                if ( !v203 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v203,
                                                               &v212,
                                                               v214->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v214 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_705/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v214->fields.funcId,
                                                                 (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
                  if ( !v201 )
                    break;
                  v72 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v201,
                          IsPassive,
                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v73, v74);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v75,
                      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v201,
                      v72,
                      (System_Xml_Schema_XmlSchemaObject_o *)v75,
                      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v201,
                           (System_Type_o *)v72,
                           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v77 = v212;
                  v78 = v214;
                  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v82 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B0D974(
                                                                                               ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                               v80,
                                                                                               v81);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v82, v77, v78, 0LL, v70, 0LL);
                  if ( !v79 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v79,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v197;
                  v4 = v196;
                  openedSquareArray = v195;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v198 = v67;
                  v194 = v68;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v110 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v70->fields.priority;
                  id = v70->fields.id;
                  iconId = v70->fields.iconId;
                  skillType = v70->fields.skillType;
                  v116 = EffectExplanation;
                  v119 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                           ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                           v117,
                                                                                           v118);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v119,
                    v110,
                    v116,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v202;
                  if ( !v202 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v202,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v197;
                  v4 = v196;
                  openedSquareArray = v195;
                  v68 = v194;
                  v67 = v198;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v70, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v61 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v61,
                                                         &entitys,
                                                         v70->fields.targetId,
                                                         v70->fields.upSkillLv,
                                                         v83);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v64, v65);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v84,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v205,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v211 = *(System_Collections_Generic_List_Enumerator_T__o *)v205;
            while ( 1 )
            {
              v85 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v211,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v85 )
                break;
              current = v211.fields.current;
              if ( !v211.fields.current )
                sub_B0D97C(v85);
              if ( !v203 )
                sub_B0D97C(0LL);
              if ( FuncDispMaster__IsContainFuncIds(
                     v203,
                     &v210,
                     (System_Int32_array *)v211.fields.current[3].klass,
                     0LL) )
              {
                v89 = System_String__Join_int_(
                        (System_String_o *)StringLiteral_705/*","*/,
                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                        (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
                if ( !v84 )
                  sub_B0D97C(v89);
                v90 = (System_Xml_XmlQualifiedName_o *)v89;
                v91 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v84,
                        (WarBoardManager_TaskList_o *)v89,
                        (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v91 )
                {
                  if ( !v201 )
                    sub_B0D97C(v91);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v201,
                          v90,
                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v94 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v92, v93);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v94,
                      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v201,
                      v90,
                      (System_Xml_Schema_XmlSchemaObject_o *)v94,
                      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v95 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v201,
                          (System_Type_o *)v90,
                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v96 = v210;
                  v97 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v95;
                  v100 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B0D974(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v98,
                                                                                                v99);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v100,
                    v96,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v70,
                    0LL);
                  if ( !v97 )
                    sub_B0D97C(v101);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v97,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v84,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v104 = v70->fields.priority;
                v106 = v70->fields.id;
                v105 = v70->fields.iconId;
                v107 = v70->fields.skillType;
                v108 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v87,
                                                                                         v88);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v108,
                  klass,
                  monitor,
                  v106,
                  v104,
                  v105,
                  v107,
                  0LL);
                if ( !v202 )
                  sub_B0D97C(0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v202,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v205[2 * v200 + 20] = 569;
            v68 = ++v206;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v211,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v197;
            v4 = v196;
            openedSquareArray = v195;
            v61 = v193;
            v67 = v68;
            if ( v68 )
            {
              v109 = v68 - 1;
              v200 = v68;
              if ( *(_DWORD *)&v205[2 * v68 + 18] == 569 )
              {
                v67 = --v68;
                v206 = v109;
                v200 = v109;
              }
            }
            else
            {
              v200 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v69 >= max_length )
        goto LABEL_65;
    }
LABEL_157:
    sub_B0D97C(IsPassive);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v201;
  if ( !v201 )
    goto LABEL_157;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v205,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v201,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v209 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v205;
  v120 = v67;
  while ( 1 )
  {
    v121 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v209,
             (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v121 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v209.fields.current.fields.value;
    if ( !v209.fields.current.fields.value )
      sub_B0D97C(v121);
    if ( SLODWORD(v209.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v209.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B0D97C(v121);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v125 = data[3];
        if ( !v125 )
          sub_B0D97C(v121);
        if ( !v197 )
          sub_B0D97C(0LL);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v197,
               &v208,
               *(_DWORD *)(v125 + 16),
               (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v208 )
            sub_B0D97C(0LL);
          Name = SkillEntity__getName((SkillEntity_o *)v208, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v209.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v126 = data[4];
        if ( !v126 )
          sub_B0D97C(v121);
        Name = *(System_String_o **)(v126 + 32);
      }
      v127 = sub_B0D8BC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v205,
        value,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v128 = 0;
      v204 = Name;
      v207 = *(System_Collections_Generic_List_Enumerator_T__o *)v205;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v207,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v205[2 * v120 + 20] = 947;
        v140 = v206 + 1;
        v206 = v140;
        v120 = v140;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v207,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v140 && *(_DWORD *)&v205[2 * v140 + 18] == 947 )
        {
          v120 = v140 - 1;
          v206 = v140 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v143 = value->fields._items->m_Items[0];
        if ( !v143 )
          sub_B0D97C(v141);
        buff = v143->fields.buff;
        if ( !buff )
          sub_B0D97C(v141);
        v145 = *(System_String_o **)&buff->fields.isUse;
        if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        }
        v146 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 v145,
                 (System_Int32_array *)v127,
                 v142);
        v149 = v146;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v150 = value->fields._items->m_Items[0];
        if ( !v150 )
          sub_B0D97C(v146);
        v151 = v150[1].monitor;
        if ( !v151 )
          sub_B0D97C(v146);
        v152 = v151[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v153 = v150[1].monitor;
        if ( !v153 )
          sub_B0D97C(v146);
        v154 = v153[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v155 = v150[1].monitor;
        if ( !v155 )
          sub_B0D97C(v146);
        v156 = v155[14];
        v157 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v147,
                                                                                 v148);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v157, v204, v149, v152, v128, v154, v156, 0LL);
        if ( !v202 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v202,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v157,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v130 = v207.fields.current;
      v131 = sub_B0D8BC(int___TypeInfo, 0LL);
      if ( !v130 )
        sub_B0D97C(v131);
      v133 = v130[1].monitor;
      if ( v133 )
      {
        if ( !v199 )
          sub_B0D97C(v131);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v199,
                                                               v133[4],
                                                               v133[5],
                                                               0LL);
LABEL_95:
        v135 = (__int64)DispValFromSkill;
      }
      else
      {
        v135 = v131;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v130[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v132);
          goto LABEL_95;
        }
      }
      if ( !v127 )
        sub_B0D97C(DispValFromSkill);
      v136 = *(_QWORD *)(v127 + 24);
      if ( v136 )
      {
        if ( (int)v136 >= 1 )
        {
          v137 = 8LL;
          do
          {
            if ( v137 - 8 >= (unsigned __int64)(unsigned int)v136 )
            {
              v158 = sub_B0D9A8(DispValFromSkill);
              sub_B0D948(v158, 0LL);
            }
            if ( !v135 )
              sub_B0D97C(DispValFromSkill);
            if ( v137 - 8 >= (unsigned __int64)*(unsigned int *)(v135 + 24) )
            {
              v159 = sub_B0D9A8(DispValFromSkill);
              sub_B0D948(v159, 0LL);
            }
            v138 = v137 - 7 < (int)v136;
            *(_DWORD *)(v127 + 4 * v137) += *(_DWORD *)(v135 + 4 * v137);
            ++v137;
          }
          while ( v138 );
        }
      }
      else
      {
        v127 = v135;
      }
      v139 = v130[2].monitor;
      if ( !v139 )
        sub_B0D97C(DispValFromSkill);
      v129 = v139[20];
      if ( v129 > v128 )
        v128 = v129;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v205[2 * v120 + 20] = 1073;
  v160 = ++v206;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v209,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v160 && *(_DWORD *)&v205[2 * v160 + 18] == 1073 )
    v206 = v160 - 1;
  v163 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v163 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v163->static_fields;
  _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v163->vtable._0_Equals.methodPtr) & 4) != 0 && !v163->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v163);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v166 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v161,
                                                                                 v162);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_0,
      v166,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      (const MethodInfo_2619564 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v167 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v167->__9__33_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v167->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173);
  }
  v174 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v202,
           (System_Func_TSource__TKey__o *)_9__33_0,
           (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v178 = v174;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v179 = v177->static_fields;
  _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v179->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( (BYTE3(v177->vtable._0_Equals.methodPtr) & 4) != 0 && !v177->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v177);
      v179 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v181 = (Il2CppObject *)v179->__9;
    _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v175,
                                                                                 v176);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_1,
      v181,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      (const MethodInfo_2619564 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v182 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v182->__9__33_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v182->__9__33_1,
      (System_Int32_array **)_9__33_1,
      v183,
      v184,
      v185,
      v186,
      v187,
      v188);
  }
  v189 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v178,
                                                                (System_Func_TSource__TKey__o *)_9__33_1,
                                                                (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v189, (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_B0D840(
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
    sub_B0D97C(gameObject);
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
  System_String_o *v35; // x20
  System_String_o *v36; // x20
  System_String_o *v37; // x20
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  unsigned __int64 v40; // x8
  System_String_o *v41; // x20
  unsigned __int64 v42; // x8
  System_String_o *v43; // x20
  unsigned __int64 v44; // x8
  System_String_o *v45; // x20
  unsigned __int64 v46; // x8
  __int64 v48; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v50; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217B09 & 1) == 0 )
  {
    sub_B0D8A4(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_B0D8A4(&StringLiteral_23753/*"{x"*/, v5);
    sub_B0D8A4(&StringLiteral_23549/*"{"*/, v6);
    sub_B0D8A4(&StringLiteral_23484/*"xx}"*/, v7);
    sub_B0D8A4(&StringLiteral_23483/*"xxx}"*/, v8);
    sub_B0D8A4(&StringLiteral_23774/*"}"*/, v9);
    sub_B0D8A4(&StringLiteral_23756/*"{xxxx"*/, v10);
    sub_B0D8A4(&StringLiteral_23754/*"{xx"*/, v11);
    sub_B0D8A4(&StringLiteral_23482/*"xxxx}"*/, v12);
    sub_B0D8A4(&StringLiteral_23485/*"x}"*/, v13);
    sub_B0D8A4(&StringLiteral_23755/*"{xxx"*/, v14);
    byte_4217B09 = 1;
  }
  v50 = 0LL;
  if ( funcVals )
  {
    v15 = *(_QWORD *)&funcVals->max_length;
    if ( v15 )
    {
      HIDWORD(v50) = 0;
      if ( (int)v15 >= 1 )
      {
        do
        {
          v16 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v17 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v16,
                  (System_String_o *)StringLiteral_23482/*"xxxx}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v19 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v18,
                  (System_String_o *)StringLiteral_23483/*"xxx}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v21 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v20,
                  (System_String_o *)StringLiteral_23484/*"xx}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v23 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v22,
                  (System_String_o *)StringLiteral_23485/*"x}"*/,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v25 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v24,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v27 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23753/*"{x"*/,
                  v26,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v29 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23754/*"{xx"*/,
                  v28,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          oldValue = System_String__Concat_43852188(
                       (System_String_o *)StringLiteral_23755/*"{xxx"*/,
                       v30,
                       (System_String_o *)StringLiteral_23774/*"}"*/,
                       0LL);
          v31 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v32 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23756/*"{xxxx"*/,
                  v31,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v33 = v32;
          LODWORD(v50) = 10000 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(text, v17, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v35 = v32;
          LODWORD(v50) = 1000 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v35 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v35, v19, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v36 = v32;
          LODWORD(v50) = 100 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v36 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v36, v21, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v37 = v32;
          LODWORD(v50) = 10 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v37, v23, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v38 = v32;
          v34 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v50) + 32, 0LL);
          if ( !v38 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v38, v25, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v39 = v32;
          v40 = 1717986919LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v40 >> 63) + (SHIDWORD(v40) >> 2);
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v39, v27, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v41 = v32;
          v42 = 1374389535LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v42 >> 63) + (SHIDWORD(v42) >> 5);
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v41, v29, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_30;
          v43 = v32;
          v44 = 274877907LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v44 >> 63) + (SHIDWORD(v44) >> 6);
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_31;
          v32 = System_String__Replace_43857140(v43, oldValue, v34, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
          {
LABEL_30:
            v48 = sub_B0D9A8(v32);
            sub_B0D948(v48, 0LL);
          }
          v45 = v32;
          v46 = 1759218605LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v46 >> 63) + (SHIDWORD(v46) >> 12);
          v34 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
LABEL_31:
            sub_B0D97C(v34);
          text = System_String__Replace_43857140(v45, v33, v34, 0LL);
          ++HIDWORD(v50);
        }
        while ( SHIDWORD(v50) < (signed int)funcVals->max_length );
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
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v30; // w23
  System_Collections_Generic_List_ClassBoardClassEntity__o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v34; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v36; // x22
  float v37; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  _BOOL8 v42; // x0
  const MethodInfo *v43; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v44; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x0
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

  if ( (byte_4217B02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, classBoardBaseEntity);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Comparison_ClassBoardClassEntity___ctor__, v10);
    sub_B0D8A4(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v20);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_3023/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v23);
    byte_4217B02 = 1;
  }
  entitys = 0LL;
  memset(&v59, 0, sizeof(v59));
  if ( !classBoardBaseEntity
    || isAll
    && !isSupport
    && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, (const MethodInfo *)classBoardBaseEntity) )
  {
    return;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_77;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &entitys,
          classBoardBaseEntity->fields.id,
          v25) )
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
    v34 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_ClassBoardClassEntity__TypeInfo,
                                                                      v32,
                                                                      v33);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v34,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    if ( !v31 )
      goto LABEL_77;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
      (System_Comparison_T__o *)v34,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v36 = this->fields.subjectClassLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3023/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/,
                                                                  0LL);
    if ( !v36 )
      goto LABEL_77;
    UILabel__set_text(v36, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_77;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v37 = 0.0;
  v59 = v58;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
    {
      v49 = 81;
      goto LABEL_54;
    }
    current = (ClassBoardClassEntity_o *)v59.fields.current;
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v40 = Object;
    if ( !Object )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        Object,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v42 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    if ( v42 )
      break;
    if ( !current )
      sub_B0D97C(v42);
    if ( !Component_srcLineSprite )
      sub_B0D97C(v42);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_srcLineSprite, current->fields.classId, 0LL);
    if ( isSupport )
    {
      if ( current->fields.condType != 92 )
        goto LABEL_48;
    }
    else if ( ClassBoardClassEntity__IsOpen(current, v43) )
    {
      goto LABEL_48;
    }
    v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v44 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_srcLineSprite,
      v44->static_fields->DISABLED_COLOR,
      0LL);
LABEL_48:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v40, 0LL);
    if ( !classIconGrid )
      sub_B0D97C(transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v40, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v40, 1, 0LL);
    v48 = this->fields.classIconGrid;
    if ( !v48 )
      sub_B0D97C(v47);
    v37 = v37 + (float)(v48->fields.cellHeight * 0.5);
  }
  v49 = 196;
LABEL_54:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
      v52 = -v37;
      GameObjectExtensions__AddLocalPositionX(gameObject, v52, 0LL);
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
      GameObjectExtensions__AddLocalPositionX(v53, v52, 0LL);
      if ( !isAll
        && System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
             (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
             (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
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
        sub_B0D97C(Master_WarQuestSelectionMaster);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x4
  System_Collections_Generic_List_ClassBoardClassEntity__o *v41; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v42; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__31_0; // x24
  Il2CppObject *v45; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  bool v53; // w0
  int v54; // w24
  ClassBoardEffectListDialogSkillListComponent_c *v55; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v56; // x8
  int32_t v57; // w23
  int v58; // w25
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD **v61; // x23
  __int64 v62; // x22
  __int16 v63; // w8
  __int64 v64; // x22
  __int64 v65; // x22
  __int64 v66; // x22
  int32_t v67; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v78; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *recycler; // x23
  __int64 v81; // x1
  __int64 v82; // x2
  struct ScrollItemRecycler_o *v83; // x8
  System_Func_T1__T2__TResult__o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  ScrollItemRecycler_HeightCalculatorVarious_o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v92; // x22
  System_Action_T1__T2__o *v93; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v95; // x21
  float v96; // s9
  Il2CppObject *current; // x25
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v99; // x20
  srcLineSprite_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v107; // x22
  __int64 v108; // x0
  const MethodInfo *v109; // x6
  float v110; // s8
  System_String_o *v111; // x0
  System_String_o *v112; // x22
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-60h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v7 = isAll;
  v9 = baseId;
  baseIda = baseId;
  if ( (byte_4217B06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_GameObject__int___ctor__, *(_QWORD *)&baseId);
    sub_B0D8A4(&System_Action_GameObject__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Array_Empty_int___, v12);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v13);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v14);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v19);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v20);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v21);
    sub_B0D8A4(&Method_System_Func_ClassBoardClassEntity__bool___ctor__, v22);
    sub_B0D8A4(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v23);
    sub_B0D8A4(&Method_System_Func_GameObject__int__float___ctor__, v24);
    sub_B0D8A4(&System_Func_GameObject__int__float__TypeInfo, v25);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v26);
    sub_B0D8A4(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v27);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v28);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v29);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v30);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v31);
    sub_B0D8A4(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__, v32);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v33);
    sub_B0D8A4(&StringLiteral_3022/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v34);
    sub_B0D8A4(&StringLiteral_3021/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v35);
    byte_4217B06 = 1;
  }
  entitys = 0LL;
  memset(&v114, 0, sizeof(v114));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_112;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entitys, v9, v37) )
  {
    v41 = entitys;
    v42 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v42 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    static_fields = v42->static_fields;
    _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)static_fields->__9;
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_ClassBoardClassEntity__bool__TypeInfo,
                                                                                      v38,
                                                                                      v39);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v45,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardClassEntity__bool___ctor__);
      v46 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v46->__9__31_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__31_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v46->__9__31_0,
        (System_Int32_array **)_9__31_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v41,
            (System_Func_TSource__bool__o *)_9__31_0,
            (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v54 = v53;
  }
  else
  {
    v54 = 1;
  }
  v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v55 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v56 = v55->static_fields;
  if ( v9 == v56->EXTRA1_CLASS_BASE_ID )
    goto LABEL_26;
  v57 = baseIda;
  if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v55);
    v56 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v57 == v56->EXTRA2_CLASS_BASE_ID )
  {
LABEL_26:
    v58 = 1;
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
    v58 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v61 = (_QWORD **)Method_System_Array_Empty_int___;
      v62 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v63 = *(_WORD *)(v62 + 306);
      if ( (v63 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v63 = *(_WORD *)(v62 + 306);
      }
      if ( (v63 & 0x400) != 0 )
      {
        v64 = *v61[6];
        if ( (*(_BYTE *)(v64 + 306) & 1) == 0 )
          sub_AA65A4(*v61[6]);
        if ( !*(_DWORD *)(v64 + 224) )
        {
          v65 = *v61[6];
          if ( (*(_BYTE *)(v65 + 306) & 1) == 0 )
            sub_AA65A4(*v61[6]);
          j_il2cpp_runtime_class_init_0(v65);
        }
      }
      v66 = *v61[6];
      if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
        sub_AA65A4(*v61[6]);
      squareIds = **(System_Int32_array ***)(v66 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v67 = baseIda;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v67, dispType, 0, squareIds, v40);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillDispDataList,
    (System_Int32_array **)OpenSkillList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  if ( !this->fields.skillDispDataList )
LABEL_112:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
                                                                    (System_String_o *)StringLiteral_3021/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/,
                                                                    0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      v95 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
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
      if ( (v58 & v54) != 0 )
      {
        v111 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v112 = System_String__Concat_43849904((System_String_o *)StringLiteral_3022/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v111, 0LL);
      }
      else
      {
        v112 = (System_String_o *)StringLiteral_3021/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)LocalizationManager__Get(v112, 0LL);
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
    v78 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_112;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_skillDetailObjForAll,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v58 & v7) != 0 )
        {
          v83 = this->fields.recycler;
          if ( !v83 )
            goto LABEL_112;
          v83->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v84 = (System_Func_T1__T2__TResult__o *)sub_B0D974(System_Func_GameObject__int__float__TypeInfo, v81, v82);
        System_Func_object__int__float____ctor(
          v84,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          (const MethodInfo_2622A2C *)Method_System_Func_GameObject__int__float___ctor__);
        v87 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_B0D974(
                                                                ScrollItemRecycler_HeightCalculatorVarious_TypeInfo,
                                                                v85,
                                                                v86);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v87, (System_Func_GameObject__int__float__o *)v84, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v92 = this->fields.recycler;
          v93 = (System_Action_T1__T2__o *)sub_B0D974(System_Action_GameObject__int__TypeInfo, v88, v89);
          System_Action_object__int____ctor(
            v93,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            (const MethodInfo_247C470 *)Method_System_Action_GameObject__int___ctor__);
          if ( v92 )
          {
            ScrollItemRecycler__Init(
              v92,
              size,
              v78,
              (System_Action_GameObject__int__o *)v93,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v87,
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
        &v113,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v96 = 0.0;
      v114 = v113;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v114,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v114.fields.current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v78, 0LL, 0LL, 0LL);
        v99 = Object;
        if ( !Object )
          sub_B0D97C(0LL);
        v100 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 Object,
                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v107 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v100;
        if ( !v100 )
          sub_B0D97C(0LL);
        *(_QWORD *)&v100->fields.miLineH = this;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v100->fields.miLineH,
          (System_Int32_array **)this,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
        if ( !current )
          sub_B0D97C(v108);
        v110 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v107,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v109);
        GameObjectExtensions__SetParent_31184580(v99, this->fields.skillListParent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v99, one, 0LL);
        GameObjectExtensions__SetLocalPosition_31178796(v99, 0.0, -v96, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v99, 1, 0LL);
        v96 = v96 + v110;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v114,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( (byte_4217B04 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_B0D8A4(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4217B04 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             obj,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !this )
    goto LABEL_10;
  v14 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this;
  this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6;
  sub_B0D840(
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v17 = skillDispDataList->fields._items->m_Items[index];
  if ( !v17 )
LABEL_10:
    sub_B0D97C(this);
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
  sub_B0D840(&this->fields, funcDispEntity);
  this->fields.skillLvEntity = skillLvEntity;
  sub_B0D840(&this->fields.skillLvEntity, skillLvEntity);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_B0D840(&this->fields.commandSpellEntity, commandSpellEntity);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_B0D840(&this->fields.classBoardSquareEntity, classBoardSquareEntity);
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
  sub_B0D840(&v14->fields, name);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_B0D840(v14, detail);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211E27 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_4211E27 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__31_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}