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

  if ( (byte_40FB955 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_40FB955 = 1;
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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v10);
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
        sub_B17100(this, a, b);
        sub_B170A0();
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
    sub_B170D4();
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
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v19; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v20; // x0
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

  if ( (byte_40FB94E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Union_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    byte_40FB94E = 1;
  }
  memset(&i, 0, sizeof(i));
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&id,
                                                    entityList,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  for ( i = v33;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
        System_Collections_Generic_List_int___Add(
          v19,
          HIDWORD(i.fields.current[1].klass),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__) )
  {
    if ( !i.fields.current )
      sub_B170D4();
    if ( !v19 )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v20 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v20 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v20->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
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
    if ( v19 )
    {
      v26 = System_Collections_Generic_List_int___ToArray(
              v19,
              (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_28;
    }
LABEL_31:
    sub_B170D4();
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
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_19C7D94 *)Method_System_Linq_Enumerable_Union_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_28:
  this->fields.arrayForSort = v26;
  sub_B16F98(
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
  __int64 v7; // x1
  ClassBoardEffectListDialogSkillDetailComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v11; // x8

  if ( (byte_40FB950 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
      v7);
    byte_40FB950 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_srcLineSprite = (ClassBoardEffectListDialogSkillDetailComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  obj,
                                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  skillDispDataList = this->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = skillDispDataList->fields._items->m_Items[index];
  if ( !v11 || !Component_srcLineSprite )
LABEL_10:
    sub_B170D4();
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           Component_srcLineSprite,
           v11->fields.detail,
           v9);
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
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Func_int__BattleActionData_SideEffectData__o *v30; // x22
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v34; // x3
  ClassBoardSquareEntity_array *v35; // x21

  if ( (byte_40FB952 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v13);
    sub_B16FFC(&Method_System_Func_int__ClassBoardSquareEntity___ctor__, v14);
    sub_B16FFC(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v15);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__, v16);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo, v17);
    byte_40FB952 = 1;
  }
  v18 = sub_B170CC(
          ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_TypeInfo,
          *(_QWORD *)&dispType,
          ignoreTurnOrCountPassive,
          openedSquareIdArray,
          method);
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0___ctor(
    (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B170D4();
  *(_DWORD *)(v18 + 24) = baseId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v18 + 16) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), Master_WarQuestSelectionMaster, v20, v21, v22, v23, v24, v25);
  if ( openedSquareIdArray )
  {
    v30 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                   System_Func_int__ClassBoardSquareEntity__TypeInfo,
                                                                   v26,
                                                                   v27,
                                                                   v28,
                                                                   v29);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v30,
      (Il2CppObject *)v18,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass32_0__GetOpenSkillList_b__0__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__ClassBoardSquareEntity___ctor__);
    v31 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v30,
                                                           (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v32 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v31,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v18 + 24), 0LL);
  }
  v35 = OpenedSquareEntityArray;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v35,
           dispType,
           ignoreTurnOrCountPassive,
           v34);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t v5; // w21
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
  __int64 v59; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v61; // x26
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  _BOOL8 IsContainsTurnOrCountBuff; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  signed int max_length; // w8
  int v72; // w25
  int v73; // w24
  unsigned int v74; // w27
  ClassBoardSquareEntity_o *v75; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x19
  int32_t skillType; // w8
  System_String_o *v78; // x0
  System_Xml_XmlQualifiedName_o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v86; // x21
  SkillLvEntity_o *v87; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v93; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x22
  Il2CppObject *current; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  System_String_o *v100; // x0
  System_Xml_XmlQualifiedName_o *v101; // x26
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v107; // x0
  FuncDispEntity_o *v108; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x23
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v114; // x21
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v117; // w26
  int32_t v118; // w24
  int32_t v119; // w25
  int32_t v120; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v121; // x20
  int v122; // w8
  System_String_o *Name; // x0
  System_String_o *v124; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t v129; // w24
  System_String_o *v130; // x25
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v135; // x20
  int v136; // w23
  __int64 v137; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *v140; // x26
  __int64 v141; // x8
  __int64 v142; // x8
  __int64 v143; // x25
  int32_t v144; // w24
  int32_t v145; // w8
  __int64 v146; // x2
  Il2CppObject *v147; // x19
  __int64 v148; // x0
  __int64 v149; // x1
  __int64 v150; // x2
  _DWORD *v151; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v153; // x8
  __int64 v154; // x10
  __int64 v155; // x11
  bool v156; // cc
  _DWORD *v157; // x8
  int v158; // w26
  const MethodInfo *v159; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v160; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v162; // x19
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  System_String_o *v167; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v168; // x8
  _DWORD *v169; // x9
  int32_t v170; // w25
  _DWORD *v171; // x9
  int32_t v172; // w26
  _DWORD *v173; // x8
  int32_t v174; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v175; // x22
  int v176; // w20
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  ClassBoardEffectListDialogSkillListComponent___c_c *v181; // x0
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_0; // x20
  Il2CppObject *v184; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v192; // x0
  __int64 v193; // x1
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
  ClassBoardEffectListDialogSkillListComponent___c_c *v197; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v198; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v199; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__33_1; // x20
  Il2CppObject *v201; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v202; // x0
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v209; // x0
  ClassBoardCommandSpellMaster_o *v212; // [xsp+10h] [xbp-180h]
  int v213; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v214; // [xsp+20h] [xbp-170h]
  int32_t v215; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v216; // [xsp+30h] [xbp-160h]
  int v217; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v218; // [xsp+40h] [xbp-150h]
  int v219; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v220; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v221; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v222; // [xsp+60h] [xbp-130h]
  System_String_o *v223; // [xsp+60h] [xbp-130h]
  _WORD v224[26]; // [xsp+68h] [xbp-128h] BYREF
  int v225; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v226; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v227; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v228; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v229; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v230; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v231; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v233; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v5 = dispType;
  if ( (byte_40FB953 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_FuncDispMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v18);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v19);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v23);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v24);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v25);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v26);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v29);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v30);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v31);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v32);
    sub_B16FFC(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v33);
    sub_B16FFC(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v34);
    sub_B16FFC(&int___TypeInfo, v35);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v36);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v38);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v41);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v44);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v45);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v46);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v47);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v48);
    sub_B16FFC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v49);
    sub_B16FFC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v50);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v51);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v52);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v53);
    sub_B16FFC(&Method_System_String_Join_int___, v54);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__, v55);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__, v56);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v57);
    sub_B16FFC(&StringLiteral_698, v58);
    sub_B16FFC(&StringLiteral_1, v59);
    byte_40FB953 = 1;
  }
  v233 = 0LL;
  entity = 0LL;
  v231 = 0LL;
  entitys = 0LL;
  v229 = 0LL;
  v227 = 0LL;
  memset(&v230, 0, sizeof(v230));
  memset(&v228, 0, sizeof(v228));
  memset(&v226, 0, sizeof(v226));
  v225 = 0;
  v221 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                                                                   *(_QWORD *)&dispType,
                                                                                                   ignoreTurnOrCountPassive,
                                                                                                   method,
                                                                                                   v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v221,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v221;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v218 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v61 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v222 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v220 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                                         v62,
                                                                                         v63,
                                                                                         v64,
                                                                                         v65);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v220,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v72 = 0;
  v216 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v73 = 0;
    v74 = 0;
    v219 = 0;
    v215 = v5;
    v214 = openedSquareArray;
    v212 = v61;
    while ( 1 )
    {
      if ( v74 >= max_length )
      {
        sub_B17100(IsContainsTurnOrCountBuff, v67, v68);
        sub_B170A0();
      }
      v75 = openedSquareArray->m_Items[v74];
      v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v67, v68, v69, v70);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v76,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v76;
      if ( !v75 )
        break;
      skillType = v75->fields.skillType;
      if ( skillType == 1 )
      {
        if ( v5 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsContainsTurnOrCountBuff = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        Master_WarQuestSelectionMaster,
                                        &entity,
                                        v75->fields.targetId,
                                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( IsContainsTurnOrCountBuff )
          {
            if ( !v218 )
              break;
            IsContainsTurnOrCountBuff = SkillLvMaster__TryGetEntity(
                                          v218,
                                          &v233,
                                          v75->fields.targetId,
                                          v75->fields.upSkillLv,
                                          0LL);
            if ( IsContainsTurnOrCountBuff )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_22;
              if ( !v233 )
                break;
              IsContainsTurnOrCountBuff = SkillLvEntity__IsContainsTurnOrCountBuff(v233, 0LL);
              if ( !IsContainsTurnOrCountBuff )
              {
LABEL_22:
                if ( !v233 || !v222 )
                  break;
                if ( FuncDispMaster__IsContainFuncIds(v222, &v231, v233->fields.funcId, 0LL) )
                {
                  if ( !v233 )
                    break;
                  v78 = System_String__Join_int_(
                          (System_String_o *)StringLiteral_698,
                          (System_Collections_Generic_IEnumerable_T__o *)v233->fields.funcId,
                          (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
                  if ( !v220 )
                    break;
                  v79 = (System_Xml_XmlQualifiedName_o *)v78;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v220,
                          (System_Xml_XmlQualifiedName_o *)v78,
                          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v80, v81, v82, v83);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v84,
                      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v220,
                      v79,
                      (System_Xml_Schema_XmlSchemaObject_o *)v84,
                      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v220,
                           (System_Type_o *)v79,
                           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v86 = v231;
                  v87 = v233;
                  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v93 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B170CC(
                                                                                               ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                               v89,
                                                                                               v90,
                                                                                               v91,
                                                                                               v92);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v93, v86, v87, 0LL, v75, 0LL);
                  if ( !v88 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v88,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v93,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v216;
                  v5 = v215;
                  openedSquareArray = v214;
                }
                else
                {
                  if ( !entity )
                    break;
                  v217 = v72;
                  v213 = v73;
                  Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v124 = Name;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v75->fields.priority;
                  id = v75->fields.id;
                  iconId = v75->fields.iconId;
                  v129 = v75->fields.skillType;
                  v130 = EffectExplanation;
                  v135 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                           ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                           v131,
                                                                                           v132,
                                                                                           v133,
                                                                                           v134);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v135,
                    v124,
                    v130,
                    id,
                    priority,
                    iconId,
                    v129,
                    0LL);
                  if ( !v221 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v221,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v135,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v216;
                  v5 = v215;
                  openedSquareArray = v214;
                  v73 = v213;
                  v72 = v217;
                }
              }
            }
          }
        }
      }
      else if ( v5 != 1 && skillType == 2 )
      {
        if ( !v61 )
          break;
        IsContainsTurnOrCountBuff = ClassBoardCommandSpellMaster__TryGetEntityList(
                                      v61,
                                      &entitys,
                                      v75->fields.targetId,
                                      v75->fields.upSkillLv,
                                      0LL);
        if ( IsContainsTurnOrCountBuff )
        {
          v94 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_string__TypeInfo, v67, v68, v69, v70);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v94,
            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
          if ( !entitys )
            break;
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v224,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
          v230 = *(System_Collections_Generic_List_Enumerator_T__o *)v224;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v230,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
          {
            current = v230.fields.current;
            if ( !v230.fields.current )
              sub_B170D4();
            if ( !v222 )
              sub_B170D4();
            if ( FuncDispMaster__IsContainFuncIds(v222, &v229, (System_Int32_array *)v230.fields.current[3].klass, 0LL) )
            {
              v100 = System_String__Join_int_(
                       (System_String_o *)StringLiteral_698,
                       (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                       (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
              if ( !v94 )
                sub_B170D4();
              v101 = (System_Xml_XmlQualifiedName_o *)v100;
              if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v94,
                      (WarBoardManager_TaskList_o *)v100,
                      (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
              {
                if ( !v220 )
                  sub_B170D4();
                if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        v220,
                        v101,
                        (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v102, v103, v104, v105);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                    v106,
                    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                    v220,
                    v101,
                    (System_Xml_Schema_XmlSchemaObject_o *)v106,
                    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v107 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v220,
                         (System_Type_o *)v101,
                         (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v108 = v229;
                v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107;
                v114 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B170CC(
                                                                                              ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                              v110,
                                                                                              v111,
                                                                                              v112,
                                                                                              v113);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                  v114,
                  v108,
                  0LL,
                  (ClassBoardCommandSpellEntity_o *)current,
                  v75,
                  0LL);
                if ( !v109 )
                  sub_B170D4();
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v109,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v94,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
              }
            }
            else
            {
              klass = (System_String_o *)current[2].klass;
              monitor = (System_String_o *)current[2].monitor;
              v117 = v75->fields.priority;
              v119 = v75->fields.id;
              v118 = v75->fields.iconId;
              v120 = v75->fields.skillType;
              v121 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                       ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                       v96,
                                                                                       v97,
                                                                                       v98,
                                                                                       v99);
              ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                v121,
                klass,
                monitor,
                v119,
                v117,
                v118,
                v120,
                0LL);
              if ( !v221 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v221,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
            }
          }
          *(_DWORD *)&v224[2 * v219 + 20] = 569;
          v73 = ++v225;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v230,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
          Master_WarQuestSelectionMaster = v216;
          v5 = v215;
          openedSquareArray = v214;
          v61 = v212;
          v72 = v73;
          if ( v73 )
          {
            v122 = v73 - 1;
            v219 = v73;
            if ( *(_DWORD *)&v224[2 * v73 + 18] == 569 )
            {
              v72 = --v73;
              v225 = v122;
              v219 = v122;
            }
          }
          else
          {
            v219 = 0;
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v74 >= max_length )
        goto LABEL_65;
    }
LABEL_157:
    sub_B170D4();
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v220 )
    goto LABEL_157;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v224,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v220,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v228 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v224;
  v136 = v72;
LABEL_70:
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v228,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__) )
  {
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v228.fields.current.fields.value;
    if ( !v228.fields.current.fields.value )
      sub_B170D4();
    if ( SLODWORD(v228.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v228.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B170D4();
      v140 = (System_String_o *)StringLiteral_1;
      if ( data[3] )
      {
        v141 = data[3];
        if ( !v141 )
          sub_B170D4();
        if ( !v216 )
          sub_B170D4();
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v216,
               &v227,
               *(_DWORD *)(v141 + 16),
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v227 )
            sub_B170D4();
          v140 = SkillEntity__getName((SkillEntity_o *)v227, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v228.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v142 = data[4];
        if ( !v142 )
          sub_B170D4();
        v140 = *(System_String_o **)(v142 + 32);
      }
      v143 = sub_B17014(int___TypeInfo, 0LL, v137);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v224,
        value,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v144 = 0;
      v223 = v140;
      v226 = *(System_Collections_Generic_List_Enumerator_T__o *)v224;
      while ( 2 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v226,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
        {
          *(_DWORD *)&v224[2 * v136 + 20] = 947;
          v158 = v225 + 1;
          v225 = v158;
          v136 = v158;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v226,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
          if ( v158 && *(_DWORD *)&v224[2 * v158 + 18] == 947 )
          {
            v136 = v158 - 1;
            v225 = v158 - 1;
          }
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v160 = value->fields._items->m_Items[0];
          if ( !v160 )
            sub_B170D4();
          buff = v160->fields.buff;
          if ( !buff )
            sub_B170D4();
          v162 = *(System_String_o **)&buff->fields.isUse;
          if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          }
          v167 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                   v162,
                   (System_Int32_array *)v143,
                   v159);
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v168 = value->fields._items->m_Items[0];
          if ( !v168 )
            sub_B170D4();
          v169 = v168[1].monitor;
          if ( !v169 )
            sub_B170D4();
          v170 = v169[5];
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v171 = v168[1].monitor;
          if ( !v171 )
            sub_B170D4();
          v172 = v171[6];
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v173 = v168[1].monitor;
          if ( !v173 )
            sub_B170D4();
          v174 = v173[14];
          v175 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                   ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                   v163,
                                                                                   v164,
                                                                                   v165,
                                                                                   v166);
          ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
            v175,
            v223,
            v167,
            v170,
            v144,
            v172,
            v174,
            0LL);
          if ( !v221 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v221,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v175,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
          goto LABEL_70;
        }
        v147 = v226.fields.current;
        v148 = sub_B17014(int___TypeInfo, 0LL, v146);
        if ( !v147 )
          sub_B170D4();
        v151 = v147[1].monitor;
        if ( v151 )
        {
          if ( !v218 )
            sub_B170D4();
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                                 v218,
                                                                 v151[4],
                                                                 v151[5],
                                                                 0LL);
LABEL_95:
          v153 = (__int64)DispValFromSkill;
        }
        else
        {
          v153 = v148;
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v147[2].klass;
          if ( DispValFromSkill )
          {
            DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                   DispValFromSkill,
                                                                   0LL);
            goto LABEL_95;
          }
        }
        if ( !v143 )
          sub_B170D4();
        v154 = *(_QWORD *)(v143 + 24);
        if ( v154 )
        {
          if ( (int)v154 >= 1 )
          {
            v155 = 8LL;
            do
            {
              if ( v155 - 8 >= (unsigned __int64)(unsigned int)v154 )
              {
                sub_B17100(DispValFromSkill, v149, v150);
                sub_B170A0();
              }
              if ( !v153 )
                sub_B170D4();
              if ( v155 - 8 >= (unsigned __int64)*(unsigned int *)(v153 + 24) )
              {
                sub_B17100(DispValFromSkill, v149, v150);
                sub_B170A0();
              }
              v156 = v155 - 7 < (int)v154;
              *(_DWORD *)(v143 + 4 * v155) += *(_DWORD *)(v153 + 4 * v155);
              ++v155;
            }
            while ( v156 );
          }
        }
        else
        {
          v143 = v153;
        }
        v157 = v147[2].monitor;
        if ( !v157 )
          sub_B170D4();
        v145 = v157[20];
        if ( v145 > v144 )
          v144 = v145;
        continue;
      }
    }
  }
  *(_DWORD *)&v224[2 * v136 + 20] = 1073;
  v176 = ++v225;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v228,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v176 && *(_DWORD *)&v224[2 * v176 + 18] == 1073 )
    v225 = v176 - 1;
  v181 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v181 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  static_fields = v181->static_fields;
  _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v181->vtable._0_Equals.methodPtr) & 4) != 0 && !v181->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v181);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v184 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v177,
                                                                                 v178,
                                                                                 v179,
                                                                                 v180);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_0,
      v184,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v185 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v185->__9__33_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v185->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v186,
      v187,
      v188,
      v189,
      v190,
      v191);
  }
  v192 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v221,
           (System_Func_TSource__TKey__o *)_9__33_0,
           (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v197 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v198 = v192;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v197 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  v199 = v197->static_fields;
  _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v199->__9__33_1;
  if ( !_9__33_1 )
  {
    if ( (BYTE3(v197->vtable._0_Equals.methodPtr) & 4) != 0 && !v197->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v197);
      v199 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    }
    v201 = (Il2CppObject *)v199->__9;
    _9__33_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v193,
                                                                                 v194,
                                                                                 v195,
                                                                                 v196);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__33_1,
      v201,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__33_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v202 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v202->__9__33_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__33_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v202->__9__33_1,
      (System_Int32_array **)_9__33_1,
      v203,
      v204,
      v205,
      v206,
      v207,
      v208);
  }
  v209 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v198,
                                                                (System_Func_TSource__TKey__o *)_9__33_1,
                                                                (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v209, (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
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
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *allClosedLabel; // x0
  UnityEngine_GameObject_o *v13; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dialog,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !v10
    || (gameObject = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (allClosedLabel = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (v13 = UnityEngine_Component__get_gameObject(allClosedLabel, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v13, 0, 0LL);
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
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x20
  System_String_o *v44; // x0
  System_String_o *v45; // x20
  unsigned __int64 v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x20
  unsigned __int64 v49; // x8
  System_String_o *v50; // x0
  System_String_o *v51; // x20
  unsigned __int64 v52; // x8
  System_String_o *v53; // x0
  System_String_o *v54; // x20
  unsigned __int64 v55; // x8
  System_String_o *v56; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v59; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB954 & 1) == 0 )
  {
    sub_B16FFC(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    sub_B16FFC(&StringLiteral_23581, v5);
    sub_B16FFC(&StringLiteral_23377, v6);
    sub_B16FFC(&StringLiteral_23312, v7);
    sub_B16FFC(&StringLiteral_23311, v8);
    sub_B16FFC(&StringLiteral_23602, v9);
    sub_B16FFC(&StringLiteral_23584, v10);
    sub_B16FFC(&StringLiteral_23582, v11);
    sub_B16FFC(&StringLiteral_23310, v12);
    sub_B16FFC(&StringLiteral_23313, v13);
    sub_B16FFC(&StringLiteral_23583, v14);
    byte_40FB954 = 1;
  }
  v59 = 0LL;
  if ( funcVals )
  {
    v15 = *(_QWORD *)&funcVals->max_length;
    if ( v15 )
    {
      HIDWORD(v59) = 0;
      if ( (int)v15 >= 1 )
      {
        do
        {
          v16 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v17 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377,
                  v16,
                  (System_String_o *)StringLiteral_23310,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v19 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377,
                  v18,
                  (System_String_o *)StringLiteral_23311,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v21 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377,
                  v20,
                  (System_String_o *)StringLiteral_23312,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v23 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377,
                  v22,
                  (System_String_o *)StringLiteral_23313,
                  0LL);
          v24 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v25 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377,
                  v24,
                  (System_String_o *)StringLiteral_23602,
                  0LL);
          v26 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v27 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23581,
                  v26,
                  (System_String_o *)StringLiteral_23602,
                  0LL);
          v28 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v29 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23582,
                  v28,
                  (System_String_o *)StringLiteral_23602,
                  0LL);
          v30 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          oldValue = System_String__Concat_43746016(
                       (System_String_o *)StringLiteral_23583,
                       v30,
                       (System_String_o *)StringLiteral_23602,
                       0LL);
          v31 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
          v32 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23584,
                  v31,
                  (System_String_o *)StringLiteral_23602,
                  0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v35 = v32;
          LODWORD(v59) = 10000 * funcVals->m_Items[SHIDWORD(v59) + 1];
          v36 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !text )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(text, v17, v36, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v37 = v32;
          LODWORD(v59) = 1000 * funcVals->m_Items[SHIDWORD(v59) + 1];
          v38 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v37 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v37, v19, v38, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v39 = v32;
          LODWORD(v59) = 100 * funcVals->m_Items[SHIDWORD(v59) + 1];
          v40 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v39 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v39, v21, v40, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v41 = v32;
          LODWORD(v59) = 10 * funcVals->m_Items[SHIDWORD(v59) + 1];
          v42 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v41 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v41, v23, v42, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v43 = v32;
          v44 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v59) + 32, 0LL);
          if ( !v43 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v43, v25, v44, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v45 = v32;
          v46 = 1717986919LL * funcVals->m_Items[SHIDWORD(v59) + 1];
          LODWORD(v59) = (v46 >> 63) + (SHIDWORD(v46) >> 2);
          v47 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v45 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v45, v27, v47, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v48 = v32;
          v49 = 1374389535LL * funcVals->m_Items[SHIDWORD(v59) + 1];
          LODWORD(v59) = (v49 >> 63) + (SHIDWORD(v49) >> 5);
          v50 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v48 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v48, v29, v50, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
            goto LABEL_30;
          v51 = v32;
          v52 = 274877907LL * funcVals->m_Items[SHIDWORD(v59) + 1];
          LODWORD(v59) = (v52 >> 63) + (SHIDWORD(v52) >> 6);
          v53 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v51 )
            goto LABEL_31;
          v32 = System_String__Replace_43750968(v51, oldValue, v53, 0LL);
          if ( HIDWORD(v59) >= funcVals->max_length )
          {
LABEL_30:
            sub_B17100(v32, v33, v34);
            sub_B170A0();
          }
          v54 = v32;
          v55 = 1759218605LL * funcVals->m_Items[SHIDWORD(v59) + 1];
          LODWORD(v59) = (v55 >> 63) + (SHIDWORD(v55) >> 12);
          v56 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !v54 )
LABEL_31:
            sub_B170D4();
          text = System_String__Replace_43750968(v54, v35, v56, 0LL);
          ++HIDWORD(v59);
        }
        while ( SHIDWORD(v59) < (signed int)funcVals->max_length );
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
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v27; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v29; // w23
  System_Collections_Generic_List_ClassBoardClassEntity__o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v35; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v37; // x22
  System_String_o *v38; // x0
  float v39; // s8
  ClassBoardClassEntity_o *current; // x24
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v42; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  ClassBoardEffectListDialogSkillListComponent_c *v44; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x1
  struct UIGrid_o *v47; // x8
  int v48; // w21
  UnityEngine_Object_o *v49; // x21
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v52; // s8
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v57; // x8
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  struct UIGrid_o *v61; // x0
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB94D & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, classBoardBaseEntity);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v9);
    sub_B16FFC(&Method_System_Comparison_ClassBoardClassEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_3002, v23);
    byte_40FB94D = 1;
  }
  entitys = 0LL;
  memset(&v63, 0, sizeof(v63));
  if ( !classBoardBaseEntity || isAll && !isSupport && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_77;
  if ( !ClassBoardClassMaster__TryGetEntityList(
          Master_WarQuestSelectionMaster,
          &entitys,
          classBoardBaseEntity->fields.id,
          0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v27 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v27 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v27->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_20;
  v29 = classBoardBaseEntity->fields.id;
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v29 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_20:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v25);
    v30 = entitys;
    v35 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_ClassBoardClassEntity__TypeInfo,
                                                                      v31,
                                                                      v32,
                                                                      v33,
                                                                      v34);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v35,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ClassBoardClassEntity___ctor__);
    if ( !v30 )
      goto LABEL_77;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v30,
      (System_Comparison_T__o *)v35,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v37 = this->fields.subjectClassLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3002, 0LL);
    if ( !v37 )
      goto LABEL_77;
    UILabel__set_text(v37, v38, 0LL);
  }
  if ( !entitys )
    goto LABEL_77;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v62,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v39 = 0.0;
  v63 = v62;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v63,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
    {
      v48 = 81;
      goto LABEL_54;
    }
    current = (ClassBoardClassEntity_o *)v63.fields.current;
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v42 = Object;
    if ( !Object )
      sub_B170D4();
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        Object,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
      break;
    if ( !current )
      sub_B170D4();
    if ( !Component_srcLineSprite )
      sub_B170D4();
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
    transform = UnityEngine_GameObject__get_transform(v42, 0LL);
    if ( !classIconGrid )
      sub_B170D4();
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v42, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v42, 1, 0LL);
    v47 = this->fields.classIconGrid;
    if ( !v47 )
      sub_B170D4();
    v39 = v39 + (float)(v47->fields.cellHeight * 0.5);
  }
  v48 = 196;
LABEL_54:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v63,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  if ( v48 != 196 )
  {
    v49 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      v50 = (UnityEngine_Component_o *)this->fields.subjectClassLabel;
      if ( !v50 )
        goto LABEL_77;
      gameObject = UnityEngine_Component__get_gameObject(v50, 0LL);
      v52 = -v39;
      GameObjectExtensions__AddLocalPositionX(gameObject, v52, 0LL);
      v53 = (UnityEngine_Component_o *)this->fields.classIconGrid;
      if ( !v53 )
        goto LABEL_77;
      v54 = UnityEngine_Component__get_gameObject(v53, 0LL);
      GameObjectExtensions__AddLocalPositionX(v54, v52, 0LL);
      if ( !isAll
        && System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
             (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
             (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
      {
        v55 = (UnityEngine_Component_o *)this->fields.subjectClassLabel;
        if ( v55 )
        {
          v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
          v57 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          v58 = v56;
          if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
            v57 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
          }
          GameObjectExtensions__AddLocalPositionX(v58, v57->static_fields->classIconOneDispFixPosY, 0LL);
          v59 = (UnityEngine_Component_o *)this->fields.classIconGrid;
          if ( v59 )
          {
            v60 = UnityEngine_Component__get_gameObject(v59, 0LL);
            GameObjectExtensions__AddLocalPositionX(
              v60,
              ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
              0LL);
            goto LABEL_69;
          }
        }
LABEL_77:
        sub_B170D4();
      }
    }
LABEL_69:
    v61 = this->fields.classIconGrid;
    if ( !v61 )
      goto LABEL_77;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v61->klass->vtable._8_Reposition.method)(
      v61,
      v61->klass->vtable._9_ResetPosition.methodPtr);
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v38; // x2
  __int64 v39; // x3
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
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array *squareIds; // x22
  _QWORD **v63; // x23
  __int64 v64; // x22
  __int16 v65; // w8
  __int64 v66; // x22
  __int64 v67; // x22
  __int64 v68; // x22
  int32_t v69; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **p_skillDispDataList; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v80; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  UnityEngine_Object_o *recycler; // x23
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  struct ScrollItemRecycler_o *v87; // x8
  System_Func_T1__T2__TResult__o *v88; // x22
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  ScrollItemRecycler_HeightCalculatorVarious_o *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v100; // x22
  System_Action_T1__T2__o *v101; // x24
  ScrollItemRecycler_o *v102; // x0
  UILabel_o *allClosedLabel; // x21
  System_String_o *v104; // x0
  UnityEngine_Object_o *v105; // x21
  UnityEngine_GameObject_o *v106; // x0
  UnityEngine_GameObject_o *v107; // x0
  float v108; // s9
  Il2CppObject *current; // x25
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v111; // x20
  srcLineSprite_o *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v119; // x22
  const MethodInfo *v120; // x6
  float v121; // s8
  System_String_o *v122; // x0
  System_String_o *v123; // x22
  System_String_o *v124; // x0
  UnityEngine_Component_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UIScrollView_o *scrollView; // x0
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v129; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-60h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  v7 = isAll;
  v9 = baseId;
  baseIda = baseId;
  if ( (byte_40FB951 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject__int___ctor__, *(_QWORD *)&baseId);
    sub_B16FFC(&System_Action_GameObject__int__TypeInfo, v11);
    sub_B16FFC(&Method_System_Array_Empty_int___, v12);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v13);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v14);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_B16FFC(&DataManager_TypeInfo, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v20);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v21);
    sub_B16FFC(&Method_System_Func_ClassBoardClassEntity__bool___ctor__, v22);
    sub_B16FFC(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v23);
    sub_B16FFC(&Method_System_Func_GameObject__int__float___ctor__, v24);
    sub_B16FFC(&System_Func_GameObject__int__float__TypeInfo, v25);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v26);
    sub_B16FFC(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v27);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v28);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v29);
    sub_B16FFC(&LocalizationManager_TypeInfo, v30);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v31);
    sub_B16FFC(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__, v32);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v33);
    sub_B16FFC(&StringLiteral_3001, v34);
    sub_B16FFC(&StringLiteral_3000, v35);
    byte_40FB951 = 1;
  }
  entitys = 0LL;
  memset(&v129, 0, sizeof(v129));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_112;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entitys, v9, 0LL) )
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
      _9__31_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_ClassBoardClassEntity__bool__TypeInfo,
                                                                                      v37,
                                                                                      v38,
                                                                                      v39,
                                                                                      v40);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__31_0,
        v45,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__31_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardClassEntity__bool___ctor__);
      v46 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      v46->__9__31_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__31_0;
      sub_B16F98(
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
            (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
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
      v60 = this->fields.classInfoObject;
      if ( !v60 )
        goto LABEL_112;
      gameObject = UnityEngine_GameObject__get_gameObject(v60, 0LL);
      if ( !gameObject )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v58 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v63 = (_QWORD **)Method_System_Array_Empty_int___;
      v64 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v65 = *(_WORD *)(v64 + 306);
      if ( (v65 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v65 = *(_WORD *)(v64 + 306);
      }
      if ( (v65 & 0x400) != 0 )
      {
        v66 = *v63[6];
        if ( (*(_BYTE *)(v66 + 306) & 1) == 0 )
          sub_AAFCFC(*v63[6]);
        if ( !*(_DWORD *)(v66 + 224) )
        {
          v67 = *v63[6];
          if ( (*(_BYTE *)(v67 + 306) & 1) == 0 )
            sub_AAFCFC(*v63[6]);
          j_il2cpp_runtime_class_init_0(v67);
        }
      }
      v68 = *v63[6];
      if ( (*(_BYTE *)(v68 + 306) & 1) == 0 )
        sub_AAFCFC(*v63[6]);
      squareIds = **(System_Int32_array ***)(v68 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v69 = baseIda;
  if ( (BYTE3(ClassBoardEffectListDialogSkillListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  }
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v69, dispType, 0, squareIds, v40);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.skillDispDataList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillDispDataList,
    (System_Int32_array **)OpenSkillList,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( !this->fields.skillDispDataList )
LABEL_112:
    sub_B170D4();
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
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_3000, 0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, v104, 0LL);
      v105 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
      {
        v106 = this->fields.classInfoObject;
        if ( !v106 )
          goto LABEL_112;
        v107 = UnityEngine_GameObject__get_gameObject(v106, 0LL);
        if ( !v107 )
          goto LABEL_112;
        UnityEngine_GameObject__SetActive(v107, 0, 0LL);
      }
    }
    else
    {
      if ( (v58 & v54) != 0 )
      {
        v122 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v123 = System_String__Concat_43743732((System_String_o *)StringLiteral_3001, v122, 0LL);
      }
      else
      {
        v123 = (System_String_o *)StringLiteral_3000;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v124 = LocalizationManager__Get(v123, 0LL);
      if ( !allClosedLabel )
        goto LABEL_112;
      UILabel__set_text(allClosedLabel, v124, 0LL);
    }
    v125 = (UnityEngine_Component_o *)this->fields.allClosedLabel;
    if ( !v125 )
      goto LABEL_112;
    v126 = UnityEngine_Component__get_gameObject(v125, 0LL);
    if ( !v126 )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive(v126, 1, 0LL);
    if ( !v7 )
    {
      scrollView = this->fields.scrollView;
      if ( !scrollView )
        goto LABEL_112;
      UIScrollView__UpdatePosition(scrollView, 0LL);
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
    if ( !UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0LL, 0LL) )
LABEL_61:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v80 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_112;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_skillDetailObjForAll,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
      if ( UnityEngine_Object__op_Inequality(recycler, 0LL, 0LL) )
      {
        if ( (v58 & v7) != 0 )
        {
          v87 = this->fields.recycler;
          if ( !v87 )
            goto LABEL_112;
          v87->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v88 = (System_Func_T1__T2__TResult__o *)sub_B170CC(
                                                  System_Func_GameObject__int__float__TypeInfo,
                                                  v83,
                                                  v84,
                                                  v85,
                                                  v86);
        System_Func_object__int__float____ctor(
          v88,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          (const MethodInfo_2B74BB4 *)Method_System_Func_GameObject__int__float___ctor__);
        v93 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_B170CC(
                                                                ScrollItemRecycler_HeightCalculatorVarious_TypeInfo,
                                                                v89,
                                                                v90,
                                                                v91,
                                                                v92);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v93, (System_Func_GameObject__int__float__o *)v88, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v100 = this->fields.recycler;
          v101 = (System_Action_T1__T2__o *)sub_B170CC(System_Action_GameObject__int__TypeInfo, v94, v95, v96, v97);
          System_Action_object__int____ctor(
            v101,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            (const MethodInfo_24C46E0 *)Method_System_Action_GameObject__int___ctor__);
          if ( v100 )
          {
            ScrollItemRecycler__Init(
              v100,
              size,
              v80,
              (System_Action_GameObject__int__o *)v101,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v93,
              0LL);
            v102 = this->fields.recycler;
            if ( v102 )
            {
              ScrollItemRecycler__UpdateDisplay(v102, 0LL);
              return;
            }
          }
        }
        goto LABEL_112;
      }
      if ( !*p_skillDispDataList )
        goto LABEL_112;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v128,
        *p_skillDispDataList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v108 = 0.0;
      v129 = v128;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v129,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v129.fields.current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v80, 0LL, 0LL, 0LL);
        v111 = Object;
        if ( !Object )
          sub_B170D4();
        v112 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 Object,
                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v119 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v112;
        if ( !v112 )
          sub_B170D4();
        *(_QWORD *)&v112->fields.miLineH = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v112->fields.miLineH,
          (System_Int32_array **)this,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
        if ( !current )
          sub_B170D4();
        v121 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                 v119,
                 (System_String_o *)current[1].klass,
                 (System_String_o *)current[1].monitor,
                 (int32_t)current[2].monitor,
                 HIDWORD(current[2].monitor),
                 0,
                 v120);
        GameObjectExtensions__SetParent_27425860(v111, this->fields.skillListParent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v111, one, 0LL);
        GameObjectExtensions__SetLocalPosition_27420076(v111, 0.0, -v108, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v111, 1, 0LL);
        v108 = v108 + v121;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v129,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v15; // x20
  const MethodInfo *v16; // x6
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x21
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v18; // x8

  if ( (byte_40FB94F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
      v7);
    byte_40FB94F = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              obj,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_10;
  v15 = (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_srcLineSprite;
  *(_QWORD *)&Component_srcLineSprite->fields.miLineH = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.miLineH,
    (System_Int32_array **)this,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  skillDispDataList = this->fields.skillDispDataList;
  if ( !skillDispDataList )
    goto LABEL_10;
  if ( skillDispDataList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v18 = skillDispDataList->fields._items->m_Items[index];
  if ( !v18 )
LABEL_10:
    sub_B170D4();
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v15,
    v18->fields.name,
    v18->fields.detail,
    v18->fields.iconId,
    v18->fields.skillType,
    0,
    v16);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)funcDispEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillLvEntity,
    (System_Int32_array **)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandSpellEntity,
    (System_Int32_array **)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquareEntity,
    (System_Int32_array **)classBoardSquareEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_B16F98((BattleServantConfConponent_o *)&v14->fields, (System_Int32_array **)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_B16F98((BattleServantConfConponent_o *)v14, (System_Int32_array **)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70E2 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_40F70E2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__33_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__31_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B170D4();
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
    sub_B170D4();
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}