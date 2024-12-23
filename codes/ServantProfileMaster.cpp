void __fastcall ServantProfileMaster___ctor(ServantProfileMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B674B1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__, method);
    byte_4B674B1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    3,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string___ctor__);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x3
  Il2CppObject *current; // x25
  ServantCommentEntity_o *result; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B674B4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_ServantProfileEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1BE4ACC(&ServantProfileEntity_TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__, v17);
    sub_1BE4ACC(&ServantProfileMaster___c_TypeInfo, v18);
    byte_4B674B4 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v21 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        _9__5_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__5_0,
          v30,
          Method_ServantProfileMaster___c__GetChapterProgressEntity_b__5_0__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_ServantProfileEntity__o *)_9__5_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      if ( !v28 )
        break;
      System_Collections_Generic_List_object___Sort_56548584(
        v28,
        _9__5_0,
        (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v28,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v43 = v42;
      do
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v38 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v43,
            (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_27;
        }
        current = v43.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v38,
                 (ServantProfileEntity_o *)v43.fields._current,
                 clearWarIdList,
                 v39) );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
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
    sub_1BE4D28(Instance, v20);
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
  int64_t Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  int v29; // w23
  int32_t v30; // w24
  Il2CppObject *v31; // x26
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  ServantProfileEntity_c *v38; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v40; // x10
  int64_t v41; // x1
  PartyOrganizationUtility_o *v42; // x25
  System_Predicate_object__o *v43; // x27
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x26
  ServantProfileMaster___c_c *v46; // x8
  System_Comparison_T__o *_9__4_1; // x27
  Il2CppObject *v48; // x28
  struct ServantProfileMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x3
  Il2CppObject *current; // x26
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  int64_t v74; // x1
  Il2CppClass **v75; // x0
  ServantProfileMaster_o *v77; // [xsp+8h] [xbp-A8h]
  ServantCommentMaster_o *v78; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B674B3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, clearWarIdList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&System_Comparison_ServantProfileEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Find__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__Sort__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v17);
    sub_1BE4ACC(&System_Predicate_ServantCommentEntity__TypeInfo, v18);
    sub_1BE4ACC(&ServantProfileEntity_TypeInfo, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BE4ACC(&Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__, v21);
    sub_1BE4ACC(&Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__, v22);
    sub_1BE4ACC(&ServantProfileMaster___c__DisplayClass4_0_TypeInfo, v23);
    sub_1BE4ACC(&ServantProfileMaster___c_TypeInfo, v24);
    byte_4B674B3 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  v78 = (ServantCommentMaster_o *)MasterData_object;
  Instance = System_Collections_ObjectModel_Collection_object___get_Count(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !clearWarIdList )
    goto LABEL_46;
  v29 = Instance;
  if ( (int)Instance >= 1 )
  {
    v30 = 0;
    v77 = this;
    while ( 1 )
    {
      v31 = (Il2CppObject *)sub_1BE4D18(ServantProfileMaster___c__DisplayClass4_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v30,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v31 )
        break;
      if ( Instance )
      {
        v38 = ServantProfileEntity_TypeInfo;
        methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
          v40 = *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == ServantProfileEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v40 = 0LL;
        v31[1].klass = v40;
        v42 = (PartyOrganizationUtility_o *)&v31[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
          v41 = *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v38
              ? Instance
              : 0LL;
        else
          v41 = 0LL;
      }
      else
      {
        v41 = 0LL;
        v31[1].klass = 0LL;
        v42 = (PartyOrganizationUtility_o *)&v31[1];
      }
      sub_1BE4A70(v42, v41, v32, v33, v34, v35, v36, v37);
      v43 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ServantCommentEntity__TypeInfo);
      System_Predicate_object____ctor(
        v43,
        v31,
        Method_ServantProfileMaster___c__DisplayClass4_0__GetChapterProgressEntityList_b__0__,
        0LL);
      if ( !v28 )
        break;
      Instance = (int64_t)System_Collections_Generic_List_object___Find(
                            v28,
                            (System_Predicate_T__o *)v43,
                            (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_ServantCommentEntity__Find__);
      if ( Instance )
        goto LABEL_43;
      if ( !v42->klass )
        break;
      Instance = (int64_t)ServantProfileMaster__GetSvtProfile(this, (int32_t)v42->klass->_1.name, v30, v44);
      v45 = (System_Collections_Generic_List_object__o *)Instance;
      v46 = ServantProfileMaster___c_TypeInfo;
      if ( !ServantProfileMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileMaster___c_TypeInfo);
        v46 = ServantProfileMaster___c_TypeInfo;
      }
      _9__4_1 = (System_Comparison_T__o *)v46->static_fields->__9__4_1;
      if ( !_9__4_1 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = ServantProfileMaster___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__4_1 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantProfileEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__4_1,
          v48,
          Method_ServantProfileMaster___c__GetChapterProgressEntityList_b__4_1__,
          0LL);
        static_fields = ServantProfileMaster___c_TypeInfo->static_fields;
        static_fields->__9__4_1 = (struct System_Comparison_ServantProfileEntity__o *)_9__4_1;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_1,
          (int64_t)_9__4_1,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        this = v77;
      }
      if ( !v45 )
        break;
      System_Collections_Generic_List_object___Sort_56548584(
        v45,
        _9__4_1,
        (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantProfileEntity__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v79,
        v45,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantProfileEntity__GetEnumerator__);
      v80 = v79;
      do
      {
        v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v80,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__MoveNext__);
        if ( !v56 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v80,
            (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
          goto LABEL_43;
        }
        current = v80.fields._current;
      }
      while ( !ServantProfileMaster__IsEnableCond(
                 (ServantProfileMaster_o *)v56,
                 (ServantProfileEntity_o *)v80.fields._current,
                 clearWarIdList,
                 v57) );
      v42->klass = (PartyOrganizationUtility_c *)current;
      sub_1BE4A70(v42, (int64_t)current, v59, v60, v61, v62, v63, v64);
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v80,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantProfileEntity__Dispose__);
      if ( !v42->klass )
        break;
      Instance = (int64_t)v78;
      if ( !v78 )
        break;
      Instance = (int64_t)ServantCommentMaster__GetEntity(
                            v78,
                            (int32_t)v42->klass->_1.name,
                            HIDWORD(v42->klass->_1.name),
                            (int32_t)v42->klass->_1.namespaze,
                            0LL);
      if ( !Instance )
        goto LABEL_43;
      items = v28->fields._items;
      v72 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        break;
      size = v28->fields._size;
      v74 = Instance;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)Instance,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v74;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v75 + 4), v74, v65, v66, v67, v68, v69, v70);
      }
LABEL_43:
      if ( ++v30 == v29 )
        goto LABEL_44;
    }
LABEL_46:
    sub_1BE4D28(Instance, v26);
  }
LABEL_44:
  if ( !v28 )
    goto LABEL_46;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v28,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4B674AF & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B674AF = 1;
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
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__GetEntity__);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B674B7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&condType);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v11);
    sub_1BE4ACC(&ServantProfileEntity_TypeInfo, v12);
    byte_4B674B7 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_38;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v16);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v34 = v26;
    if ( !v26
      || (methodPtr_low = LOBYTE(ServantProfileEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) < (unsigned int)methodPtr_low)
      || *(ServantProfileEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) != ServantProfileEntity_TypeInfo )
    {
      sub_1BE4D28(v26, v27);
    }
    if ( *(_DWORD *)(v26 + 32) == condType )
    {
      if ( !v13 )
        sub_1BE4D28(v26, v27);
      items = v13->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1BE4D28(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v26,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v34;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), v34, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_31:
    v43 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                             Enumerator,
                                                             *(_QWORD *)(v43 + 8));
  if ( !v13 )
LABEL_38:
    sub_1BE4D28(list, v14);
  return (ServantProfileEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v13,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantProfileEntity__ToArray__);
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
  int64_t v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B674B5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v10);
    sub_1BE4ACC(&ServantProfileEntity_TypeInfo, v11);
    byte_4B674B5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BE4D28(list, v13);
  while ( startIdx < System_Collections_ObjectModel_Collection_object___get_Count(
                       list,
                       (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               startIdx,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v13 = (int64_t)list;
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
      v23 = Method_System_Collections_Generic_List_ServantProfileEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_16;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)list,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v13;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), v13, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4B674B6 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, entity);
    this = (ServantProfileMaster_o *)sub_1BE4ACC(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_4B674B6 = 1;
  }
  if ( !clearWarIdList || !entity )
    sub_1BE4D28(this, entity);
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

  if ( (byte_4B674B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__, entity);
    byte_4B674B0 = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__TryGetEntity__);
}


int32_t __fastcall ServantProfileMaster__getSum(ServantProfileMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B674B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4B674B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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

  if ( (byte_4B674B8 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantProfileMaster___c_TypeInfo, v1);
    byte_4B674B8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantProfileMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantProfileMaster___c_TypeInfo->static_fields->__9 = (struct ServantProfileMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, x);
  return y->fields.priority - x->fields.priority;
}


int32_t __fastcall ServantProfileMaster___c___GetChapterProgressEntity_b__5_0(
        ServantProfileMaster___c_o *this,
        ServantProfileEntity_o *x,
        ServantProfileEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, e);
  return e->fields.svtId == entity->fields.svtId;
}