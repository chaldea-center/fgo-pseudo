void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCBC7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_49FCBC7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  ServantCommentMaster_o *v20; // x22
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  const MethodInfo *v24; // x3
  __int64 methodPtr_low; // x10
  __int64 v26; // x1
  __int64 v27; // x2
  ServantProfileMaster___c_c *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v31; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FCBCA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_ServantProfileEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B640C8(&ServantProfileEntity_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v17);
    sub_1B640C8(&ServantProfileMaster___c_TypeInfo, v18);
    byte_49FCBCA = 1;
  }
  memset(&v40, 0, sizeof(v40));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v20 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v23, v24);
      v28 = ServantProfileMaster___c_TypeInfo;
      v29 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v28 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v28->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = ServantProfileMaster___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v28->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantProfileEntity__TypeInfo, v26, v27);
        System_Comparison_object____ctor(
          _9__5_0,
          v31,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v33, v34);
      }
      if ( !v29 )
        break;
      System_Collections_Generic_List_object___Sort_55243320(
        v29,
        _9__5_0,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v39,
        v29,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v40 = v39;
      do
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v35 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v40,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_27;
        }
        current = v40.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v35,
                 (ServantProfileEntity_o *)v40.fields._current,
                 clearWarIdList,
                 v36) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_27;
      if ( !v20 )
        break;
      result = ServantCommentMaster__GetEntity(v20, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
      if ( result )
        return result;
LABEL_27:
      if ( ++v23 == v22 )
        return 0LL;
    }
LABEL_30:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w23
  int32_t v33; // w24
  Il2CppObject *v34; // x26
  int32_t v35; // w2
  int32_t v36; // w3
  ServantProfileEntity_c *v37; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v39; // x10
  int32_t v40; // w1
  ServantStatusBattleListViewItem_o *v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  System_Predicate_object__o *v44; // x27
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x26
  ServantProfileMaster___c_c *v49; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v51; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x3
  Il2CppObject *current; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  DataManager_o *v64; // x1
  Il2CppClass **v65; // x0
  ServantProfileMaster_o *v67; // [xsp+8h] [xbp-A8h]
  ServantCommentMaster_o *v68; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FCBC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_ServantProfileEntity__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCommentMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1B640C8(&System_Predicate_ServantCommentEntity__TypeInfo, v18);
    sub_1B640C8(&ServantProfileEntity_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v21);
    sub_1B640C8(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v22);
    sub_1B640C8(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v23);
    sub_1B640C8(&ServantProfileMaster___c_TypeInfo, v24);
    byte_49FCBC9 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  v68 = (ServantCommentMaster_o *)MasterData_object;
  Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_46;
  v32 = (int)Instance;
  if ( (int)Instance >= 1 )
  {
    v33 = 0;
    v67 = this;
    while ( 1 )
    {
      v34 = (Il2CppObject *)sub_1B64314(ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v30, v31);
      System_Object___ctor(v34, 0LL);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v33,
                                    (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v34 )
        break;
      if ( Instance )
      {
        v37 = ServantProfileEntity_TypeInfo;
        methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v39 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantProfileEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v39 = 0LL;
        v34[1].klass = v39;
        v41 = (ServantStatusBattleListViewItem_o *)&v34[1];
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
          v40 = (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v37
              ? (int)Instance
              : 0;
        else
          v40 = 0;
      }
      else
      {
        v40 = 0;
        v34[1].klass = 0LL;
        v41 = (ServantStatusBattleListViewItem_o *)&v34[1];
      }
      sub_1B6406C(v41, v40, v35, v36);
      v44 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ServantCommentEntity__TypeInfo, v42, v43);
      System_Predicate_object____ctor(
        v44,
        v34,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v29 )
        break;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                    v29,
                                    (System_Predicate_T__o *)v44,
                                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v41->klass )
        break;
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, (int32_t)v41->klass->_1.name, v33, v45);
      v48 = (System_Collections_Generic_List_object__o *)Instance;
      v49 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v49 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v49->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = ServantProfileMaster___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantProfileEntity__TypeInfo, v46, v47);
        System_Comparison_object____ctor(
          _9__4_1,
          v51,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v53, v54);
        this = v67;
      }
      if ( !v48 )
        break;
      System_Collections_Generic_List_object___Sort_55243320(
        v48,
        _9__4_1,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v69,
        v48,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v70 = v69;
      do
      {
        v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v70,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v55 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v70,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_43;
        }
        current = v70.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v55,
                 (ServantProfileEntity_o *)v70.fields._current,
                 clearWarIdList,
                 v56) );
      v41->klass = (ServantStatusBattleListViewItem_c *)current;
      sub_1B6406C(v41, (int32_t)current, v58, v59);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v41->klass )
        break;
      Instance = (DataManager_o *)v68;
      if ( !v68 )
        break;
      Instance = (DataManager_o *)ServantCommentMaster__GetEntity(
                                    v68,
                                    (int32_t)v41->klass->_1.name,
                                    HIDWORD(v41->klass->_1.name),
                                    (int32_t)v41->klass->_1.namespaze,
                                    0LL);
      if ( !Instance )
        goto LABEL_43;
      items = v29->fields._items;
      v62 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v29->fields._version;
      if ( !items )
        break;
      size = v29->fields._size;
      v64 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)Instance,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v64, v31, v60);
      }
LABEL_43:
      if ( ++v33 == v32 )
        goto LABEL_44;
    }
LABEL_46:
    sub_1B64324(Instance);
  }
LABEL_44:
  if ( !v29 )
    goto LABEL_46;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v29,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_49FCBC5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCBC5 = 1;
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
                                     (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49FCBCD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_1B640C8(&ServantProfileEntity_TypeInfo, v12);
    byte_49FCBCD = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       *(_QWORD *)&condType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( !v24
      || (methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) < (unsigned int)methodPtr_low)
      || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) != ServantProfileEntity_TypeInfo )
    {
      sub_1B64324(v24);
    }
    if ( *(_DWORD *)(v24 + 32) == condType )
    {
      if ( !v13 )
        sub_1B64324(v24);
      items = v13->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64324(v24);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v27;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), v27, v25, v26);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_31:
    v36 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                             Enumerator,
                                                             *(_QWORD *)(v36 + 8));
  if ( !v13 )
LABEL_38:
    sub_1B64324(list);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v13,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantProfileEntity__o *__fastcall ServantProfileMaster__GetSvtProfile(
        ServantProfileMaster_o *this,
        int32_t svtId,
        int32_t startIdx,
        const MethodInfo *method)
{
  int32_t v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = startIdx;
  if ( (byte_49FCBCB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_1B640C8(&ServantProfileEntity_TypeInfo, v11);
    byte_49FCBCB = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&startIdx);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1B64324(list);
  while ( v4 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v4,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v16 = list;
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
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v16, v14, v15);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v4;
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

  if ( (byte_49FCBCC & 1) == 0 )
  {
    this = (ServantProfileMaster_o *)sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, entity);
    byte_49FCBCC = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1B64324(this);
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

  if ( (byte_49FCBC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_49FCBC6 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49FCBC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_49FCBC8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCBCE & 1) == 0 )
  {
    sub_1B640C8(&ServantProfileMaster___c_TypeInfo, v1);
    byte_49FCBCE = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantProfileMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantProfileMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return e->fields.svtId == entity->fields.svtId;
}