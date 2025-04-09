void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB7C7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_49BB7C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  ServantCommentMaster_o *v20; // x22
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  const MethodInfo *v24; // x3
  ServantProfileMaster___c_c *v25; // x8
  System_Collections_Generic_List_object__o *v26; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v28; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BB7CA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, clearWarIdList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v7);
    sub_1B4CF90(&System_Comparison_ServantProfileEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B4CF90(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v16);
    sub_1B4CF90(&ServantProfileMaster___c_TypeInfo, v17);
    byte_49BB7CA = 1;
  }
  memset(&v37, 0, sizeof(v37));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v20 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v23,
                                    (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v23, v24);
      v25 = ServantProfileMaster___c_TypeInfo;
      v26 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v25 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v25->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = ServantProfileMaster___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v25->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v28,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v30, v31);
      }
      if ( !v26 )
        break;
      System_Collections_Generic_List_object___Sort_56106144(
        v26,
        _9__5_0,
        (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v36,
        v26,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v37 = v36;
      do
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v37,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v32 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v37,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_25;
        }
        current = v37.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v32,
                 (ServantProfileEntity_o *)v37.fields._current,
                 clearWarIdList,
                 v33) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_25;
      if ( !v20 )
        break;
      result = ServantCommentMaster__GetEntity(v20, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
      if ( result )
        return result;
LABEL_25:
      if ( ++v23 == v22 )
        return 0LL;
    }
LABEL_28:
    sub_1B4D1EC(Instance, v19);
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v27; // x21
  int v28; // w23
  int32_t v29; // w24
  __int64 v30; // x26
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CGThumbnailListItem_o *v33; // x25
  System_Predicate_object__o *v34; // x27
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x26
  ServantProfileMaster___c_c *v37; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v39; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x3
  Il2CppObject *current; // x26
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  DataManager_o *v53; // x1
  Il2CppClass **v54; // x0
  int v56; // [xsp+Ch] [xbp-A4h]
  ServantCommentMaster_o *v57; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49BB7C9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, clearWarIdList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_ServantProfileEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantCommentMaster___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B4CF90(&System_Predicate_ServantCommentEntity__TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B4CF90(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v20);
    sub_1B4CF90(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v21);
    sub_1B4CF90(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v22);
    sub_1B4CF90(&ServantProfileMaster___c_TypeInfo, v23);
    byte_49BB7C9 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  v57 = (ServantCommentMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_34;
  v28 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    v29 = 0;
    v56 = (int)Instance;
    while ( 1 )
    {
      v30 = sub_1B4D1DC(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v29,
                                    (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
      if ( !v30 )
        break;
      *(_QWORD *)(v30 + 16) = Instance;
      v33 = (CGThumbnailListItem_o *)(v30 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v30 + 16), (int32_t)Instance, v31, v32);
      v34 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v34,
        (Il2CppObject *)v30,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v27 )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                    v27,
                                    (System_Predicate_T__o *)v34,
                                    (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_31;
      if ( !v33->klass )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v33->klass->_1.name, v29, v35);
      v36 = (System_Collections_Generic_List_object__o *)Instance;
      v37 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v37 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v37->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = ServantProfileMaster___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v39,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v41, v42);
        v28 = v56;
      }
      if ( !v36 )
        break;
      System_Collections_Generic_List_object___Sort_56106144(
        v36,
        _9__4_1,
        (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v58,
        v36,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v59 = v58;
      do
      {
        v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v59,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v43 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v59,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_31;
        }
        current = v59.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v43,
                 (ServantProfileEntity_o *)v59.fields._current,
                 clearWarIdList,
                 v44) );
      v33->klass = (CGThumbnailListItem_c *)current;
      sub_1B4CF34(v33, (int32_t)current, v46, v47);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v33->klass )
        break;
      Instance = (DataManager_o *)v57;
      if ( !v57 )
        break;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v57,
                                    (int32_t)v33->klass->_1.name,
                                    HIDWORD(v33->klass->_1.name),
                                    (int32_t)v33->klass->_1.namespaze,
                                    0LL);
      if ( !Instance )
        goto LABEL_31;
      items = v27->fields._items;
      v51 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v27->fields._version;
      if ( !items )
        break;
      size = v27->fields._size;
      v53 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)Instance,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v53;
        sub_1B4CF34((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v53, v48, v49);
      }
LABEL_31:
      if ( ++v29 == v28 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1B4D1EC(Instance, v25);
  }
LABEL_32:
  if ( !v27 )
    goto LABEL_34;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v27,
                                         (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_o *__fastcall ServantProfileMaster__GetEntity(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB7C5 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49BB7C5 = 1;
  }
  PK = (Il2CppObject *)ServantProfileEntity__CreatePK(
                         svtId,
                         svtCommentId,
                         svtCommentPriority,
                         priority,
                         *(const MethodInfo **)&priority);
  return (ServantProfileEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31A2454 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_49BB7CD & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__,
      *(_QWORD *)&condType);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    byte_49BB7CD = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantProfileEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      sub_1B4D1EC(0LL, v26);
    if ( *(_DWORD *)(v25 + 32) == condType )
    {
      if ( !v12 )
        sub_1B4D1EC(v25, v26);
      items = v12->fields._items;
      v31 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B4D1EC(v25, v26);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v29;
        sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), v29, v27, v28);
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !v12 )
LABEL_36:
    sub_1B4D1EC(list, v13);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v12,
                                         (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_49BB7CB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    byte_49BB7CB = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B4D1EC(list, v12);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    v12 = list;
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v11 )
        goto LABEL_14;
      items = v11->fields._items;
      v17 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_14;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v12;
        sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++startIdx;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v11;
}


bool __fastcall ServantProfileMaster__IsEnableCond(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o *entity,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t condType; // w8
  il2cpp_array_size_t max_length; // w8
  bool v9; // vf
  int v10; // w8
  int32_t condValue; // w9
  int v12; // w10
  int32_t v13; // w11
  bool result; // w0
  bool v16; // cc
  int32_t svtId; // w20
  int32_t LimitCount; // w0
  int32_t v19; // w8

  if ( (byte_49BB7CC & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, entity);
    this = (ServantProfileMaster_o *)sub_1B4CF90(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_49BB7CC = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1B4D1EC(this, entity);
  condType = entity->fields.condType;
  if ( condType <= 12 )
  {
    if ( !condType )
      return 1;
    if ( condType != 7 )
    {
      if ( condType != 12 )
        return 0;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v16 = NetworkManager__getTime(0LL) < entity->fields.condValue;
      return !v16;
    }
LABEL_22:
    svtId = entity->fields.svtId;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(svtId, 0LL);
    v19 = entity->fields.condType;
    if ( v19 != 7 )
    {
      if ( v19 == 103 )
        return LimitCount == entity->fields.condValue;
      return 0;
    }
    v16 = LimitCount < entity->fields.condValue;
    return !v16;
  }
  if ( condType == 103 )
    goto LABEL_22;
  if ( condType == 21 )
    return 1;
  if ( condType != 16 )
    return 0;
  max_length = clearWarIdList->max_length;
  v9 = __OFSUB__(max_length, 1);
  v10 = max_length - 1;
  if ( v10 < 0 != v9 )
    return 0;
  condValue = entity->fields.condValue;
  v12 = 0;
  do
  {
    v13 = clearWarIdList->m_Items[v12 + 1];
    result = condValue == v13;
    if ( condValue == v13 )
      break;
  }
  while ( v10 != v12++ );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantProfileMaster__TryGetEntity(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o **entity,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB7C6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_49BB7C6 = 1;
  }
  PK = (Il2CppObject *)ServantProfileEntity__CreatePK(
                         svtId,
                         svtCommentId,
                         svtCommentPriority,
                         priority,
                         *(const MethodInfo **)&svtCommentPriority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49BB7C8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, method);
    byte_49BB7C8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB7CE & 1) == 0 )
  {
    sub_1B4CF90(&ServantProfileMaster___c_TypeInfo, v1);
    byte_49BB7CE = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)ServantProfileMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantProfileMaster___c___ctor(ServantProfileMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntityList_b__4_1(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B4D1EC(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B4D1EC(this, x);
  return y->fields.priority - x->fields.priority;
}


void __fastcall ServantProfileMaster___c__DisplayClass4_0___ctor(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileMaster___c__DisplayClass4_0___GetChapterProgressEntityList_b__0(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        ServantCommentEntity_o *e,
        const MethodInfo *method)
{
  struct ServantProfileEntity_o *entity; // x8

  if ( !e || (entity = this->fields.entity) == 0LL )
    sub_1B4D1EC(this, e);
  return e->fields.svtId == entity->fields.svtId;
}