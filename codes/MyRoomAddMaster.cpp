void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC792B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4CC792B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_340B614 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x22
  System_Collections_Generic_List_int__o *v4; // x19
  System_Collections_Generic_Dictionary_int__int__o *v5; // x20
  MyRoomAddMaster___c_c *v6; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *_9__13_0; // x23
  Il2CppObject *v9; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x21
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x23
  int32_t v36; // w24
  int32_t v37; // w26
  int64_t v38; // x25
  _BOOL8 IsOpen; // x0
  __int64 v40; // x1
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Func_KeyValuePair_int__int___long__o *v52; // x22
  __int64 v53; // x8
  __int64 v54; // x20
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  struct System_Int32_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10

  if ( (byte_4CC7933 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C713B0(&System_Func_KeyValuePair_int__int___long__TypeInfo);
    sub_1C713B0(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__);
    sub_1C713B0(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7933 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  v6 = MyRoomAddMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v6 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__bool__o *)v6->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MyRoomAddMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__13_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__13_0, v9, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_MyRoomAddEntity__bool__o *)_9__13_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  Master_object = (__int64)System_Linq_Enumerable__Where_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)list,
                             (System_Func_TSource__bool__o *)_9__13_0,
                             (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  if ( !Master_object )
    goto LABEL_94;
  v19 = *(_QWORD *)Master_object;
  v20 = Master_object;
  v21 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
  {
    v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_MyRoomAddEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_16;
    }
    v23 = v19 + 16LL * *v22 + 312;
  }
  else
  {
LABEL_16:
    v23 = sub_1C47738(Master_object, System_Collections_Generic_IEnumerable_MyRoomAddEntity__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C71608(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_23;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_23:
      v29 = sub_1C47738(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
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
      v33 = sub_1C47738(v25, System_Collections_Generic_IEnumerator_MyRoomAddEntity__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( !v35 )
      sub_1C71608(0, v34);
    v37 = *(_DWORD *)(v35 + 40);
    v36 = *(_DWORD *)(v35 + 44);
    v38 = *(int *)(v35 + 48);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = CondType__IsOpen(v37, v36, v38, 0, 0, 0);
    if ( IsOpen && *(_QWORD *)(v35 + 56) <= Time && *(_QWORD *)(v35 + 64) >= Time )
    {
      if ( !v5 )
        sub_1C71608(IsOpen, v40);
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              v5,
              *(_DWORD *)(v35 + 28),
              (const MethodInfo_34599C8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          *(_DWORD *)(v35 + 28),
          *(_DWORD *)(v35 + 32),
          (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  v41 = *(_QWORD *)v25;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_45;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_45:
    v44 = sub_1C47738(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
  Master_object = System_Linq_Enumerable__Any_KeyValuePair_int__int__(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                    (const MethodInfo_3155CF4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__int____);
  if ( (Master_object & 1) != 0 )
  {
    v45 = sub_1C715FC(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v45, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
    if ( v45 )
    {
      *(_QWORD *)(v45 + 16) = Master_object;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 16), Master_object, v46, v47, v48, v49, v50, v51);
      v52 = (System_Func_KeyValuePair_int__int___long__o *)sub_1C715FC(System_Func_KeyValuePair_int__int___long__TypeInfo);
      System_Func_KeyValuePair_int__int___long____ctor(
        v52,
        (Il2CppObject *)v45,
        Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__1__,
        0);
      Master_object = (__int64)System_Linq_Enumerable__OrderByDescending_KeyValuePair_int__int___long_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                 (System_Func_TSource__TKey__o *)v52,
                                 (const MethodInfo_317ABC8 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_int__int___long___);
      if ( Master_object )
      {
        v53 = *(_QWORD *)Master_object;
        v54 = Master_object;
        v55 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
        if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
        {
          v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_int__int___c **)v56 - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_56;
          }
          v57 = v53 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_56:
          v57 = sub_1C47738(Master_object, System_Collections_Generic_IEnumerable_KeyValuePair_int__int___TypeInfo, 0);
        }
        v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
        if ( !v59 )
          sub_1C71608(0, v58);
        while ( 1 )
        {
          v60 = *(_QWORD *)v59;
          v61 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
          {
            v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_63;
            }
            v63 = v60 + 16LL * *v62 + 312;
          }
          else
          {
LABEL_63:
            v63 = sub_1C47738(v59, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8)) & 1) == 0 )
            break;
          v64 = *(_QWORD *)v59;
          v65 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
          {
            v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_int__int___c **)v66 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo )
            {
              --v65;
              v66 += 4;
              if ( !v65 )
                goto LABEL_70;
            }
            v67 = v64 + 16LL * *v66 + 312;
          }
          else
          {
LABEL_70:
            v67 = sub_1C47738(v59, System_Collections_Generic_IEnumerator_KeyValuePair_int__int___TypeInfo, 0);
          }
          v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v59, *(_QWORD *)(v67 + 8));
          if ( !v4 )
            sub_1C71608(v68, v68);
          items = v4->fields._items;
          v70 = Method_System_Collections_Generic_List_int__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C71608(v68, v68);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v4,
              v68,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
          }
          else
          {
            v4->fields._size = size + 1;
            items->m_Items[size] = v68;
          }
        }
        v72 = *(_QWORD *)v59;
        v73 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
        {
          v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
          {
            --v73;
            v74 += 4;
            if ( !v73 )
              goto LABEL_81;
          }
          v75 = v72 + 16LL * *v74 + 312;
        }
        else
        {
LABEL_81:
          v75 = sub_1C47738(v59, System_IDisposable_TypeInfo, 0);
        }
        Master_object = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v59, *(_QWORD *)(v75 + 8));
        goto LABEL_84;
      }
    }
LABEL_94:
    sub_1C71608(Master_object, v18);
  }
LABEL_84:
  if ( !v4 )
    goto LABEL_94;
  v76 = v4->fields._items;
  v77 = Method_System_Collections_Generic_List_int__Add__;
  ++v4->fields._version;
  if ( !v76 )
    goto LABEL_94;
  v78 = v4->fields._size;
  if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v4,
      0,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v4->fields._size = v78 + 1;
    v76->m_Items[v78] = 0;
  }
  return v4;
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

  if ( (byte_4CC7932 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7932 = 1;
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
    sub_1C71608(EnableEntityList, v8);
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
    _9__12_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v18, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
      (int32_t)_9__12_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_58794460(
    v10,
    _9__12_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v39 = 0;
  v26 = 0;
  v27 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v26,
                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4CC7931 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7931 = 1;
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
      sub_1C71608(EnableEntityList, v9);
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
        _9__10_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v14,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
          (int32_t)_9__10_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      System_Collections_Generic_List_object___Sort_58794460(
        v11,
        _9__10_0,
        (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v22 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v11,
                                                                          v22,
                                                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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
        sub_1C71354(
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

  if ( (byte_4CC792D & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC792D = 1;
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
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C71608(EnableEntityList, v7);
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
    _9__6_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15, v16, v17, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_58794460(
    v9,
    _9__6_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v20 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v20,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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

  if ( (byte_4CC792E & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC792E = 1;
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
    sub_1C71608(EnableEntityList, v9);
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
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
    _9__7_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v14, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58794460(
    v11,
    _9__7_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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

  if ( (byte_4CC792F & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC792F = 1;
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
      sub_1C71608(EnableEntityList, v10);
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
        _9__8_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__8_0,
          v15,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
          (int32_t)_9__8_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      System_Collections_Generic_List_object___Sort_58794460(
        v12,
        _9__8_0,
        (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v23 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v12,
                                                                          v23,
                                                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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

  if ( (byte_4CC7930 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7930 = 1;
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
    _9__9_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v14,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_58794460(
    v11,
    _9__9_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
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
  EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !EnableEntityList )
LABEL_28:
    sub_1C71608(EnableEntityList, v8);
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

  if ( (byte_4CC7937 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7937 = 1;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 0, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_1C71608(0, v9);
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

  if ( (byte_4CC7934 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Predicate_int__TypeInfo);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7934 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1C71608(v7, v8);
  v23 = v5->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    _9__14_0 = (System_Predicate_int__o *)sub_1C715FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v26, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C71354(
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
    (const MethodInfo_37F4D1C *)Method_System_Collections_Generic_List_int__RemoveAll__);
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

  if ( (byte_4CC792C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC792C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
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
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v10;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v10, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
    }
LABEL_29:
    sub_1C71608(list, v10);
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

  if ( (byte_4CC7929 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4CC7929 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_340D938 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
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

  if ( (byte_4CC7936 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_MyRoomAddEntity___);
    sub_1C713B0(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C713B0(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__);
    sub_1C713B0(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__);
    sub_1C713B0(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    sub_1C713B0(&StringLiteral_5289/*"DisplayMyRoomBgWar"*/);
    byte_4CC7936 = 1;
  }
  v3 = sub_1C715FC(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = Time;
  *(_DWORD *)(v3 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5289/*"DisplayMyRoomBgWar"*/, -1, 0);
  v6 = (int32_t *)(v3 + 24);
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v10 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  v9,
                                                  (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0);
  Time = BasicHelper__Any_object_(
           v10,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_31341D4 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v6;
  if ( !v10 )
LABEL_19:
    sub_1C71608(Time, v5);
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
      _9__16_2 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v14, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_2,
        (int32_t)_9__16_2,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_object___Sort_58794460(
      (System_Collections_Generic_List_object__o *)v10,
      _9__16_2,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v10,
                      0,
                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v6 = (int32_t *)(Time + 32);
      return *v6;
    }
    goto LABEL_19;
  }
  return 0;
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

  if ( (byte_4CC7935 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C713B0(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C713B0(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1C713B0(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    byte_4CC7935 = 1;
  }
  v7 = sub_1C715FC(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51743576(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
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

  if ( (byte_4CC792A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4CC792A = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
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

  if ( (byte_4CC7938 & 1) == 0 )
  {
    sub_1C713B0(&MyRoomAddMaster___c_TypeInfo);
    byte_4CC7938 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C71354(
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
    sub_1C71608(this, 0);
  return entity->fields.groupId != 0;
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C71608(this, a);
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
    sub_1C71608(this, a);
  return b->fields.priority - a->fields.priority;
}


void MyRoomAddMaster___c__DisplayClass13_0___ctor(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__1(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        System_Collections_Generic_KeyValuePair_int__int__o x,
        const MethodInfo *method)
{
  int32_t value; // x19^4
  WarMaster_o *warMst; // x0

  value = x.fields.value;
  if ( (byte_4CC7939 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    byte_4CC7939 = 1;
  }
  warMst = this->fields.warMst;
  if ( !warMst )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C71608)(0, x);
  return WarMaster__GetEventStartAt(warMst, value, 0);
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
    sub_1C71608(this, 0);
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
  if ( (byte_4CC793A & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1C713B0(&CondType_TypeInfo);
    byte_4CC793A = 1;
  }
  if ( !entity )
    sub_1C71608(this, entity);
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
    sub_1C71608(this, 0);
  return entity->fields.warId == this->fields.displayWarId;
}