void ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27CC3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
    byte_4C27CC3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantCommentMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  ServantProfileMaster___c_c *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v17; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C27CC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    sub_1C2D490(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__);
    sub_1C2D490(&ServantProfileMaster___c_TypeInfo);
    byte_4C27CC6 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v9 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
      if ( !Instance )
        break;
      Instance = ServantProfileMaster__GetSvtProfile(this, *((_DWORD *)Instance + 4), v12, v13);
      v14 = ServantProfileMaster___c_TypeInfo;
      v15 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v14 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v14->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = ServantProfileMaster___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v14->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v17,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v19, v20);
      }
      if ( !v15 )
        break;
      System_Collections_Generic_List_object___Sort_58242632(
        v15,
        _9__5_0,
        (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        v15,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v26 = v25;
      do
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v21 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v26,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_25;
        }
        current = v26.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v21,
                 (ServantProfileEntity_o *)v26.fields._current,
                 clearWarIdList,
                 v22) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_25;
      if ( !v9 )
        break;
      result = ServantCommentMaster__GetEntity(v9, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0);
      if ( result )
        return result;
LABEL_25:
      if ( ++v12 == v11 )
        return 0;
    }
LABEL_28:
    sub_1C2D6EC(Instance, v8);
  }
  return 0;
}


ServantCommentEntity_array *ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v8; // x21
  int v9; // w23
  int32_t v10; // w24
  __int64 v11; // x26
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *v14; // x25
  System_Predicate_object__o *v15; // x27
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x26
  ServantProfileMaster___c_c *v18; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v20; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x3
  Il2CppObject *current; // x26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  DataManager_o *v34; // x1
  Il2CppClass **v35; // x0
  int v37; // [xsp+Ch] [xbp-A4h]
  ServantCommentMaster_o *v38; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C27CC5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    sub_1C2D490(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&System_Predicate_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__);
    sub_1C2D490(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__);
    sub_1C2D490(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C2D490(&ServantProfileMaster___c_TypeInfo);
    byte_4C27CC5 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  v38 = (ServantCommentMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_34;
  v9 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    v10 = 0;
    v37 = (int)Instance;
    while ( 1 )
    {
      v11 = sub_1C2D6DC(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v10,
                                    (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
      if ( !v11 )
        break;
      *(_QWORD *)(v11 + 16) = Instance;
      v14 = (CGThumbnailListItem_o *)(v11 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Instance, v12, v13);
      v15 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v15,
        (Il2CppObject *)v11,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                    v8,
                                    (System_Predicate_T__o *)v15,
                                    (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_31;
      if ( !v14->klass )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v14->klass->_1.name, v10, v16);
      v17 = (System_Collections_Generic_List_object__o *)Instance;
      v18 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v18 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v18->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = ServantProfileMaster___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v20,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v22, v23);
        v9 = v37;
      }
      if ( !v17 )
        break;
      System_Collections_Generic_List_object___Sort_58242632(
        v17,
        _9__4_1,
        (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v39,
        v17,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v40 = v39;
      do
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v24 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v40,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_31;
        }
        current = v40.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v24,
                 (ServantProfileEntity_o *)v40.fields._current,
                 clearWarIdList,
                 v25) );
      v14->klass = (CGThumbnailListItem_c *)current;
      sub_1C2D434(v14, (int32_t)current, v27, v28);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v14->klass )
        break;
      Instance = (DataManager_o *)v38;
      if ( !v38 )
        break;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v38,
                                    (int32_t)v14->klass->_1.name,
                                    HIDWORD(v14->klass->_1.name),
                                    (int32_t)v14->klass->_1.namespaze,
                                    0);
      if ( !Instance )
        goto LABEL_31;
      items = v8->fields._items;
      v32 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v34 = Instance;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Instance,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
      }
LABEL_31:
      if ( ++v10 == v9 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1C2D6EC(Instance, v6);
  }
LABEL_32:
  if ( !v8 )
    goto LABEL_34;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_o *ServantProfileMaster__GetEntity(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27CC1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
    byte_4C27CC1 = 1;
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
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


ServantProfileEntity_array *ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C27CC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    byte_4C27CC9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantProfileEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( *(_DWORD *)(v18 + 32) == condType )
    {
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v24 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), v22, v20, v21);
      }
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_29:
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                             Enumerator,
                                                             *(_QWORD *)(v30 + 8));
  if ( !v5 )
LABEL_36:
    sub_1C2D6EC(list, v6);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


System_Collections_Generic_List_ServantProfileEntity__o *ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C27CC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    byte_4C27CC7 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C2D6EC(list, v8);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    v8 = list;
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v7 )
        goto LABEL_14;
      items = v7->fields._items;
      v13 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_14;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v8;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v8, v10, v11);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++startIdx;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v7;
}


bool ServantProfileMaster__IsEnableCond(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o *entity,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  int32_t condType; // w8
  int max_length; // w8
  bool v8; // vf
  int v9; // w8
  int32_t condValue; // w9
  int v11; // w10
  int32_t v12; // w11
  bool result; // w0
  bool v15; // cc
  int32_t svtId; // w20
  int32_t LimitCount; // w0
  int32_t v18; // w8

  if ( (byte_4C27CC8 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (ServantProfileMaster_o *)sub_1C2D490(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C27CC8 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1C2D6EC(this, entity);
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
      v15 = NetworkManager__getTime(0) < entity->fields.condValue;
      return !v15;
    }
LABEL_22:
    svtId = entity->fields.svtId;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(svtId, 0);
    v18 = entity->fields.condType;
    if ( v18 != 7 )
    {
      if ( v18 == 103 )
        return LimitCount == entity->fields.condValue;
      return 0;
    }
    v15 = LimitCount < entity->fields.condValue;
    return !v15;
  }
  if ( condType == 103 )
    goto LABEL_22;
  if ( condType == 21 )
    return 1;
  if ( condType != 16 )
    return 0;
  max_length = clearWarIdList->max_length;
  v8 = __OFSUB__(max_length, 1);
  v9 = max_length - 1;
  if ( v9 < 0 != v8 )
    return 0;
  condValue = entity->fields.condValue;
  v11 = 0;
  do
  {
    v12 = clearWarIdList->m_Items[v11];
    result = condValue == v12;
    if ( condValue == v12 )
      break;
  }
  while ( v9 != v11++ );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ServantProfileMaster__TryGetEntity(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o **entity,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27CC2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
    byte_4C27CC2 = 1;
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
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4C27CC4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
    byte_4C27CC4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
}


void ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27CCA & 1) == 0 )
  {
    sub_1C2D490(&ServantProfileMaster___c_TypeInfo);
    byte_4C27CCA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ServantProfileMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantProfileMaster___c___ctor(ServantProfileMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantProfileMaster___c___GetChapterProgressEntityList_b__4_1(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C2D6EC(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C2D6EC(this, x);
  return y->fields.priority - x->fields.priority;
}


void ServantProfileMaster___c__DisplayClass4_0___ctor(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileMaster___c__DisplayClass4_0___GetChapterProgressEntityList_b__0(
        ServantProfileMaster___c__DisplayClass4_0_o *this,
        ServantCommentEntity_o *e,
        const MethodInfo *method)
{
  struct ServantProfileEntity_o *entity; // x8

  if ( !e || (entity = this->fields.entity) == 0 )
    sub_1C2D6EC(this, e);
  return e->fields.svtId == entity->fields.svtId;
}