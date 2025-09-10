void ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B18 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
    byte_4C27B18 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    195,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


ServantChangeEntity_array *ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x8
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

  if ( (byte_4C27B1C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    byte_4C27B1C = 1;
  }
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v5 )
    goto LABEL_23;
  max_length = v5->max_length;
  v12 = max_length - 1;
  if ( (int)max_length >= 1 )
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v9, v10);
        }
        v7 = ServantChangeEntity__IsEnable(v14, v19);
        if ( v7 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v6,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( v12 == v13 )
        goto LABEL_17;
      if ( (unsigned int)++v13 >= LODWORD(v5->max_length) )
        sub_1C2D6F4(v7, v8, v9);
    }
LABEL_23:
    sub_1C2D6EC(v7, v8);
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
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      0,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v6->fields._size = v22 + 1;
    v23[4] = 0;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), 0, v9, v10);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *ServantChangeMaster__GetEnableEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  const MethodInfo *v4; // x1
  il2cpp_array_size_t max_length; // x8
  ServantChangeEntity_array *v6; // x19
  int v7; // w21
  int v8; // w22
  Il2CppClass **v9; // x8
  ServantChangeEntity_o *v10; // x20
  __int64 v11; // x2

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    goto LABEL_11;
  max_length = v3->max_length;
  v6 = v3;
  v7 = max_length - 1;
  if ( (int)max_length >= 1 )
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
        return 0;
      if ( (unsigned int)++v8 >= LODWORD(v6->max_length) )
        sub_1C2D6F4(v3, v4, v11);
    }
LABEL_11:
    sub_1C2D6EC(v3, v4);
  }
  return 0;
}


System_Int32_array *ServantChangeMaster__GetEnableSvtVoiceList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x0
  const MethodInfo *v6; // x1
  ServantChangeEntity_array *v7; // x21
  int max_length; // w29
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x2
  unsigned int v11; // w24
  ServantChangeEntity_o *v12; // x22
  int32_t svtVoiceId; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Int32_array *v17; // x21
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C27B1E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C27B1E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v5 )
    goto LABEL_30;
  v7 = v5;
  max_length = v5->max_length;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= LODWORD(v7->max_length) )
        sub_1C2D6F4(v5, v6, v10);
      v12 = v7->m_Items[v11];
      if ( !v12 || !v9 )
        goto LABEL_30;
      svtVoiceId = v12->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        v9,
        (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v23 = v22;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v23,
                (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v23.fields._current )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v23,
            (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_17;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v23,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      items = v9->fields._items;
      v15 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        goto LABEL_30;
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          svtVoiceId,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size] = svtVoiceId;
      }
LABEL_17:
      v5 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v12, v6);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v11 != max_length );
  }
  if ( !v9 )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v9,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v23,
        (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v18 = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( v18 )
      {
        v20 = v9->fields._size;
        if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            svtId,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = v20 + 1;
          v18->m_Items[v20] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_30:
      sub_1C2D6EC(v5, v6);
    }
  }
  while ( v23.fields._current != svtId );
  v17 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_4C27B16 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
    byte_4C27B16 = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_338C850 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


ServantChangeEntity_array *ServantChangeMaster__GetEntityList(
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
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C27B19 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_1C2D490(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_1C2D490(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__);
    sub_1C2D490(&ServantChangeMaster___c_TypeInfo);
    byte_4C27B19 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
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
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v14 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v16[4] = v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v6, v11, v12);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    list = ServantChangeMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantChangeMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0);
    static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)v17;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_58242632(
    v5,
    v17,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  max_length = v3->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C2D6F4(v3, v4, v5);
  return v3->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array_array *ServantChangeMaster__GetNameChangeByQuestClear(
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
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int v31; // w8
  int v32; // w9
  __int64 v34; // x0

  if ( (byte_4C27B1B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
    sub_1C2D490(&ServantChangeEntity___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27B1B = 1;
  }
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_51;
  v10 = (System_Collections_Generic_List_object__o *)Item;
  v11 = *(_DWORD *)(Item + 24);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v11 >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = !isQuestClear;
    svtId = -1;
    v17 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v10,
                        v14,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
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
              Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Item,
                                v19->fields.condTargetId,
                                2,
                                0);
              if ( !Item )
                goto LABEL_51;
              v31 = *(_DWORD *)(Item + 24);
              if ( v31 >= 1 )
              {
                v32 = 0;
                while ( v31 != v32 )
                {
                  if ( *(_DWORD *)(Item + 4LL * v32 + 32) == questId )
                    goto LABEL_27;
                  ++v32;
                  v17 = -1;
                  if ( v31 == v32 )
                    goto LABEL_48;
                }
LABEL_52:
                sub_1C2D6F4(Item, v9, v21);
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
                Item = sub_1C2D538(ServantChangeEntity___TypeInfo, 2);
                if ( !Item )
                  goto LABEL_51;
                v13 = Item;
                Item = sub_1C2D5CC(v19, *(_QWORD *)(*(_QWORD *)Item + 64LL));
                if ( !Item )
                {
LABEL_53:
                  v34 = sub_1C2D710(Item);
                  sub_1C2D5B8(v34, 0);
                }
                if ( !*(_DWORD *)(v13 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 32) = v19;
                sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v19, v21, v23);
                if ( *(_DWORD *)(v13 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v13 + 40) = 0;
                sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), 0, v21, v24);
                if ( !v12 )
                  goto LABEL_51;
                items = v12->fields._items;
                v28 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v12->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    (Il2CppObject *)v13,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v30[4] = (Il2CppClass *)v13;
                  sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), v13, v25, v26);
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
        Item = sub_1C2D5CC(v19, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
        if ( !Item )
          goto LABEL_53;
        if ( *(_DWORD *)(v13 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v13 + 40) = v19;
        sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v19, v21, v22);
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
    sub_1C2D6EC(Item, v9);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v12,
                                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
}


bool ServantChangeMaster__IsNameTrue(ServantChangeMaster_o *this, int32_t svtId, const MethodInfo *method)
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


void ServantChangeMaster__MargeServantVoiceId(
        ServantChangeMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  int32_t v9; // w23

  if ( (byte_4C27B1F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_4C27B1F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
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
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( !list )
        break;
      v9 = *((_DWORD *)list + 16);
      if ( v9 >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v9,
                (const MethodInfo_33D2C1C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v9,
            1,
            (const MethodInfo_33D2A08 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_14:
    sub_1C2D6EC(list, isVoiceList);
  }
}


int32_t ServantChangeMaster__SortWithSvtIdAndPriority(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  int32_t svtId; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C2D6EC(this, a);
  svtId = a->fields.svtId;
  v5 = b->fields.svtId;
  result = svtId - v5;
  if ( svtId == v5 )
    return b->fields.priority - a->fields.priority;
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *ServantChangeMaster__TrueNameEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_o *result; // x0
  int32_t v6; // w21

  if ( (byte_4C27B1A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    byte_4C27B1A = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_1C2D6EC(result, *(_QWORD *)&svtId);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v6,
                                          (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( result )
      {
        if ( result->fields.battleSvtId == svtId )
          return result;
        result = (ServantChangeEntity_o *)this->fields.list;
        ++v6;
        if ( result )
          continue;
      }
    }
    goto LABEL_10;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantChangeMaster__TryGetEntity(
        ServantChangeMaster_o *this,
        ServantChangeEntity_o **entity,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x2

  if ( (byte_4C27B17 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
    byte_4C27B17 = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  Il2CppClass **v13; // x0
  System_Comparison_T__o *v14; // x21

  if ( (byte_4C27B1D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_1C2D490(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_1C2D490(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__);
    byte_4C27B1D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( v3 )
      {
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v3->fields._version;
        if ( items )
        {
          size = v3->fields._size;
          v12 = list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v13[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v6;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  v14 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantChangeEntity__TypeInfo);
  System_Comparison_object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
    0);
  if ( !v3 )
LABEL_16:
    sub_1C2D6EC(list, v4);
  System_Collections_Generic_List_object___Sort_58242632(
    v3,
    v14,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)v3;
}


void ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27B20 & 1) == 0 )
  {
    sub_1C2D490(&ServantChangeMaster___c_TypeInfo);
    byte_4C27B20 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantChangeMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantChangeMaster___c___ctor(ServantChangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantChangeMaster___c___GetEntityList_b__3_0(
        ServantChangeMaster___c_o *this,
        ServantChangeEntity_o *a,
        ServantChangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}