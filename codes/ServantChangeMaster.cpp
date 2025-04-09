void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB563 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method);
    byte_49BB563 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    195,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantChangeEntity_array *v8; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  int v15; // w23
  int v16; // w24
  ServantChangeEntity_o *v17; // x21
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  const MethodInfo *v22; // x1
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49BB567 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v7);
    byte_49BB567 = 1;
  }
  v8 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v8 )
    goto LABEL_23;
  v14 = *(_QWORD *)&v8->max_length;
  v15 = v14 - 1;
  if ( (int)v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = v8->m_Items[v16];
      if ( !v17 )
        break;
      if ( (v17->fields.flag & 2) == 0 )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v17,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v17;
          sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v12, v13);
        }
        v10 = ServantChangeEntity__IsEnable(v17, v22);
        if ( v10 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v9,
                                                (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( v15 == v16 )
        goto LABEL_17;
      if ( ++v16 >= v8->max_length )
        sub_1B4D1F4(v10, v11);
    }
LABEL_23:
    sub_1B4D1EC(v10, v11);
  }
LABEL_17:
  if ( !v9 )
    goto LABEL_23;
  v23 = v9->fields._items;
  v24 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
  ++v9->fields._version;
  if ( !v23 )
    goto LABEL_23;
  v25 = v9->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      0LL,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v9->fields._size = v25 + 1;
    v26[4] = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), 0, v12, v13);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        sub_1B4D1F4(v3, v4);
    }
LABEL_11:
    sub_1B4D1EC(v3, v4);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantChangeEntity_array *v12; // x0
  const MethodInfo *v13; // x1
  ServantChangeEntity_array *v14; // x21
  int max_length; // w29
  System_Collections_Generic_List_int__o *v16; // x20
  il2cpp_array_size_t v17; // w24
  ServantChangeEntity_o *v18; // x22
  int32_t svtVoiceId; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Int32_array *v23; // x21
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BB569 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49BB569 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v12 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v12 )
    goto LABEL_30;
  v14 = v12;
  max_length = v12->max_length;
  v16 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= v14->max_length )
        sub_1B4D1F4(v12, v13);
      v18 = v14->m_Items[v17];
      if ( !v18 || !v16 )
        goto LABEL_30;
      svtVoiceId = v18->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        v16,
        (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v29 = v28;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v29,
                (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v29.fields._current )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v29,
            (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_17;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v29,
        (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      items = v16->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_30;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          svtVoiceId,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v16->fields._size = size + 1;
        items->m_Items[size + 1] = svtVoiceId;
      }
LABEL_17:
      v12 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v18, v13);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v16,
                 (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v17 != max_length );
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v16,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v29 = v28;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v29,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v29,
        (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v24 = v16->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( v24 )
      {
        v26 = v16->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            svtId,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = v26 + 1;
          v24->m_Items[v26 + 1] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v16,
                 (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_30:
      sub_1B4D1EC(v12, v13);
    }
  }
  while ( v29.fields._current != svtId );
  v23 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v29,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v23;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_49BB561 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_49BB561 = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppClass *v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49BB564 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_ServantChangeEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v11);
    sub_1B4CF90(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v12);
    sub_1B4CF90(&ServantChangeMaster___c_TypeInfo, v13);
    byte_49BB564 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( !list )
        break;
      v15 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v25[4] = v15;
          sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v15, v20, v21);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1B4D1EC(list, v15);
  }
LABEL_15:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    list = ServantChangeMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantChangeMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)list + 23);
    v26 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)v26;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v26, v29, v30);
  }
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56106144(
    v14,
    v26,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v14,
                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
    sub_1B4D1EC(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
    sub_1B4D1F4(v3, v4);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 Item; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_object__o *v18; // x21
  int v19; // w27
  System_Collections_Generic_List_object__o *v20; // x22
  __int64 v21; // x24
  int32_t v22; // w23
  bool v23; // w29
  int svtId; // w19
  int v25; // w26
  int v26; // w8
  ServantChangeEntity_o *v27; // x25
  int v28; // w8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int v41; // w8
  int v42; // w9
  __int64 v44; // x0

  if ( (byte_49BB566 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v13);
    sub_1B4CF90(&ServantChangeEntity___TypeInfo, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49BB566 = 1;
  }
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_51;
  v18 = (System_Collections_Generic_List_object__o *)Item;
  v19 = *(_DWORD *)(Item + 24);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v19 >= 1 )
  {
    v21 = 0LL;
    v22 = 0;
    v23 = !isQuestClear;
    svtId = -1;
    v25 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v18,
                        v22,
                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
      if ( !Item )
        goto LABEL_51;
      v26 = *(_DWORD *)(Item + 16);
      v27 = (ServantChangeEntity_o *)Item;
      if ( v25 != v26 && (*(_BYTE *)(Item + 88) & 2) == 0 )
      {
        if ( svtId < 1 )
          goto LABEL_10;
        if ( svtId != v26 )
        {
          svtId = -1;
LABEL_10:
          v28 = *(_DWORD *)(Item + 20);
          if ( v28 <= 36 )
          {
            if ( v28 == 26 )
            {
              Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Item,
                                v27->fields.condTargetId,
                                2,
                                0LL);
              if ( !Item )
                goto LABEL_51;
              v41 = *(_DWORD *)(Item + 24);
              if ( v41 >= 1 )
              {
                v42 = 0;
                while ( v41 != v42 )
                {
                  if ( *(_DWORD *)(Item + 4LL * v42 + 32) == questId )
                    goto LABEL_27;
                  ++v42;
                  v25 = -1;
                  if ( v41 == v42 )
                    goto LABEL_48;
                }
LABEL_52:
                sub_1B4D1F4(Item, v17);
              }
              goto LABEL_47;
            }
            if ( v28 == 36 && *(_DWORD *)(Item + 24) == questId && !v23 )
              goto LABEL_27;
          }
          else
          {
            if ( (unsigned int)(v28 - 42) >= 4 )
            {
              if ( v28 != 47 || *(_DWORD *)(Item + 24) != questId || *(_DWORD *)(Item + 28) != questPhase )
                goto LABEL_47;
LABEL_27:
              Item = ServantChangeEntity__IsEnable(v27, v17);
              if ( (Item & 1) == 0 )
              {
                svtId = v27->fields.svtId;
                Item = sub_1B4D038(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Item )
                  goto LABEL_51;
                v21 = Item;
                Item = sub_1B4D0CC(v27, *(_QWORD *)(*(_QWORD *)Item + 64LL));
                if ( !Item )
                {
LABEL_53:
                  v44 = sub_1B4D210(Item);
                  sub_1B4D0B8(v44, 0LL);
                }
                if ( !*(_DWORD *)(v21 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v21 + 32) = v27;
                sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v27, v31, v32);
                if ( *(_DWORD *)(v21 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v21 + 40) = 0LL;
                sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 40), 0, v33, v34);
                if ( !v20 )
                  goto LABEL_51;
                items = v20->fields._items;
                v38 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
                ++v20->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v20->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v20,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v40 = &items->obj.klass + size;
                  v20->fields._size = size + 1;
                  v40[4] = (Il2CppClass *)v21;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v40 + 4), v21, v35, v36);
                }
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(Item + 24) == questId )
              goto LABEL_27;
          }
LABEL_47:
          v25 = -1;
          continue;
        }
        Item = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)Item, v17);
        if ( (Item & 1) == 0 )
          goto LABEL_47;
        if ( !v21 )
          goto LABEL_51;
        Item = sub_1B4D0CC(v27, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
        if ( !Item )
          goto LABEL_53;
        if ( *(_DWORD *)(v21 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v21 + 40) = v27;
        sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 40), (int32_t)v27, v29, v30);
        v25 = v27->fields.svtId;
        svtId = -1;
      }
LABEL_48:
      ;
    }
    while ( ++v22 != v19 );
  }
  if ( !v20 )
LABEL_51:
    sub_1B4D1EC(Item, v17);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v20,
                                              (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  int32_t v12; // w23

  if ( (byte_49BB56A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__, isVoiceList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    byte_49BB56A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( !list )
        break;
      v12 = *((_DWORD *)list + 16);
      if ( v12 >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v12,
                (const MethodInfo_31E85B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v12,
            1,
            (const MethodInfo_31E839C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v10 == ++v11 )
        return;
    }
LABEL_14:
    sub_1B4D1EC(list, isVoiceList);
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
    sub_1B4D1EC(this, a);
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
  __int64 v5; // x1
  ServantChangeEntity_o *result; // x0
  int32_t v7; // w21

  if ( (byte_49BB565 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__, v5);
    byte_49BB565 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1B4D1EC(result, *(_QWORD *)&svtId);
  v7 = 0;
  while ( v7 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v7,
                                          (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.battleSvtId == svtId )
          return result;
        result = (ServantChangeEntity_o *)this->fields.list;
        ++v7;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
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

  if ( (byte_49BB562 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__, entity);
    byte_49BB562 = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x21

  if ( (byte_49BB568 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__, v3);
    sub_1B4CF90(&System_Comparison_ServantChangeEntity__TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v9);
    byte_49BB568 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( v10 )
      {
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v10->fields._version;
        if ( items )
        {
          size = v10->fields._size;
          v19 = list;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v19;
            sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v13;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  v21 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantChangeEntity__TypeInfo);
  System_Comparison_object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
    0LL);
  if ( !v10 )
LABEL_16:
    sub_1B4D1EC(list, v11);
  System_Collections_Generic_List_object___Sort_56106144(
    v10,
    v21,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)v10;
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB56B & 1) == 0 )
  {
    sub_1B4CF90(&ServantChangeMaster___c_TypeInfo, v1);
    byte_49BB56B = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantChangeMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return b->fields.priority - a->fields.priority;
}