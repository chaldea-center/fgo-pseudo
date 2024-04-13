void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  SummonHistoryListViewManager___c_c *v66; // x8
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__2_0; // x21
  Il2CppObject *v69; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v78; // x0
  __int64 v79; // x1
  int v80; // w27
  int32_t v81; // w25
  Il2CppObject *current; // x20
  System_String_o *v83; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_String_o *v85; // x23
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v87; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_Int32_array **v89; // x24
  __int64 v90; // x23
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x3
  Il2CppClass *klass; // x8
  unsigned __int64 v103; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x3
  _DWORD *v109; // x23
  int v110; // w26
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x3
  __int64 v116; // x8
  unsigned __int64 v117; // x10
  int *v118; // x11
  __int64 v119; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v120; // x22
  int32_t v121; // w21
  System_Int32_array **v122; // x25
  __int64 v123; // x24
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x0
  __int64 v131; // x1
  int v132; // w27
  __int64 v133; // x8
  unsigned __int64 v134; // x10
  int *v135; // x11
  __int64 v136; // x0
  __int64 v137; // x3
  int v138; // w21
  Il2CppClass *v139; // x8
  unsigned __int64 v140; // x10
  int32_t *v141; // x11
  __int64 v142; // x0
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x3
  __int64 v146; // x20
  int32_t v147; // w22
  __int64 v148; // x8
  unsigned __int64 v149; // x10
  int *v150; // x11
  __int64 v151; // x0
  __int64 v152; // x3
  __int64 v153; // x8
  unsigned __int64 v154; // x10
  int *v155; // x11
  __int64 v156; // x0
  UserGachaHistoryEntity_o *v157; // x0
  __int64 v158; // x1
  UserGachaHistoryEntity_o *v159; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v160; // x23
  System_String_o *v161; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v164; // x26
  SummonHistoryListViewItem_o *v165; // x24
  const MethodInfo *v166; // x6
  __int64 v167; // x0
  __int64 v168; // x1
  int v169; // w23
  __int64 v170; // x8
  unsigned __int64 v171; // x10
  int *v172; // x11
  __int64 v173; // x0
  int v174; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v176; // [xsp+10h] [xbp-A0h]
  _BYTE v177[36]; // [xsp+18h] [xbp-98h] BYREF
  int v178; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v179; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42EC8F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Func_UserGachaHistoryEntity__long___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v44, v45, v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&SummonHistoryListViewItem_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v56, v57, v58);
    sub_B5D5C4(&SummonHistoryListViewManager___c_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_6915/*"GACHA_HISTORY_LIST_DATETIME"*/, v62, v63, v64);
    byte_42EC8F8 = 1;
  }
  memset(&v179, 0, sizeof(v179));
  v178 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v66 = SummonHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(SummonHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v66 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v66->static_fields;
  _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v69 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v69,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2C3003C *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v70 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v70->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v70->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserGachaHistoryEntity__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1CACC24 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v78 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v77,
                                                                                         (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v78 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v177,
    v78,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v80 = 0;
  v81 = 0;
  v179 = *(System_Collections_Generic_List_Enumerator_T__o *)v177;
  v176 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v179,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v179.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_6915/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v85 = v83;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B5D69C(0LL, v87);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v89 = (System_Int32_array **)System_String__Format(v85, CreatedAtToString, 0LL);
    v90 = sub_B5D694(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_23901828((ListViewItem_o *)v90, v81, 0LL);
    *(_QWORD *)(v90 + 112) = v89;
    sub_B5D560((BattleServantConfConponent_o *)(v90 + 112), v89, v91, v92, v93, v94, v95, v96);
    *(_DWORD *)(v90 + 120) = 1;
    if ( !itemList )
      sub_B5D69C(v97, v98);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B5D69C(v99, v100);
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v103 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v103;
        p_offset += 4;
        if ( v103 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AF54C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v101);
    }
    v106 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v109 = v106;
    v110 = v81 + 1;
    while ( 1 )
    {
      if ( !v109 )
        sub_B5D69C(v106, v107);
      v111 = *(_QWORD *)v109;
      if ( *(_WORD *)(*(_QWORD *)v109 + 298LL) )
      {
        v112 = 0LL;
        v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v113 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v112;
          v113 += 4;
          if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v109 + 298LL) )
            goto LABEL_35;
        }
        v114 = v111 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_35:
        v114 = sub_AF54C0(v109, System_Collections_IEnumerator_TypeInfo, 0LL, v108);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v114)(v109, *(_QWORD *)(v114 + 8)) & 1) == 0 )
        break;
      v116 = *(_QWORD *)v109;
      if ( *(_WORD *)(*(_QWORD *)v109 + 298LL) )
      {
        v117 = 0LL;
        v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v118 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v117;
          v118 += 4;
          if ( v117 >= *(unsigned __int16 *)(*(_QWORD *)v109 + 298LL) )
            goto LABEL_42;
        }
        v119 = v116 + 16LL * *v118 + 312;
      }
      else
      {
LABEL_42:
        v119 = sub_AF54C0(v109, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v115);
      }
      v106 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v119)(v109, *(_QWORD *)(v119 + 8));
      if ( !v106 )
        sub_B5D69C(0LL, v107);
      if ( !v106[16] )
      {
        v120 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v176->fields.itemList;
        v121 = v110++;
        v122 = (System_Int32_array **)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v106 + 360LL))(
                                        v106,
                                        *(_QWORD *)(*(_QWORD *)v106 + 368LL));
        v123 = sub_B5D694(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v123, v121, 0LL);
        *(_QWORD *)(v123 + 112) = v122;
        sub_B5D560((BattleServantConfConponent_o *)(v123 + 112), v122, v124, v125, v126, v127, v128, v129);
        *(_DWORD *)(v123 + 120) = 0;
        if ( !v120 )
          sub_B5D69C(v130, v131);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v120,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v177[4 * v80 + 24] = 204;
    v132 = ++v178;
    v133 = *(_QWORD *)v109;
    if ( *(_WORD *)(*(_QWORD *)v109 + 298LL) )
    {
      v134 = 0LL;
      v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v135 - 1) != System_IDisposable_TypeInfo )
      {
        ++v134;
        v135 += 4;
        if ( v134 >= *(unsigned __int16 *)(*(_QWORD *)v109 + 298LL) )
          goto LABEL_52;
      }
      v136 = v133 + 16LL * *v135 + 312;
    }
    else
    {
LABEL_52:
      v136 = sub_AF54C0(v109, System_IDisposable_TypeInfo, 0LL, v115);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v136)(v109, *(_QWORD *)(v136 + 8));
    if ( v132 )
    {
      v138 = v132;
      if ( *(_DWORD *)&v177[4 * v132 + 20] == 204 )
      {
        v138 = v132 - 1;
        v178 = v132 - 1;
      }
    }
    else
    {
      v138 = 0;
    }
    v139 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v140 = 0LL;
      v141 = &v139->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v141 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v140;
        v141 += 4;
        if ( v140 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v142 = (__int64)&v139->vtable[*v141].method;
    }
    else
    {
LABEL_62:
      v142 = sub_AF54C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v137);
    }
    v143 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v142)(current, *(_QWORD *)(v142 + 8));
    v146 = v143;
    v147 = v110;
LABEL_65:
    this = v176;
    v81 = v147;
    if ( !v146 )
      sub_B5D69C(v143, v144);
    while ( 1 )
    {
      v148 = *(_QWORD *)v146;
      if ( *(_WORD *)(*(_QWORD *)v146 + 298LL) )
      {
        v149 = 0LL;
        v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v150 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v149;
          v150 += 4;
          if ( v149 >= *(unsigned __int16 *)(*(_QWORD *)v146 + 298LL) )
            goto LABEL_70;
        }
        v151 = v148 + 16LL * *v150 + 312;
      }
      else
      {
LABEL_70:
        v151 = sub_AF54C0(v146, System_Collections_IEnumerator_TypeInfo, 0LL, v145);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v151)(v146, *(_QWORD *)(v151 + 8)) & 1) == 0 )
        break;
      v153 = *(_QWORD *)v146;
      if ( *(_WORD *)(*(_QWORD *)v146 + 298LL) )
      {
        v154 = 0LL;
        v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v155 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v154;
          v155 += 4;
          if ( v154 >= *(unsigned __int16 *)(*(_QWORD *)v146 + 298LL) )
            goto LABEL_77;
        }
        v156 = v153 + 16LL * *v155 + 312;
      }
      else
      {
LABEL_77:
        v156 = sub_AF54C0(v146, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v152);
      }
      v157 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v156)(v146, *(_QWORD *)(v156 + 8));
      v159 = v157;
      if ( !v157 )
        sub_B5D69C(0LL, v158);
      if ( v157->fields.gachaExtraGiftBonusType && v157->fields.gachaExtraGiftResultType != 3 )
      {
        v160 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v176->fields.itemList;
        v161 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v157->klass->vtable._3_ToString.method)(
                                    v157,
                                    v157->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v159, 0LL);
        objectId = v159->fields.objectId;
        v164 = TitleToString;
        v165 = (SummonHistoryListViewItem_o *)sub_B5D694(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_32743532(v165, v147, v161, v164, objectId, 2, v166);
        if ( !v160 )
          sub_B5D69C(v167, v168);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v160,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v165,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v147;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v177[4 * v138 + 24] = 308;
    v169 = ++v178;
    v170 = *(_QWORD *)v146;
    if ( *(_WORD *)(*(_QWORD *)v146 + 298LL) )
    {
      v171 = 0LL;
      v172 = (int *)(*(_QWORD *)(v170 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v172 - 1) != System_IDisposable_TypeInfo )
      {
        ++v171;
        v172 += 4;
        if ( v171 >= *(unsigned __int16 *)(*(_QWORD *)v146 + 298LL) )
          goto LABEL_88;
      }
      v173 = v170 + 16LL * *v172 + 312;
    }
    else
    {
LABEL_88:
      v173 = sub_AF54C0(v146, System_IDisposable_TypeInfo, 0LL, v152);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v173)(v146, *(_QWORD *)(v173 + 8));
    v80 = 0;
    if ( v169 )
    {
      v80 = v169;
      if ( *(_DWORD *)&v177[4 * v169 + 20] == 308 )
      {
        v80 = v169 - 1;
        v178 = v169 - 1;
      }
    }
  }
  *(_DWORD *)&v177[4 * v80 + 24] = 336;
  v174 = ++v178;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v179,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v174 && *(_DWORD *)&v177[4 * v174 + 20] == 336 )
    v178 = v174 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B5D69C(v78, v79);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SummonHistoryListViewManager__SetObjectItem(
        SummonHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x10

  if ( (byte_42EC8F9 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_B5D5C4(
                                               &SummonHistoryListViewObject_TypeInfo,
                                               (_DWORD)obj,
                                               (_DWORD)item,
                                               method);
    byte_42EC8F9 = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall SummonHistoryListViewManager__get_ListViewHeight(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B5D69C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E6476 & 1) == 0 )
  {
    sub_B5D5C4(&SummonHistoryListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E6476 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SummonHistoryListViewManager___c___ctor(
        SummonHistoryListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall SummonHistoryListViewManager___c___CreateList_b__2_0(
        SummonHistoryListViewManager___c_o *this,
        UserGachaHistoryEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.userGachaHistoryId;
}