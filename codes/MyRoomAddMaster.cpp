void __fastcall MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E89E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__, method);
    byte_4A4E89E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int64_t Time; // x22
  System_Collections_Generic_List_int__o *v30; // x19
  System_Collections_Generic_Dictionary_int__int__o *v31; // x20
  MyRoomAddMaster___c_c *v32; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *_9__13_0; // x23
  Il2CppObject *v35; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 Master_object; // x0
  __int64 v40; // x1
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x23
  int32_t v58; // w24
  int32_t v59; // w26
  int64_t v60; // x25
  _BOOL8 IsOpen; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_Func_KeyValuePair_int__int___long__o *v70; // x22
  __int64 v71; // x8
  __int64 v72; // x20
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x20
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  struct System_Int32_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10

  if ( (byte_4A4E8A6 & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___, v11);
    sub_1B863B8(&System_Func_KeyValuePair_int__int___long__TypeInfo, v12);
    sub_1B863B8(&System_Func_MyRoomAddEntity__bool__TypeInfo, v13);
    sub_1B863B8(&System_IDisposable_TypeInfo, v14);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo, v16);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo, v17);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, v18);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1B863B8(&NetworkManager_TypeInfo, v24);
    sub_1B863B8(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, v25);
    sub_1B863B8(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__, v26);
    sub_1B863B8(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo, v27);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v28);
    byte_4A4E8A6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v30 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v32 = MyRoomAddMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v32 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v32->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = MyRoomAddMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v35, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_MyRoomAddEntity__bool__o *)_9__13_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v37, v38);
  }
  Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)list,
                             (System_Func_TSource__bool__o *)_9__13_0,
                             (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  if ( !Master_object )
    goto LABEL_94;
  v41 = *(_QWORD *)Master_object;
  v42 = Master_object;
  v43 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_16;
    }
    v45 = v41 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_16:
    v45 = sub_1BD6B4C(Master_object, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1B86614(0LL, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_23;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_23:
      v51 = sub_1BD6B4C(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_MyRoomAddEntity__c **)v54 - 1) != System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_30;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_30:
      v55 = sub_1BD6B4C(v47, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0LL);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    if ( !v57 )
      sub_1B86614(0LL, v56);
    v59 = *(_DWORD *)(v57 + 40);
    v58 = *(_DWORD *)(v57 + 44);
    v60 = *(int *)(v57 + 48);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v59, v58, v60, 0, 0LL, 0LL);
    if ( IsOpen && *(_QWORD *)(v57 + 56) <= Time && *(_QWORD *)(v57 + 64) >= Time )
    {
      if ( !v31 )
        sub_1B86614(IsOpen, v62);
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              v31,
              *(_DWORD *)(v57 + 28),
              (const MethodInfo_3264C28 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        System_Collections_Generic_Dictionary_int__int___Add(
          v31,
          *(_DWORD *)(v57 + 28),
          *(_DWORD *)(v57 + 32),
          (const MethodInfo_3264A3C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v63 = *(_QWORD *)v47;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_45;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_45:
    v66 = sub_1BD6B4C(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v47, *(_QWORD *)(v66 + 8));
  Master_object = System_Linq_Enumerable__Any_KeyValuePair_int__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                    (const MethodInfo_2F7A94C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
  if ( (Master_object & 1) != 0 )
  {
    v67 = sub_1B86604(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
    if ( v67 )
    {
      *(_QWORD *)(v67 + 16) = Master_object;
      sub_1B8635C((CGThumbnailListItem_o *)(v67 + 16), Master_object, v68, v69);
      v70 = (System_Func_KeyValuePair_int__int___long__o *)sub_1B86604(System_Func_KeyValuePair_int__int___long__TypeInfo);
      System_Func_KeyValuePair_int__int___long____ctor(
        v70,
        (Il2CppObject *)v67,
        Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__,
        0LL);
      Master_object = (__int64)System_Linq_Enumerable__OrderByDescending_KeyValuePair_int__int___long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                 (System_Func_TSource__TKey__o *)v70,
                                 (const MethodInfo_2F9AE64 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
      if ( Master_object )
      {
        v71 = *(_QWORD *)Master_object;
        v72 = Master_object;
        v73 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v74 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__int___c **)v74 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo )
          {
            --v73;
            v74 += 4;
            if ( !v73 )
              goto LABEL_56;
          }
          v75 = v71 + 16LL * *v74 + 312;
        }
        else
        {
LABEL_56:
          v75 = sub_1BD6B4C(Master_object, System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo, 0LL);
        }
        v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v72, *(_QWORD *)(v75 + 8));
        if ( !v77 )
          sub_1B86614(0LL, v76);
        while ( 1 )
        {
          v78 = *(_QWORD *)v77;
          v79 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
          {
            v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v80 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v79;
              v80 += 4;
              if ( !v79 )
                goto LABEL_63;
            }
            v81 = v78 + 16LL * *v80 + 312;
          }
          else
          {
LABEL_63:
            v81 = sub_1BD6B4C(v77, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8)) & 1) == 0 )
            break;
          v82 = *(_QWORD *)v77;
          v83 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
          {
            v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__int___c **)v84 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo )
            {
              --v83;
              v84 += 4;
              if ( !v83 )
                goto LABEL_70;
            }
            v85 = v82 + 16LL * *v84 + 312;
          }
          else
          {
LABEL_70:
            v85 = sub_1BD6B4C(v77, System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo, 0LL);
          }
          v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v77, *(_QWORD *)(v85 + 8));
          if ( !v30 )
            sub_1B86614(v86, v86);
          items = v30->fields._items;
          v88 = Method_System_Collections_Generic_List_int__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1B86614(v86, v86);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v30,
              v86,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = size + 1;
            items->m_Items[size + 1] = v86;
          }
        }
        v90 = *(_QWORD *)v77;
        v91 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
        {
          v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
          {
            --v91;
            v92 += 4;
            if ( !v91 )
              goto LABEL_81;
          }
          v93 = v90 + 16LL * *v92 + 312;
        }
        else
        {
LABEL_81:
          v93 = sub_1BD6B4C(v77, System_IDisposable_TypeInfo, 0LL);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v77, *(_QWORD *)(v93 + 8));
        goto LABEL_84;
      }
    }
LABEL_94:
    sub_1B86614(Master_object, v40);
  }
LABEL_84:
  if ( !v30 )
    goto LABEL_94;
  v94 = v30->fields._items;
  v95 = Method_System_Collections_Generic_List_int__Add__;
  ++v30->fields._version;
  if ( !v94 )
    goto LABEL_94;
  v96 = v30->fields._size;
  if ( (unsigned int)v96 >= v94->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v30,
      0,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v30->fields._size = v96 + 1;
    v94->m_Items[v96 + 1] = 0;
  }
  return v30;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetBackObjAnimationNum(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v15; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v17; // x20
  MyRoomAddEntity_o *v18; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v22; // x22
  MyRoomAddMaster___c_c *v23; // x0
  System_Comparison_T__o *_9__12_0; // x23
  Il2CppObject *v25; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w24
  int32_t v30; // w23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  MyRoomAddEntity_o *v33; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v38; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A4E8A5 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, v11);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v12);
    byte_4A4E8A5 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, groupId, 1, v3);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v17 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v15),
        !*p_BackObjAnimationChangeEntity)
    || !v17 )
  {
LABEL_32:
    sub_1B86614(EnableEntityList, v15);
  }
  v18 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v17->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( size < 1 )
    return 1;
  v22 = Time;
  v23 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v23 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v23->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = MyRoomAddMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v25, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v27, v28);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v17,
    _9__12_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v38 = 0;
  v29 = 0;
  v30 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v17,
                                              v29,
                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v33 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v18 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v15) )
      {
        if ( v33->fields.endedAt > v22 )
          goto LABEL_26;
        v38 = 1;
      }
      if ( v33->fields.startedAt <= v22 )
      {
        condType = v33->fields.condType;
        condValue = v33->fields.condValue;
        condValue2 = v33->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v30 += CondType__IsOpen(condType, condValue, condValue2, 0, 0LL, 0LL);
      }
    }
LABEL_26:
    ++v29;
  }
  while ( size != v29 );
  if ( (v38 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_BackObjAnimationChangeEntity, 0, v31, v32);
  }
  return v30;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBackObjId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v13; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v15; // x20
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v18; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w22
  struct MyRoomAddEntity_o *v23; // x21
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v27; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4A4E8A4 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__, v10);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4A4E8A4 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    8,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
LABEL_21:
    sub_1B86614(EnableEntityList, v13);
  size = EnableEntityList->fields._size;
  v15 = EnableEntityList;
  if ( size < 1 )
    return -1;
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Comparison_T__o *)v16->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v18, Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v15,
    _9__10_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v15,
                                                                      v22,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v23 = (struct MyRoomAddEntity_o *)EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL) )
      break;
    if ( size == ++v22 )
      return -1;
  }
  if ( MyRoomAddEntity__GetScheduleUpdateAt(v23, v27) >= 1 )
  {
    this->fields.BackObjAnimationChangeEntity = v23;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.BackObjAnimationChangeEntity, (int32_t)v23, v29, v30);
  }
  return v23->fields.overwriteId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v15; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v17; // x19
  MyRoomAddMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v20; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w20
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4A4E8A0 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, v12);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v13);
    byte_4A4E8A0 = 1;
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
  v17 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1B86614(EnableEntityList, v15);
  }
  v18 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v18->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = MyRoomAddMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v20, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v17,
    _9__6_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v17,
                                                                      v24,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v25 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL) )
      return HIDWORD(v25->fields._syncRoot);
    if ( size == ++v24 )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomBgm(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v15; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v17; // x19
  MyRoomAddMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v20; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w20
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4A4E8A1 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, v12);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v13);
    byte_4A4E8A1 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v17 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0LL);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
LABEL_21:
    sub_1B86614(EnableEntityList, v15);
  }
  v18 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v18 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v18->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = MyRoomAddMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v20, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v22, v23);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v17,
    _9__7_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v24 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v17,
                                                                      v24,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v25 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL) )
      return HIDWORD(v25->fields._syncRoot);
    if ( size == ++v24 )
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v6; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v15; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v17; // x20
  MyRoomAddMaster___c_c *v18; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v20; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w21
  System_Collections_Generic_List_object__o *v25; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24

  v6 = defaultId;
  if ( (byte_4A4E8A2 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&defaultId);
    sub_1B863B8(&CondType_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v11);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__, v12);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v13);
    byte_4A4E8A2 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    6,
                                                                    groupId,
                                                                    0,
                                                                    v4);
  if ( !EnableEntityList )
LABEL_20:
    sub_1B86614(EnableEntityList, v15);
  size = EnableEntityList->fields._size;
  v17 = EnableEntityList;
  if ( size >= 1 )
  {
    v18 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v18 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__8_0 = (System_Comparison_T__o *)v18->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = MyRoomAddMaster___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__8_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__8_0,
        v20,
        Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__,
        0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v22, v23);
    }
    System_Collections_Generic_List_object___Sort_56615964(
      v17,
      _9__8_0,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    v24 = 0;
    while ( 1 )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        v17,
                                                                        v24,
                                                                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
      if ( !EnableEntityList )
        goto LABEL_20;
      v25 = EnableEntityList;
      klass = (int32_t)EnableEntityList[1].klass;
      klass_high = HIDWORD(EnableEntityList[1].klass);
      monitor_low = SLODWORD(EnableEntityList[1].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL) )
        return HIDWORD(v25->fields._syncRoot);
      if ( size == ++v24 )
        return v6;
    }
  }
  return v6;
}


int64_t __fastcall MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int size; // w27
  System_Collections_Generic_List_object__o *v16; // x21
  MyRoomAddMaster___c_c *v17; // x0
  System_Comparison_T__o *_9__9_0; // x22
  Il2CppObject *v19; // x23
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w22
  System_Collections_Generic_List_object__o *v24; // x23
  int32_t klass_high; // w24
  int32_t klass; // w26
  int64_t monitor_low; // x25

  if ( (byte_4A4E8A3 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__, v10);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v11);
    byte_4A4E8A3 = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
LABEL_19:
    sub_1B86614(EnableEntityList, v13);
  size = EnableEntityList->fields._size;
  v16 = EnableEntityList;
  if ( size < 1 )
    return MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v14);
  v17 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v17 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Comparison_T__o *)v17->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = MyRoomAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v19,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v21, v22);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v16,
    _9__9_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v23 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v16,
                                                                      v23,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_19;
    v24 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL, 0LL) )
      return HIDWORD(v24->fields._syncRoot);
    if ( size == ++v23 )
      return MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  const MethodInfo *v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  const MethodInfo *v19; // x3
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  const MethodInfo *v23; // x2
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  MyRoomAddMaster___c_c *v30; // x0
  System_Predicate_int__o *_9__14_0; // x20
  Il2CppObject *v32; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4A4E8A7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&groupId);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__RemoveAll__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B863B8(&System_Predicate_int__TypeInfo, v8);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, v9);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v10);
    byte_4A4E8A7 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v13 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, v12);
  if ( !v11 )
    goto LABEL_27;
  items = v11->fields._items;
  v17 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v13,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = v13;
  }
  v13 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, v15);
  v20 = v11->fields._items;
  v21 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !v20 )
    goto LABEL_27;
  v22 = v11->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v13,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = v22 + 1;
    v20->m_Items[v22 + 1] = v13;
  }
  v13 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v19);
  v24 = v11->fields._items;
  v25 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !v24 )
    goto LABEL_27;
  v26 = v11->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v13,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = v26 + 1;
    v24->m_Items[v26 + 1] = v13;
  }
  v13 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, v23);
  v27 = v11->fields._items;
  v28 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !v27 )
LABEL_27:
    sub_1B86614(v13, v14);
  v29 = v11->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v13,
      *(const MethodInfo_35DF934 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = v29 + 1;
    v27->m_Items[v29 + 1] = v13;
  }
  v30 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v30 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = v30->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = MyRoomAddMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__14_0 = (System_Predicate_int__o *)sub_1B86604(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v32, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0LL);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v34, v35);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v11,
    (System_Predicate_T__o *)_9__14_0,
    (const MethodInfo_35E0F5C *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MyRoomAddEntity__o *__fastcall MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x23
  const MethodInfo *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x25
  int32_t MainGroupWarId; // w26
  int32_t v20; // w27
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A4E89F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__, *(_QWORD *)&type);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    byte_4A4E89F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( groupId )
    MainGroupWarId = 0;
  else
    MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v15);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v20,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v15 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == type
        && ((groupId & 0x80000000) != 0 || HIDWORD(list[1].klass) == groupId)
        && (groupId || LODWORD(list[1].monitor) == MainGroupWarId)
        && (isIgnoreTimeLimit || (__int64)list[2].monitor <= Time && (__int64)list[2].fields.items >= Time) )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v24 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v15;
          sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v15, v21, v22);
        }
      }
      if ( Count == ++v20 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v14;
    }
LABEL_29:
    sub_1B86614(list, v15);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *__fastcall MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4E89C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A4E89C = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3218D38 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


int32_t __fastcall MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
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
  __int64 v17; // x20
  int64_t Time; // x0
  __int64 v19; // x1
  int32_t *v20; // x22
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_T__o *v24; // x19
  System_Func_object__bool__o *v25; // x21
  MyRoomAddMaster___c_c *v26; // x0
  System_Comparison_T__o *_9__16_2; // x20
  Il2CppObject *v28; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4A4E8A9 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_MyRoomAddEntity___, method);
    sub_1B863B8(&System_Comparison_MyRoomAddEntity__TypeInfo, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___, v5);
    sub_1B863B8(&System_Func_MyRoomAddEntity__bool__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, v11);
    sub_1B863B8(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__, v12);
    sub_1B863B8(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__, v13);
    sub_1B863B8(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo, v14);
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_5264/*"DisplayMyRoomBgWar"*/, v16);
    byte_4A4E8A9 = 1;
  }
  v17 = sub_1B86604(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 16) = Time;
  *(_DWORD *)(v17 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5264/*"DisplayMyRoomBgWar"*/, -1, 0LL);
  v20 = (int32_t *)(v17 + 24);
  list = this->fields.list;
  v22 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v17,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0LL);
  v23 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v24 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  v23,
                                                  (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v25 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v17,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0LL);
  Time = BasicHelper__Any_object_(
           v24,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v20;
  if ( !v24 )
LABEL_19:
    sub_1B86614(Time, v19);
  if ( v24->fields._size >= 1 )
  {
    v26 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v26 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__16_2 = (System_Comparison_T__o *)v26->static_fields->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = MyRoomAddMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__16_2 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v28, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0LL);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_2, (int32_t)_9__16_2, v30, v31);
    }
    System_Collections_Generic_List_object___Sort_56615964(
      (System_Collections_Generic_List_object__o *)v24,
      _9__16_2,
      (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v24,
                      0,
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v20 = (int32_t *)(Time + 32);
      return *v20;
    }
    goto LABEL_19;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomAddMaster__IsExistOverWriteIdInGroup(
        MyRoomAddMaster_o *this,
        int32_t overWriteId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4A4E8A8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___, *(_QWORD *)&overWriteId);
    sub_1B863B8(&System_Func_MyRoomAddEntity__bool__TypeInfo, v7);
    sub_1B863B8(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__, v8);
    sub_1B863B8(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo, v9);
    byte_4A4E8A8 = 1;
  }
  v10 = sub_1B86604(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B86614(v11, v12);
  *(_DWORD *)(v10 + 16) = groupId;
  *(_DWORD *)(v10 + 20) = overWriteId;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49797040(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F7D7B0 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4E89D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__, entity);
    byte_4A4E89D = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void __fastcall MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E8AA & 1) == 0 )
  {
    sub_1B863B8(&MyRoomAddMaster___c_TypeInfo, v1);
    byte_4A4E8AA = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomAddMaster___c___DisplayBgGroupList_b__13_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
  return entity->fields.groupId != 0;
}


int32_t __fastcall MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


bool __fastcall MyRoomAddMaster___c___GetDisplayOverWriteIds_b__14_0(
        MyRoomAddMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id < 1;
}


int32_t __fastcall MyRoomAddMaster___c___GetMainGroupWarId_b__16_2(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall MyRoomAddMaster___c__DisplayClass13_0___ctor(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__1(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarMaster_o *warMst; // x0

  value = x.fields.value;
  if ( (byte_4A4E8AB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, x);
    byte_4A4E8AB = 1;
  }
  warMst = this->fields.warMst;
  if ( !warMst )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B86614)(0LL, x);
  return WarMaster__GetEventStartAt(warMst, value, 0LL);
}


void __fastcall MyRoomAddMaster___c__DisplayClass15_0___ctor(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomAddMaster___c__DisplayClass15_0___IsExistOverWriteIdInGroup_b__0(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
  return entity->fields.groupId == this->fields.groupId && entity->fields.overwriteId == this->fields.overWriteId;
}


void __fastcall MyRoomAddMaster___c__DisplayClass16_0___ctor(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__0(
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
  if ( (byte_4A4E8AC & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1B863B8(&CondType_TypeInfo, entity);
    byte_4A4E8AC = 1;
  }
  if ( !entity )
    sub_1B86614(this, entity);
  if ( entity->fields.groupId )
    return 0;
  condType = entity->fields.condType;
  condValue = entity->fields.condValue;
  condValue2 = entity->fields.condValue2;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(condType, condValue, condValue2, 0, 0LL, 0LL);
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


bool __fastcall MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__1(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
  return entity->fields.warId == this->fields.displayWarId;
}