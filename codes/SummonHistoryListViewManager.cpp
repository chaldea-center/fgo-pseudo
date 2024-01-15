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
  __int64 v25; // x3
  __int64 v26; // x4
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  SummonHistoryListViewManager___c_c *v28; // x8
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__2_0; // x21
  Il2CppObject *v31; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v40; // x0
  int v41; // w27
  int32_t v42; // w25
  Il2CppObject *current; // x20
  System_String_o *v44; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_String_o *v46; // x23
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  SummonHistoryListViewItem_o *v54; // x23
  Il2CppClass *klass; // x8
  unsigned __int64 v56; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v59; // x23
  int v60; // w26
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  _DWORD *v69; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x22
  int32_t v71; // w21
  System_String_o *v72; // x25
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  SummonHistoryListViewItem_o *v77; // x24
  int v78; // w27
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  int v83; // w21
  Il2CppClass *v84; // x8
  unsigned __int64 v85; // x10
  int32_t *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x20
  int32_t v89; // w22
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  UserGachaHistoryEntity_o *v98; // x0
  UserGachaHistoryEntity_o *v99; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x23
  System_String_o *v101; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v104; // x26
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  SummonHistoryListViewItem_o *v109; // x24
  int v110; // w23
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  int v115; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v117; // [xsp+10h] [xbp-A0h]
  _BYTE v118[36]; // [xsp+18h] [xbp-98h] BYREF
  int v119; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40FD46E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_B16FFC(&Method_System_Func_UserGachaHistoryEntity__long___ctor__, v10);
    sub_B16FFC(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&SummonHistoryListViewItem_TypeInfo, v19);
    sub_B16FFC(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v20);
    sub_B16FFC(&SummonHistoryListViewManager___c_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_6804/*"GACHA_HISTORY_LIST_DATETIME"*/, v22);
    byte_40FD46E = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v119 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v28 = SummonHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(SummonHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v28 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                              System_Func_UserGachaHistoryEntity__long__TypeInfo,
                                                                              v23,
                                                                              v24,
                                                                              v25,
                                                                              v26);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v31,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2B6BEAC *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v32 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v32->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserGachaHistoryEntity__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_18D8824 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v40 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v39,
                                                                                         (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v40 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v118,
    v40,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v41 = 0;
  v42 = 0;
  v120 = *(System_Collections_Generic_List_Enumerator_T__o *)v118;
  v117 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v120,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v120.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6804/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v46 = v44;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B170D4();
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v49 = System_String__Format(v46, CreatedAtToString, 0LL);
    v54 = (SummonHistoryListViewItem_o *)sub_B170CC(SummonHistoryListViewItem_TypeInfo, v50, v51, v52, v53);
    SummonHistoryListViewItem___ctor(v54, v42, v49, 1, 0LL);
    if ( !itemList )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B170D4();
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v56;
        p_offset += 4;
        if ( v56 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AAFEF8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v59 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v60 = v42 + 1;
    while ( 1 )
    {
      if ( !v59 )
        sub_B170D4();
      v61 = *(_QWORD *)v59;
      if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
            goto LABEL_35;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_35:
        v64 = sub_AAFEF8(v59, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v59, *(_QWORD *)(v64 + 8)) & 1) == 0 )
        break;
      v65 = *(_QWORD *)v59;
      if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
      {
        v66 = 0LL;
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v67 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v66;
          v67 += 4;
          if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
            goto LABEL_42;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_42:
        v68 = sub_AAFEF8(v59, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v69 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v59, *(_QWORD *)(v68 + 8));
      if ( !v69 )
        sub_B170D4();
      if ( !v69[16] )
      {
        v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v117->fields.itemList;
        v71 = v60++;
        v72 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v69 + 360LL))(
                                   v69,
                                   *(_QWORD *)(*(_QWORD *)v69 + 368LL));
        v77 = (SummonHistoryListViewItem_o *)sub_B170CC(SummonHistoryListViewItem_TypeInfo, v73, v74, v75, v76);
        SummonHistoryListViewItem___ctor(v77, v71, v72, 0, 0LL);
        if ( !v70 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v70,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v118[4 * v41 + 24] = 204;
    v78 = ++v119;
    v79 = *(_QWORD *)v59;
    if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
    {
      v80 = 0LL;
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
          goto LABEL_52;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_52:
      v82 = sub_AAFEF8(v59, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v82)(v59, *(_QWORD *)(v82 + 8));
    if ( v78 )
    {
      v83 = v78;
      if ( *(_DWORD *)&v118[4 * v78 + 20] == 204 )
      {
        v83 = v78 - 1;
        v119 = v78 - 1;
      }
    }
    else
    {
      v83 = 0;
    }
    v84 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v85 = 0LL;
      v86 = &v84->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v86 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v85;
        v86 += 4;
        if ( v85 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v87 = (__int64)&v84->vtable[*v86].method;
    }
    else
    {
LABEL_62:
      v87 = sub_AAFEF8(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v88 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v87)(current, *(_QWORD *)(v87 + 8));
    v89 = v60;
LABEL_65:
    this = v117;
    v42 = v89;
    if ( !v88 )
      sub_B170D4();
    while ( 1 )
    {
      v90 = *(_QWORD *)v88;
      if ( *(_WORD *)(*(_QWORD *)v88 + 298LL) )
      {
        v91 = 0LL;
        v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v91;
          v92 += 4;
          if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v88 + 298LL) )
            goto LABEL_70;
        }
        v93 = v90 + 16LL * *v92 + 312;
      }
      else
      {
LABEL_70:
        v93 = sub_AAFEF8(v88, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v88, *(_QWORD *)(v93 + 8)) & 1) == 0 )
        break;
      v94 = *(_QWORD *)v88;
      if ( *(_WORD *)(*(_QWORD *)v88 + 298LL) )
      {
        v95 = 0LL;
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v96 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v95;
          v96 += 4;
          if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)v88 + 298LL) )
            goto LABEL_77;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_77:
        v97 = sub_AAFEF8(v88, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v98 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v88, *(_QWORD *)(v97 + 8));
      v99 = v98;
      if ( !v98 )
        sub_B170D4();
      if ( v98->fields.gachaExtraGiftBonusType && v98->fields.gachaExtraGiftResultType != 3 )
      {
        v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v117->fields.itemList;
        v101 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v98->klass->vtable._3_ToString.method)(
                                    v98,
                                    v98->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v99, 0LL);
        objectId = v99->fields.objectId;
        v104 = TitleToString;
        v109 = (SummonHistoryListViewItem_o *)sub_B170CC(SummonHistoryListViewItem_TypeInfo, v105, v106, v107, v108);
        SummonHistoryListViewItem___ctor_28733976(v109, v89, v101, v104, objectId, 2, 0LL);
        if ( !v100 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v100,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v89;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v118[4 * v83 + 24] = 308;
    v110 = ++v119;
    v111 = *(_QWORD *)v88;
    if ( *(_WORD *)(*(_QWORD *)v88 + 298LL) )
    {
      v112 = 0LL;
      v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
      {
        ++v112;
        v113 += 4;
        if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v88 + 298LL) )
          goto LABEL_88;
      }
      v114 = v111 + 16LL * *v113 + 312;
    }
    else
    {
LABEL_88:
      v114 = sub_AAFEF8(v88, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v114)(v88, *(_QWORD *)(v114 + 8));
    v41 = 0;
    if ( v110 )
    {
      v41 = v110;
      if ( *(_DWORD *)&v118[4 * v110 + 20] == 308 )
      {
        v41 = v110 - 1;
        v119 = v110 - 1;
      }
    }
  }
  *(_DWORD *)&v118[4 * v41 + 24] = 336;
  v115 = ++v119;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v120,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v115 && *(_DWORD *)&v118[4 * v115 + 20] == 336 )
    v119 = v115 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B170D4();
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

  if ( (byte_40FD46F & 1) == 0 )
  {
    sub_B16FFC(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_40FD46F = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  SummonHistoryListViewObject__SetupDisp((SummonHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall SummonHistoryListViewManager__get_ListViewHeight(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t ItemSum; // w0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_B170D4();
  return seed->fields.arrangementPich.fields.y * (float)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7A8F & 1) == 0 )
  {
    sub_B16FFC(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_40F7A8F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SummonHistoryListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.userGachaHistoryId;
}