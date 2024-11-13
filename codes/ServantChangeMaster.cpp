void __fastcall ServantChangeMaster___ctor(ServantChangeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16873 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__, method, v2);
    byte_4B16873 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetAllChanged(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantChangeEntity_array *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x19
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  int v25; // w23
  int v26; // w24
  int64_t v27; // x21
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x1
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B16877 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v9, v10);
    byte_4B16877 = 1;
  }
  v11 = ServantChangeMaster__GetEntityList(this, svtId, method);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  if ( !v11 )
    goto LABEL_23;
  v24 = *(_QWORD *)&v11->max_length;
  v25 = v24 - 1;
  if ( (int)v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = (int64_t)v11->m_Items[v26];
      if ( !v27 )
        break;
      if ( (*(_BYTE *)(v27 + 88) & 2) == 0 )
      {
        if ( !v15 )
          break;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v27, v18, v19, v20, v21, v22, v23);
        }
        v16 = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)v27, v32);
        if ( v16 )
          return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                v15,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
      }
      if ( v25 == v26 )
        goto LABEL_17;
      if ( ++v26 >= v11->max_length )
        sub_1BCAA44(v16, v17);
    }
LABEL_23:
    sub_1BCAA3C(v16, v17);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_23;
  v33 = v15->fields._items;
  v34 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
  ++v15->fields._version;
  if ( !v33 )
    goto LABEL_23;
  v35 = v15->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      0LL,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v15->fields._size = v35 + 1;
    v36[4] = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), 0LL, v18, v19, v20, v21, v22, v23);
  }
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v15,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
        sub_1BCAA44(v3, v4);
    }
LABEL_11:
    sub_1BCAA3C(v3, v4);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ServantChangeEntity_array *v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ServantChangeEntity_array *v23; // x21
  int max_length; // w29
  System_Collections_Generic_List_int__o *v25; // x20
  il2cpp_array_size_t v26; // w24
  ServantChangeEntity_o *v27; // x22
  int32_t svtVoiceId; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Int32_array *v32; // x21
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16879 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B16879 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v19 = ServantChangeMaster__GetEntityList(this, svtId, method);
  if ( !v19 )
    goto LABEL_30;
  v23 = v19;
  max_length = v19->max_length;
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( max_length >= 1 )
  {
    v26 = 0;
    do
    {
      if ( v26 >= v23->max_length )
        sub_1BCAA44(v19, v20);
      v27 = v23->m_Items[v26];
      if ( !v27 || !v25 )
        goto LABEL_30;
      svtVoiceId = v27->fields.svtVoiceId;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        v25,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v38 = v37;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v38,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        if ( svtVoiceId == v38.fields._current )
        {
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v38,
            (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_17;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v38,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      items = v25->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_30;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v25,
          svtVoiceId,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v25->fields._size = size + 1;
        items->m_Items[size + 1] = svtVoiceId;
      }
LABEL_17:
      v19 = (ServantChangeEntity_array *)ServantChangeEntity__IsEnable(v27, v20);
      if ( ((unsigned __int8)v19 & 1) != 0 )
        return System_Collections_Generic_List_int___ToArray(
                 v25,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    while ( ++v26 != max_length );
  }
  if ( !v25 )
    goto LABEL_30;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    v25,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v38,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v33 = v25->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v25->fields._version;
      if ( v33 )
      {
        v35 = v25->fields._size;
        if ( (unsigned int)v35 >= v33->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v25,
            svtId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = v35 + 1;
          v33->m_Items[v35 + 1] = svtId;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v25,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
LABEL_30:
      sub_1BCAA3C(v19, v20);
    }
  }
  while ( v38.fields._current != svtId );
  v32 = System_Collections_Generic_List_int___ToArray(
          v25,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v32;
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_o *__fastcall ServantChangeMaster__GetEntity(
        ServantChangeMaster_o *this,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x1

  if ( (byte_4B16871 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&priority);
    byte_4B16871 = 1;
  }
  v7 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&priority);
  return (ServantChangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v7,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantChangeEntity_array *__fastcall ServantChangeMaster__GetEntityList(
        ServantChangeMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  int64_t v27; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v30; // x2
  __int64 v31; // x3
  int32_t v32; // w22
  int32_t v33; // w23
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  struct ServantChangeMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B16874 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_ServantChangeEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantChangeEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantChangeMaster___c__GetEntityList_b__3_0__, v22, v23);
    sub_1BCA7E0(&ServantChangeMaster___c_TypeInfo, v24, v25);
    byte_4B16874 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v32 = Count;
    v33 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = (int64_t)list;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId )
      {
        if ( !v26 )
          break;
        items = v26->fields._items;
        v40 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
        ++v26->fields._version;
        if ( !items )
          break;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v27, v30, v31, v34, v35, v36, v37);
        }
      }
      if ( v32 == ++v33 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v27);
  }
LABEL_17:
  list = ServantChangeMaster___c_TypeInfo;
  if ( !ServantChangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantChangeMaster___c_TypeInfo, v27);
    list = ServantChangeMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v27);
      list = ServantChangeMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantChangeEntity__TypeInfo, v27, v30, v31);
    System_Comparison_object____ctor(v43, v44, Method_ServantChangeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = ServantChangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_ServantChangeEntity__o *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v26 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v43,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
  return (ServantChangeEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v26,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantChangeEntity__ToArray__);
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
    sub_1BCAA3C(0LL, v4);
  v5 = *(_QWORD *)&v3->max_length;
  if ( !v5 )
    return 0LL;
  if ( !(_DWORD)v5 )
    sub_1BCAA44(v3, v4);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 Item; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x21
  int v29; // w27
  System_Collections_Generic_List_object__o *v30; // x22
  int64_t v31; // x24
  int32_t v32; // w23
  bool v33; // w29
  int svtId; // w19
  int v35; // w26
  int v36; // w8
  ServantChangeEntity_o *v37; // x25
  int v38; // w8
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  int v67; // w8
  int v68; // w9
  __int64 v70; // x0

  if ( (byte_4B16876 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity____Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantChangeEntity____TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantChangeEntity___TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B16876 = 1;
  }
  Item = (__int64)ServantChangeMaster__getSortedEntityList(this, *(const MethodInfo **)&questId);
  if ( !Item )
    goto LABEL_51;
  v28 = (System_Collections_Generic_List_object__o *)Item;
  v29 = *(_DWORD *)(Item + 24);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantChangeEntity____TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantChangeEntity_____ctor__);
  if ( v29 >= 1 )
  {
    v31 = 0LL;
    v32 = 0;
    v33 = !isQuestClear;
    svtId = -1;
    v35 = -1;
    do
    {
      Item = (__int64)System_Collections_Generic_List_object___get_Item(
                        v28,
                        v32,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantChangeEntity__get_Item__);
      if ( !Item )
        goto LABEL_51;
      v36 = *(_DWORD *)(Item + 16);
      v37 = (ServantChangeEntity_o *)Item;
      if ( v35 != v36 && (*(_BYTE *)(Item + 88) & 2) == 0 )
      {
        if ( svtId < 1 )
          goto LABEL_10;
        if ( svtId != v36 )
        {
          svtId = -1;
LABEL_10:
          v38 = *(_DWORD *)(Item + 20);
          if ( v38 <= 36 )
          {
            if ( v38 == 26 )
            {
              Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
              if ( !Item )
                goto LABEL_51;
              Item = (__int64)QuestGroupMaster__GetQuestIdListByGroupId(
                                (QuestGroupMaster_o *)Item,
                                v37->fields.condTargetId,
                                2,
                                0LL);
              if ( !Item )
                goto LABEL_51;
              v67 = *(_DWORD *)(Item + 24);
              if ( v67 >= 1 )
              {
                v68 = 0;
                while ( v67 != v68 )
                {
                  if ( *(_DWORD *)(Item + 4LL * v68 + 32) == questId )
                    goto LABEL_27;
                  ++v68;
                  v35 = -1;
                  if ( v67 == v68 )
                    goto LABEL_48;
                }
LABEL_52:
                sub_1BCAA44(Item, v25);
              }
              goto LABEL_47;
            }
            if ( v38 == 36 && *(_DWORD *)(Item + 24) == questId && !v33 )
              goto LABEL_27;
          }
          else
          {
            if ( (unsigned int)(v38 - 42) >= 4 )
            {
              if ( v38 != 47 || *(_DWORD *)(Item + 24) != questId || *(_DWORD *)(Item + 28) != questPhase )
                goto LABEL_47;
LABEL_27:
              Item = ServantChangeEntity__IsEnable(v37, v25);
              if ( (Item & 1) == 0 )
              {
                svtId = v37->fields.svtId;
                Item = sub_1BCA888(ServantChangeEntity___TypeInfo, 2LL);
                if ( !Item )
                  goto LABEL_51;
                v31 = Item;
                Item = sub_1BCA91C(v37, *(_QWORD *)(*(_QWORD *)Item + 64LL));
                if ( !Item )
                {
LABEL_53:
                  v70 = sub_1BCAA60(Item);
                  sub_1BCA908(v70, 0LL);
                }
                if ( !*(_DWORD *)(v31 + 24) )
                  goto LABEL_52;
                *(_QWORD *)(v31 + 32) = v37;
                sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v37, v45, v46, v47, v48, v49, v50);
                if ( *(_DWORD *)(v31 + 24) <= 1u )
                  goto LABEL_52;
                *(_QWORD *)(v31 + 40) = 0LL;
                sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 40), 0LL, v51, v52, v53, v54, v55, v56);
                if ( !v30 )
                  goto LABEL_51;
                items = v30->fields._items;
                v64 = Method_System_Collections_Generic_List_ServantChangeEntity____Add__;
                ++v30->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v30->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)v31,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v66 = &items->obj.klass + size;
                  v30->fields._size = size + 1;
                  v66[4] = (Il2CppClass *)v31;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v31, v57, v58, v59, v60, v61, v62);
                }
              }
              goto LABEL_47;
            }
            if ( *(_DWORD *)(Item + 24) == questId )
              goto LABEL_27;
          }
LABEL_47:
          v35 = -1;
          continue;
        }
        Item = ServantChangeEntity__IsEnable((ServantChangeEntity_o *)Item, v25);
        if ( (Item & 1) == 0 )
          goto LABEL_47;
        if ( !v31 )
          goto LABEL_51;
        Item = sub_1BCA91C(v37, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
        if ( !Item )
          goto LABEL_53;
        if ( *(_DWORD *)(v31 + 24) <= 1u )
          goto LABEL_52;
        *(_QWORD *)(v31 + 40) = v37;
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)v37, v39, v40, v41, v42, v43, v44);
        v35 = v37->fields.svtId;
        svtId = -1;
      }
LABEL_48:
      ;
    }
    while ( ++v32 != v29 );
  }
  if ( !v30 )
LABEL_51:
    sub_1BCAA3C(Item, v25);
  return (ServantChangeEntity_array_array *)System_Collections_Generic_List_object___ToArray(
                                              v30,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantChangeEntity____ToArray__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  __int64 methodPtr_low; // x10
  int32_t v18; // w23

  if ( (byte_4B1687A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v9, v10);
    sub_1BCA7E0(&ServantChangeEntity_TypeInfo, v11, v12);
    byte_4B1687A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantChangeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantChangeEntity_TypeInfo )
      {
        break;
      }
      v18 = *((_DWORD *)list + 16);
      if ( v18 >= 1 )
      {
        if ( !isVoiceList )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                isVoiceList,
                v18,
                (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            isVoiceList,
            v18,
            1,
            (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v15 == ++v16 )
        return;
    }
LABEL_16:
    sub_1BCAA3C(list, isVoiceList);
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
    sub_1BCAA3C(this, a);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantChangeEntity_o *result; // x0
  int32_t v10; // w21
  __int64 methodPtr_low; // x10

  if ( (byte_4B16875 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&ServantChangeEntity_TypeInfo, v7, v8);
    byte_4B16875 = 1;
  }
  result = (ServantChangeEntity_o *)this->fields.list;
  if ( !result )
LABEL_12:
    sub_1BCAA3C(result, *(_QWORD *)&svtId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)result,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (ServantChangeEntity_o *)this->fields.list;
    if ( result )
    {
      result = (ServantChangeEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                          (System_Collections_ObjectModel_Collection_T__o *)result,
                                          v10,
                                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantChangeEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantChangeEntity_TypeInfo )
        {
          if ( result->fields.battleSvtId == svtId )
            return result;
          result = (ServantChangeEntity_o *)this->fields.list;
          ++v10;
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

  if ( (byte_4B16872 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16872 = 1;
  }
  v9 = (Il2CppObject *)ServantChangeEntity__CreatePK(svtId, priority, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v9,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantChangeMaster__ServantChangeEntity__string__TryGetEntity__);
}


System_Collections_Generic_List_ServantChangeEntity__o *__fastcall ServantChangeMaster__getSortedEntityList(
        ServantChangeMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  ServantChangeEntity_c *v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v24; // w21
  __int64 v25; // x2
  __int64 v26; // x3
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x21
  ServantChangeMaster_o *v41; // x0
  int32_t v42; // w1
  const MethodInfo *v43; // x2

  if ( (byte_4B16878 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ServantChangeEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity__Sort__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantChangeEntity___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantChangeEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantChangeEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ServantChangeMaster__getSortedEntityList_b__11_0__, v19, v20);
    byte_4B16878 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantChangeEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantChangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      v39 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantChangeEntity__TypeInfo, v22, v25, v26);
      System_Comparison_object____ctor(
        v39,
        (Il2CppObject *)this,
        Method_ServantChangeMaster__getSortedEntityList_b__11_0__,
        0LL);
      if ( v21 )
      {
        System_Collections_Generic_List_object___Sort_56244000(
          v21,
          v39,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantChangeEntity__Sort__);
        return (System_Collections_Generic_List_ServantChangeEntity__o *)v21;
      }
LABEL_16:
      sub_1BCAA3C(list, v22);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v24,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v21 )
      goto LABEL_16;
    v33 = (int64_t)list;
    if ( list )
    {
      v22 = ServantChangeEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantChangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantChangeEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantChangeEntity_TypeInfo )
      {
        break;
      }
    }
    items = v21->fields._items;
    v36 = Method_System_Collections_Generic_List_ServantChangeEntity__Add__;
    ++v21->fields._version;
    if ( items )
    {
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      ++v24;
      if ( list )
        continue;
    }
    goto LABEL_16;
  }
  sub_1BCACFC(list);
  return (System_Collections_Generic_List_ServantChangeEntity__o *)ServantChangeMaster__GetAllChanged(v41, v42, v43);
}


void __fastcall ServantChangeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1687B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantChangeMaster___c_TypeInfo, v1, v2);
    byte_4B1687B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantChangeMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantChangeMaster___c_TypeInfo->static_fields->__9 = (struct ServantChangeMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantChangeMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}