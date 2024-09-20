void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E531 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E531 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__Close(
        ClassBoardBaseDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  __int64 v6; // x1
  ClassBoardSquare_o *v7; // x0

  if ( (byte_4A5E52E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E52E = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


void __fastcall ClassBoardBaseDialog__CloseItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5E530 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E530 = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0LL);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x24
  signed int max_length; // w8
  signed int v12; // w27
  ClassBoardSquareEntity_o *v13; // x28
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *v17; // x0
  FuncDispEntity_o *v18; // x19
  SkillLvEntity_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_object__o *v28; // x29
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x22
  __int64 v35; // x1
  System_Collections_Generic_List_object__o *v36; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v38; // x19
  System_Collections_Generic_List_object__o *v39; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v40; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_String_o *v72; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v74; // w19
  int32_t v75; // w23
  int32_t v76; // w24
  int32_t v77; // w25
  System_String_o *v78; // x26
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  System_Collections_Generic_List_object__o *v83; // x0
  _BOOL8 v84; // x0
  __int64 v85; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  Il2CppObject *v90; // x0
  __int64 v91; // x1
  _DWORD *v92; // x8
  __int64 v93; // x1
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppClass *v98; // x8
  __int64 v99; // x25
  int32_t v100; // w24
  Il2CppObject *v101; // x19
  __int64 v102; // x0
  __int64 v103; // x1
  _DWORD *v104; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v106; // x8
  __int64 v107; // x10
  unsigned __int64 v108; // x9
  __int64 v109; // x10
  unsigned __int64 v110; // x12
  int v111; // w13
  _DWORD *v112; // x8
  int32_t v113; // w8
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  const MethodInfo *v116; // x2
  Il2CppClass *v117; // x8
  System_String_o *v118; // x25
  Il2CppObject *v119; // x0
  __int64 v120; // x1
  _DWORD *v121; // x8
  int32_t v122; // w26
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  _DWORD *v125; // x8
  int32_t v126; // w20
  Il2CppObject *v127; // x0
  __int64 v128; // x1
  _DWORD *v129; // x8
  int32_t v130; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v131; // x22
  __int64 v132; // x0
  __int64 v133; // x1
  int32_t v134; // w2
  int32_t v135; // w3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  ClassBoardBaseDialog___c_c *v140; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v142; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v146; // x0
  ClassBoardBaseDialog___c_c *v147; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v148; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v150; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v151; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x0
  int32_t v157; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v158; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v160; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v161; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v162; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v163; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v164; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v166; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v167; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v168; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v169; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v170; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v172; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4A5E52B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_1B885B0(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_1B885B0(&ClassBoardBaseDialog___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E52B = 1;
  }
  v172 = 0LL;
  entity = 0LL;
  v170 = 0LL;
  entitys = 0LL;
  memset(&v169, 0, sizeof(v169));
  v168 = 0LL;
  v166 = 0LL;
  memset(&v167, 0, sizeof(v167));
  memset(&v165, 0, sizeof(v165));
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_157;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v6;
  v162 = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v158 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v161 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v161,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v163 = (FuncDispMaster_o *)v10;
    v157 = dispType;
    v160 = openedSquareArray;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(IsPassive, v8);
      v13 = openedSquareArray->m_Items[v12];
      v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v14;
      if ( !v13 )
        goto LABEL_157;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v13, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v13, 0LL);
        if ( dispType != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v158;
          if ( !v158 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v158,
                                        &entitys,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v28 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v28,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_157;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v164,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v169.fields._list = *(_OWORD *)&v164.fields._dictionary;
            v169.fields._current = v164.fields._current.fields.key;
            while ( 1 )
            {
              v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v169,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v10 = (Il2CppObject *)v163;
              if ( !v29 )
                break;
              current = v169.fields._current;
              if ( !v169.fields._current )
                sub_1B8880C(v29, v30);
              if ( !v163 )
                sub_1B8880C(v29, v30);
              if ( FuncDispMaster__IsContainFuncIds(
                     v163,
                     &v168,
                     (System_Int32_array *)v169.fields._current[3].klass,
                     0LL) )
              {
                v32 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_868/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
                if ( !v28 )
                  sub_1B8880C(v32, v33);
                v34 = v32;
                if ( !System_Collections_Generic_List_object___Contains(
                        v28,
                        v32,
                        (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v161 )
                    sub_1B8880C(0LL, v35);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v161,
                          v34,
                          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v36 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v36,
                      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v161,
                      v34,
                      (Il2CppObject *)v36,
                      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v161,
                           v34,
                           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v38 = v168;
                  v39 = (System_Collections_Generic_List_object__o *)Item;
                  v40 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v40,
                    v38,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v13,
                    0LL);
                  if ( !v39 )
                    sub_1B8880C(v41, v42);
                  items = v39->fields._items;
                  v46 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v39->fields._version;
                  if ( !items )
                    sub_1B8880C(v41, v42);
                  size = v39->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v39,
                      (Il2CppObject *)v40,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v39->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)v40;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v40, v43, v44);
                  }
                  v68 = v28->fields._items;
                  v69 = Method_System_Collections_Generic_List_string__Add__;
                  ++v28->fields._version;
                  if ( !v68 )
                    sub_1B8880C(v49, v50);
                  v70 = v28->fields._size;
                  if ( (unsigned int)v70 >= v68->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v28,
                      v34,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v71 = &v68->obj.klass + v70;
                    v28->fields._size = v70 + 1;
                    v71[4] = (Il2CppClass *)v34;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v34, v51, v52);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v13->fields.priority;
                id = v13->fields.id;
                iconId = v13->fields.iconId;
                skillType = v13->fields.skillType;
                v59 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v59,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  0LL);
                if ( !v162 )
                  sub_1B8880C(v60, v61);
                v64 = v162->fields._items;
                v65 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v162->fields._version;
                if ( !v64 )
                  sub_1B8880C(v60, v61);
                v66 = v162->fields._size;
                if ( (unsigned int)v66 >= v64->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v162,
                    (Il2CppObject *)v59,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                }
                else
                {
                  v67 = &v64->obj.klass + v66;
                  v162->fields._size = v66 + 1;
                  v67[4] = (Il2CppClass *)v59;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v59, v62, v63);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v169,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            dispType = v157;
          }
        }
        goto LABEL_61;
      }
      if ( dispType != 2 )
      {
        IsPassive = (Il2CppObject *)Master_object;
        if ( !Master_object )
          goto LABEL_157;
        IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      Master_object,
                                      &entity,
                                      v13->fields.targetId,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_157;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v9,
                                        &v172,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v172;
            if ( !v172 )
              goto LABEL_157;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v172, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v172 || !v10 )
                goto LABEL_157;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v10,
                                            &v170,
                                            v172->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v172 )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_868/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v172->fields.funcId,
                                              (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
                if ( !v161 )
                  goto LABEL_157;
                v15 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v161,
                        IsPassive,
                        (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v16,
                    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v161,
                    v15,
                    (Il2CppObject *)v16,
                    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v161,
                        v15,
                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v18 = v170;
                v19 = v172;
                v20 = (System_Collections_Generic_List_object__o *)v17;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v21, v18, v19, 0LL, v13, 0LL);
                if ( !v20 )
                  goto LABEL_157;
                v24 = v20->fields._items;
                v25 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v20->fields._version;
                if ( !v24 )
                  goto LABEL_157;
                v26 = v20->fields._size;
                if ( (unsigned int)v26 >= v24->max_length )
                {
                  v82 = v25[4];
                  v83 = v20;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v83,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v82 + 192) + 112LL));
                  goto LABEL_61;
                }
                v27 = &v24->obj.klass + v26;
                v20->fields._size = v26 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_157;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_157;
                v72 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v74 = v13->fields.priority;
                v75 = v13->fields.id;
                v76 = v13->fields.iconId;
                v77 = v13->fields.skillType;
                v78 = EffectExplanation;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v21,
                  v72,
                  v78,
                  v75,
                  v74,
                  v76,
                  v77,
                  0LL);
                if ( !v162 )
                  goto LABEL_157;
                v79 = v162->fields._items;
                v80 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v162->fields._version;
                if ( !v79 )
                  goto LABEL_157;
                v81 = v162->fields._size;
                v10 = (Il2CppObject *)v163;
                if ( (unsigned int)v81 >= v79->max_length )
                {
                  v82 = v80[4];
                  v83 = v162;
                  goto LABEL_72;
                }
                v27 = &v79->obj.klass + v81;
                v162->fields._size = v81 + 1;
              }
              v27[4] = (Il2CppClass *)v21;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v160;
      ++v12;
      max_length = v160->max_length;
    }
    while ( v12 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v161;
  if ( !v161 )
LABEL_157:
    sub_1B8880C(IsPassive, v8);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v164,
    v161,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v167 = v164;
  while ( 1 )
  {
    v84 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v167,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v84 )
      break;
    value = v167.fields._current.fields.value;
    if ( !v167.fields._current.fields.value )
      sub_1B8880C(v84, v85);
    if ( SLODWORD(v167.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v88 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v167.fields._current.fields.value,
              0,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v88 )
        sub_1B8880C(0LL, v89);
      if ( v88[1].monitor )
      {
        v90 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v90 )
          sub_1B8880C(0LL, v91);
        v92 = v90[1].monitor;
        if ( !v92 )
          sub_1B8880C(v90, v91);
        if ( !Master_object )
          sub_1B8880C(0LL, v91);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v166,
               v92[4],
               (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v166 )
            sub_1B8880C(0LL, v93);
          Name = SkillEntity__getName((SkillEntity_o *)v166, 0LL);
        }
      }
      else
      {
        v94 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v94 )
          sub_1B8880C(0LL, v95);
        if ( v94[2].klass )
        {
          v96 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)value,
                  0,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v96 )
            sub_1B8880C(0LL, v97);
          v98 = v96[2].klass;
          if ( !v98 )
            sub_1B8880C(v96, v97);
          Name = (System_String_o *)v98->_1.byval_arg.data;
        }
      }
      v99 = sub_1B88658(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v164,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v100 = 0;
      *(_OWORD *)&v165.fields._list = *(_OWORD *)&v164.fields._dictionary;
      v165.fields._current = v164.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v165,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v165,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v114 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v114 )
          sub_1B8880C(0LL, v115);
        v117 = v114[1].klass;
        if ( !v117 )
          sub_1B8880C(v114, v115);
        v118 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 (System_String_o *)v117->_1.byval_arg.data,
                 (System_Int32_array *)v99,
                 v116);
        v119 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v119 )
          sub_1B8880C(0LL, v120);
        v121 = v119[2].monitor;
        if ( !v121 )
          sub_1B8880C(v119, v120);
        v122 = v121[5];
        v123 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v123 )
          sub_1B8880C(0LL, v124);
        v125 = v123[2].monitor;
        if ( !v125 )
          sub_1B8880C(v123, v124);
        v126 = v125[6];
        v127 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v127 )
          sub_1B8880C(0LL, v128);
        v129 = v127[2].monitor;
        if ( !v129 )
          sub_1B8880C(v127, v128);
        v130 = v129[14];
        v131 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v131, Name, v118, v122, v100, v126, v130, 0LL);
        if ( !v162 )
          sub_1B8880C(v132, v133);
        v136 = v162->fields._items;
        v137 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v162->fields._version;
        if ( !v136 )
          sub_1B8880C(v132, v133);
        v138 = v162->fields._size;
        if ( (unsigned int)v138 >= v136->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v162,
            (Il2CppObject *)v131,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
        }
        else
        {
          v139 = &v136->obj.klass + v138;
          v162->fields._size = v138 + 1;
          v139[4] = (Il2CppClass *)v131;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v139 + 4), (int32_t)v131, v134, v135);
        }
        continue;
      }
      v101 = v165.fields._current;
      v102 = sub_1B88658(int___TypeInfo, 0LL);
      if ( !v101 )
        sub_1B8880C(v102, v103);
      v104 = v101[1].monitor;
      if ( v104 )
      {
        if ( !v9 )
          sub_1B8880C(v102, v103);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v9,
                                                               v104[4],
                                                               v104[5],
                                                               0LL);
LABEL_110:
        v106 = (__int64)DispValFromSkill;
      }
      else
      {
        v106 = v102;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v101[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v99 )
        sub_1B8880C(DispValFromSkill, v103);
      v107 = *(_QWORD *)(v99 + 24);
      if ( v107 )
      {
        if ( (int)v107 >= 1 )
        {
          v108 = 0LL;
          v109 = (unsigned int)*(_QWORD *)(v99 + 24);
          do
          {
            if ( !v106 )
              sub_1B8880C(DispValFromSkill, v103);
            if ( v108 >= *(unsigned int *)(v106 + 24) )
              sub_1B88814(DispValFromSkill, v103);
            v110 = v99 + 4 * v108;
            v111 = *(_DWORD *)(v106 + 32 + 4 * v108++);
            *(_DWORD *)(v110 + 32) += v111;
          }
          while ( v109 != v108 );
        }
      }
      else
      {
        v99 = v106;
      }
      v112 = v101[2].monitor;
      if ( !v112 )
        sub_1B8880C(DispValFromSkill, v103);
      v113 = v112[20];
      if ( v113 > v100 )
        v100 = v113;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v167,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v140 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v140 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v140->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v140->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v140);
      v140 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v142 = (Il2CppObject *)v140->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_0,
      v142,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      0LL);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v144, v145);
  }
  v146 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v162,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v147 = ClassBoardBaseDialog___c_TypeInfo;
  v148 = v146;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v147 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v147->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v147->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v147);
      v147 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v150 = (Il2CppObject *)v147->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__28_1,
      v150,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      0LL);
    v151 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v151->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v151->__9__28_1, (int32_t)_9__28_1, v152, v153);
  }
  v154 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v148,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v154, (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4A5E525 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E525 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.conditionListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_20:
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__OpenItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  System_Int32_array *v14; // x21
  System_Int32_array *v15; // x22
  unsigned __int64 v16; // x24
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v20; // x23

  if ( (byte_4A5E52F & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_1B885B0(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_4A5E52F = 1;
  }
  v5 = sub_1B887FC(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)closedAction, v10, v11);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v14 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)size);
    v15 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v16,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v14 )
          break;
        if ( v16 >= v14->max_length )
          goto LABEL_23;
        v14->m_Items[v16 + 1] = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v16,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v15 )
          break;
        if ( v16 >= v15->max_length )
LABEL_23:
          sub_1B88814(Item, v7);
        v15->m_Items[++v16] = Item[2].fields._version;
        if ( size == v16 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1B8880C(Item, v7);
    }
LABEL_17:
    v17 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B885C8(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0LL);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow((CommonUI_o *)Instance, v14, v15, v20, 0, 0LL);
  }
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x29
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
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  unsigned __int64 v33; // x8
  System_String_o *v34; // x22
  unsigned __int64 v35; // x8
  System_String_o *v36; // x22
  unsigned __int64 v37; // x8
  System_String_o *v38; // x21
  unsigned __int64 v39; // x8
  int v41; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5E52C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_25129/*"{x"*/);
    sub_1B885B0(&StringLiteral_24914/*"{"*/);
    sub_1B885B0(&StringLiteral_24845/*"xx}"*/);
    sub_1B885B0(&StringLiteral_24844/*"xxx}"*/);
    sub_1B885B0(&StringLiteral_25154/*"}"*/);
    sub_1B885B0(&StringLiteral_25132/*"{xxxx"*/);
    sub_1B885B0(&StringLiteral_25130/*"{xx"*/);
    sub_1B885B0(&StringLiteral_24843/*"xxxx}"*/);
    sub_1B885B0(&StringLiteral_24846/*"x}"*/);
    sub_1B885B0(&StringLiteral_25131/*"{xxx"*/);
    byte_4A5E52C = 1;
  }
  v41 = 0;
  if ( funcVals )
  {
    v5 = *(_QWORD *)&funcVals->max_length;
    if ( v5 )
    {
      v42 = 0;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v6 = System_Int32__ToString((int32_t)&v42, 0LL);
          v7 = System_String__Concat_61718292(
                 (System_String_o *)StringLiteral_24914/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_24843/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v42, 0LL);
          v9 = System_String__Concat_61718292(
                 (System_String_o *)StringLiteral_24914/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_24844/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v42, 0LL);
          v11 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_24845/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v42, 0LL);
          v13 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_24846/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v42, 0LL);
          v15 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v42, 0LL);
          v17 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25129/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v42, 0LL);
          v19 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25130/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v42, 0LL);
          v21 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25131/*"{xxx"*/,
                  v20,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v42, 0LL);
          v23 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25132/*"{xxxx"*/,
                  v22,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v25 = v23;
          v41 = 10000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(text, v7, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v28 = v23;
          v41 = 1000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v28, v9, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v29 = v23;
          v41 = 100 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v29 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v29, v11, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v30 = v23;
          v41 = 10 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v30, v13, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v31 = v23;
          v26 = System_Int32__ToString((unsigned int)funcVals + 4 * v42 + 32, 0LL);
          if ( !v31 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v31, v15, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v32 = v23;
          v33 = 1717986919LL * funcVals->m_Items[v42 + 1];
          v41 = (v33 >> 63) + (SHIDWORD(v33) >> 2);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v32, v17, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v34 = v23;
          v35 = 1374389535LL * funcVals->m_Items[v42 + 1];
          v41 = (v35 >> 63) + (SHIDWORD(v35) >> 5);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v34, v19, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_26;
          v36 = v23;
          v37 = 274877907LL * funcVals->m_Items[v42 + 1];
          v41 = (v37 >> 63) + (SHIDWORD(v37) >> 6);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v23 = System_String__Replace_61726660(v36, v21, v26, 0LL);
          if ( v42 >= funcVals->max_length )
LABEL_26:
            sub_1B88814(v23, v24);
          v38 = v23;
          v39 = 1759218605LL * funcVals->m_Items[v42 + 1];
          v41 = (v39 >> 63) + (SHIDWORD(v39) >> 12);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v38 )
LABEL_27:
            sub_1B8880C(v26, v27);
          text = System_String__Replace_61726660(v38, v25, v26, 0LL);
          ++v42;
        }
        while ( (signed int)v42 < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E52A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_4A5E52A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      itemIconComponentList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1B8880C(0LL, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void __fastcall ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_8;
  v3 = this;
  this = (ClassBoardBaseDialog_o *)effectScrollView->fields.verticalScrollBar;
  if ( !this )
    goto LABEL_8;
  v4 = 0.0;
  if ( effectScrollView->fields.contentPivot == 4 )
    v4 = 0.5;
  UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0LL);
  this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView;
  if ( !this
    || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL),
        (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_String_o *v13; // x22
  System_Int32_c *v14; // x0
  int32_t *v15; // x1
  Il2CppObject *v16; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v25; // [xsp+18h] [xbp-48h] BYREF
  int32_t v26; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A5E528 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3485/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_1B885B0(&StringLiteral_3487/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_1B885B0(&StringLiteral_3484/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_1B885B0(&StringLiteral_3486/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_1B885B0(&StringLiteral_3482/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_4A5E528 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_19;
  klass = (int32_t)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( klass >= needNum )
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3484/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3486/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
    v14 = int_TypeInfo;
    v25 = needNum;
    v15 = &v25;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3485/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
    itemQpNum = this->fields.itemQpNum;
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
    v14 = int_TypeInfo;
    v15 = &v26;
    v26 = needNum;
  }
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(v14, v15, v10, v11, v12);
  SelfUserGame = System_String__Format(v13, v16, 0LL);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3482/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3486/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v24 = klass;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
  SelfUserGame = System_String__Format(v19, v23, 0LL);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0LL)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v15; // w0
  IClassBoardSquareModel_c *v16; // x8
  int32_t v17; // w22
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  ClassBoardSquareEntity_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x21
  const MethodInfo *v25; // x3
  float v26; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  UnityEngine_GameObject_o *v31; // x22
  Il2CppObject *Component_object; // x0
  __int64 v33; // x1
  IClassBoardSquareModel_c *v34; // x8
  System_String_o *monitor; // x25
  System_String_o *v36; // x26
  int32_t v37; // w24
  __int64 v38; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v39; // x23
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  float v44; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4A5E526 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSquareEntity___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E526 = 1;
  }
  entity = 0LL;
  memset(&v50, 0, sizeof(v50));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v11 = (ClassBoardSquareMaster_o *)effectObj;
  v12 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v16 = squareModel->klass;
  v17 = v15;
  v18 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_17;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_17:
    v20 = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(
                                            squareModel,
                                            *(_QWORD *)(v20 + 8));
  if ( !v11 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v11, &entity, v17, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_1B88658(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_54;
  v23 = entity;
  v24 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1B886EC(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v48 = sub_1B88830(0LL);
      sub_1B886D8(v48, 0LL);
    }
  }
  if ( !LODWORD(v24[1].klass) )
    sub_1B88814(effectObj, squareModel);
  v24[1].monitor = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24[1].monitor, (int32_t)v23, v21, v22);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v24,
                                            0,
                                            0,
                                            v25);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v26 = 0.0;
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v50.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v31 = (UnityEngine_GameObject_o *)v29;
    if ( !v29 )
      sub_1B8880C(0LL, v30);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v29,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1B8880C(Component_object, v33);
    v34 = squareModel->klass;
    v36 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v37 = (int32_t)current[2].monitor;
    v38 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
    v39 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
    {
      v40 = &v34->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v38;
        v40 += 4;
        if ( !v38 )
          goto LABEL_35;
      }
      v41 = (__int64)&v34->vtable[*v40 + 7].method;
    }
    else
    {
LABEL_35:
      v41 = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v42 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v41)(squareModel, *(_QWORD *)(v41 + 8));
    if ( !v39 )
      sub_1B8880C(v42, v43);
    v44 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v39, v36, monitor, v37, v42, 0LL);
    GameObjectExtensions__SetParent_33729948(v31, this->fields.effectDetailParent, 0LL);
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    GameObjectExtensions__SetLocalPosition_33724224(v31, 0.0, -v26, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v31, 1, 0LL);
    v26 = v26 + v44;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))effectObj->klass[1]._1.parent)(
                                            effectObj,
                                            0LL,
                                            effectObj->klass[1]._1.generic_class,
                                            0.0,
                                            0.0);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)effectScrollView->fields.verticalScrollBar;
  if ( !effectObj )
    goto LABEL_54;
  UIProgressBar__set_value((UIProgressBar_o *)effectObj, 0.0, 0LL);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  UIScrollView__UpdatePosition((UIScrollView_o *)effectObj, 0LL);
  if ( disableScrollViewSize > 0.0 && v26 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( effectObj )
      {
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        GameObjectExtensions__SetLocalPositionY(v47, disableScrollViewPosY, 0LL);
        return;
      }
    }
LABEL_54:
    sub_1B8880C(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *itemListObj; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  _BOOL4 v20; // w27
  char v21; // w26
  _BOOL4 i; // w23
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x24
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  int32_t v38; // w0
  __int64 v39; // x8
  int32_t v40; // w23
  __int64 v41; // x9
  IClassBoardItemModel_c **v42; // x10
  __int64 v43; // x0
  int32_t v44; // w24
  Il2CppObject *Instance; // x0
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v48; // x1
  _BOOL8 isQP; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x25
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Generic_List_object__o *v63; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x8
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5E527 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_1B885B0(&IClassBoardItemModel_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3480/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_4A5E527 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v6 )
      goto LABEL_86;
    UILabel__set_text(v6, itemListObj, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0LL);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemIconComponentList, (int32_t)v10, v11, v12);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v14 = *(unsigned __int16 *)(&itemList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1BDA590(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v19 = v17;
  v20 = 0;
  v21 = 1;
LABEL_24:
  for ( i = v20; ; i = 1 )
  {
    if ( !v19 )
      sub_1B8880C(v17, v18);
    v23 = *(_QWORD *)v19;
    v20 = i;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_30;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_30:
      v26 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v19, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v19;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v29 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_37;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_37:
      v30 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v19, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1B8880C(0LL, v32);
    v34 = *(_QWORD *)v31;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v36 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_44;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_44:
      v37 = sub_1BDA590(v31, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
    v39 = *(_QWORD *)v33;
    v40 = v38;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v42 = (IClassBoardItemModel_c **)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *(v42 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v41;
        v42 += 2;
        if ( !v41 )
          goto LABEL_50;
      }
      v43 = v39 + 16LL * (*(_DWORD *)v42 + 1) + 312;
    }
    else
    {
LABEL_50:
      v43 = sub_1BDA590(v33, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v33, *(_QWORD *)(v43 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v46);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v48);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v40, 0LL);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v21 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v53 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v53;
        if ( !v53 )
          sub_1B8880C(0LL, v54);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v53, 0LL);
        if ( !itemIconListGrid )
          sub_1B8880C(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_1B8880C(isQP, v50);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0LL);
      if ( !byte_4A55CE6 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v59 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v58);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v40, v44, 0LL);
      v63 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1B8880C(0LL, v60);
      items = v63->fields._items;
      v65 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v63->fields._version;
      if ( !items )
        sub_1B8880C(v63, v60);
      size = v63->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          v59,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v63->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v59;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v59, v61, v62);
      }
      v21 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v44, v51);
  }
  v68 = *(_QWORD *)v19;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_78;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_78:
    v71 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v19, *(_QWORD *)(v71 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1B8880C(itemListObj, v8);
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))itemListObj->klass->vtable._8_Equals.method)(
    itemListObj,
    itemListObj->klass->vtable._9_GetTypeCode.methodPtr);
  return i;
}


void __fastcall ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x10
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  char v18; // w23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  MasterMissionListViewItem_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  UIGrid_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4A5E529 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E529 = 1;
  }
  entity = 0LL;
  memset(&v39, 0, sizeof(v39));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v11 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v12 = 0LL;
        do
        {
          if ( (unsigned int)v12 >= (unsigned int)klass )
            sub_1B88814(conditionListObj, *(_QWORD *)&condData.fields.Type);
          v13 = *((_QWORD *)&v11[1].monitor + v12);
          if ( !v13 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v13 + 32);
            items = v6->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                condData.fields.Type,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
              klass = v11[1].klass;
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size + 1] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v12 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v6 )
      goto LABEL_58;
    v7 = v6->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v7 )
      goto LABEL_58;
    v9 = v6->fields._size;
    if ( (unsigned int)v9 >= v7->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        SHIDWORD(v3),
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9 + 1] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v6,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = 1;
  v39 = v38;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v17 )
      sub_1B8880C(v19, v20);
    DataMasterBase_object__object__int___TryGetEntity(
      v17,
      &entity,
      v39.fields._current,
      (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v21 = entity;
    if ( entity )
    {
      v22 = (MasterMissionListViewItem_o *)sub_1B887FC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v22, (EventMissionEntity_o *)v21, 2, 0LL);
      if ( !v22 )
        sub_1B8880C(v23, v24);
      ComponentInChildren_object__48719376 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v22->klass->vtable._6_CheckMissionCond.method)(
                                                               v22,
                                                               v22->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v18 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1B8880C(ComponentInChildren_object__48719376, v26);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1B8880C(0LL, v29);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v33 = UnityEngine_Object__Instantiate_object__49297800(
                Parent,
                transform,
                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v33 )
          sub_1B8880C(0LL, v34);
        ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                 (UnityEngine_Component_o *)v33,
                                                 (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__48719376;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1B8880C(ComponentInChildren_object__48719376, v26);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v22,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v35 = this->fields.conditionGrid;
      v36 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v37 = GameObjectExtensions__GetParent(v36, 0LL);
      if ( !v35 )
        sub_1B8880C(v37, v37);
      UIGrid__AddChild(v35, v37, 0LL);
      v18 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))conditionListObj->klass[1]._1.parent)(
    conditionListObj,
    0LL,
    conditionListObj->klass[1]._1.generic_class,
    0.0,
    0.0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    1LL,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  UIScrollView__UpdatePosition((UIScrollView_o *)conditionListObj, 0LL);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  conditionListObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)conditionListObj,
                                                   0LL);
  if ( !conditionListObj )
    goto LABEL_58;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)conditionListObj, 0LL) != 1 )
    return;
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)conditionListObj, 0, 0LL),
        (conditionListObj = this->fields.missionScrollBar) == 0LL) )
  {
LABEL_58:
    sub_1B8880C(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4A5E52D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E52D = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E532 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4A5E532 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ClassBoardBaseDialog___c___ctor(ClassBoardBaseDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_0(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.squareId;
}


void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___ctor(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog___c__DisplayClass32_0___OpenItemInfoListWindow_b__0(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1B8880C(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}