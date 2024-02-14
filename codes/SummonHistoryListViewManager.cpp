void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  SummonHistoryListViewManager___c_c *v26; // x8
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__2_0; // x21
  Il2CppObject *v29; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v38; // x0
  int v39; // w27
  int32_t v40; // w25
  Il2CppObject *current; // x20
  System_String_o *v42; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_String_o *v44; // x23
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  Il2CppObject *CreatedAtToString; // x1
  System_Int32_array **v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x0
  Il2CppClass *klass; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v63; // x0
  _DWORD *v64; // x23
  int v65; // w26
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  int32_t v75; // w21
  System_Int32_array **v76; // x25
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  int v87; // w27
  __int64 v88; // x8
  unsigned __int64 v89; // x10
  int *v90; // x11
  __int64 v91; // x0
  int v92; // w21
  Il2CppClass *v93; // x8
  unsigned __int64 v94; // x10
  int32_t *v95; // x11
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x20
  int32_t v99; // w22
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  __int64 v104; // x8
  unsigned __int64 v105; // x10
  int *v106; // x11
  __int64 v107; // x0
  UserGachaHistoryEntity_o *v108; // x0
  UserGachaHistoryEntity_o *v109; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // x23
  System_String_o *v111; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v114; // x26
  __int64 v115; // x1
  __int64 v116; // x2
  SummonHistoryListViewItem_o *v117; // x24
  const MethodInfo *v118; // x6
  __int64 v119; // x0
  int v120; // w23
  __int64 v121; // x8
  unsigned __int64 v122; // x10
  int *v123; // x11
  __int64 v124; // x0
  int v125; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v127; // [xsp+10h] [xbp-A0h]
  _BYTE v128[36]; // [xsp+18h] [xbp-98h] BYREF
  int v129; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v130; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_421848F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Func_UserGachaHistoryEntity__long___ctor__, v10);
    sub_B0D8A4(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v11);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&SummonHistoryListViewItem_TypeInfo, v19);
    sub_B0D8A4(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v20);
    sub_B0D8A4(&SummonHistoryListViewManager___c_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_6852/*"GACHA_HISTORY_LIST_DATETIME"*/, v22);
    byte_421848F = 1;
  }
  memset(&v130, 0, sizeof(v130));
  v129 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v26 = SummonHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(SummonHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v26 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                              System_Func_UserGachaHistoryEntity__long__TypeInfo,
                                                                              v23,
                                                                              v24);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v29,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2619D24 *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v30 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v30->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserGachaHistoryEntity__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1B4C7DC *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v38 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v37,
                                                                                         (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v38 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v128,
    v38,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v39 = 0;
  v40 = 0;
  v130 = *(System_Collections_Generic_List_Enumerator_T__o *)v128;
  v127 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v130,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v130.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6852/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v44 = v42;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B0D97C(0LL);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v47 = (System_Int32_array **)System_String__Format(v44, CreatedAtToString, 0LL);
    v50 = sub_B0D974(SummonHistoryListViewItem_TypeInfo, v48, v49);
    ListViewItem___ctor_23700744((ListViewItem_o *)v50, v40, 0LL);
    *(_QWORD *)(v50 + 112) = v47;
    sub_B0D840((BattleServantConfConponent_o *)(v50 + 112), v47, v51, v52, v53, v54, v55, v56);
    *(_DWORD *)(v50 + 120) = 1;
    if ( !itemList )
      sub_B0D97C(v57);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B0D97C(v58);
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AA67A0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v63 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v64 = v63;
    v65 = v40 + 1;
    while ( 1 )
    {
      if ( !v64 )
        sub_B0D97C(v63);
      v66 = *(_QWORD *)v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
      {
        v67 = 0LL;
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v67;
          v68 += 4;
          if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
            goto LABEL_35;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_35:
        v69 = sub_AA67A0(v64, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v69)(v64, *(_QWORD *)(v69 + 8)) & 1) == 0 )
        break;
      v70 = *(_QWORD *)v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
      {
        v71 = 0LL;
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v72 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v71;
          v72 += 4;
          if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
            goto LABEL_42;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_42:
        v73 = sub_AA67A0(v64, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v63 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v73)(v64, *(_QWORD *)(v73 + 8));
      if ( !v63 )
        sub_B0D97C(0LL);
      if ( !v63[16] )
      {
        v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v127->fields.itemList;
        v75 = v65++;
        v76 = (System_Int32_array **)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v63 + 360LL))(
                                       v63,
                                       *(_QWORD *)(*(_QWORD *)v63 + 368LL));
        v79 = sub_B0D974(SummonHistoryListViewItem_TypeInfo, v77, v78);
        ListViewItem___ctor_23700744((ListViewItem_o *)v79, v75, 0LL);
        *(_QWORD *)(v79 + 112) = v76;
        sub_B0D840((BattleServantConfConponent_o *)(v79 + 112), v76, v80, v81, v82, v83, v84, v85);
        *(_DWORD *)(v79 + 120) = 0;
        if ( !v74 )
          sub_B0D97C(v86);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v74,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v128[4 * v39 + 24] = 204;
    v87 = ++v129;
    v88 = *(_QWORD *)v64;
    if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
    {
      v89 = 0LL;
      v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
      {
        ++v89;
        v90 += 4;
        if ( v89 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
          goto LABEL_52;
      }
      v91 = v88 + 16LL * *v90 + 312;
    }
    else
    {
LABEL_52:
      v91 = sub_AA67A0(v64, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v91)(v64, *(_QWORD *)(v91 + 8));
    if ( v87 )
    {
      v92 = v87;
      if ( *(_DWORD *)&v128[4 * v87 + 20] == 204 )
      {
        v92 = v87 - 1;
        v129 = v87 - 1;
      }
    }
    else
    {
      v92 = 0;
    }
    v93 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v94 = 0LL;
      v95 = &v93->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v95 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v94;
        v95 += 4;
        if ( v94 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v96 = (__int64)&v93->vtable[*v95].method;
    }
    else
    {
LABEL_62:
      v96 = sub_AA67A0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v97 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v96)(current, *(_QWORD *)(v96 + 8));
    v98 = v97;
    v99 = v65;
LABEL_65:
    this = v127;
    v40 = v99;
    if ( !v98 )
      sub_B0D97C(v97);
    while ( 1 )
    {
      v100 = *(_QWORD *)v98;
      if ( *(_WORD *)(*(_QWORD *)v98 + 298LL) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v98 + 298LL) )
            goto LABEL_70;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_70:
        v103 = sub_AA67A0(v98, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v98, *(_QWORD *)(v103 + 8)) & 1) == 0 )
        break;
      v104 = *(_QWORD *)v98;
      if ( *(_WORD *)(*(_QWORD *)v98 + 298LL) )
      {
        v105 = 0LL;
        v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v106 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v105;
          v106 += 4;
          if ( v105 >= *(unsigned __int16 *)(*(_QWORD *)v98 + 298LL) )
            goto LABEL_77;
        }
        v107 = v104 + 16LL * *v106 + 312;
      }
      else
      {
LABEL_77:
        v107 = sub_AA67A0(v98, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v108 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v98, *(_QWORD *)(v107 + 8));
      v109 = v108;
      if ( !v108 )
        sub_B0D97C(0LL);
      if ( v108->fields.gachaExtraGiftBonusType && v108->fields.gachaExtraGiftResultType != 3 )
      {
        v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v127->fields.itemList;
        v111 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v108->klass->vtable._3_ToString.method)(
                                    v108,
                                    v108->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v109, 0LL);
        objectId = v109->fields.objectId;
        v114 = TitleToString;
        v117 = (SummonHistoryListViewItem_o *)sub_B0D974(SummonHistoryListViewItem_TypeInfo, v115, v116);
        SummonHistoryListViewItem___ctor_31680120(v117, v99, v111, v114, objectId, 2, v118);
        if ( !v110 )
          sub_B0D97C(v119);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v110,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v117,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v99;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v128[4 * v92 + 24] = 308;
    v120 = ++v129;
    v121 = *(_QWORD *)v98;
    if ( *(_WORD *)(*(_QWORD *)v98 + 298LL) )
    {
      v122 = 0LL;
      v123 = (int *)(*(_QWORD *)(v121 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v123 - 1) != System_IDisposable_TypeInfo )
      {
        ++v122;
        v123 += 4;
        if ( v122 >= *(unsigned __int16 *)(*(_QWORD *)v98 + 298LL) )
          goto LABEL_88;
      }
      v124 = v121 + 16LL * *v123 + 312;
    }
    else
    {
LABEL_88:
      v124 = sub_AA67A0(v98, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v124)(v98, *(_QWORD *)(v124 + 8));
    v39 = 0;
    if ( v120 )
    {
      v39 = v120;
      if ( *(_DWORD *)&v128[4 * v120 + 20] == 308 )
      {
        v39 = v120 - 1;
        v129 = v120 - 1;
      }
    }
  }
  *(_DWORD *)&v128[4 * v39 + 24] = 336;
  v125 = ++v129;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v130,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v125 && *(_DWORD *)&v128[4 * v125 + 20] == 336 )
    v129 = v125 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B0D97C(v38);
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

  if ( (byte_4218490 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_B0D8A4(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_4218490 = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall SummonHistoryListViewManager__get_ListViewHeight(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B0D97C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211755 & 1) == 0 )
  {
    sub_B0D8A4(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_4211755 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SummonHistoryListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return entity->fields.userGachaHistoryId;
}