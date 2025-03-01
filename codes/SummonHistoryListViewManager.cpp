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
  Il2CppObject *Master_object; // x0
  SummonHistoryListViewManager___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_T__TResult__o *_9__2_0; // x21
  Il2CppObject *v26; // x22
  struct SummonHistoryListViewManager___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w22
  Il2CppObject *current; // x20
  System_String_o *v39; // x0
  System_Collections_Generic_List_object__o *itemList; // x21
  System_String_o *v41; // x23
  Il2CppObject *object; // x0
  __int64 v43; // x1
  Il2CppObject *CreatedAtToString; // x1
  System_String_o *v45; // x24
  SummonHistoryListViewItem_o *v46; // x23
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  Il2CppClass *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  _DWORD *v65; // x0
  __int64 v66; // x1
  _DWORD *v67; // x23
  int32_t v68; // w21
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  System_Collections_Generic_List_object__o *v77; // x22
  System_String_o *v78; // x25
  SummonHistoryListViewItem_o *v79; // x24
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  Il2CppClass *v96; // x8
  __int64 v97; // x9
  int32_t *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x20
  __int64 v102; // x8
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x0
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  UserGachaHistoryEntity_o *v110; // x0
  __int64 v111; // x1
  UserGachaHistoryEntity_o *v112; // x24
  System_Collections_Generic_List_object__o *v113; // x23
  System_String_o *v114; // x25
  System_String_o *TitleToString; // x0
  int32_t objectId; // w27
  System_String_o *v117; // x26
  SummonHistoryListViewItem_o *v118; // x24
  __int64 v119; // x0
  __int64 v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  __int64 v131; // x8
  __int64 v132; // x9
  int *v133; // x10
  __int64 v134; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BF9D43 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserGachaHistoryMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___, v4);
    sub_1C2E12C(&Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____, v6);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__,
      v7);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__,
      v8);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___get_Current__,
      v9);
    sub_1C2E12C(&System_Func_UserGachaHistoryEntity__long__TypeInfo, v10);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__, v16);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v17);
    sub_1C2E12C(&SummonHistoryListViewItem_TypeInfo, v18);
    sub_1C2E12C(&Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, v19);
    sub_1C2E12C(&SummonHistoryListViewManager___c_TypeInfo, v20);
    sub_1C2E12C(&StringLiteral_7039/*"GACHA_HISTORY_LIST_DATETIME"*/, v21);
    byte_4BF9D43 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserGachaHistoryMaster___);
  v23 = SummonHistoryListViewManager___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
  if ( !SummonHistoryListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonHistoryListViewManager___c_TypeInfo);
    v23 = SummonHistoryListViewManager___c_TypeInfo;
  }
  _9__2_0 = (System_Func_T__TResult__o *)v23->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = SummonHistoryListViewManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__2_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_UserGachaHistoryEntity__long__TypeInfo);
    System_Func_object__long____ctor(_9__2_0, v26, Method_SummonHistoryListViewManager___c__CreateList_b__2_0__, 0LL);
    static_fields = SummonHistoryListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_UserGachaHistoryEntity__long__o *)_9__2_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)_9__2_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__long_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__2_0,
                                                               (const MethodInfo_2FF630C *)Method_System_Linq_Enumerable_GroupBy_UserGachaHistoryEntity__long___);
  v35 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v34,
                                                       (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_IGrouping_long__UserGachaHistoryEntity____);
  if ( !v35 )
    goto LABEL_109;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    v35,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_IGrouping_long__UserGachaHistoryEntity___GetEnumerator__);
  v37 = 0;
  v137 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v137,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___MoveNext__) )
  {
    current = v137.fields._current;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_7039/*"GACHA_HISTORY_LIST_DATETIME"*/, 0LL);
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    v41 = v39;
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)current,
               (const MethodInfo_2FF280C *)Method_System_Linq_Enumerable_First_UserGachaHistoryEntity___);
    if ( !object )
      sub_1C2E388(0LL, v43);
    CreatedAtToString = (Il2CppObject *)UserGachaHistoryEntity__get_CreatedAtToString(
                                          (UserGachaHistoryEntity_o *)object,
                                          0LL);
    v45 = System_String__Format(v41, CreatedAtToString, 0LL);
    v46 = (SummonHistoryListViewItem_o *)sub_1C2E378(SummonHistoryListViewItem_TypeInfo);
    SummonHistoryListViewItem___ctor(v46, v37, v45, 1, 0LL);
    if ( !itemList )
      sub_1C2E388(v47, v48);
    items = itemList->fields._items;
    v56 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      sub_1C2E388(v47, v48);
    size = itemList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v46,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &items->obj.klass + size;
      itemList->fields._size = size + 1;
      v58[4] = (Il2CppClass *)v46;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v46, v49, v50, v51, v52, v53, v54);
    }
    if ( !current )
      sub_1C2E388(v59, v60);
    klass = current->klass;
    v62 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v62;
        p_offset += 4;
        if ( !v62 )
          goto LABEL_27;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_27:
      p_method = sub_1C8010C(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v65 = (_DWORD *)(*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))p_method)(current, *(_QWORD *)(p_method + 8));
    v67 = v65;
    v68 = v37 + 1;
    while ( 1 )
    {
      if ( !v67 )
        sub_1C2E388(v65, v66);
      v69 = *(_QWORD *)v67;
      v70 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v70;
          v71 += 4;
          if ( !v70 )
            goto LABEL_35;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_35:
        v72 = sub_1C8010C(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))v72)(v67, *(_QWORD *)(v72 + 8)) & 1) == 0 )
        break;
      v73 = *(_QWORD *)v67;
      v74 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v75 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v74;
          v75 += 4;
          if ( !v74 )
            goto LABEL_42;
        }
        v76 = v73 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_42:
        v76 = sub_1C8010C(v67, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v65 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))v76)(v67, *(_QWORD *)(v76 + 8));
      if ( !v65 )
        sub_1C2E388(0LL, v66);
      if ( !v65[16] )
      {
        v77 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v78 = (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v65 + 360LL))(
                                   v65,
                                   *(_QWORD *)(*(_QWORD *)v65 + 368LL));
        v79 = (SummonHistoryListViewItem_o *)sub_1C2E378(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor(v79, v68, v78, 0, 0LL);
        if ( !v77 )
          sub_1C2E388(v80, v81);
        v88 = v77->fields._items;
        v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v77->fields._version;
        if ( !v88 )
          sub_1C2E388(v80, v81);
        v90 = v77->fields._size;
        if ( (unsigned int)v90 >= v88->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v77,
            (Il2CppObject *)v79,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &v88->obj.klass + v90;
          v77->fields._size = v90 + 1;
          v91[4] = (Il2CppClass *)v79;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v79, v82, v83, v84, v85, v86, v87);
        }
        ++v68;
      }
    }
    v92 = *(_QWORD *)v67;
    v93 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
      {
        --v93;
        v94 += 4;
        if ( !v93 )
          goto LABEL_56;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_56:
      v95 = sub_1C8010C(v67, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD))v95)(v67, *(_QWORD *)(v95 + 8));
    v96 = current->klass;
    v97 = *(unsigned __int16 *)(&current->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&current->klass->_2.bitflags2 + 3) )
    {
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__c **)v98 - 1) != System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_62;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_62:
      v99 = sub_1C8010C(current, System_Collections_Generic_IEnumerable_UserGachaHistoryEntity__TypeInfo, 0LL);
    }
    v101 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD))v99)(current, *(_QWORD *)(v99 + 8));
    if ( !v101 )
      sub_1C2E388(0LL, v100);
    v37 = v68;
    while ( 1 )
    {
      v102 = *(_QWORD *)v101;
      v103 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
      {
        v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v104 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v103;
          v104 += 4;
          if ( !v103 )
            goto LABEL_70;
        }
        v105 = v102 + 16LL * *v104 + 312;
      }
      else
      {
LABEL_70:
        v105 = sub_1C8010C(v101, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8)) & 1) == 0 )
        break;
      v106 = *(_QWORD *)v101;
      v107 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
      {
        v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__c **)v108 - 1) != System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo )
        {
          --v107;
          v108 += 4;
          if ( !v107 )
            goto LABEL_77;
        }
        v109 = v106 + 16LL * *v108 + 312;
      }
      else
      {
LABEL_77:
        v109 = sub_1C8010C(v101, System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__TypeInfo, 0LL);
      }
      v110 = (UserGachaHistoryEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v109)(v101, *(_QWORD *)(v109 + 8));
      v112 = v110;
      if ( !v110 )
        sub_1C2E388(0LL, v111);
      if ( v110->fields.gachaExtraGiftBonusType && v110->fields.gachaExtraGiftResultType != 3 )
      {
        v113 = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v114 = (System_String_o *)((__int64 (__fastcall *)(UserGachaHistoryEntity_o *, Il2CppMethodPointer))v110->klass->vtable._3_ToString.method)(
                                    v110,
                                    v110->klass->vtable._4_get_PrimaryKey.methodPtr);
        TitleToString = UserGachaHistoryEntity__get_TitleToString(v112, 0LL);
        objectId = v112->fields.objectId;
        v117 = TitleToString;
        v118 = (SummonHistoryListViewItem_o *)sub_1C2E378(SummonHistoryListViewItem_TypeInfo);
        SummonHistoryListViewItem___ctor_34145804(v118, v37, v114, v117, objectId, 2, 0LL);
        if ( !v113 )
          sub_1C2E388(v119, v120);
        v127 = v113->fields._items;
        v128 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v113->fields._version;
        if ( !v127 )
          sub_1C2E388(v119, v120);
        v129 = v113->fields._size;
        if ( (unsigned int)v129 >= v127->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v113,
            (Il2CppObject *)v118,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
        }
        else
        {
          v130 = &v127->obj.klass + v129;
          v113->fields._size = v129 + 1;
          v130[4] = (Il2CppClass *)v118;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v130 + 4), (int64_t)v118, v121, v122, v123, v124, v125, v126);
        }
        ++v37;
      }
    }
    v131 = *(_QWORD *)v101;
    v132 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
    {
      v133 = (int *)(*(_QWORD *)(v131 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v133 - 1) != System_IDisposable_TypeInfo )
      {
        --v132;
        v133 += 4;
        if ( !v132 )
          goto LABEL_92;
      }
      v134 = v131 + 16LL * *v133 + 312;
    }
    else
    {
LABEL_92:
      v134 = sub_1C8010C(v101, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v134)(v101, *(_QWORD *)(v134 + 8));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_IGrouping_long__UserGachaHistoryEntity___Dispose__);
  sort = this->fields.sort;
  if ( !sort )
LABEL_109:
    sub_1C2E388(v35, v36);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall SummonHistoryListViewManager__SetObjectItem(
        SummonHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BF9D44 & 1) == 0 )
  {
    this = (SummonHistoryListViewManager_o *)sub_1C2E12C(&SummonHistoryListViewObject_TypeInfo, obj);
    byte_4BF9D44 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(SummonHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (SummonHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != SummonHistoryListViewObject_TypeInfo )
  {
    sub_1C2E388(this, obj);
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
    sub_1C2E388(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


void __fastcall SummonHistoryListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BF9D45 & 1) == 0 )
  {
    sub_1C2E12C(&SummonHistoryListViewManager___c_TypeInfo, v1);
    byte_4BF9D45 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SummonHistoryListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonHistoryListViewManager___c_TypeInfo->static_fields->__9 = (struct SummonHistoryListViewManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)SummonHistoryListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
  return entity->fields.userGachaHistoryId;
}