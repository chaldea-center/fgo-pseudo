void __fastcall SummonHistoryListViewManager___ctor(SummonHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewManager__CreateList(
        SummonHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  SummonHistoryListViewManager___c_c *v4; // x8
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__2_0; // x21
  Il2CppObject *v7; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v16; // x0
  __int64 v17; // x1
  int v18; // w27
  int32_t v19; // w25
  Il2CppObject *current; // x20
  System_String_o *v21; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_String_o *v23; // x23
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v25; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_Int32_array **v27; // x24
  __int64 v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x1
  Il2CppClass *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v43; // x0
  __int64 v44; // x1
  _DWORD *v45; // x23
  int v46; // w26
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x22
  int32_t v56; // w21
  System_Int32_array **v57; // x25
  __int64 v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x1
  int v67; // w27
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  int v72; // w21
  Il2CppClass *v73; // x8
  unsigned __int64 v74; // x10
  int32_t *v75; // x11
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x20
  int32_t v80; // w22
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  UserGachaHistoryEntity_o *v89; // x0
  __int64 v90; // x1
  UserGachaHistoryEntity_o *v91; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x23
  System_String_o *v93; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v96; // x26
  SummonHistoryListViewItem_o *v97; // x24
  const MethodInfo *v98; // x6
  __int64 v99; // x0
  __int64 v100; // x1
  int v101; // w23
  __int64 v102; // x8
  unsigned __int64 v103; // x10
  int *v104; // x11
  __int64 v105; // x0
  int v106; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v108; // [xsp+10h] [xbp-A0h]
  _BYTE v109[36]; // [xsp+18h] [xbp-98h] BYREF
  int v110; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_438F372 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_B775C4(&Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    sub_B775C4(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&SummonHistoryListViewItem_TypeInfo);
    sub_B775C4(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_B775C4(&SummonHistoryListViewManager___c_TypeInfo);
    sub_B775C4(&StringLiteral_6985/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_438F372 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  v110 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v4 = SummonHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(SummonHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v4 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B77694(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v7,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_29EA630 *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v8 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserGachaHistoryEntity__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1D323B8 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v15,
                                                                                         (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v16 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v109,
    v16,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v18 = 0;
  v19 = 0;
  v111 = *(System_Collections_Generic_List_Enumerator_T__o *)v109;
  v108 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v111,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v111.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6985/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v23 = v21;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B7769C(0LL, v25);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v27 = (System_Int32_array **)System_String__Format(v23, CreatedAtToString, 0LL);
    v28 = sub_B77694(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_24167012((ListViewItem_o *)v28, v19, 0LL);
    *(_QWORD *)(v28 + 112) = v27;
    sub_B77560((BattleServantConfConponent_o *)(v28 + 112), v27, v29, v30, v31, v32, v33, v34);
    *(_DWORD *)(v28 + 120) = 1;
    if ( !itemList )
      sub_B7769C(v35, v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B7769C(v37, v38);
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_B0F4C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v43 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v45 = v43;
    v46 = v19 + 1;
    while ( 1 )
    {
      if ( !v45 )
        sub_B7769C(v43, v44);
      v47 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_35;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_35:
        v50 = sub_B0F4C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v50)(v45, *(_QWORD *)(v50 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v53 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_42;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_42:
        v54 = sub_B0F4C0(v45, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v43 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
      if ( !v43 )
        sub_B7769C(0LL, v44);
      if ( !v43[16] )
      {
        v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108->fields.itemList;
        v56 = v46++;
        v57 = (System_Int32_array **)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v43 + 360LL))(
                                       v43,
                                       *(_QWORD *)(*(_QWORD *)v43 + 368LL));
        v58 = sub_B77694(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_24167012((ListViewItem_o *)v58, v56, 0LL);
        *(_QWORD *)(v58 + 112) = v57;
        sub_B77560((BattleServantConfConponent_o *)(v58 + 112), v57, v59, v60, v61, v62, v63, v64);
        *(_DWORD *)(v58 + 120) = 0;
        if ( !v55 )
          sub_B7769C(v65, v66);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v55,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v109[4 * v18 + 24] = 204;
    v67 = ++v110;
    v68 = *(_QWORD *)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
    {
      v69 = 0LL;
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
      {
        ++v69;
        v70 += 4;
        if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
          goto LABEL_52;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_52:
      v71 = sub_B0F4C0(v45, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v71)(v45, *(_QWORD *)(v71 + 8));
    if ( v67 )
    {
      v72 = v67;
      if ( *(_DWORD *)&v109[4 * v67 + 20] == 204 )
      {
        v72 = v67 - 1;
        v110 = v67 - 1;
      }
    }
    else
    {
      v72 = 0;
    }
    v73 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v74 = 0LL;
      v75 = &v73->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v75 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v74;
        v75 += 4;
        if ( v74 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v76 = (__int64)&v73->vtable[*v75].method;
    }
    else
    {
LABEL_62:
      v76 = sub_B0F4C0(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v77 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v76)(current, *(_QWORD *)(v76 + 8));
    v79 = v77;
    v80 = v46;
LABEL_65:
    this = v108;
    v19 = v80;
    if ( !v79 )
      sub_B7769C(v77, v78);
    while ( 1 )
    {
      v81 = *(_QWORD *)v79;
      if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
      {
        v82 = 0LL;
        v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v83 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v82;
          v83 += 4;
          if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
            goto LABEL_70;
        }
        v84 = v81 + 16LL * *v83 + 312;
      }
      else
      {
LABEL_70:
        v84 = sub_B0F4C0(v79, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v79, *(_QWORD *)(v84 + 8)) & 1) == 0 )
        break;
      v85 = *(_QWORD *)v79;
      if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
      {
        v86 = 0LL;
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v87 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v86;
          v87 += 4;
          if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
            goto LABEL_77;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_77:
        v88 = sub_B0F4C0(v79, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v89 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v79, *(_QWORD *)(v88 + 8));
      v91 = v89;
      if ( !v89 )
        sub_B7769C(0LL, v90);
      if ( v89->fields.gachaExtraGiftBonusType && v89->fields.gachaExtraGiftResultType != 3 )
      {
        v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108->fields.itemList;
        v93 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v89->klass->vtable._3_ToString.method)(
                                   v89,
                                   v89->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v91, 0LL);
        objectId = v91->fields.objectId;
        v96 = TitleToString;
        v97 = (SummonHistoryListViewItem_o *)sub_B77694(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_33141312(v97, v80, v93, v96, objectId, 2, v98);
        if ( !v92 )
          sub_B7769C(v99, v100);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v92,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v80;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v109[4 * v72 + 24] = 308;
    v101 = ++v110;
    v102 = *(_QWORD *)v79;
    if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
    {
      v103 = 0LL;
      v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
      {
        ++v103;
        v104 += 4;
        if ( v103 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
          goto LABEL_88;
      }
      v105 = v102 + 16LL * *v104 + 312;
    }
    else
    {
LABEL_88:
      v105 = sub_B0F4C0(v79, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v105)(v79, *(_QWORD *)(v105 + 8));
    v18 = 0;
    if ( v101 )
    {
      v18 = v101;
      if ( *(_DWORD *)&v109[4 * v101 + 20] == 308 )
      {
        v18 = v101 - 1;
        v110 = v101 - 1;
      }
    }
  }
  *(_DWORD *)&v109[4 * v18 + 24] = 336;
  v106 = ++v110;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v111,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v106 && *(_DWORD *)&v109[4 * v106 + 20] == 336 )
    v110 = v106 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B7769C(v16, v17);
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

  if ( (byte_438F373 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_B775C4(&SummonHistoryListViewObject_TypeInfo);
    byte_438F373 = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
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
    sub_B7769C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_43886C5 & 1) == 0 )
  {
    sub_B775C4(&SummonHistoryListViewManager___c_TypeInfo);
    byte_43886C5 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return entity->fields.userGachaHistoryId;
}