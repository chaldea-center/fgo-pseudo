void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCA53 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method);
    byte_49FCA53 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  int v17; // w23
  int v18; // w24
  ServantChangeEntity_o *v19; // x21
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x1
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0

  if ( (byte_49FCA57 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v7);
    byte_49FCA57 = 1;
  }
  v8 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v8 )
    goto LABEL_23;
  v16 = *(_QWORD *)&v8->max_length;
  v17 = v16 - 1;
  if ( (int)v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = v8->m_Items[v18];
      if ( !v19 )
        break;
      if ( (v19->fields.flag & 2) == 0 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v21 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v19, v14, v15);
        }
        v12 = ServantChangeEntity__IsEnable(v19, v24);
        if ( v12 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v11,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( v17 == v18 )
        goto LABEL_17;
      if ( ++v18 >= v8->max_length )
        sub_1B6432C(v12, v13);
    }
LABEL_23:
    sub_1B64324(v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_23;
  v25 = v11->fields._items;
  v26 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
  ++v11->fields._version;
  if ( !v25 )
    goto LABEL_23;
  v27 = v11->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      0LL,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v11->fields._size = v27 + 1;
    v28[4] = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), 0, v14, v15);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        sub_1B6432C(v3, v4);
    }
LABEL_11:
    sub_1B64324(v3);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ServantChangeEntity_array *v15; // x21
  int max_length; // w29
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  il2cpp_array_size_t v19; // w24
  ServantChangeEntity_o *v20; // x22
  int32_t svtVoiceId; // w23
  const MethodInfo *v22; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Int32_array *v26; // x21
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FCA59 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49FCA59 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v12 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v12 )
    goto LABEL_30;
  v15 = v12;
  max_length = v12->max_length;
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v15->max_length )
        sub_1B6432C(v12, v18);
      v20 = v15->m_Items[v19];
      if ( !v20 || !v17 )
        goto LABEL_30;
      svtVoiceId = v20->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        v17,
        (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = v31;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v32,
                (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v32.fields._current )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v32,
            (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_17;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v32,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      items = v17->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_30;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v17,
          svtVoiceId,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        items->m_Items[size + 1] = svtVoiceId;
      }
LABEL_17:
      v12 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v20, v22);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v17,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v19 != max_length );
  }
  if ( !v17 )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v17,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = v31;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v32,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v32,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v27 = v17->fields._items;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( v27 )
      {
        v29 = v17->fields._size;
        if ( (unsigned int)v29 >= v27->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            svtId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v29 + 1;
          v27->m_Items[v29 + 1] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v17,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_30:
      sub_1B64324(v12);
    }
  }
  while ( v32.fields._current != svtId );
  v26 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v32,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_49FCA51 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_49FCA51 = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  void *list; // x0
  int32_t Count; // w0
  Il2CppClass *v18; // x1
  __int64 v19; // x2
  int32_t v20; // w22
  int32_t v21; // w23
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49FCA54 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ServantChangeEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v11);
    sub_1B640C8(&ServantChangeEntity_TypeInfo, v12);
    sub_1B640C8(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v13);
    sub_1B640C8(&ServantChangeMaster___c_TypeInfo, v14);
    byte_49FCA54 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = (Il2CppClass *)list;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v15 )
          break;
        items = v15->fields._items;
        v25 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v27[4] = v18;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v19, v22);
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(list);
  }
LABEL_17:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo);
    list = ServantChangeMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantChangeMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantChangeEntity__TypeInfo, v18, v19);
    System_Comparison_object____ctor(v28, v29, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55243320(
    v15,
    v28,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v15,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
    sub_1B64324(0LL);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
    sub_1B6432C(v3, v4);
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  int v20; // w27
  System_Collections_Generic_List_object__o *v21; // x22
  __int64 v22; // x24
  int32_t v23; // w23
  bool v24; // w29
  int svtId; // w19
  int v26; // w26
  const MethodInfo *v27; // x1
  int v28; // w8
  ServantChangeEntity_o *v29; // x25
  int v30; // w8
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int v43; // w8
  int v44; // w9
  __int64 v46; // x0

  if ( (byte_49FCA56 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v13);
    sub_1B640C8(&ServantChangeEntity___TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FCA56 = 1;
  }
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_51;
  v19 = (System_Collections_Generic_List_object__o *)Item;
  v20 = *(_DWORD *)(Item + 24);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantChangeEntity____TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v20 >= 1 )
  {
    v22 = 0LL;
    v23 = 0;
    v24 = !isQuestClear;
    svtId = -1;
    v26 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v19,
                        v23,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
      if ( !Item )
        goto LABEL_51;
      v28 = *(_DWORD *)(Item + 16);
      v29 = (ServantChangeEntity_o *)Item;
      if ( v26 != v28 && (*(_BYTE *)(Item + 88) & 2) == 0 )
      {
        if ( svtId < 1 )
          goto LABEL_10;
        if ( svtId != v28 )
        {
          svtId = -1;
LABEL_10:
          v30 = *(_DWORD *)(Item + 20);
          if ( v30 <= 36 )
          {
            if ( v30 == 26 )
            {
              Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Item,
                                v29->fields.condTargetId,
                                2,
                                0LL);
              if ( !Item )
                goto LABEL_51;
              v43 = *(_DWORD *)(Item + 24);
              if ( v43 >= 1 )
              {
                v44 = 0;
                while ( v43 != v44 )
                {
                  if ( *(_DWORD *)(Item + 4LL * v44 + 32) == questId )
                    goto LABEL_27;
                  ++v44;
                  v26 = -1;
                  if ( v43 == v44 )
                    goto LABEL_48;
                }
LABEL_52:
                sub_1B6432C(Item, v27);
              }
              goto LABEL_47;
            }
            if ( v30 == 36 && *(_DWORD *)(Item + 24) == questId && !v24 )
              goto LABEL_27;
          }
          else
          {
            if ( (unsigned int)(v30 - 42) >= 4 )
            {
              if ( v30 != 47 || *(_DWORD *)(Item + 24) != questId || *(_DWORD *)(Item + 28) != questPhase )
                goto LABEL_47;
LABEL_27:
              Item = ServantChangeEntity__IsEnable(v29, v27);
              if ( (Item & 1) == 0 )
              {
                svtId = v29->fields.svtId;
                Item = sub_1B64170(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Item )
                  goto LABEL_51;
                v22 = Item;
                Item = sub_1B64204(v29, *(_QWORD *)(*(_QWORD *)Item + 64LL));
                if ( !Item )
                {
LABEL_53:
                  v46 = sub_1B64348(Item);
                  sub_1B641F0(v46, 0LL);
                }
                if ( !*(_DWORD *)(v22 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v22 + 32) = v29;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v29, v33, v34);
                if ( *(_DWORD *)(v22 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v22 + 40) = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 40), 0, v35, v36);
                if ( !v21 )
                  goto LABEL_51;
                items = v21->fields._items;
                v40 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
                ++v21->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v42 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v42[4] = (Il2CppClass *)v22;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), v22, v37, v38);
                }
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(Item + 24) == questId )
              goto LABEL_27;
          }
LABEL_47:
          v26 = -1;
          continue;
        }
        Item = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)Item, v27);
        if ( (Item & 1) == 0 )
          goto LABEL_47;
        if ( !v22 )
          goto LABEL_51;
        Item = sub_1B64204(v29, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
        if ( !Item )
          goto LABEL_53;
        if ( *(_DWORD *)(v22 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v22 + 40) = v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)v29, v31, v32);
        v26 = v29->fields.svtId;
        svtId = -1;
      }
LABEL_48:
      ;
    }
    while ( ++v23 != v20 );
  }
  if ( !v21 )
LABEL_51:
    sub_1B64324(Item);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v21,
                                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  __int64 v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  __int64 methodPtr_low; // x10
  int32_t v14; // w23

  if ( (byte_49FCA5A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1B640C8(&ServantChangeEntity_TypeInfo, v8);
    byte_49FCA5A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      v14 = *((_DWORD *)list + 16);
      if ( v14 >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v14,
                (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v14,
            1,
            (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v11 == ++v12 )
        return;
    }
LABEL_16:
    sub_1B64324(list);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  ServantChangeEntity_o *result; // x0
  int32_t v8; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_49FCA55 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&ServantChangeEntity_TypeInfo, v6);
    byte_49FCA55 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1B64324(result);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                 (System_Collections_ObjectModel_Collection_T__o *)result,
                 (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v8,
                                          (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v8;
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

  if ( (byte_49FCA52 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__, entity);
    byte_49FCA52 = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x21
  ServantChangeMaster_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2

  if ( (byte_49FCA58 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&System_Comparison_ServantChangeEntity__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v9);
    sub_1B640C8(&ServantChangeEntity_TypeInfo, v10);
    sub_1B640C8(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v11);
    byte_49FCA58 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v25 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantChangeEntity__TypeInfo, v15, v16);
      System_Comparison_object____ctor(
        v25,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        0LL);
      if ( v12 )
      {
        System_Collections_Generic_List_object___Sort_55243320(
          v12,
          v25,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v12;
      }
LABEL_16:
      sub_1B64324(list);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v12 )
      goto LABEL_16;
    v19 = list;
    if ( list )
    {
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    items = v12->fields._items;
    v22 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
    ++v12->fields._version;
    if ( items )
    {
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)list,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      ++v14;
      if ( list )
        continue;
    }
    goto LABEL_16;
  }
  sub_1B645E4(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v27, v28, v29);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCA5B & 1) == 0 )
  {
    sub_1B640C8(&ServantChangeMaster___c_TypeInfo, v1);
    byte_49FCA5B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantChangeMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantChangeMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}