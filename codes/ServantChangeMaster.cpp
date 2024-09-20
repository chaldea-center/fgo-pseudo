void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
    byte_4A5B7C2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x8
  int v12; // w23
  int v13; // w24
  ServantChangeEntity_o *v14; // x21
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x1
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A5B7C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    byte_4A5B7C6 = 1;
  }
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v5 )
    goto LABEL_23;
  v11 = *(_QWORD *)&v5->max_length;
  v12 = v11 - 1;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = v5->m_Items[v13];
      if ( !v14 )
        break;
      if ( (v14->fields.flag & 2) == 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v16 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v14, v9, v10);
        }
        v7 = ServantChangeEntity__IsEnable(v14, v19);
        if ( v7 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v6,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( v12 == v13 )
        goto LABEL_17;
      if ( ++v13 >= v5->max_length )
        sub_1B88814(v7, v8);
    }
LABEL_23:
    sub_1B8880C(v7, v8);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_23;
  v20 = v6->fields._items;
  v21 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
  ++v6->fields._version;
  if ( !v20 )
    goto LABEL_23;
  v22 = v6->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      0LL,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v6->fields._size = v22 + 1;
    v23[4] = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), 0, v9, v10);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEnableEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  ServantChangeEntity_array *v6; // x19
  int v7; // w21
  int v8; // w22
  Il2CppClass **v9; // x8
  ServantChangeEntity_o *v10; // x20

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    goto LABEL_11;
  v5 = *(_QWORD *)&v3->max_length;
  v6 = v3;
  v7 = v5 - 1;
  if ( (int)v5 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = &v6->obj.klass + v8;
      v10 = (ServantChangeEntity_o *)v9[4];
      if ( !v10 )
        break;
      v3 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v9[4], v4);
      if ( ((unsigned __int8)v3 & 1) != 0 )
        return v10;
      if ( v7 == v8 )
        return 0LL;
      if ( ++v8 >= v6->max_length )
        sub_1B88814(v3, v4);
    }
LABEL_11:
    sub_1B8880C(v3, v4);
  }
  return 0LL;
}


System_Int32_array *__fastcall ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x0
  const MethodInfo *v6; // x1
  ServantChangeEntity_array *v7; // x21
  int max_length; // w29
  System_Collections_Generic_List_int__o *v9; // x20
  il2cpp_array_size_t v10; // w24
  ServantChangeEntity_o *v11; // x22
  int32_t svtVoiceId; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Int32_array *v16; // x21
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B7C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B7C8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v5 )
    goto LABEL_30;
  v7 = v5;
  max_length = v5->max_length;
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= v7->max_length )
        sub_1B88814(v5, v6);
      v11 = v7->m_Items[v10];
      if ( !v11 || !v9 )
        goto LABEL_30;
      svtVoiceId = v11->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        v9,
        (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v22 = v21;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v22,
                (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v22.fields._current )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v22,
            (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_17;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v22,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      items = v9->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_30;
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          svtVoiceId,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = svtVoiceId;
      }
LABEL_17:
      v5 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v11, v6);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v10 != max_length );
  }
  if ( !v9 )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    v9,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v22,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( v17 )
      {
        v19 = v9->fields._size;
        if ( (unsigned int)v19 >= v17->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            svtId,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = v19 + 1;
          v17->m_Items[v19 + 1] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_30:
      sub_1B8880C(v5, v6);
    }
  }
  while ( v22.fields._current != svtId );
  v16 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_4A5B7C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
    byte_4A5B7C0 = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppClass *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5B7C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_1B885B0(&ServantChangeEntity_TypeInfo);
    sub_1B885B0(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__);
    sub_1B885B0(&ServantChangeMaster___c_TypeInfo);
    byte_4A5B7C3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v17[4] = v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    list = ServantChangeMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantChangeMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *__fastcall ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
    sub_1B88814(v3, v4);
  return v3->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array_array *__fastcall ServantChangeMaster__GetNameChangeByQuestClear(
        ServantChangeMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        bool isQuestClear,
        const MethodInfo *method)
{
  __int64 Item; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int v11; // w27
  System_Collections_Generic_List_object__o *v12; // x22
  __int64 v13; // x24
  int32_t v14; // w23
  bool v15; // w29
  int svtId; // w19
  int v17; // w26
  int v18; // w8
  ServantChangeEntity_o *v19; // x25
  int v20; // w8
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int v33; // w8
  int v34; // w9
  __int64 v36; // x0

  if ( (byte_4A5B7C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
    sub_1B885B0(&ServantChangeEntity___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B7C5 = 1;
  }
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_51;
  v10 = (System_Collections_Generic_List_object__o *)Item;
  v11 = *(_DWORD *)(Item + 24);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v11 >= 1 )
  {
    v13 = 0LL;
    v14 = 0;
    v15 = !isQuestClear;
    svtId = -1;
    v17 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v10,
                        v14,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
      if ( !Item )
        goto LABEL_51;
      v18 = *(_DWORD *)(Item + 16);
      v19 = (ServantChangeEntity_o *)Item;
      if ( v17 != v18 && (*(_BYTE *)(Item + 88) & 2) == 0 )
      {
        if ( svtId < 1 )
          goto LABEL_10;
        if ( svtId != v18 )
        {
          svtId = -1;
LABEL_10:
          v20 = *(_DWORD *)(Item + 20);
          if ( v20 <= 36 )
          {
            if ( v20 == 26 )
            {
              Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Item,
                                v19->fields.condTargetId,
                                2,
                                0LL);
              if ( !Item )
                goto LABEL_51;
              v33 = *(_DWORD *)(Item + 24);
              if ( v33 >= 1 )
              {
                v34 = 0;
                while ( v33 != v34 )
                {
                  if ( *(_DWORD *)(Item + 4LL * v34 + 32) == questId )
                    goto LABEL_27;
                  ++v34;
                  v17 = -1;
                  if ( v33 == v34 )
                    goto LABEL_48;
                }
LABEL_52:
                sub_1B88814(Item, v9);
              }
              goto LABEL_47;
            }
            if ( v20 == 36 && *(_DWORD *)(Item + 24) == questId && !v15 )
              goto LABEL_27;
          }
          else
          {
            if ( (unsigned int)(v20 - 42) >= 4 )
            {
              if ( v20 != 47 || *(_DWORD *)(Item + 24) != questId || *(_DWORD *)(Item + 28) != questPhase )
                goto LABEL_47;
LABEL_27:
              Item = ServantChangeEntity__IsEnable(v19, v9);
              if ( (Item & 1) == 0 )
              {
                svtId = v19->fields.svtId;
                Item = sub_1B88658(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Item )
                  goto LABEL_51;
                v13 = Item;
                Item = sub_1B886EC(v19, *(_QWORD *)(*(_QWORD *)Item + 64LL));
                if ( !Item )
                {
LABEL_53:
                  v36 = sub_1B88830(Item);
                  sub_1B886D8(v36, 0LL);
                }
                if ( !*(_DWORD *)(v13 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 32) = v19;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)v19, v23, v24);
                if ( *(_DWORD *)(v13 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 40) = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), 0, v25, v26);
                if ( !v12 )
                  goto LABEL_51;
                items = v12->fields._items;
                v30 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    (Il2CppObject *)v13,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)v13;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), v13, v27, v28);
                }
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(Item + 24) == questId )
              goto LABEL_27;
          }
LABEL_47:
          v17 = -1;
          continue;
        }
        Item = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)Item, v9);
        if ( (Item & 1) == 0 )
          goto LABEL_47;
        if ( !v13 )
          goto LABEL_51;
        Item = sub_1B886EC(v19, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
        if ( !Item )
          goto LABEL_53;
        if ( *(_DWORD *)(v13 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v13 + 40) = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)v19, v21, v22);
        v17 = v19->fields.svtId;
        svtId = -1;
      }
LABEL_48:
      ;
    }
    while ( ++v14 != v11 );
  }
  if ( !v12 )
LABEL_51:
    sub_1B8880C(Item, v9);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v12,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
}


bool __fastcall ServantChangeMaster__IsNameTrue(ServantChangeMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  ServantChangeEntity_o *v3; // x0
  _BOOL4 v4; // w0

  v3 = ServantChangeMaster__GetEnableEntity(this, svtId, method);
  if ( v3 )
    return (LOBYTE(v3->fields.flag) >> 3) & 1;
  else
    LOBYTE(v4) = 1;
  return v4;
}


void __fastcall ServantChangeMaster__MargeServantVoiceId(
        ServantChangeMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10
  int32_t v10; // w23

  if ( (byte_4A5B7C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&ServantChangeEntity_TypeInfo);
    byte_4A5B7C9 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      v10 = *((_DWORD *)list + 16);
      if ( v10 >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v10,
                (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v10,
            1,
            (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_16:
    sub_1B8880C(list, isVoiceList);
  }
}


int32_t __fastcall ServantChangeMaster__SortWithSvtIdAndPriority(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  int32_t svtId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1B8880C(this, a);
  svtId = a->fields.svtId;
  v5 = b->fields.svtId;
  result = svtId - v5;
  if ( svtId == v5 )
    return b->fields.priority - a->fields.priority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__TrueNameEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_o *result; // x0
  int32_t v6; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B7C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&ServantChangeEntity_TypeInfo);
    byte_4A5B7C4 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B8880C(result, *(_QWORD *)&svtId);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v6,
                                          (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v6;
          if ( result )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantChangeMaster__TryGetEntity(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o **entity,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x2

  if ( (byte_4A5B7C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
    byte_4A5B7C1 = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  ServantChangeEntity_c *v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_ObjectModel_Collection_T__o *v9; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0
  System_Comparison_T__o *v15; // x21
  ServantChangeMaster_o *v17; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_4A5B7C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_1B885B0(&ServantChangeEntity_TypeInfo);
    sub_1B885B0(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__);
    byte_4A5B7C7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v15 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantChangeEntity__TypeInfo);
      System_Comparison_object____ctor(
        v15,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        0LL);
      if ( v3 )
      {
        System_Collections_Generic_List_object___Sort_55571192(
          v3,
          v15,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v3;
      }
LABEL_16:
      sub_1B8880C(list, v4);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v6,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v3 )
      goto LABEL_16;
    v9 = list;
    if ( list )
    {
      v4 = ServantChangeEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
    ++v3->fields._version;
    if ( items )
    {
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v9;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v9, v7, v8);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      ++v6;
      if ( list )
        continue;
    }
    goto LABEL_16;
  }
  sub_1B88ACC(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v17, v18, v19);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B7CA & 1) == 0 )
  {
    sub_1B885B0(&ServantChangeMaster___c_TypeInfo);
    byte_4A5B7CA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ServantChangeMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall ServantChangeMaster___c___ctor(ServantChangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantChangeMaster___c___GetEntityList_b__3_0(
        ServantChangeMaster___c_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}