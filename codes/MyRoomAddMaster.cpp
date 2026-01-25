void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEBBC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4CEEBBC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x23
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_List_ValueTuple_int__int__int___o *v4; // x21
  MyRoomAddMaster___c_c *v5; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *v6; // x22
  System_Func_object__bool__o *_9__13_0; // x24
  Il2CppObject *v8; // x25
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  __int64 v19; // x22
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x24
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 *v41; // x25
  __int64 v42; // x0
  __int64 v43; // x1
  _DWORD *v44; // x8
  int32_t v45; // w26
  int32_t v46; // w28
  int64_t v47; // x27
  _BOOL8 IsOpen; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  System_Func_ValueTuple_int__int__int___bool__o *v51; // x26
  _BOOL8 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  __int64 v55; // x8
  int32_t v56; // w24
  int32_t v57; // w25
  int32_t SortPriority; // w3
  const MethodInfo_3BA9D9C *v59; // x5
  __int64 v60; // x1
  System_ValueTuple_int__int__int__o v61; // x1 OVERLAPPED
  struct System_ValueTuple_int__int__int__array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Func_ValueTuple_int__int__int___long__o *v76; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x0
  MyRoomAddMaster___c_c *v78; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v79; // x20
  System_Func_ValueTuple_int__int__int___int__o *_9__13_3; // x21
  Il2CppObject *v81; // x22
  struct MyRoomAddMaster___c_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x8
  __int64 v90; // x20
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x20
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  struct System_Int32_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x8
  __int64 v109; // x9
  int *v110; // x10
  __int64 v111; // x0
  struct System_Int32_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  System_Collections_Generic_List_T__o *list; // [xsp+8h] [xbp-78h]
  System_ValueTuple_int__int__int__o item; // [xsp+10h] [xbp-70h] BYREF
  System_ValueTuple_int__int__int__o v119; // 0:x0.12

  if ( (byte_4CEEBC4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_ValueTuple_int__int__int____);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_ValueTuple_int__int__int____);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int___long___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int___int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Func_ValueTuple_int__int__int___long__TypeInfo);
    sub_1C7BAE8(&System_Func_ValueTuple_int__int__int___bool__TypeInfo);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_ValueTuple_int__int__int___int__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_int__int__int___Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ValueTuple_int__int__int____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ValueTuple_int__int__int___TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_3__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__);
    sub_1C7BAE8(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass13_1__DisplayBgGroupList_b__2__);
    sub_1C7BAE8(&MyRoomAddMaster___c__DisplayClass13_1_TypeInfo);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    sub_1C7BAE8(&Method_System_ValueTuple_int__int__int___ctor__);
    byte_4CEEBC4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_List_ValueTuple_int__int__int___o *)sub_1C7BD34(System_Collections_Generic_List_ValueTuple_int__int__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__int_____ctor(
    v4,
    (const MethodInfo_37ED914 *)Method_System_Collections_Generic_List_ValueTuple_int__int__int____ctor__);
  v5 = MyRoomAddMaster___c_TypeInfo;
  v6 = this->fields.list;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v5 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v5->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MyRoomAddMaster___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v8, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_MyRoomAddEntity__bool__o *)_9__13_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                             (System_Func_TSource__bool__o *)_9__13_0,
                             (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  if ( !Master_object )
    goto LABEL_107;
  v18 = *(_QWORD *)Master_object;
  v19 = Master_object;
  v20 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
  {
    v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_16;
    }
    v22 = v18 + 16LL * *v21 + 312;
  }
  else
  {
LABEL_16:
    v22 = sub_1C51E70(Master_object, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0);
  }
  list = (System_Collections_Generic_List_T__o *)v4;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C7BD40(0, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1C51E70(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = sub_1C7BD34(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    v30 = *(_QWORD *)v24;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MyRoomAddEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_30;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_30:
      v33 = sub_1C51E70(v24, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( !v29 )
      sub_1C7BD40(v34, v34);
    *(_QWORD *)(v29 + 16) = v34;
    v41 = (__int64 *)(v29 + 16);
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 16), v34, v35, v36, v37, v38, v39, v40);
    v44 = *(_DWORD **)(v29 + 16);
    if ( !v44 )
      sub_1C7BD40(v42, v43);
    v46 = v44[10];
    v45 = v44[11];
    v47 = (int)v44[12];
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v46, v45, v47, 0, 0, 0);
    if ( IsOpen )
    {
      v50 = *v41;
      if ( !*v41 )
        sub_1C7BD40(IsOpen, v49);
      if ( *(_QWORD *)(v50 + 56) <= Time && *(_QWORD *)(v50 + 64) >= Time )
      {
        v51 = (System_Func_ValueTuple_int__int__int___bool__o *)sub_1C7BD34(System_Func_ValueTuple_int__int__int___bool__TypeInfo);
        System_Func_ValueTuple_int__int__int___bool____ctor(
          v51,
          (Il2CppObject *)v29,
          Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__,
          0);
        v52 = BasicHelper__Any_ValueTuple_int__int__int__(
                (System_Collections_Generic_List_T__o *)v4,
                (System_Func_T__bool__o *)v51,
                (const MethodInfo_31592AC *)Method_BasicHelper_Any_ValueTuple_int__int__int____);
        if ( !v52 )
        {
          v55 = *v41;
          if ( !*v41 )
            sub_1C7BD40(v52, v53);
          v56 = *(_DWORD *)(v55 + 28);
          v57 = *(_DWORD *)(v55 + 32);
          SortPriority = MyRoomAddMaster__GetSortPriority(this, v56, Time, v54);
          item.fields.Item3 = 0;
          *(_QWORD *)&item.fields.Item1 = 0;
          *(_QWORD *)&v119.fields.Item1 = &item;
          v119.fields.Item3 = v56;
          System_ValueTuple_int__int__int____ctor(
            v119,
            v57,
            SortPriority,
            Method_System_ValueTuple_int__int__int___ctor__,
            v59);
          if ( !v4 )
            sub_1C7BD40(0, v60);
          v61 = item;
          items = v4->fields._items;
          v63 = Method_System_Collections_Generic_List_ValueTuple_int__int__int___Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C7BD40(v4, *(_QWORD *)&v61.fields.Item1);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__int____AddWithResize(
              v4,
              v61,
              *(const MethodInfo_37EE1A0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = v61;
          }
        }
      }
    }
  }
  v65 = *(_QWORD *)v24;
  v66 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_51;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_51:
    v68 = sub_1C51E70(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v24, *(_QWORD *)(v68 + 8));
  Master_object = System_Linq_Enumerable__Any_ValueTuple_int__int__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                    (const MethodInfo_317B7A4 *)Method_System_Linq_Enumerable_Any_ValueTuple_int__int__int____);
  if ( (Master_object & 1) != 0 )
  {
    v69 = sub_1C7BD34(MyRoomAddMaster___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v69, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( v69 )
    {
      *(_QWORD *)(v69 + 16) = Master_object;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v69 + 16), Master_object, v70, v71, v72, v73, v74, v75);
      v76 = (System_Func_ValueTuple_int__int__int___long__o *)sub_1C7BD34(System_Func_ValueTuple_int__int__int___long__TypeInfo);
      System_Func_ValueTuple_int__int__int___long____ctor(
        v76,
        (Il2CppObject *)v69,
        Method_MyRoomAddMaster___c__DisplayClass13_1__DisplayBgGroupList_b__2__,
        0);
      v77 = System_Linq_Enumerable__OrderByDescending_ValueTuple_int__int__int___long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)list,
              (System_Func_TSource__TKey__o *)v76,
              (const MethodInfo_319F328 *)Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int__int___long___);
      v78 = MyRoomAddMaster___c_TypeInfo;
      v79 = v77;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v78 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__13_3 = v78->static_fields->__9__13_3;
      if ( !_9__13_3 )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          v78 = MyRoomAddMaster___c_TypeInfo;
        }
        v81 = (Il2CppObject *)v78->static_fields->__9;
        _9__13_3 = (System_Func_ValueTuple_int__int__int___int__o *)sub_1C7BD34(System_Func_ValueTuple_int__int__int___int__TypeInfo);
        System_Func_ValueTuple_int__int__int___int____ctor(
          _9__13_3,
          v81,
          Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_3__,
          0);
        v82 = MyRoomAddMaster___c_TypeInfo->static_fields;
        v82->__9__13_3 = _9__13_3;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v82->__9__13_3, (int32_t)_9__13_3, v83, v84, v85, v86, v87, v88);
      }
      Master_object = (__int64)System_Linq_Enumerable__ThenByDescending_ValueTuple_int__int__int___int_(
                                 v79,
                                 (System_Func_TSource__TKey__o *)_9__13_3,
                                 (const MethodInfo_31AE8DC *)Method_System_Linq_Enumerable_ThenByDescending_ValueTuple_int__int__int___int___);
      if ( Master_object )
      {
        v89 = *(_QWORD *)Master_object;
        v90 = Master_object;
        v91 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v92 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v92 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
          {
            --v91;
            v92 += 4;
            if ( !v91 )
              goto LABEL_68;
          }
          v93 = v89 + 16LL * *v92 + 312;
        }
        else
        {
LABEL_68:
          v93 = sub_1C51E70(
                  Master_object,
                  System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo,
                  0);
        }
        v95 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v90, *(_QWORD *)(v93 + 8));
        if ( !v95 )
          sub_1C7BD40(0, v94);
        while ( 1 )
        {
          v96 = *(_QWORD *)v95;
          v97 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
          {
            v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v98 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v97;
              v98 += 4;
              if ( !v97 )
                goto LABEL_75;
            }
            v99 = v96 + 16LL * *v98 + 312;
          }
          else
          {
LABEL_75:
            v99 = sub_1C51E70(v95, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8)) & 1) == 0 )
            break;
          v100 = *(_QWORD *)v95;
          v101 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
          {
            v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v102 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
            {
              --v101;
              v102 += 4;
              if ( !v101 )
                goto LABEL_82;
            }
            v103 = v100 + 16LL * *v102 + 312;
          }
          else
          {
LABEL_82:
            v103 = sub_1C51E70(v95, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0);
          }
          v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v95, *(_QWORD *)(v103 + 8));
          if ( !v3 )
            sub_1C7BD40(v104, v104);
          v105 = v3->fields._items;
          v106 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !v105 )
            sub_1C7BD40(v104, v104);
          v107 = v3->fields._size;
          if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v104,
              *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = v107 + 1;
            v105->m_Items[v107] = v104;
          }
        }
        v108 = *(_QWORD *)v95;
        v109 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
        {
          v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v110 - 1) != System_IDisposable_TypeInfo )
          {
            --v109;
            v110 += 4;
            if ( !v109 )
              goto LABEL_93;
          }
          v111 = v108 + 16LL * *v110 + 312;
        }
        else
        {
LABEL_93:
          v111 = sub_1C51E70(v95, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v95, *(_QWORD *)(v111 + 8));
        goto LABEL_96;
      }
    }
LABEL_107:
    sub_1C7BD40(Master_object, v17);
  }
LABEL_96:
  if ( !v3 )
    goto LABEL_107;
  v112 = v3->fields._items;
  v113 = Method_System_Collections_Generic_List_int__Add__;
  ++v3->fields._version;
  if ( !v112 )
    goto LABEL_107;
  v114 = v3->fields._size;
  if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v3,
      0,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v3->fields._size = v114 + 1;
    v112->m_Items[v114] = 0;
  }
  return v3;
}


int32_t MyRoomAddMaster__GetBackObjAnimationNum(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v8; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  MyRoomAddEntity_o *v11; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v15; // x22
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__12_0; // x23
  Il2CppObject *v18; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w24
  int32_t v27; // w23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  MyRoomAddEntity_o *v34; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v39; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CEEBC3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC3 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, groupId, 1, v3);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v10 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v8),
        !*p_BackObjAnimationChangeEntity)
    || !v10 )
  {
LABEL_32:
    sub_1C7BD40(EnableEntityList, v8);
  }
  v11 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v10->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( size < 1 )
    return 1;
  v15 = Time;
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v16->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v18, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
      (int32_t)_9__12_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v10,
    _9__12_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v39 = 0;
  v26 = 0;
  v27 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v26,
                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v34 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v11 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v8) )
      {
        if ( v34->fields.endedAt > v15 )
          goto LABEL_26;
        v39 = 1;
      }
      if ( v34->fields.startedAt <= v15 )
      {
        condType = v34->fields.condType;
        condValue = v34->fields.condValue;
        condValue2 = v34->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v26;
  }
  while ( size != v26 );
  if ( (v39 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v28, v29, v30, v31, v32, v33);
  }
  return v27;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v11; // x20
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v14; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w21
  struct MyRoomAddEntity_o *v23; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CEEBC2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC2 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 8, groupId, v3);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      8,
                                                                      groupId,
                                                                      0,
                                                                      v7);
    if ( !EnableEntityList )
LABEL_23:
      sub_1C7BD40(EnableEntityList, v9);
    size = EnableEntityList->fields._size;
    v11 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v12 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__10_0 = (System_Comparison_T__o *)v12->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = MyRoomAddMaster___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__10_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v14,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
          (int32_t)_9__10_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      System_Collections_Generic_List_object___Sort_58984640(
        v11,
        _9__10_0,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v22 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v11,
                                                                          v22,
                                                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_23;
        v23 = (struct MyRoomAddEntity_o *)EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          break;
        if ( size == ++v22 )
          return -1;
      }
      if ( MyRoomAddEntity__GetScheduleUpdateAt(v23, v27) >= 1 )
      {
        this->fields.BackObjAnimationChangeEntity = v23;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.BackObjAnimationChangeEntity,
          (int32_t)v23,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      return v23->fields.overwriteId;
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v9; // x19
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w20
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4CEEBBE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBBE = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    1,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v9 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C7BD40(EnableEntityList, v7);
  }
  v10 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v10 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15, v16, v17, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v9,
    _9__6_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v20 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v20,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v21 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v21->fields._syncRoot);
    if ( size == ++v20 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v11; // x19
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4CEEBBF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBBF = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 2, groupId, v3);
  if ( result > 0 )
    return result;
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    v7);
  if ( !EnableEntityList )
LABEL_23:
    sub_1C7BD40(EnableEntityList, v9);
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
    goto LABEL_23;
  }
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v12->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v14, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v11,
    _9__7_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_23;
    v23 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v23->fields._syncRoot);
    if ( size == ++v22 )
      goto LABEL_18;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t result; // w0
  const MethodInfo *v8; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v10; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v12; // x20
  MyRoomAddMaster___c_c *v13; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v15; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w21
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24

  if ( (byte_4CEEBC0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC0 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 6, groupId, method);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      6,
                                                                      groupId,
                                                                      0,
                                                                      v8);
    if ( !EnableEntityList )
LABEL_21:
      sub_1C7BD40(EnableEntityList, v10);
    size = EnableEntityList->fields._size;
    v12 = EnableEntityList;
    if ( size < 1 )
    {
      return defaultId;
    }
    else
    {
      v13 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v13 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__8_0 = (System_Comparison_T__o *)v13->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = MyRoomAddMaster___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__8_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__8_0,
          v15,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
          (int32_t)_9__8_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      System_Collections_Generic_List_object___Sort_58984640(
        v12,
        _9__8_0,
        (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v23 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v12,
                                                                          v23,
                                                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v24 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v24->fields._syncRoot);
        if ( size == ++v23 )
          return defaultId;
      }
    }
  }
  return result;
}


int64_t MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        bool checkDiff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int size; // w28
  System_Collections_Generic_List_object__o *v11; // x22
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__9_0; // x23
  Il2CppObject *v14; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w23
  System_Collections_Generic_List_object__o *v23; // x24
  int32_t klass_high; // w25
  int32_t klass; // w27
  int64_t monitor_low; // x26
  int32_t syncRoot_high; // w22
  const MethodInfo *v28; // x3
  int32_t result; // w0

  if ( (byte_4CEEBC1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC1 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    v4);
  if ( !EnableEntityList )
    goto LABEL_28;
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
    goto LABEL_19;
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Comparison_T__o *)v12->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v14,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58984640(
    v11,
    _9__9_0,
    (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_28;
    v23 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v22 )
      goto LABEL_19;
  }
  syncRoot_high = HIDWORD(v23->fields._syncRoot);
  if ( !syncRoot_high )
LABEL_19:
    syncRoot_high = MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v9);
  if ( !checkDiff )
    return syncRoot_high;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !EnableEntityList )
LABEL_28:
    sub_1C7BD40(EnableEntityList, v8);
  result = MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)EnableEntityList, 1, syncRoot_high, v28);
  if ( result <= 0 )
    return syncRoot_high;
  return result;
}


int32_t MyRoomAddMaster__GetDiffObjectId(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4CEEBC8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEEBC8 = 1;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 0, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v9);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v7, v10);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  const MethodInfo *v13; // x3
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  const MethodInfo *v17; // x2
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  MyRoomAddMaster___c_c *v24; // x0
  System_Predicate_int__o *_9__14_0; // x20
  Il2CppObject *v26; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CEEBC5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Predicate_int__TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC5 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 1, v6);
  if ( !v5 )
    goto LABEL_27;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, v9);
  v14 = v5->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v14 )
    goto LABEL_27;
  v16 = v5->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v16 + 1;
    v14->m_Items[v16] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v13);
  v18 = v5->fields._items;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v18 )
    goto LABEL_27;
  v20 = v5->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v20 + 1;
    v18->m_Items[v20] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, v17);
  v21 = v5->fields._items;
  v22 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v21 )
LABEL_27:
    sub_1C7BD40(v7, v8);
  v23 = v5->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v23 + 1;
    v21->m_Items[v23] = v7;
  }
  v24 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v24 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = v24->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = MyRoomAddMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__14_0 = (System_Predicate_int__o *)sub_1C7BD34(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v26, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v5,
    (System_Predicate_T__o *)_9__14_0,
    (const MethodInfo_3823400 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return v5;
}


System_Collections_Generic_List_MyRoomAddEntity__o *MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x25
  int32_t MainGroupWarId; // w26
  int32_t v15; // w27
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4CEEBBD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEEBBD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( groupId )
    MainGroupWarId = 0;
  else
    MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v10);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v10 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == type
        && (groupId < 0 || HIDWORD(list[1].klass) == groupId)
        && (groupId || LODWORD(list[1].monitor) == MainGroupWarId)
        && (isIgnoreTimeLimit || (__int64)list[2].monitor <= Time && (__int64)list[2].fields.items >= Time) )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v23 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v10;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v10, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
    }
LABEL_29:
    sub_1C7BD40(list, v10);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEEBBA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4CEEBBA = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3432DB4 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  int32_t *v6; // x22
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x19
  System_Func_object__bool__o *v11; // x21
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__16_2; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CEEBC7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__);
    sub_1C7BAE8(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5301/*"DisplayMyRoomBgWar"*/);
    byte_4CEEBC7 = 1;
  }
  v3 = sub_1C7BD34(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = Time;
  *(_DWORD *)(v3 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5301/*"DisplayMyRoomBgWar"*/, -1, 0);
  v6 = (int32_t *)(v3 + 24);
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v10 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  v9,
                                                  (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0);
  Time = BasicHelper__Any_object_(
           v10,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_3159728 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v6;
  if ( !v10 )
LABEL_19:
    sub_1C7BD40(Time, v5);
  if ( v10->fields._size >= 1 )
  {
    v12 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__16_2 = (System_Comparison_T__o *)v12->static_fields->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__16_2 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v14, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_2,
        (int32_t)_9__16_2,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_object___Sort_58984640(
      (System_Collections_Generic_List_object__o *)v10,
      _9__16_2,
      (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v10,
                      0,
                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v6 = (int32_t *)(Time + 32);
      return *v6;
    }
    goto LABEL_19;
  }
  return 0;
}


int32_t MyRoomAddMaster__GetSortPriority(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  MyRoomAddMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__int__o *_9__18_1; // x21
  Il2CppObject *v16; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x20
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x20
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  MyRoomAddEntity_o *v39; // x0
  const MethodInfo *v40; // x1
  MyRoomAddEntity_o *v41; // x22
  const MethodInfo *v42; // x2
  int32_t SortPriority; // w21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4CEEBC9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__GetSortPriority_b__18_1__);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass18_0__GetSortPriority_b__0__);
    sub_1C7BAE8(&MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBC9 = 1;
  }
  v7 = sub_1C7BD34(MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_44;
  *(_DWORD *)(v7 + 16) = groupId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass18_0__GetSortPriority_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v13 = MyRoomAddMaster___c_TypeInfo;
  v14 = v12;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v13 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__int__o *)v13->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = MyRoomAddMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__18_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__18_1, v16, Method_MyRoomAddMaster___c__GetSortPriority_b__18_1__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__18_1;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_1,
      (int32_t)_9__18_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v8 = System_Linq_Enumerable__OrderByDescending_object__int_(
         v14,
         (System_Func_TSource__TKey__o *)_9__18_1,
         (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  if ( !v8 )
LABEL_44:
    sub_1C7BD40(v8, v9);
  klass = v8->klass;
  v25 = v8;
  v26 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_15;
    }
    v28 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v28 = sub_1C51E70(v8, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( !v30 )
    sub_1C7BD40(0, v29);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_22;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_22:
      v34 = sub_1C51E70(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MyRoomAddEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_29;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_29:
      v38 = sub_1C51E70(v30, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0);
    }
    v39 = (MyRoomAddEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      sub_1C7BD40(0, v40);
    SortPriority = MyRoomAddEntity__GetSortPriority(v39, v40);
    if ( SortPriority && MyRoomAddEntity__IsOpen(v41, nowTime, v42) )
      goto LABEL_36;
  }
  SortPriority = 0;
LABEL_36:
  v44 = *(_QWORD *)v30;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_40;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_40:
    v47 = sub_1C51E70(v30, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v30, *(_QWORD *)(v47 + 8));
  return SortPriority;
}


bool MyRoomAddMaster__IsExistOverWriteIdInGroup(
        MyRoomAddMaster_o *this,
        int32_t overWriteId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4CEEBC6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1C7BAE8(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    byte_4CEEBC6 = 1;
  }
  v7 = sub_1C7BD34(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51896536(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_317E0D8 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEEBBB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4CEEBBB = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEEBCA & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomAddMaster___c_TypeInfo);
    byte_4CEEBCA = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c___DisplayBgGroupList_b__13_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.groupId != 0;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_3(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__int__o x,
        const MethodInfo *method)
{
  return x.fields.Item3;
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


bool MyRoomAddMaster___c___GetDisplayOverWriteIds_b__14_0(
        MyRoomAddMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id < 1;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarId_b__16_2(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C7BD40(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetSortPriority_b__18_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.priority;
}


void MyRoomAddMaster___c__DisplayClass13_0___ctor(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__1(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        System_ValueTuple_int__int__int__o x,
        const MethodInfo *method)
{
  struct MyRoomAddEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C7BD40(this, *(_QWORD *)&x.fields.Item1);
  return entity->fields.groupId == x.fields.Item1;
}


void MyRoomAddMaster___c__DisplayClass13_1___ctor(
        MyRoomAddMaster___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t MyRoomAddMaster___c__DisplayClass13_1___DisplayBgGroupList_b__2(
        MyRoomAddMaster___c__DisplayClass13_1_o *this,
        System_ValueTuple_int__int__int__o x,
        const MethodInfo *method)
{
  WarMaster_o *warMst; // x0

  warMst = this->fields.warMst;
  if ( !warMst )
    sub_1C7BD40(0, *(_QWORD *)&x.fields.Item1);
  return WarMaster__GetEventStartAt(warMst, x.fields.Item2, 0);
}


void MyRoomAddMaster___c__DisplayClass15_0___ctor(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass15_0___IsExistOverWriteIdInGroup_b__0(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.groupId == this->fields.groupId && entity->fields.overwriteId == this->fields.overWriteId;
}


void MyRoomAddMaster___c__DisplayClass16_0___ctor(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__0(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass16_0_o *v4; // x20
  bool result; // w0
  int32_t condValue; // w21
  int32_t condType; // w23
  int64_t condValue2; // x22
  bool IsOpen; // w8
  int64_t nowTime; // x8

  v4 = this;
  if ( (byte_4CEEBCB & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEEBCB = 1;
  }
  if ( !entity )
    sub_1C7BD40(this, entity);
  if ( entity->fields.groupId )
    return 0;
  condType = entity->fields.condType;
  condValue = entity->fields.condValue;
  condValue2 = entity->fields.condValue2;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
  result = 0;
  if ( IsOpen )
  {
    nowTime = v4->fields.nowTime;
    if ( entity->fields.startedAt > nowTime )
      return 0;
    return entity->fields.endedAt >= nowTime;
  }
  return result;
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__1(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.warId == this->fields.displayWarId;
}


void MyRoomAddMaster___c__DisplayClass18_0___ctor(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass18_0___GetSortPriority_b__0(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.groupId == this->fields.groupId;
}