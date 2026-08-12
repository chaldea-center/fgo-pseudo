void ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971110 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
    byte_5971110 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    197,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


ServantChangeEntity_array *ServantChangeMaster__GetDisplayMaterialEntities(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  il2cpp_array_size_t max_length; // x23
  __int64 v16; // x24
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

  if ( (byte_5971114 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    byte_5971114 = 1;
  }
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v5 )
    goto LABEL_22;
  max_length = v5->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= LODWORD(v5->max_length) )
        sub_2213CE4(v7);
      v17 = v5->m_Items[v16];
      if ( !v17 )
        break;
      if ( (v17->fields.flag & 4) == 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v17,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v9, v10, v11, v12, v13, v14);
        }
        v7 = ServantChangeEntity__IsEnable(v17, v22);
        if ( v7 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v6,
                                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( (_DWORD)max_length == (_DWORD)++v16 )
        goto LABEL_16;
    }
LABEL_22:
    sub_2213CDC(v7, v8);
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_22;
  v23 = v6->fields._items;
  v24 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
  ++v6->fields._version;
  if ( !v23 )
    goto LABEL_22;
  v25 = v6->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      0,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v6->fields._size = v25 + 1;
    v26[4] = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), 0, v9, v10, v11, v12, v13, v14);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *ServantChangeMaster__GetEnableEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  const MethodInfo *v4; // x1
  il2cpp_array_size_t max_length; // x21
  ServantChangeEntity_array *v6; // x19
  __int64 v7; // x22
  ServantChangeEntity_o *v8; // x20

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    goto LABEL_10;
  max_length = v3->max_length;
  v6 = v3;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= LODWORD(v6->max_length) )
        sub_2213CE4(v3);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        break;
      v3 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v6->m_Items[v7], v4);
      if ( ((unsigned __int8)v3 & 1) != 0 )
        return v8;
      if ( (_DWORD)max_length == (_DWORD)++v7 )
        return 0;
    }
LABEL_10:
    sub_2213CDC(v3, v4);
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
  __int64 max_length_low; // x29
  System_Collections_Generic_List_int__o *v9; // x20
  unsigned __int64 v10; // x25
  ServantChangeEntity_o *v11; // x22
  int32_t svtVoiceId; // w23
  __int128 v13; // q0
  bool v14; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  System_Int32_array *v18; // x21
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5971116 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971116 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v5 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v5 )
    goto LABEL_29;
  v7 = v5;
  max_length_low = LODWORD(v5->max_length);
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (int)max_length_low >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= LODWORD(v7->max_length) )
        sub_2213CE4(v5);
      v11 = v7->m_Items[v10];
      if ( !v11 || !v9 )
        goto LABEL_29;
      svtVoiceId = v11->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        v9,
        (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v13 = *(_OWORD *)&v23.fields._list;
      v23.fields._list = 0;
      *(_QWORD *)&v23.fields._index = &v24;
      *(_OWORD *)&v24.fields._list = v13;
      *(_QWORD *)&v24.fields._current = *(_QWORD *)&v23.fields._current;
      do
        v14 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v24,
                (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      while ( v14 && svtVoiceId != v24.fields._current );
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v24,
        (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      if ( !v14 )
      {
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            svtVoiceId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size] = svtVoiceId;
        }
      }
      v5 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v11, v6);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v10 != max_length_low );
  }
  if ( !v9 )
    goto LABEL_29;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v9,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v24,
        (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v19 = v9->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( v19 )
      {
        v21 = v9->fields._size;
        if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            svtId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = v21 + 1;
          v19->m_Items[v21] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v9,
                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_29:
      sub_2213CDC(v5, v6);
    }
  }
  while ( v24.fields._current != svtId );
  v18 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_597110E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
    byte_597110E = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct ServantChangeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct ServantChangeMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5971111 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_2213A60(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_2213A60(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__);
    sub_2213A60(&ServantChangeMaster___c_TypeInfo);
    byte_5971111 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( !list )
        break;
      v6 = (Il2CppClass *)list;
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_15;
    }
LABEL_23:
    sub_2213CDC(list, v6);
  }
LABEL_15:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !*(&ServantChangeMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo, v6);
    list = ServantChangeMaster___c_TypeInfo;
  }
  static_fields = (struct ServantChangeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantChangeEntity__TypeInfo);
    System_Comparison_object____ctor(_9__3_0, v23, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0);
    v24 = ServantChangeMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__3_0, (int32_t)_9__3_0, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
}


ServantChangeEntity_o *ServantChangeMaster__GetHiddenEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantChangeEntity_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x8

  v3 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  max_length = v3->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_2213CE4(v3);
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
  bool v8; // w22
  __int64 Item; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  int v12; // w25
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x22
  int32_t v15; // w21
  int svtId; // w29
  int v17; // w24
  const MethodInfo *v18; // x5
  int v19; // w8
  ServantChangeEntity_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v52; // x0
  ServantChangeMaster___c__DisplayClass8_0_o v53; // [xsp+0h] [xbp-70h] BYREF

  v8 = isQuestClear;
  if ( (byte_5971113 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
    sub_2213A60(&ServantChangeEntity___TypeInfo);
    byte_5971113 = 1;
  }
  v53.fields.questId = questId;
  *(_DWORD *)&v53.fields.isQuestClear = v8;
  v53.fields.questPhase = questPhase;
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_32;
  v11 = (System_Collections_Generic_List_object__o *)Item;
  v12 = *(_DWORD *)(Item + 24);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantChangeEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = 0;
    svtId = -1;
    v17 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v11,
                        v15,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v19 = *(_DWORD *)(Item + 16);
      v20 = (ServantChangeEntity_o *)Item;
      if ( v17 != v19 && (*(_BYTE *)(Item + 88) & 2) == 0 )
      {
        if ( svtId < 1 )
          goto LABEL_10;
        if ( svtId != v19 )
        {
          svtId = -1;
LABEL_10:
          Item = ServantChangeMaster___GetNameChangeByQuestClear_g__IsQuestClearDisablingType_8_0(
                   *(_DWORD *)(Item + 20),
                   *(_DWORD *)(Item + 24),
                   *(_DWORD *)(Item + 28),
                   0,
                   &v53,
                   v18);
          if ( (Item & 1) != 0 )
          {
            Item = ServantChangeEntity__IsEnable(v20, v10);
            if ( (Item & 1) == 0 )
            {
              svtId = v20->fields.svtId;
              Item = sub_2213B20(ServantChangeEntity___TypeInfo, 2);
              if ( !Item )
                goto LABEL_32;
              v14 = Item;
              v21 = sub_2213BB4(v20, *(_QWORD *)(*(_QWORD *)Item + 64LL));
              if ( !v21 )
                goto LABEL_34;
              if ( !*(_DWORD *)(v14 + 24)
                || (*(_QWORD *)(v14 + 32) = v20,
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v14 + 32),
                      (int32_t)v20,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27,
                      v28),
                    (*(_DWORD *)(v14 + 24) & 0xFFFFFFFE) == 0) )
              {
LABEL_33:
                sub_2213CE4(v21);
              }
              *(_QWORD *)(v14 + 40) = 0;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 40), 0, v29, v30, v31, v32, v33, v34);
              if ( !v13 )
                goto LABEL_32;
              items = v13->fields._items;
              v42 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
              ++v13->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v14;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), v14, v35, v36, v37, v38, v39, v40);
              }
            }
          }
LABEL_28:
          v17 = -1;
          continue;
        }
        Item = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)Item, v10);
        if ( (Item & 1) == 0 )
          goto LABEL_28;
        if ( !v14 )
          goto LABEL_32;
        v21 = sub_2213BB4(v20, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
        if ( !v21 )
        {
LABEL_34:
          v52 = sub_2213D00(v21, v22);
          sub_2213BA0(v52, 0);
        }
        if ( (*(_DWORD *)(v14 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_33;
        *(_QWORD *)(v14 + 40) = v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 40), (int32_t)v20, v45, v46, v47, v48, v49, v50);
        v17 = v20->fields.svtId;
        svtId = -1;
      }
    }
    while ( v12 != ++v15 );
  }
  if ( !v13 )
LABEL_32:
    sub_2213CDC(Item, v10);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v13,
                                              (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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

  if ( (byte_5971117 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_5971117 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
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
                (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v9,
            1,
            (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        return;
    }
LABEL_14:
    sub_2213CDC(list, isVoiceList);
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
    sub_2213CDC(this, a);
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

  if ( (byte_5971112 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    byte_5971112 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_10:
    sub_2213CDC(result, *(_QWORD *)&svtId);
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v6,
                                          (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
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

  if ( (byte_597110F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
    byte_597110F = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantChangeMaster___GetNameChangeByQuestClear_g__IsQuestClearDisablingType_8_0(
        int32_t condType,
        int32_t condTargetId,
        int32_t condValue,
        int32_t depth,
        ServantChangeMaster___c__DisplayClass8_0_o *a5,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_Collections_ICollection_o *CacheById; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5
  bool v17; // w21
  System_Int32_array *QuestIdListByGroupId; // x0
  _QWORD v22[2]; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5971118 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    byte_5971118 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( depth > 10 )
    return 0;
  if ( condType <= 36 )
  {
    if ( condType == 26 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condTargetId);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
      if ( Master_object )
      {
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                 (QuestGroupMaster_o *)Master_object,
                                 condTargetId,
                                 2,
                                 0);
        return System_Array__IndexOf_int_(
                 QuestIdListByGroupId,
                 a5->fields.questId,
                 (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >= 0;
      }
LABEL_39:
      sub_2213CDC(Master_object, v12);
    }
    if ( condType == 36 )
      return a5->fields.questId == condTargetId && a5->fields.isQuestClear;
    return 0;
  }
  if ( (unsigned int)(condType - 46) > 0xFFFFFFFB )
    return a5->fields.questId == condTargetId;
  if ( condType == 47 )
  {
    if ( a5->fields.questId != condTargetId )
      return 0;
    return a5->fields.questPhase == condValue;
  }
  if ( condType != 113 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condTargetId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_39;
  CacheById = (System_Collections_ICollection_o *)CommonReleaseMaster__GetCacheById(
                                                    (CommonReleaseMaster_o *)Master_object,
                                                    condTargetId,
                                                    0);
  Master_object = (Il2CppObject *)BasicHelper__IsNullOrEmpty(CacheById, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !CacheById )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)CacheById,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
  v22[0] = 0;
  v22[1] = &v23;
  do
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    v17 = v14;
    if ( !v14 )
      break;
    if ( !v23.fields._current )
      sub_2213CDC(v14, v15);
  }
  while ( !ServantChangeMaster___GetNameChangeByQuestClear_g__IsQuestClearDisablingType_8_0(
             *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)off_18 + 4),
             *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)off_18 + 4 + 4),
             *(_DWORD *)((char *)&v23.fields._current->klass + (unsigned __int64)&qword_20 + 4),
             depth + 1,
             a5,
             v16) );
  sub_200DB80(v22);
  return v17;
}


System_Collections_Generic_List_ServantChangeEntity__o *ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v6; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x21

  if ( (byte_5971115 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
    sub_2213A60(&System_Comparison_ServantChangeEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
    sub_2213A60(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__);
    byte_5971115 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantChangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_13;
  v6 = 0;
  while ( v6 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantChangeEntity__get_Item__);
      if ( v3 )
      {
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v3->fields._version;
        if ( items )
        {
          size = v3->fields._size;
          v16 = list;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v6;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  v18 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ServantChangeEntity__TypeInfo);
  System_Comparison_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
    0);
  if ( !v3 )
LABEL_13:
    sub_2213CDC(list, v4);
  System_Collections_Generic_List_object___Sort_71849708(
    v3,
    v18,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)v3;
}


void ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971119 & 1) == 0 )
  {
    sub_2213A60(&ServantChangeMaster___c_TypeInfo);
    byte_5971119 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantChangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantChangeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}