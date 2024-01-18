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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  SummonHistoryListViewManager___c_c *v24; // x8
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__2_0; // x21
  Il2CppObject *v27; // x22
  struct SummonHistoryListViewManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v36; // x0
  __int64 v37; // x1
  int v38; // w27
  int32_t v39; // w25
  Il2CppObject *current; // x20
  System_String_o *v41; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  System_String_o *v43; // x23
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v45; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v47; // x24
  SummonHistoryListViewItem_o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  Il2CppClass *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  _DWORD *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  _DWORD *v61; // x23
  int v62; // w26
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x3
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x22
  int32_t v73; // w21
  System_String_o *v74; // x25
  SummonHistoryListViewItem_o *v75; // x24
  __int64 v76; // x0
  __int64 v77; // x1
  int v78; // w27
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x3
  int v84; // w21
  Il2CppClass *v85; // x8
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x3
  __int64 v92; // x20
  int32_t v93; // w22
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  __int64 v98; // x3
  __int64 v99; // x8
  unsigned __int64 v100; // x10
  int *v101; // x11
  __int64 v102; // x0
  UserGachaHistoryEntity_o *v103; // x0
  __int64 v104; // x1
  UserGachaHistoryEntity_o *v105; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x23
  System_String_o *v107; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v110; // x26
  SummonHistoryListViewItem_o *v111; // x24
  __int64 v112; // x0
  __int64 v113; // x1
  int v114; // w23
  __int64 v115; // x8
  unsigned __int64 v116; // x10
  int *v117; // x11
  __int64 v118; // x0
  int v119; // w19
  struct ListViewSort_o *sort; // x8
  SummonHistoryListViewManager_o *v121; // [xsp+10h] [xbp-A0h]
  _BYTE v122[36]; // [xsp+18h] [xbp-98h] BYREF
  int v123; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_418ADF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_B2C35C(&Method_System_Func_UserGachaHistoryEntity__long___ctor__, v10);
    sub_B2C35C(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&SummonHistoryListViewItem_TypeInfo, v19);
    sub_B2C35C(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v20);
    sub_B2C35C(&SummonHistoryListViewManager___c_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_6832/*"GACHA_HISTORY_LIST_DATETIME"*/, v22);
    byte_418ADF2 = 1;
  }
  memset(&v124, 0, sizeof(v124));
  v123 = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v24 = SummonHistoryListViewManager___c_TypeInfo;
  if ( (BYTE3(SummonHistoryListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v24 = SummonHistoryListViewManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__2_0,
      v27,
      Method_SummonHistoryListViewManager___c__CreateList_b__2_0__,
      (const MethodInfo_2712F70 *)Method_System_Func_UserGachaHistoryEntity__long___ctor__);
    v28 = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    v28->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_UserGachaHistoryEntity__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_WarQuestSelectionMaster,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_1A91510 *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v36 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v35,
                                                                                         (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v36 )
    goto LABEL_107;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v122,
    v36,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v38 = 0;
  v39 = 0;
  v124 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
  v121 = this;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v124,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v124.fields.current;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6832/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = this->fields.itemList;
    v43 = v41;
    StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)current,
                                                      (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
      sub_B2C434(0LL, v45);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)StonePurchaseNotificationMenu_DialogOpenQueue,
                                          0LL);
    v47 = System_String__Format(v43, CreatedAtToString, 0LL);
    v48 = (SummonHistoryListViewItem_o *)sub_B2C42C(SummonHistoryListViewItem_TypeInfo);
    SummonHistoryListViewItem___ctor(v48, v39, v47, 1, 0LL);
    if ( !itemList )
      sub_B2C434(v49, v50);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( !current )
      sub_B2C434(v51, v52);
    klass = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_AC5258(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v53);
    }
    v58 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v61 = v58;
    v62 = v39 + 1;
    while ( 1 )
    {
      if ( !v61 )
        sub_B2C434(v58, v59);
      v63 = *(_QWORD *)v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v64 = 0LL;
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v64;
          v65 += 4;
          if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_35;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_35:
        v66 = sub_AC5258(v61, System_Collections_IEnumerator_TypeInfo, 0LL, v60);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v66)(v61, *(_QWORD *)(v66 + 8)) & 1) == 0 )
        break;
      v68 = *(_QWORD *)v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v69 = 0LL;
        v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v70 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v69;
          v70 += 4;
          if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_42;
        }
        v71 = v68 + 16LL * *v70 + 312;
      }
      else
      {
LABEL_42:
        v71 = sub_AC5258(v61, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v67);
      }
      v58 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v71)(v61, *(_QWORD *)(v71 + 8));
      if ( !v58 )
        sub_B2C434(0LL, v59);
      if ( !v58[16] )
      {
        v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121->fields.itemList;
        v73 = v62++;
        v74 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v58 + 360LL))(
                                   v58,
                                   *(_QWORD *)(*(_QWORD *)v58 + 368LL));
        v75 = (SummonHistoryListViewItem_o *)sub_B2C42C(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor(v75, v73, v74, 0, 0LL);
        if ( !v72 )
          sub_B2C434(v76, v77);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v72,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
    }
    *(_DWORD *)&v122[4 * v38 + 24] = 204;
    v78 = ++v123;
    v79 = *(_QWORD *)v61;
    if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
    {
      v80 = 0LL;
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
          goto LABEL_52;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_52:
      v82 = sub_AC5258(v61, System_IDisposable_TypeInfo, 0LL, v67);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v82)(v61, *(_QWORD *)(v82 + 8));
    if ( v78 )
    {
      v84 = v78;
      if ( *(_DWORD *)&v122[4 * v78 + 20] == 204 )
      {
        v84 = v78 - 1;
        v123 = v78 - 1;
      }
    }
    else
    {
      v84 = 0;
    }
    v85 = current->klass;
    if ( *(_WORD *)&current->klass->_2.bitflags1 )
    {
      v86 = 0LL;
      v87 = &v85->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v87 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        ++v86;
        v87 += 4;
        if ( v86 >= *(unsigned __int16 *)&current->klass->_2.bitflags1 )
          goto LABEL_62;
      }
      v88 = (__int64)&v85->vtable[*v87].method;
    }
    else
    {
LABEL_62:
      v88 = sub_AC5258(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL, v83);
    }
    v89 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v88)(current, *(_QWORD *)(v88 + 8));
    v92 = v89;
    v93 = v62;
LABEL_65:
    this = v121;
    v39 = v93;
    if ( !v92 )
      sub_B2C434(v89, v90);
    while ( 1 )
    {
      v94 = *(_QWORD *)v92;
      if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
      {
        v95 = 0LL;
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v96 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v95;
          v96 += 4;
          if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
            goto LABEL_70;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_70:
        v97 = sub_AC5258(v92, System_Collections_IEnumerator_TypeInfo, 0LL, v91);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v92, *(_QWORD *)(v97 + 8)) & 1) == 0 )
        break;
      v99 = *(_QWORD *)v92;
      if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
      {
        v100 = 0LL;
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v101 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          ++v100;
          v101 += 4;
          if ( v100 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
            goto LABEL_77;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_77:
        v102 = sub_AC5258(v92, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL, v98);
      }
      v103 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v102)(v92, *(_QWORD *)(v102 + 8));
      v105 = v103;
      if ( !v103 )
        sub_B2C434(0LL, v104);
      if ( v103->fields.gachaExtraGiftBonusType && v103->fields.gachaExtraGiftResultType != 3 )
      {
        v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121->fields.itemList;
        v107 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v103->klass->vtable._3_ToString.method)(
                                    v103,
                                    v103->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v105, 0LL);
        objectId = v105->fields.objectId;
        v110 = TitleToString;
        v111 = (SummonHistoryListViewItem_o *)sub_B2C42C(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_28706476(v111, v93, v107, v110, objectId, 2, 0LL);
        if ( !v106 )
          sub_B2C434(v112, v113);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v106,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v111,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        ++v93;
        goto LABEL_65;
      }
    }
    *(_DWORD *)&v122[4 * v84 + 24] = 308;
    v114 = ++v123;
    v115 = *(_QWORD *)v92;
    if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
    {
      v116 = 0LL;
      v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v117 - 1) != System_IDisposable_TypeInfo )
      {
        ++v116;
        v117 += 4;
        if ( v116 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
          goto LABEL_88;
      }
      v118 = v115 + 16LL * *v117 + 312;
    }
    else
    {
LABEL_88:
      v118 = sub_AC5258(v92, System_IDisposable_TypeInfo, 0LL, v98);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v118)(v92, *(_QWORD *)(v118 + 8));
    v38 = 0;
    if ( v114 )
    {
      v38 = v114;
      if ( *(_DWORD *)&v122[4 * v114 + 20] == 308 )
      {
        v38 = v114 - 1;
        v123 = v114 - 1;
      }
    }
  }
  *(_DWORD *)&v122[4 * v38 + 24] = 336;
  v119 = ++v123;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v124,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  if ( v119 && *(_DWORD *)&v122[4 * v119 + 20] == 336 )
    v123 = v119 - 1;
  sort = this->fields.sort;
  if ( !sort )
LABEL_107:
    sub_B2C434(v36, v37);
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

  if ( (byte_418ADF3 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_B2C35C(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_418ADF3 = 1;
  }
  if ( !obj
    || (v5 = *(&SummonHistoryListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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
    sub_B2C434(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_41847C0 & 1) == 0 )
  {
    sub_B2C35C(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_41847C0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return entity->fields.userGachaHistoryId;
}