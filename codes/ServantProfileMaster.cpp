void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2E0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_49FF2E0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  ServantCommentMaster_o *v21; // x22
  int32_t Count; // w0
  int32_t v23; // w23
  int32_t v24; // w24
  const MethodInfo *v25; // x3
  __int64 methodPtr_low; // x10
  ServantProfileMaster___c_c *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v30; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FF2E3 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64A00(&System_Comparison_ServantProfileEntity__TypeInfo, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B64A00(&ServantProfileEntity_TypeInfo, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64A00(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v17);
    sub_1B64A00(&ServantProfileMaster___c_TypeInfo, v18);
    byte_49FF2E3 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v21 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v24,
                                    (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v24, v25);
      v27 = ServantProfileMaster___c_TypeInfo;
      v28 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v27 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v27->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = ServantProfileMaster___c_TypeInfo;
        }
        v30 = (Il2CppObject *)v27->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v30,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v32, v33);
      }
      if ( !v28 )
        break;
      System_Collections_Generic_List_object___Sort_55253804(
        v28,
        _9__5_0,
        (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        v28,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v39 = v38;
      do
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v34 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v39,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_27;
        }
        current = v39.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v34,
                 (ServantProfileEntity_o *)v39.fields._current,
                 clearWarIdList,
                 v35) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v39,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_27;
      if ( !v21 )
        break;
      result = ServantCommentMaster__GetEntity(v21, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
      if ( result )
        return result;
LABEL_27:
      if ( ++v24 == v23 )
        return 0LL;
    }
LABEL_30:
    sub_1B64C5C(Instance, v20);
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
  __int64 v24; // x1
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  int v29; // w23
  int32_t v30; // w24
  Il2CppObject *v31; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  ServantProfileEntity_c *v34; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v36; // x10
  int32_t v37; // w1
  ServantStatusBattleListViewItem_o *v38; // x25
  System_Predicate_object__o *v39; // x27
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_object__o *v41; // x26
  ServantProfileMaster___c_c *v42; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v44; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  _BOOL8 v48; // x0
  const MethodInfo *v49; // x3
  Il2CppObject *current; // x26
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  DataManager_o *v58; // x1
  Il2CppClass **v59; // x0
  ServantProfileMaster_o *v61; // [xsp+8h] [xbp-A8h]
  ServantCommentMaster_o *v62; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF2E2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&System_Comparison_ServantProfileEntity__TypeInfo, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantCommentMaster___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16);
    sub_1B64A00(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B64A00(&System_Predicate_ServantCommentEntity__TypeInfo, v18);
    sub_1B64A00(&ServantProfileEntity_TypeInfo, v19);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64A00(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v21);
    sub_1B64A00(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v22);
    sub_1B64A00(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v23);
    sub_1B64A00(&ServantProfileMaster___c_TypeInfo, v24);
    byte_49FF2E2 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  v62 = (ServantCommentMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_46;
  v29 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    v30 = 0;
    v61 = this;
    while ( 1 )
    {
      v31 = (Il2CppObject *)sub_1B64C4C(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v30,
                                    (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v31 )
        break;
      if ( Instance )
      {
        v34 = ServantProfileEntity_TypeInfo;
        methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v36 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfileEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v36 = 0LL;
        v31[1].klass = v36;
        v38 = (ServantStatusBattleListViewItem_o *)&v31[1];
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v37 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v34
              ? (int)Instance
              : 0;
        else
          v37 = 0;
      }
      else
      {
        v37 = 0;
        v31[1].klass = 0LL;
        v38 = (ServantStatusBattleListViewItem_o *)&v31[1];
      }
      sub_1B649A4(v38, v37, v32, v33);
      v39 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v39,
        v31,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v28 )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                    v28,
                                    (System_Predicate_T__o *)v39,
                                    (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v38->klass )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v38->klass->_1.name, v30, v40);
      v41 = (System_Collections_Generic_List_object__o *)Instance;
      v42 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v42 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v42->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = ServantProfileMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v42->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v44,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v46, v47);
        this = v61;
      }
      if ( !v41 )
        break;
      System_Collections_Generic_List_object___Sort_55253804(
        v41,
        _9__4_1,
        (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v41,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v64 = v63;
      do
      {
        v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v64,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v48 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v64,
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_43;
        }
        current = v64.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v48,
                 (ServantProfileEntity_o *)v64.fields._current,
                 clearWarIdList,
                 v49) );
      v38->klass = (ServantStatusBattleListViewItem_c *)current;
      sub_1B649A4(v38, (int32_t)current, v51, v52);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v64,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v38->klass )
        break;
      Instance = (DataManager_o *)v62;
      if ( !v62 )
        break;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v62,
                                    (int32_t)v38->klass->_1.name,
                                    HIDWORD(v38->klass->_1.name),
                                    (int32_t)v38->klass->_1.namespaze,
                                    0LL);
      if ( !Instance )
        goto LABEL_43;
      items = v28->fields._items;
      v56 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        break;
      size = v28->fields._size;
      v58 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)Instance,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v58;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v58, v53, v54);
      }
LABEL_43:
      if ( ++v30 == v29 )
        goto LABEL_44;
    }
LABEL_46:
    sub_1B64C5C(Instance, v26);
  }
LABEL_44:
  if ( !v28 )
    goto LABEL_46;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v28,
                                         (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_49FF2DE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FF2DE = 1;
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
                                     (const MethodInfo_30D6AF0 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FF2E6 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_1B64A00(&ServantProfileEntity_TypeInfo, v12);
    byte_49FF2E6 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30739D4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BB69E0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v30 = v26;
    if ( !v26
      || (methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low)
      || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != ServantProfileEntity_TypeInfo )
    {
      sub_1B64C5C(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 32) == condType )
    {
      if ( !v13 )
        sub_1B64C5C(v26, v27);
      items = v13->fields._items;
      v33 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64C5C(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v30;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v35 + 4), v30, v28, v29);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1BB69E0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !v13 )
LABEL_38:
    sub_1B64C5C(list, v14);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v13,
                                         (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_49FF2E4 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_1B64A00(&ServantProfileEntity_TypeInfo, v11);
    byte_49FF2E4 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B64C5C(list, v13);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v13 = list;
    methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v12 )
        goto LABEL_16;
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)list,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v13;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v15, v16);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++startIdx;
    if ( !list )
      goto LABEL_16;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v12;
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

  if ( (byte_49FF2E5 & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_1B64A00(&ServantProfileLimitCountManager_TypeInfo, entity);
    byte_49FF2E5 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1B64C5C(this, entity);
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

  if ( (byte_49FF2DF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_49FF2DF = 1;
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
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49FF2E1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_49FF2E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF2E7 & 1) == 0 )
  {
    sub_1B64A00(&ServantProfileMaster___c_TypeInfo, v1);
    byte_49FF2E7 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ServantProfileMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B64C5C(this, x);
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
    sub_1B64C5C(this, e);
  return e->fields.svtId == entity->fields.svtId;
}