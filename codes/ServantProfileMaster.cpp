void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B936 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
    byte_4A5B936 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  ServantCommentMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  __int64 methodPtr_low; // x10
  ServantProfileMaster___c_c *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v18; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5B939 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_1B885B0(&ServantProfileEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__);
    sub_1B885B0(&ServantProfileMaster___c_TypeInfo);
    byte_4A5B939 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v9 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v12,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v12, v13);
      v15 = ServantProfileMaster___c_TypeInfo;
      v16 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v15 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v15->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = ServantProfileMaster___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v15->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v18,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v20, v21);
      }
      if ( !v16 )
        break;
      System_Collections_Generic_List_object___Sort_55571192(
        v16,
        _9__5_0,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        v16,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v27 = v26;
      do
      {
        v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v22 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v27,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_27;
        }
        current = v27.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v22,
                 (ServantProfileEntity_o *)v27.fields._current,
                 clearWarIdList,
                 v23) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_27;
      if ( !v9 )
        break;
      result = ServantCommentMaster__GetEntity(v9, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
      if ( result )
        return result;
LABEL_27:
      if ( ++v12 == v11 )
        return 0LL;
    }
LABEL_30:
    sub_1B8880C(Instance, v8);
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
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
  Il2CppObject *v11; // x26
  int32_t v12; // w2
  int32_t v13; // w3
  ServantProfileEntity_c *v14; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v16; // x10
  int32_t v17; // w1
  ServantStatusBattleListViewItem_o *v18; // x25
  System_Predicate_object__o *v19; // x27
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x26
  ServantProfileMaster___c_c *v22; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v24; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x3
  Il2CppObject *current; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  DataManager_o *v38; // x1
  Il2CppClass **v39; // x0
  ServantProfileMaster_o *v41; // [xsp+8h] [xbp-A8h]
  ServantCommentMaster_o *v42; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5B938 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_ServantProfileEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantProfileEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__);
    sub_1B885B0(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__);
    sub_1B885B0(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
    sub_1B885B0(&ServantProfileMaster___c_TypeInfo);
    byte_4A5B938 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  v42 = (ServantCommentMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_46;
  v9 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    v10 = 0;
    v41 = this;
    while ( 1 )
    {
      v11 = (Il2CppObject *)sub_1B887FC(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor(v11, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v10,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v11 )
        break;
      if ( Instance )
      {
        v14 = ServantProfileEntity_TypeInfo;
        methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v16 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfileEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v16 = 0LL;
        v11[1].klass = v16;
        v18 = (ServantStatusBattleListViewItem_o *)&v11[1];
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v17 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v14
              ? (int)Instance
              : 0;
        else
          v17 = 0;
      }
      else
      {
        v17 = 0;
        v11[1].klass = 0LL;
        v18 = (ServantStatusBattleListViewItem_o *)&v11[1];
      }
      sub_1B88554(v18, v17, v12, v13);
      v19 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v19,
        v11,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v8 )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                    v8,
                                    (System_Predicate_T__o *)v19,
                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v18->klass )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v18->klass->_1.name, v10, v20);
      v21 = (System_Collections_Generic_List_object__o *)Instance;
      v22 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v22 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v22->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = ServantProfileMaster___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v24,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v26, v27);
        this = v41;
      }
      if ( !v21 )
        break;
      System_Collections_Generic_List_object___Sort_55571192(
        v21,
        _9__4_1,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        v21,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v44 = v43;
      do
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v28 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v44,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_43;
        }
        current = v44.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v28,
                 (ServantProfileEntity_o *)v44.fields._current,
                 clearWarIdList,
                 v29) );
      v18->klass = (ServantStatusBattleListViewItem_c *)current;
      sub_1B88554(v18, (int32_t)current, v31, v32);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v18->klass )
        break;
      Instance = (DataManager_o *)v42;
      if ( !v42 )
        break;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v42,
                                    (int32_t)v18->klass->_1.name,
                                    HIDWORD(v18->klass->_1.name),
                                    (int32_t)v18->klass->_1.namespaze,
                                    0LL);
      if ( !Instance )
        goto LABEL_43;
      items = v8->fields._items;
      v36 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v38 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Instance,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v38;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
      }
LABEL_43:
      if ( ++v10 == v9 )
        goto LABEL_44;
    }
LABEL_46:
    sub_1B8880C(Instance, v6);
  }
LABEL_44:
  if ( !v8 )
    goto LABEL_46;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4A5B934 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
    byte_4A5B934 = 1;
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
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5B93C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1B885B0(&ServantProfileEntity_TypeInfo);
    byte_4A5B93C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18
      || (methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low)
      || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantProfileEntity_TypeInfo )
    {
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 32) == condType )
    {
      if ( !v5 )
        sub_1B8880C(v18, v19);
      items = v5->fields._items;
      v25 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v22, v20, v21);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v5 )
LABEL_38:
    sub_1B8880C(list, v6);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B93A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1B885B0(&ServantProfileEntity_TypeInfo);
    byte_4A5B93A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B8880C(list, v8);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v8 = list;
    methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v7 )
        goto LABEL_16;
      items = v7->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v8;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v8, v10, v11);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++startIdx;
    if ( !list )
      goto LABEL_16;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v7;
}


bool __fastcall ServantProfileMaster__IsEnableCond(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o *entity,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  int32_t condType; // w8
  il2cpp_array_size_t max_length; // w8
  bool v8; // vf
  int v9; // w8
  int32_t condValue; // w9
  int v11; // w10
  int32_t v12; // w11
  bool result; // w0
  int32_t svtId; // w20
  int32_t LimitCount; // w0
  int32_t v17; // w8

  if ( (byte_4A5B93B & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_1B885B0(&ServantProfileLimitCountManager_TypeInfo);
    byte_4A5B93B = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1B8880C(this, entity);
  condType = entity->fields.condType;
  if ( condType <= 7 )
  {
    if ( !condType )
      return 1;
    if ( condType != 7 )
      return 0;
LABEL_17:
    svtId = entity->fields.svtId;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(svtId, 0LL);
    v17 = entity->fields.condType;
    if ( v17 == 7 )
      return LimitCount >= entity->fields.condValue;
    if ( v17 == 103 )
      return LimitCount == entity->fields.condValue;
    return 0;
  }
  if ( condType == 103 )
    goto LABEL_17;
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
    v12 = clearWarIdList->m_Items[v11 + 1];
    result = condValue == v12;
    if ( condValue == v12 )
      break;
  }
  while ( v9 != v11++ );
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

  if ( (byte_4A5B935 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
    byte_4A5B935 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4A5B937 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_4A5B937 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B93D & 1) == 0 )
  {
    sub_1B885B0(&ServantProfileMaster___c_TypeInfo);
    byte_4A5B93D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantProfileMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, e);
  return e->fields.svtId == entity->fields.svtId;
}