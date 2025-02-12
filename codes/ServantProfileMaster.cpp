void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4FDC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_4BB4FDC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB4FDF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, clearWarIdList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v7);
    sub_1C13D24(&System_Comparison_ServantProfileEntity__TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v16);
    sub_1C13D24(&ServantProfileMaster___c_TypeInfo, v17);
    byte_4BB4FDF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v20 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
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
                                    (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
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
        _9__5_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v28,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( !v26 )
        break;
      System_Collections_Generic_List_object___Sort_56814736(
        v26,
        _9__5_0,
        (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        v26,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v41 = v40;
      do
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v36 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v41,
            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_25;
        }
        current = v41.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v36,
                 (ServantProfileEntity_o *)v41.fields._current,
                 clearWarIdList,
                 v37) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
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
    sub_1C13F80(Instance, v19);
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
  int64_t Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v27; // x21
  int v28; // w23
  int32_t v29; // w24
  __int64 v30; // x26
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_o *v37; // x25
  System_Predicate_object__o *v38; // x27
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x26
  ServantProfileMaster___c_c *v41; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v43; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  _BOOL8 v51; // x0
  const MethodInfo *v52; // x3
  Il2CppObject *current; // x26
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  int64_t v69; // x1
  Il2CppClass **v70; // x0
  int v72; // [xsp+Ch] [xbp-A4h]
  ServantCommentMaster_o *v73; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BB4FDE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, clearWarIdList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_ServantProfileEntity__TypeInfo, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantCommentMaster___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16);
    sub_1C13D24(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1C13D24(&System_Predicate_ServantCommentEntity__TypeInfo, v18);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C13D24(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v20);
    sub_1C13D24(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v21);
    sub_1C13D24(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v22);
    sub_1C13D24(&ServantProfileMaster___c_TypeInfo, v23);
    byte_4BB4FDE = 1;
  }
  memset(&v75, 0, sizeof(v75));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  v73 = (ServantCommentMaster_o *)MasterData_object;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_34;
  v28 = Instance;
  if ( (int)Instance >= 1 )
  {
    v29 = 0;
    v72 = Instance;
    while ( 1 )
    {
      v30 = sub_1C13F70(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v30, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v29,
                            (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
      if ( !v30 )
        break;
      *(_QWORD *)(v30 + 16) = Instance;
      v37 = (PartyOrganizationUtility_o *)(v30 + 16);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 16), Instance, v31, v32, v33, v34, v35, v36);
      v38 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v38,
        (Il2CppObject *)v30,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v27 )
        break;
      Instance = (int64_t)System_Collections_Generic_List_object___Find(
                            v27,
                            (System_Predicate_T__o *)v38,
                            (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_31;
      if ( !v37->klass )
        break;
      Instance = (int64_t)ServantProfileMaster__GetSvtProfile(this, (int32_t)v37->klass->_1.name, v29, v39);
      v40 = (System_Collections_Generic_List_object__o *)Instance;
      v41 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v41 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v41->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = ServantProfileMaster___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v43,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_1,
          (int64_t)_9__4_1,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v28 = v72;
      }
      if ( !v40 )
        break;
      System_Collections_Generic_List_object___Sort_56814736(
        v40,
        _9__4_1,
        (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v74,
        v40,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v75 = v74;
      do
      {
        v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v75,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v51 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v75,
            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_31;
        }
        current = v75.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v51,
                 (ServantProfileEntity_o *)v75.fields._current,
                 clearWarIdList,
                 v52) );
      v37->klass = (PartyOrganizationUtility_c *)current;
      sub_1C13CC8(v37, (int64_t)current, v54, v55, v56, v57, v58, v59);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v75,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v37->klass )
        break;
      Instance = (int64_t)v73;
      if ( !v73 )
        break;
      Instance = (int64_t)ServantCommentMaster__GetEntity(
                            v73,
                            (int32_t)v37->klass->_1.name,
                            HIDWORD(v37->klass->_1.name),
                            (int32_t)v37->klass->_1.namespaze,
                            0LL);
      if ( !Instance )
        goto LABEL_31;
      items = v27->fields._items;
      v67 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v27->fields._version;
      if ( !items )
        break;
      size = v27->fields._size;
      v69 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)Instance,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v70[4] = (Il2CppClass *)v69;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v70 + 4), v69, v60, v61, v62, v63, v64, v65);
      }
LABEL_31:
      if ( ++v29 == v28 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1C13F80(Instance, v25);
  }
LABEL_32:
  if ( !v27 )
    goto LABEL_34;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v27,
                                         (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4BB4FDA & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB4FDA = 1;
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
                                     (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4BB4FE2 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__,
      *(_QWORD *)&condType);
    sub_1C13D24(&System_IDisposable_TypeInfo, v5);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo, v6);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    byte_4BB4FE2 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_36;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v15);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantProfileEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v33 = v25;
    if ( !v25 )
      sub_1C13F80(0LL, v26);
    if ( *(_DWORD *)(v25 + 32) == condType )
    {
      if ( !v12 )
        sub_1C13F80(v25, v26);
      items = v12->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C13F80(v25, v26);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  if ( !v12 )
LABEL_36:
    sub_1C13F80(list, v13);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v12,
                                         (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
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
  int64_t v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BB4FE0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    byte_4BB4FE0 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1C13F80(list, v12);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Item__);
    if ( !list )
      goto LABEL_14;
    v12 = (int64_t)list;
    if ( LODWORD(list->fields.items) == svtId )
    {
      if ( !v11 )
        goto LABEL_14;
      items = v11->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_14;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v12;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), v12, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4BB4FE1 & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, entity);
    this = (ServantProfileMaster_o *)sub_1C13D24(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4BB4FE1 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1C13F80(this, entity);
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

  if ( (byte_4BB4FDB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_4BB4FDB = 1;
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
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4BB4FDD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__, method);
    byte_4BB4FDD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantProfileEntity__get_Count__);
}


void __fastcall ServantProfileMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4FE3 & 1) == 0 )
  {
    sub_1C13D24(&ServantProfileMaster___c_TypeInfo, v1);
    byte_4BB4FE3 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantProfileMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, e);
  return e->fields.svtId == entity->fields.svtId;
}