void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method, v2);
    byte_4B16AC3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantProfileMaster__GetChapterProgressEntity(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  ServantCommentMaster_o *v33; // x22
  int32_t Count; // w0
  int32_t v35; // w23
  int32_t v36; // w24
  const MethodInfo *v37; // x3
  __int64 methodPtr_low; // x10
  __int64 v39; // x2
  __int64 v40; // x3
  ServantProfileMaster___c_c *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x25
  System_Comparison_T__o *_9__5_0; // x26
  Il2CppObject *v44; // x27
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16AC6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      clearWarIdList,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_ServantProfileEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v21, v22);
    sub_1BCA7E0(&ServantProfileEntity_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v27, v28);
    sub_1BCA7E0(&ServantProfileMaster___c_TypeInfo, v29, v30);
    byte_4B16AC6 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v33 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v35 = Count;
    v36 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v36,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantProfileEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
      {
        break;
      }
      Instance = (DataManager_o *)ServantProfileMaster__GetSvtProfile(this, Instance->fields.m_CachedPtr, v36, v37);
      v41 = ServantProfileMaster___c_TypeInfo;
      v42 = (System_Collections_Generic_List_object__o *)Instance;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo, v32);
        v41 = ServantProfileMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v41->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41, v32);
          v41 = ServantProfileMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)v41->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantProfileEntity__TypeInfo, v32, v39, v40);
        System_Comparison_object____ctor(
          _9__5_0,
          v44,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( !v42 )
        break;
      System_Collections_Generic_List_object___Sort_56244000(
        v42,
        _9__5_0,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v56,
        v42,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v57 = v56;
      do
      {
        v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v52 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v57,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_27;
        }
        current = v57.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v52,
                 (ServantProfileEntity_o *)v57.fields._current,
                 clearWarIdList,
                 v53) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v57,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !current )
        break;
      if ( LODWORD(current[1].klass) != svtId )
        goto LABEL_27;
      if ( !v33 )
        break;
      result = ServantCommentMaster__GetEntity(v33, svtId, HIDWORD(current[1].klass), (int32_t)current[1].monitor, 0LL);
      if ( result )
        return result;
LABEL_27:
      if ( ++v36 == v35 )
        return 0LL;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v32);
  }
  return 0LL;
}


ServantCommentEntity_array *__fastcall ServantProfileMaster__GetChapterProgressEntityList(
        ServantProfileMaster_o *this,
        System_Int32_array *clearWarIdList,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int64_t Instance; // x0
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_object__o *v51; // x21
  int64_t v52; // x2
  const MethodInfo *v53; // x3
  int v54; // w23
  int32_t v55; // w24
  Il2CppObject *v56; // x26
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  ServantProfileEntity_c *v63; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v65; // x10
  int64_t v66; // x1
  PartyOrganizationUtility_o *v67; // x25
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Predicate_object__o *v71; // x27
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x26
  ServantProfileMaster___c_c *v75; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v77; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  _BOOL8 v85; // x0
  const MethodInfo *v86; // x3
  Il2CppObject *current; // x26
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  int64_t v101; // x1
  Il2CppClass **v102; // x0
  ServantProfileMaster_o *v104; // [xsp+8h] [xbp-A8h]
  ServantCommentMaster_o *v105; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B16AC5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_ServantProfileEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Predicate_ServantCommentEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&ServantProfileEntity_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v37, v38);
    sub_1BCA7E0(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v39, v40);
    sub_1BCA7E0(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&ServantProfileMaster___c_TypeInfo, v43, v44);
    byte_4B16AC5 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v51 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       v48,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  v105 = (ServantCommentMaster_o *)MasterData_object;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_46;
  v54 = Instance;
  if ( (int)Instance >= 1 )
  {
    v55 = 0;
    v104 = this;
    while ( 1 )
    {
      v56 = (Il2CppObject *)sub_1BCAA2C(ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v46, v52, v53);
      System_Object___ctor(v56, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v55,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v56 )
        break;
      if ( Instance )
      {
        v63 = ServantProfileEntity_TypeInfo;
        methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
          v65 = *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantProfileEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v65 = 0LL;
        v56[1].klass = v65;
        v67 = (PartyOrganizationUtility_o *)&v56[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
          v66 = *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v63
              ? Instance
              : 0LL;
        else
          v66 = 0LL;
      }
      else
      {
        v66 = 0LL;
        v56[1].klass = 0LL;
        v67 = (PartyOrganizationUtility_o *)&v56[1];
      }
      sub_1BCA784(v67, v66, v57, v58, v59, v60, v61, v62);
      v71 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_ServantCommentEntity__TypeInfo, v68, v69, v70);
      System_Predicate_object____ctor(
        v71,
        v56,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v51 )
        break;
      Instance = (int64_t)System_Collections_Generic_List_object___Find(
                            v51,
                            (System_Predicate_T__o *)v71,
                            (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v67->klass )
        break;
      Instance = (int64_t)ServantProfileMaster__GetSvtProfile(this, (int32_t)v67->klass->_1.name, v55, v53);
      v74 = (System_Collections_Generic_List_object__o *)Instance;
      v75 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo, v46);
        v75 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v75->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75, v46);
          v75 = ServantProfileMaster___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v75->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_ServantProfileEntity__TypeInfo, v46, v72, v73);
        System_Comparison_object____ctor(
          _9__4_1,
          v77,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_1,
          (int64_t)_9__4_1,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
        this = v104;
      }
      if ( !v74 )
        break;
      System_Collections_Generic_List_object___Sort_56244000(
        v74,
        _9__4_1,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v106,
        v74,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v107 = v106;
      do
      {
        v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v107,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v85 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v107,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_43;
        }
        current = v107.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v85,
                 (ServantProfileEntity_o *)v107.fields._current,
                 clearWarIdList,
                 v86) );
      v67->klass = (PartyOrganizationUtility_c *)current;
      sub_1BCA784(v67, (int64_t)current, v88, v89, v90, v91, v92, v93);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v107,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v67->klass )
        break;
      Instance = (int64_t)v105;
      if ( !v105 )
        break;
      Instance = (int64_t)ServantCommentMaster__GetEntity(
                            v105,
                            (int32_t)v67->klass->_1.name,
                            HIDWORD(v67->klass->_1.name),
                            (int32_t)v67->klass->_1.namespaze,
                            0LL);
      if ( !Instance )
        goto LABEL_43;
      items = v51->fields._items;
      v99 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v51->fields._version;
      if ( !items )
        break;
      size = v51->fields._size;
      v101 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v51,
          (Il2CppObject *)Instance,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v102 = &items->obj.klass + size;
        v51->fields._size = size + 1;
        v102[4] = (Il2CppClass *)v101;
        sub_1BCA784((PartyOrganizationUtility_o *)(v102 + 4), v101, v52, (int32_t)v53, v94, v95, v96, v97);
      }
LABEL_43:
      if ( ++v55 == v54 )
        goto LABEL_44;
    }
LABEL_46:
    sub_1BCAA3C(Instance, v46);
  }
LABEL_44:
  if ( !v51 )
    goto LABEL_46;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v51,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4B16AC1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&svtCommentId);
    byte_4B16AC1 = 1;
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
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantProfileEntity_array *__fastcall ServantProfileMaster__GetServantProfileEntities(
        ServantProfileMaster_o *this,
        int32_t condType,
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
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B16AC9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&condType,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantProfileEntity_TypeInfo, v20, v21);
    byte_4B16AC9 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       *(_QWORD *)&condType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v43 = v35;
    if ( !v35
      || (methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)methodPtr_low)
      || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) != ServantProfileEntity_TypeInfo )
    {
      sub_1BCAA3C(v35, v36);
    }
    if ( *(_DWORD *)(v35 + 32) == condType )
    {
      if ( !v22 )
        sub_1BCAA3C(v35, v36);
      items = v22->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BCAA3C(v35, v36);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v35,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v43;
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v43, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_31;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_31:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  if ( !v22 )
LABEL_38:
    sub_1BCAA3C(list, v23);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v22,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  v4 = startIdx;
  if ( (byte_4B16AC7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&startIdx);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantProfileEntity_TypeInfo, v15, v16);
    byte_4B16AC7 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&startIdx,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, v18);
  while ( v4 < System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v4,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v18 = (int64_t)list;
    methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantProfileEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantProfileEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v17 )
        goto LABEL_16;
      items = v17->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v18;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v18, v20, v21, v22, v23, v24, v25);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v4;
    if ( !list )
      goto LABEL_16;
  }
  return (System_Collections_Generic_List_ServantProfileEntity__o *)v17;
}


bool __fastcall ServantProfileMaster__IsEnableCond(
        ServantProfileMaster_o *this,
        ServantProfileEntity_o *entity,
        System_Int32_array *clearWarIdList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t condType; // w8
  il2cpp_array_size_t max_length; // w8
  bool v10; // vf
  int v11; // w8
  int32_t condValue; // w9
  int v13; // w10
  int32_t v14; // w11
  bool result; // w0
  bool v17; // cc
  int32_t svtId; // w20
  int32_t LimitCount; // w0
  int32_t v20; // w8

  if ( (byte_4B16AC8 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, entity, clearWarIdList);
    this = (ServantProfileMaster_o *)sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v6, v7);
    byte_4B16AC8 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1BCAA3C(this, entity);
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
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entity);
      v17 = NetworkManager__getTime(0LL) < entity->fields.condValue;
      return !v17;
    }
LABEL_22:
    svtId = entity->fields.svtId;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, entity);
    LimitCount = ServantProfileLimitCountManager__GetLimitCount(svtId, 0LL);
    v20 = entity->fields.condType;
    if ( v20 != 7 )
    {
      if ( v20 == 103 )
        return LimitCount == entity->fields.condValue;
      return 0;
    }
    v17 = LimitCount < entity->fields.condValue;
    return !v17;
  }
  if ( condType == 103 )
    goto LABEL_22;
  if ( condType == 21 )
    return 1;
  if ( condType != 16 )
    return 0;
  max_length = clearWarIdList->max_length;
  v10 = __OFSUB__(max_length, 1);
  v11 = max_length - 1;
  if ( v11 < 0 != v10 )
    return 0;
  condValue = entity->fields.condValue;
  v13 = 0;
  do
  {
    v14 = clearWarIdList->m_Items[v13 + 1];
    result = condValue == v14;
    if ( condValue == v14 )
      break;
  }
  while ( v11 != v13++ );
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

  if ( (byte_4B16AC2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16AC2 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B16AC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    byte_4B16AC4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16ACA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantProfileMaster___c_TypeInfo, v1, v2);
    byte_4B16ACA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantProfileMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantProfileMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, e);
  return e->fields.svtId == entity->fields.svtId;
}