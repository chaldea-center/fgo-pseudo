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
  __int64 v39; // x3
  Il2CppClass *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  _DWORD *v47; // x23
  int v48; // w26
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x22
  int32_t v59; // w21
  System_Int32_array **v60; // x25
  __int64 v61; // x24
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // w27
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x3
  int v76; // w21
  Il2CppClass *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x3
  __int64 v84; // x20
  int32_t v85; // w22
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  __int64 v90; // x3
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  UserGachaHistoryEntity_o *v95; // x0
  __int64 v96; // x1
  UserGachaHistoryEntity_o *v97; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x23
  System_String_o *v99; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v102; // x26
  SummonHistoryListViewItem_o *v103; // x24
  const MethodInfo *v104; // x6
  __int64 v105; // x0
  __int64 v106; // x1
  int v107; // w23
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  int *v110; // x11
  __int64 v111; // x0
  int v112; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v114; // [xsp+10h] [xbp-A0h]
  _BYTE v115[36]; // [xsp+18h] [xbp-98h] BYREF
  int v116; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v117; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42B3E99 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserGachaHistoryMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__);
    sub_B52984(&Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    sub_B52984(&System_Func_UserGachaHistoryEntity__long__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&SummonHistoryListViewItem_TypeInfo);
    sub_B52984(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__);
    sub_B52984(&SummonHistoryListViewManager___c_TypeInfo);
    sub_B52984(&StringLiteral_6879/*"GACHA_HISTORY_LIST_DATETIME"*/);
    byte_42B3E99 = 1;
  }
  memset(&v117, 0, sizeof(v117));
  v116 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
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
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B52A54(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v7,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2BCA428 *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v8 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B63D4C *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v16 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v15,
                                                                                         (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v16 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v115,
    v16,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v18 = 0;
  v19 = 0;
  v117 = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
  v114 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v117,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v117.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6879/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v23 = v21;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_1B61EC8 *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B52A5C(0LL, v25);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v27 = (System_Int32_array **)System_String__Format(v23, CreatedAtToString, 0LL);
    v28 = sub_B52A54(SummonHistoryListViewItem_TypeInfo);
    ListViewItem___ctor_23532700((ListViewItem_o *)v28, v19, 0LL);
    *(_QWORD *)(v28 + 112) = v27;
    sub_B52920((BattleServantConfConponent_o *)(v28 + 112), v27, v29, v30, v31, v32, v33, v34);
    *(_DWORD *)(v28 + 120) = 1;
    if ( !itemList )
      sub_B52A5C(v35, v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B52A5C(v37, v38);
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AEB880(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v39);
    }
    v44 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v47 = v44;
    v48 = v19 + 1;
    while ( 1 )
    {
      if ( !v47 )
        sub_B52A5C(v44, v45);
      v49 = *(_QWORD *)v47;
      if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
            goto LABEL_35;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_35:
        v52 = sub_AEB880(v47, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v52)(v47, *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v47;
      if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
      {
        v55 = 0LL;
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v55;
          v56 += 4;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
            goto LABEL_42;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_42:
        v57 = sub_AEB880(v47, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v53);
      }
      v44 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v57)(v47, *(_QWORD *)(v57 + 8));
      if ( !v44 )
        sub_B52A5C(0LL, v45);
      if ( !v44[16] )
      {
        v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114->fields.itemList;
        v59 = v48++;
        v60 = (System_Int32_array **)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v44 + 360LL))(
                                       v44,
                                       *(_QWORD *)(*(_QWORD *)v44 + 368LL));
        v61 = sub_B52A54(SummonHistoryListViewItem_TypeInfo);
        ListViewItem___ctor_23532700((ListViewItem_o *)v61, v59, 0LL);
        *(_QWORD *)(v61 + 112) = v60;
        sub_B52920((BattleServantConfConponent_o *)(v61 + 112), v60, v62, v63, v64, v65, v66, v67);
        *(_DWORD *)(v61 + 120) = 0;
        if ( !v58 )
          sub_B52A5C(v68, v69);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v58,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v115[4 * v18 + 24] = 204;
    v70 = ++v116;
    v71 = *(_QWORD *)v47;
    if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
          goto LABEL_52;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_52:
      v74 = sub_AEB880(v47, System_IDisposable_TypeInfo, 0LL, v53);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v74)(v47, *(_QWORD *)(v74 + 8));
    if ( v70 )
    {
      v76 = v70;
      if ( *(_DWORD *)&v115[4 * v70 + 20] == 204 )
      {
        v76 = v70 - 1;
        v116 = v70 - 1;
      }
    }
    else
    {
      v76 = 0;
    }
    v77 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v78 = 0LL;
      v79 = &v77->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v79 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v80 = (__int64)&v77->vtable[*v79].method;
    }
    else
    {
LABEL_62:
      v80 = sub_AEB880(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v75);
    }
    v81 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v80)(current, *(_QWORD *)(v80 + 8));
    v84 = v81;
    v85 = v48;
LABEL_65:
    this = v114;
    v19 = v85;
    if ( !v84 )
      sub_B52A5C(v81, v82);
    while ( 1 )
    {
      v86 = *(_QWORD *)v84;
      if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
      {
        v87 = 0LL;
        v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v87;
          v88 += 4;
          if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
            goto LABEL_70;
        }
        v89 = v86 + 16LL * *v88 + 312;
      }
      else
      {
LABEL_70:
        v89 = sub_AEB880(v84, System_Collections_IEnumerator_TypeInfo, 0LL, v83);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v84, *(_QWORD *)(v89 + 8)) & 1) == 0 )
        break;
      v91 = *(_QWORD *)v84;
      if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
      {
        v92 = 0LL;
        v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v93 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v92;
          v93 += 4;
          if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
            goto LABEL_77;
        }
        v94 = v91 + 16LL * *v93 + 312;
      }
      else
      {
LABEL_77:
        v94 = sub_AEB880(v84, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v90);
      }
      v95 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v84, *(_QWORD *)(v94 + 8));
      v97 = v95;
      if ( !v95 )
        sub_B52A5C(0LL, v96);
      if ( v95->fields.gachaExtraGiftBonusType && v95->fields.gachaExtraGiftResultType != 3 )
      {
        v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v114->fields.itemList;
        v99 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v95->klass->vtable._3_ToString.method)(
                                   v95,
                                   v95->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v97, 0LL);
        objectId = v97->fields.objectId;
        v102 = TitleToString;
        v103 = (SummonHistoryListViewItem_o *)sub_B52A54(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_32495576(v103, v85, v99, v102, objectId, 2, v104);
        if ( !v98 )
          sub_B52A5C(v105, v106);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v98,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v85;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v115[4 * v76 + 24] = 308;
    v107 = ++v116;
    v108 = *(_QWORD *)v84;
    if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
    {
      v109 = 0LL;
      v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
      {
        ++v109;
        v110 += 4;
        if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
          goto LABEL_88;
      }
      v111 = v108 + 16LL * *v110 + 312;
    }
    else
    {
LABEL_88:
      v111 = sub_AEB880(v84, System_IDisposable_TypeInfo, 0LL, v90);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v111)(v84, *(_QWORD *)(v111 + 8));
    v18 = 0;
    if ( v107 )
    {
      v18 = v107;
      if ( *(_DWORD *)&v115[4 * v107 + 20] == 308 )
      {
        v18 = v107 - 1;
        v116 = v107 - 1;
      }
    }
  }
  *(_DWORD *)&v115[4 * v18 + 24] = 336;
  v112 = ++v116;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v117,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v112 && *(_DWORD *)&v115[4 * v112 + 20] == 336 )
    v116 = v112 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B52A5C(v16, v17);
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

  if ( (byte_42B3E9A & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_B52984(&SummonHistoryListViewObject_TypeInfo);
    byte_42B3E9A = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
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
    sub_B52A5C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42ADD9C & 1) == 0 )
  {
    sub_B52984(&SummonHistoryListViewManager___c_TypeInfo);
    byte_42ADD9C = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return entity->fields.userGachaHistoryId;
}