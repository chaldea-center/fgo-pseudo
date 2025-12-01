void ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7CA0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_4CC7CA0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_340B614 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Master_object; // x23
  CommonUI_o *v19; // x21
  Il2CppObject *v20; // x0
  UserServantCollectionEntity_o *v21; // x21
  CommonUI_o *v22; // x22
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC7CAD & 1) == 0 )
  {
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__);
    sub_1C713B0(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    byte_4CC7CAD = 1;
  }
  entity = 0;
  v9 = sub_1C715FC(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)endAction, v12, v13, v14, v15, v16, v17);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)Instance->fields.connectMark->fields.tipsBase,
           svtId,
           0) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = entity;
          v22 = (CommonUI_o *)v20;
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_1C715FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0);
          if ( v22 )
          {
            CommonUI__OpenServantStatusDialog_31452504(v22, 33, v21, limitCount, v23, 0);
            return;
          }
        }
      }
LABEL_23:
      sub_1C71608(Instance, v11);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_31440904(Instance, *(System_Action_o **)(v9 + 16), 0);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC7C9E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_1C713B0(&ServantCommentEntity_TypeInfo);
    byte_4CC7C9E = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_340D938 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x24
  __int64 v11; // x26
  __int64 lookup; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *v20; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_String_o *v47; // x26
  __int64 v48; // x8
  __int64 v49; // x27
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  __int64 v59; // x8
  __int64 v60; // x27
  __int64 v61; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v62; // x10
  __int64 v63; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  int32_t v68; // w8
  ServantCommentEntity_o *v69; // x26
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v71; // x3
  il2cpp_array_size_t max_length; // x8
  int v73; // w9
  char v74; // w2
  const MethodInfo *v75; // x5
  int32_t v79; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v80; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4CC7CA1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CA1 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v79 = 0;
  v80 = 1;
  v11 = sub_1C71458(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v11 )
    goto LABEL_70;
  v13 = (const MethodInfo *)lookup;
  v20 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v11 + 32) = v13;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_69;
      v27 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 40), v27, v21, v22, v23, v24, v25, v26);
      lookup = (__int64)System_Int32__ToString((int32_t)&v80, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u
        || (*(_QWORD *)(v11 + 48) = lookup,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 48), lookup, v28, v29, v30, v31, v32, v33),
            *(_DWORD *)(v11 + 24) <= 3u)
        || (v40 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v11 + 56) = StringLiteral_1450/*":"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 56), v40, v34, v35, v36, v37, v38, v39),
            lookup = (__int64)System_Int32__ToString((int32_t)&v79, 0),
            *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_69:
        sub_1C71610(lookup);
      }
      *(_QWORD *)(v11 + 64) = lookup;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 64), lookup, v41, v42, v43, v44, v45, v46);
      v47 = System_String__Concat_64072256((System_String_array *)v11, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v48 = *(_QWORD *)lookup;
      v49 = lookup;
      v50 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v50;
          v51 += 4;
          if ( !v50 )
            goto LABEL_15;
        }
        v52 = v48 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_15:
        v52 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v52)(v49, v47, *(_QWORD *)(v52 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v59 = *(_QWORD *)lookup;
      v60 = lookup;
      v61 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v62 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v59 + 176)
                                                                                                + 8LL);
        while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v61;
          v62 += 2;
          if ( !v61 )
            goto LABEL_23;
        }
        v63 = v59 + 16LL * (*(_DWORD *)v62 + 2) + 312;
      }
      else
      {
LABEL_23:
        v63 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v63)(v60, v47, *(_QWORD *)(v63 + 8));
      if ( !lookup )
        goto LABEL_70;
      v69 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v13);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          max_length = ImageLimit->max_length;
          if ( max_length )
          {
            if ( overLimit )
            {
              if ( (int)max_length < 1 )
                goto LABEL_65;
              v73 = 0;
              while ( ImageLimit->m_Items[v73] > imageLimitCount )
              {
                if ( (_DWORD)max_length == ++v73 )
                  goto LABEL_65;
              }
            }
            else if ( System_Array__IndexOf_int_(
                        ImageLimit,
                        imageLimitCount,
                        (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___) < 0 )
            {
              goto LABEL_65;
            }
          }
        }
      }
      if ( condType && v69->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_65;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_70;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_70;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v80,
                v79,
                condType,
                v75) )
          goto LABEL_65;
        if ( !v20 )
          goto LABEL_64;
        v74 = 1;
      }
      else if ( addCheck )
      {
        v74 = 1;
        if ( !v20 )
          goto LABEL_64;
      }
      else if ( v79 < 1 )
      {
        v74 = 0;
        if ( !v20 )
          goto LABEL_64;
      }
      else
      {
        v74 = v69->fields.condType == 0;
        if ( !v20 )
          goto LABEL_64;
      }
      if ( ServantCommentEntity__IsOpen(v69, -1, v74, v71) )
LABEL_64:
        v20 = (Il2CppObject *)v69;
LABEL_65:
      ++v79;
      v11 = sub_1C71458(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v13 = (const MethodInfo *)lookup;
      if ( !v11 )
        goto LABEL_70;
    }
    if ( v20 )
    {
      if ( !v10 )
        goto LABEL_70;
      items = v10->fields._items;
      v65 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_70;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v20,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v20;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v20, v53, v54, v55, v56, v57, v58);
      }
LABEL_44:
      v68 = v80;
      goto LABEL_45;
    }
    if ( v79 )
      goto LABEL_44;
    v68 = v80;
    if ( v80 != 1 )
      break;
LABEL_45:
    v79 = 0;
    v80 = v68 + 1;
    v11 = sub_1C71458(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v13 = (const MethodInfo *)lookup;
    v20 = 0;
    if ( !v11 )
      goto LABEL_70;
  }
  if ( !v10 )
LABEL_70:
    sub_1C71608(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


ServantCommentEntity_array *ServantCommentMaster__GetEntityListWithImageList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x23
  __int64 v9; // x25
  __int64 lookup; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_o *v45; // x25
  __int64 v46; // x8
  __int64 v47; // x26
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x8
  __int64 v58; // x26
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v60; // x10
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x25
  System_Int32_array *ImageLimit; // x0
  il2cpp_array_size_t max_length; // x10
  __int64 v65; // x9
  char v66; // w8
  int v67; // w11
  const MethodInfo *v68; // x3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w8
  const MethodInfo *v74; // x5
  int32_t v78; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4CC7CA2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CA2 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v78 = 0;
  v79 = 1;
  v9 = sub_1C71458(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v9 )
    goto LABEL_60;
  v11 = (const MethodInfo *)lookup;
  v18 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v9 + 32) = v11;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v11, v12, v13, v14, v15, v16, v17);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_59;
      v25 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 40), v25, v19, v20, v21, v22, v23, v24);
      lookup = (__int64)System_Int32__ToString((int32_t)&v79, 0);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 48), lookup, v26, v27, v28, v29, v30, v31),
            *(_DWORD *)(v9 + 24) <= 3u)
        || (v38 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1450/*":"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 56), v38, v32, v33, v34, v35, v36, v37),
            lookup = (__int64)System_Int32__ToString((int32_t)&v78, 0),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_59:
        sub_1C71610(lookup);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 64), lookup, v39, v40, v41, v42, v43, v44);
      v45 = System_String__Concat_64072256((System_String_array *)v9, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v46 = *(_QWORD *)lookup;
      v47 = lookup;
      v48 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_15;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_15:
        v50 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v50)(v47, v45, *(_QWORD *)(v50 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v57 = *(_QWORD *)lookup;
      v58 = lookup;
      v59 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v60 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v57 + 176)
                                                                                                + 8LL);
        while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_23;
        }
        v61 = v57 + 16LL * (*(_DWORD *)v60 + 2) + 312;
      }
      else
      {
LABEL_23:
        v61 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v61)(v58, v45, *(_QWORD *)(v61 + 8));
      if ( !lookup )
        goto LABEL_60;
      v62 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v11);
      if ( ImageLimit )
      {
        max_length = ImageLimit->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v65 = 0;
            v66 = 0;
            do
            {
              v67 = ImageLimit->m_Items[v65++];
              v66 |= v67 > 2;
            }
            while ( (unsigned int)ImageLimit->max_length != v65 );
            if ( (v66 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___)
                & 0x80000000) == 0 )
            {
              if ( !condType || v62->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v79,
                       v78,
                       condType,
                       v74) )
                {
LABEL_50:
                  if ( !v18 || ServantCommentEntity__IsOpen(v62, -1, 1, v68) )
                    v18 = (Il2CppObject *)v62;
                }
              }
            }
          }
        }
      }
      ++v78;
      v9 = sub_1C71458(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v11 = (const MethodInfo *)lookup;
      if ( !v9 )
        goto LABEL_60;
    }
    if ( v18 )
    {
      if ( !v8 )
        goto LABEL_60;
      items = v8->fields._items;
      v70 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v18,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v72[4] = (Il2CppClass *)v18;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v72 + 4), (int32_t)v18, v51, v52, v53, v54, v55, v56);
      }
LABEL_44:
      v73 = v79;
      goto LABEL_45;
    }
    if ( v78 )
      goto LABEL_44;
    v73 = v79;
    if ( v79 != 1 )
      break;
LABEL_45:
    v78 = 0;
    v79 = v73 + 1;
    v9 = sub_1C71458(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v11 = (const MethodInfo *)lookup;
    v18 = 0;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_1C71608(lookup, v11);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v13; // w24
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x25
  System_Collections_Generic_List_int__o *v16; // x26
  __int64 v17; // x28
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  ServantCommentEntity_o *v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_String_o *v51; // x28
  __int64 v52; // x8
  __int64 v53; // x29
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x8
  __int64 v59; // x29
  __int64 v60; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v61; // x10
  __int64 v62; // x0
  ServantCommentEntity_o *v63; // x28
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  int v66; // w29
  int v67; // w8
  int v68; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  int v78; // w8
  struct System_Int32_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  System_Int32_array *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  System_Int32_array *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  GrandQuestFolderBoardItem_o *v97; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v98; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v99; // [xsp+20h] [xbp-80h]
  __int64 v100; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4CC7CA7 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CA7 = 1;
  }
  v100 = 0;
  entity = 0;
  v99 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v99,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v98 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v98,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_100;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               svtId,
               0);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_100;
    v13 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v13,
                                   v14);
  }
  v97 = (GrandQuestFolderBoardItem_o *)priorityList;
  HIDWORD(v100) = 1;
  while ( 2 )
  {
    LODWORD(v100) = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
    v17 = sub_1C71458(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    if ( !v17 )
      goto LABEL_100;
    id = Instance;
    v24 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v17 + 32) = id;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 32), id, v18, v19, v20, v21, v22, v23);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_99;
      v31 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 40), v31, v25, v26, v27, v28, v29, v30);
      Instance = (__int64)System_Int32__ToString((int32_t)&v100 + 4, 0);
      if ( *(_DWORD *)(v17 + 24) <= 2u
        || (*(_QWORD *)(v17 + 48) = Instance,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 48), Instance, v32, v33, v34, v35, v36, v37),
            *(_DWORD *)(v17 + 24) <= 3u)
        || (v44 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v17 + 56) = StringLiteral_1450/*":"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 56), v44, v38, v39, v40, v41, v42, v43),
            Instance = (__int64)System_Int32__ToString((int32_t)&v100, 0),
            *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_99:
        sub_1C71610(Instance);
      }
      *(_QWORD *)(v17 + 64) = Instance;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 64), Instance, v45, v46, v47, v48, v49, v50);
      v51 = System_String__Concat_64072256((System_String_array *)v17, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v52 = *(_QWORD *)Instance;
      v53 = Instance;
      v54 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v55 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v54;
          v55 += 4;
          if ( !v54 )
            goto LABEL_32;
        }
        v56 = v52 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_32:
        v56 = sub_1C47738(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v56)(v53, v51, *(_QWORD *)(v56 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v58 = *(_QWORD *)Instance;
      v59 = Instance;
      v60 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v61 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v58 + 176)
                                                                                                + 8LL);
        while ( *(v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v60;
          v61 += 2;
          if ( !v60 )
            goto LABEL_40;
        }
        v62 = v58 + 16LL * (*(_DWORD *)v61 + 2) + 312;
      }
      else
      {
LABEL_40:
        v62 = sub_1C47738(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v62)(v59, v51, *(_QWORD *)(v62 + 8));
      if ( !Instance )
        goto LABEL_100;
      v63 = (ServantCommentEntity_o *)Instance;
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v65 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v63, -1, 0, v64) )
          v24 = v63;
        goto LABEL_72;
      }
      if ( !(_DWORD)v65 )
        goto LABEL_99;
      v66 = *(_DWORD *)(Instance + 32);
      if ( v66 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v63, -1, 0, v64);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v66 )
      {
        Instance = ServantCommentEntity__IsOpen(v63, -1, 0, v64);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v63 = v24;
      if ( !v24 )
        goto LABEL_72;
LABEL_55:
      if ( v66 == 1 )
      {
        if ( !v15 )
          goto LABEL_100;
        v67 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v67;
        if ( !v16 )
          goto LABEL_100;
        v68 = v16->fields._version + 1;
        v16->fields._size = 0;
        v16->fields._version = v68;
        Instance = ServantCommentEntity__IsNew(v63, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v63, (const MethodInfo *)id);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v15 )
        goto LABEL_100;
LABEL_62:
      id = (unsigned int)v63->fields.id;
      items = v15->fields._items;
      v70 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      if ( !v16 )
        goto LABEL_100;
      id = (unsigned int)v63->fields.priority;
      v72 = v16->fields._items;
      v73 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !v72 )
        goto LABEL_100;
      v74 = v16->fields._size;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          id,
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
LABEL_71:
        v24 = 0;
        goto LABEL_72;
      }
      v24 = 0;
      v16->fields._size = v74 + 1;
      v72->m_Items[v74] = id;
LABEL_72:
      LODWORD(v100) = v100 + 1;
      v17 = sub_1C71458(string___TypeInfo, 5);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      id = Instance;
      if ( !v17 )
        goto LABEL_100;
    }
    if ( v24 )
    {
      if ( !ServantCommentEntity__IsNew(v24, v57) )
        goto LABEL_93;
      Instance = (__int64)v99;
      if ( !v99 )
        goto LABEL_100;
      id = (unsigned int)v24->fields.id;
      v75 = v99->fields._items;
      v76 = Method_System_Collections_Generic_List_int__Add__;
      ++v99->fields._version;
      if ( !v75 )
        goto LABEL_100;
      v77 = v99->fields._size;
      if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v99,
          id,
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v99->fields._size = v77 + 1;
        v75->m_Items[v77] = id;
      }
      Instance = (__int64)v98;
      if ( !v98 )
        goto LABEL_100;
      id = (unsigned int)v24->fields.priority;
      v79 = v98->fields._items;
      v80 = Method_System_Collections_Generic_List_int__Add__;
      ++v98->fields._version;
      if ( !v79 )
        goto LABEL_100;
      v81 = v98->fields._size;
      if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v98,
          id,
          *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v98->fields._size = v81 + 1;
        v79->m_Items[v81] = id;
      }
LABEL_93:
      v78 = HIDWORD(v100);
LABEL_94:
      HIDWORD(v100) = v78 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0) )
  {
    Instance = (__int64)v99;
    if ( v99 )
    {
      System_Collections_Generic_List_int___AddRange(
        v99,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v98;
      if ( v98 )
      {
        System_Collections_Generic_List_int___AddRange(
          v98,
          (System_Collections_Generic_IEnumerable_T__o *)v16,
          (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v100 )
    goto LABEL_93;
  v78 = HIDWORD(v100);
  if ( HIDWORD(v100) == 1 )
    goto LABEL_94;
  Instance = (__int64)v99;
  if ( !v99
    || (v82 = System_Collections_Generic_List_int___ToArray(
                v99,
                (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v82,
        sub_1C71354((GrandQuestFolderBoardItem_o *)idList, (int32_t)v82, v83, v84, v85, v86, v87, v88),
        (Instance = (__int64)v98) == 0)
    || (v89 = System_Collections_Generic_List_int___ToArray(
                v98,
                (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__),
        v97->klass = (GrandQuestFolderBoardItem_c *)v89,
        sub_1C71354(v97, (int32_t)v89, v90, v91, v92, v93, v94, v95),
        !*idList) )
  {
LABEL_100:
    sub_1C71608(Instance, id);
  }
  return LODWORD((*idList)->max_length) != 0;
}


System_Collections_Generic_List_ServantCommentEntity__o *ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x4
  __int64 NewList; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x8
  unsigned __int64 v10; // x23
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_String_o *v44; // x21
  __int64 v45; // x8
  __int64 v46; // x22
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x22
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v53; // x10
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  __int64 v64; // x1
  Il2CppClass **v65; // x0
  System_Int32_array *v67; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  v69 = svtId;
  if ( (byte_4CC7CAA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CAA = 1;
  }
  v67 = 0;
  idList = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v67, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_39:
      sub_1C71608(NewList, v8);
    v10 = 0;
    while ( (__int64)v10 < SLODWORD(v9->max_length) )
    {
      v11 = sub_1C71458(string___TypeInfo, 5);
      NewList = (__int64)System_Int32__ToString((int32_t)&v69, 0);
      if ( !v11 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v11 + 32) = NewList;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 32), NewList, v12, v13, v14, v15, v16, v17);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_41;
      v24 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
      if ( !idList )
        goto LABEL_39;
      if ( v10 >= LODWORD(idList->max_length) )
        goto LABEL_41;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v11 + 48) = NewList;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 48), NewList, v25, v26, v27, v28, v29, v30);
      if ( *(_DWORD *)(v11 + 24) <= 3u )
        goto LABEL_41;
      v37 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v11 + 56) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36);
      if ( !v67 )
        goto LABEL_39;
      if ( v10 >= LODWORD(v67->max_length)
        || (NewList = (__int64)System_Int32__ToString((int)v67 + 4 * (int)v10 + 32, 0), *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_41:
        sub_1C71610(NewList);
      }
      *(_QWORD *)(v11 + 64) = NewList;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 64), NewList, v38, v39, v40, v41, v42, v43);
      v44 = System_String__Concat_64072256((System_String_array *)v11, 0);
      NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !NewList )
        goto LABEL_39;
      v45 = *(_QWORD *)NewList;
      v46 = NewList;
      v47 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_22;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_22:
        v49 = sub_1C47738(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
        if ( !NewList )
          goto LABEL_39;
        v50 = *(_QWORD *)NewList;
        v51 = NewList;
        v52 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v50 + 176)
                                                                                                  + 8LL);
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v52;
            v53 += 2;
            if ( !v52 )
              goto LABEL_30;
          }
          v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
        }
        else
        {
LABEL_30:
          v54 = sub_1C47738(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v54)(v51, v44, *(_QWORD *)(v54 + 8));
        if ( NewList )
        {
          if ( !v5 )
            goto LABEL_39;
          items = v5->fields._items;
          v62 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_39;
          size = v5->fields._size;
          v64 = NewList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)NewList,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v65[4] = (Il2CppClass *)v64;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
          }
        }
      }
      v9 = idList;
      ++v10;
      if ( !idList )
        goto LABEL_39;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v5;
}


ServantCommentEntity_array *ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x22
  __int64 lookup; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *v41; // x22
  __int64 v42; // x8
  __int64 v43; // x23
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 v53; // x8
  __int64 v54; // x23
  __int64 v55; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v56; // x10
  __int64 v57; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  int v62; // w8
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x22
  int v66; // [xsp+4h] [xbp-6Ch] BYREF
  int v67; // [xsp+8h] [xbp-68h] BYREF
  int32_t v68; // [xsp+Ch] [xbp-64h] BYREF

  v68 = svtId;
  if ( (byte_4CC7CA3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CA3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v66 = 0;
  v67 = 1;
  v5 = sub_1C71458(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&v68, 0);
  if ( !v5 )
    goto LABEL_45;
  v7 = lookup;
  v14 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v5 + 32) = v7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), v7, v8, v9, v10, v11, v12, v13);
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_44;
      v21 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v5 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
      lookup = (__int64)System_Int32__ToString((int32_t)&v67, 0);
      if ( *(_DWORD *)(v5 + 24) <= 2u
        || (*(_QWORD *)(v5 + 48) = lookup,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 48), lookup, v22, v23, v24, v25, v26, v27),
            *(_DWORD *)(v5 + 24) <= 3u)
        || (v34 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v5 + 56) = StringLiteral_1450/*":"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
            lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0),
            *(_DWORD *)(v5 + 24) <= 4u) )
      {
LABEL_44:
        sub_1C71610(lookup);
      }
      *(_QWORD *)(v5 + 64) = lookup;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 64), lookup, v35, v36, v37, v38, v39, v40);
      v41 = System_String__Concat_64072256((System_String_array *)v5, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_45;
      v42 = *(_QWORD *)lookup;
      v43 = lookup;
      v44 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_15;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_15:
        v46 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v46)(v43, v41, *(_QWORD *)(v46 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v53 = *(_QWORD *)lookup;
        v54 = lookup;
        v55 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v56 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v53 + 176)
                                                                                                  + 8LL);
          while ( *(v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v55;
            v56 += 2;
            if ( !v55 )
              goto LABEL_23;
          }
          v57 = v53 + 16LL * (*(_DWORD *)v56 + 2) + 312;
        }
        else
        {
LABEL_23:
          v57 = sub_1C47738(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v57)(v54, v41, *(_QWORD *)(v57 + 8));
        if ( lookup )
        {
          v64 = (Il2CppObject *)lookup;
          if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v63) )
            v14 = v64;
          ++v66;
          v5 = sub_1C71458(string___TypeInfo, 5);
          lookup = (__int64)System_Int32__ToString((int32_t)&v68, 0);
          v7 = lookup;
          if ( v5 )
            continue;
        }
      }
      goto LABEL_45;
    }
    if ( v14 )
    {
      if ( !v4 )
        goto LABEL_45;
      items = v4->fields._items;
      v59 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_45;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v14,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v14;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v61 + 4), (int32_t)v14, v47, v48, v49, v50, v51, v52);
      }
LABEL_39:
      v62 = v67;
      goto LABEL_40;
    }
    if ( v66 )
      goto LABEL_39;
    v62 = v67;
    if ( v67 != 1 )
      break;
LABEL_40:
    v66 = 0;
    v67 = v62 + 1;
    v5 = sub_1C71458(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&v68, 0);
    v7 = lookup;
    v14 = 0;
    if ( !v5 )
      goto LABEL_45;
  }
  if ( !v4 )
LABEL_45:
    sub_1C71608(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v4,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *svtId; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v13; // w26
  int32_t v14; // w27
  int32_t v15; // w24
  ServantCommentEntity_o *v16; // x29
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x28
  UserServantCollectionMaster_o *v20; // x9
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  ServantLimitImageMaster_o *v28; // [xsp+0h] [xbp-80h]
  UserServantCollectionMaster_o *v29; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CC7CA8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_IndexOf_int___);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7CA8 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v29 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v10 )
        break;
      v15 = *((_DWORD *)Instance + 4);
      v16 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v10,
              v15,
              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        ImageLimit = ServantCommentEntity__GetImageLimit(v16, svtId);
        if ( !ImageLimit )
          goto LABEL_39;
        v19 = ImageLimit;
        if ( !ImageLimit->max_length )
          goto LABEL_39;
        v20 = v29;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v29;
        }
        if ( !byte_4CC112A )
        {
          sub_1C713B0(&NetworkManager_TypeInfo);
          v20 = v29;
          byte_4CC112A = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v29;
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v20 )
          break;
        Instance = (void *)UserServantCollectionMaster__TryGetEntity(
                             v20,
                             &entity,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             v15,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_39;
        if ( !entity )
          break;
        Instance = v28;
        if ( !v28 )
          break;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v28,
                                       v15,
                                       entity->fields.maxLimitCount,
                                       v18);
        if ( (System_Array__IndexOf_int_(
                v19,
                ServantLimitCountSealAfter,
                (const MethodInfo_3252F20 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
        {
LABEL_39:
          if ( ServantCommentEntity__IsOnlyOpenQuestCond(v16, questId, questPhase, v18) )
            goto LABEL_40;
          Instance = MasterData_object;
          if ( !MasterData_object )
            break;
          if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
                 (ServantCommentAddMaster_o *)MasterData_object,
                 v15,
                 v16->fields.id,
                 v16->fields.priority,
                 1,
                 questId,
                 questPhase,
                 v23) )
          {
LABEL_40:
            Instance = (void *)ServantCommentEntity__IsOpen(v16, -1, 1, v22);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              svtId = (const MethodInfo *)(unsigned int)v16->fields.svtId;
              items = v10->fields._items;
              v25 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  (int32_t)svtId,
                  *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size] = (int)svtId;
              }
            }
          }
        }
      }
      if ( v13 == ++v14 )
        return v10;
    }
LABEL_36:
    sub_1C71608(Instance, svtId);
  }
  return v10;
}


ServantCommentEntity_array *ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v8; // x22
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v11; // w24
  int32_t v12; // w25
  const MethodInfo *v13; // x3
  ServantCommentEntity_o *v14; // x26
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x7
  const MethodInfo *v17; // x1
  bool IsOpen; // w27
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4CC7CA9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    byte_4CC7CA9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !list )
        break;
      v14 = (ServantCommentEntity_o *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                 (ServantCommentEntity_o *)list,
                                                                 questId,
                                                                 questPhase,
                                                                 v13);
      if ( ((unsigned __int8)list & 1) != 0 )
        goto LABEL_13;
      if ( !Master_object )
        break;
      if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
             (ServantCommentAddMaster_o *)Master_object,
             v14->fields.svtId,
             v14->fields.id,
             v14->fields.priority,
             1,
             questId,
             questPhase,
             v16) )
      {
LABEL_13:
        IsOpen = ServantCommentEntity__IsOpen(v14, -1, 1, v15);
      }
      else
      {
        IsOpen = 0;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v14, v17);
      if ( list && IsOpen && list[1].klass )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v26 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v14;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v14, v19, v20, v21, v22, v23, v24);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C71608(list, v9);
  }
LABEL_24:
  if ( !v8 )
    goto LABEL_26;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x21
  ServantCommentEntity_o *lookup; // x0
  ServantCommentEntity_o *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ServantCommentEntity_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_String_o *v40; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v42; // x22
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  const MethodInfo *v46; // x1
  ServantCommentEntity_c *v47; // x8
  ServantCommentEntity_o *v48; // x22
  __int64 v49; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v50; // x10
  __int64 v51; // x0
  int v52; // w8
  const MethodInfo *v53; // x3
  ServantCommentEntity_o *v54; // x21
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  int v57; // [xsp+18h] [xbp-48h] BYREF
  int32_t v58; // [xsp+1Ch] [xbp-44h] BYREF

  v58 = svtId;
  if ( (byte_4CC7CA6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_1450/*":"*/);
    byte_4CC7CA6 = 1;
  }
  v57 = 1;
  v56 = 0;
  v4 = sub_1C71458(string___TypeInfo, 5);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0);
  if ( !v4 )
LABEL_40:
    sub_1C71608(lookup, v6);
  v6 = lookup;
  v13 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_39;
      *(_QWORD *)(v4 + 32) = v6;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)v6, v7, v8, v9, v10, v11, v12);
      if ( *(_DWORD *)(v4 + 24) <= 1u )
        goto LABEL_39;
      v20 = StringLiteral_1450/*":"*/;
      *(_QWORD *)(v4 + 40) = StringLiteral_1450/*":"*/;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 40), v20, v14, v15, v16, v17, v18, v19);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v57, 0);
      if ( *(_DWORD *)(v4 + 24) <= 2u
        || (*(_QWORD *)(v4 + 48) = lookup,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 48), (int32_t)lookup, v21, v22, v23, v24, v25, v26),
            *(_DWORD *)(v4 + 24) <= 3u)
        || (v33 = StringLiteral_1450/*":"*/,
            *(_QWORD *)(v4 + 56) = StringLiteral_1450/*":"*/,
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 56), v33, v27, v28, v29, v30, v31, v32),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v56, 0),
            *(_DWORD *)(v4 + 24) <= 4u) )
      {
LABEL_39:
        sub_1C71610(lookup);
      }
      *(_QWORD *)(v4 + 64) = lookup;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 64), (int32_t)lookup, v34, v35, v36, v37, v38, v39);
      v40 = System_String__Concat_64072256((System_String_array *)v4, 0);
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_40;
      klass = lookup->klass;
      v42 = lookup;
      v43 = *(unsigned __int16 *)&lookup->klass->_2.rank;
      if ( *(_WORD *)&lookup->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v43;
          p_offset += 4;
          if ( !v43 )
            goto LABEL_15;
        }
        v45 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_15:
        v45 = sub_1C47738(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v45)(
              v42,
              v40,
              *(_QWORD *)(v45 + 8))
          & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_340B72C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v47 = lookup->klass;
        v48 = lookup;
        v49 = *(unsigned __int16 *)&lookup->klass->_2.rank;
        if ( *(_WORD *)&lookup->klass->_2.rank )
        {
          v50 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)&v47->_1.interfaceOffsets->offset;
          while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v49;
            v50 += 2;
            if ( !v49 )
              goto LABEL_23;
          }
          v51 = (__int64)(&v47->vtable._2_GetHashCode + *(_DWORD *)v50);
        }
        else
        {
LABEL_23:
          v51 = sub_1C47738(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v51)(
                                             v48,
                                             v40,
                                             *(_QWORD *)(v51 + 8));
        if ( lookup )
        {
          v54 = lookup;
          if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v53) )
            v13 = v54;
          ++v56;
          v4 = sub_1C71458(string___TypeInfo, 5);
          lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0);
          v6 = lookup;
          if ( v4 )
            continue;
        }
      }
      goto LABEL_40;
    }
    if ( v13 )
    {
      if ( ServantCommentEntity__IsNew(v13, v46) )
        return v13 != 0;
      goto LABEL_28;
    }
    if ( !v56 )
      break;
LABEL_28:
    v52 = v57;
LABEL_29:
    v57 = v52 + 1;
    v56 = 0;
    v4 = sub_1C71458(string___TypeInfo, 5);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0);
    v6 = lookup;
    v13 = 0;
    if ( !v4 )
      goto LABEL_40;
  }
  v52 = v57;
  if ( v57 == 1 )
    goto LABEL_29;
  return v13 != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  char v13; // w22
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ServantCommentEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  ServantCommentEntity_o *v20; // x23
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x25
  System_Collections_Generic_List_int__o *v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4CC7CAB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor___78587544);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC7CAB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
    sub_1C71608(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCommentEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_17:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0);
    }
    v18 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                      Enumerator,
                                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C71608(0, v19);
    if ( v18->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v18, v19);
      v22 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( ImageLimit->max_length )
        {
          v23 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_58666952(
            v23,
            v22,
            (const MethodInfo_37F2FC8 *)Method_System_Collections_Generic_List_int___ctor___78587544);
          if ( !v23 )
            sub_1C71608(v24, v25);
          System_Collections_Generic_List_int___Sort(
            v23,
            (const MethodInfo_37F5038 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v20, -1, 1, v26) )
          {
            goto LABEL_29;
          }
        }
      }
    }
  }
  v13 = 0;
LABEL_29:
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
        goto LABEL_33;
    }
    v30 = (__int64)&v27->vtable[*v29];
  }
  else
  {
LABEL_33:
    v30 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v13 & 1;
}


void ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x4
  System_String_o *v25; // x20
  Il2CppObject *Name; // x0
  System_String_o *v27; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v29; // x22
  System_String_o *v30; // x23
  CommonConfirmDialog_ClickDelegate_o *v31; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CC7CAC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__);
    sub_1C713B0(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
    sub_1C713B0(&StringLiteral_10847/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_1C713B0(&StringLiteral_10846/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_10844/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_4CC7CAC = 1;
  }
  entity = 0;
  v9 = sub_1C715FC(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)decideAction, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)endAction, v18, v19, v20, v21, v22, v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10847/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0);
  if ( !entity )
    goto LABEL_14;
  v25 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0, v24);
  v27 = System_String__Format(v25, Name, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10846/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10844/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1C71608(Master_object, v11);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v27,
    v29,
    v30,
    v31,
    0,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    42.0,
    0,
    0,
    0);
}


void ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  if ( (byte_4CC7CA4 & 1) == 0 )
  {
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    byte_4CC7CA4 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0);
}


void ServantCommentMaster__SetOpen_42923620(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4CC7CA5 & 1) == 0 )
  {
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    byte_4CC7CA5 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_43764036(svtId, svtCommentIdList, svtCommentPriorityList, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCommentMaster__TryGetEntity(
        ServantCommentMaster_o *this,
        ServantCommentEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC7C9F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_1C713B0(&ServantCommentEntity_TypeInfo);
    byte_4CC7C9F = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


void ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 4 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA79F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA7988;
}


System_IAsyncResult_o *ServantCommentMaster_ProfileChangeDecideDelegate__BeginInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v13[6]; // [xsp+0h] [xbp-80h] BYREF
  bool v14[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v15; // [xsp+38h] [xbp-48h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-44h] BYREF

  v15 = limitCount;
  v16 = svtid;
  v14[0] = isDecide;
  if ( (byte_4CC7CAE & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    byte_4CC7CAE = 1;
  }
  v13[4] = 0;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13[2] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v13[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1C71364(this, v13, callback, object);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, bool, System_Action_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    svtid,
    limitCount,
    isDecide,
    finishCallback,
    this->fields.method);
}


void ServantCommentMaster___c__DisplayClass15_0___ctor(
        ServantCommentMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentMaster___c__DisplayClass15_0___OpenSaintGraphProfileChange_b__0(
        ServantCommentMaster___c__DisplayClass15_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction; // x9
  __int64 limitCount; // x2
  unsigned int svtId; // w8
  System_Action_o *endAction; // x4

  decideAction = this->fields.decideAction;
  svtId = this->fields.svtId;
  limitCount = (unsigned int)this->fields.limitCount;
  endAction = this->fields.endAction;
  if ( decideAction )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, bool, System_Action_o *, intptr_t))decideAction->fields.invoke_impl)(
      decideAction->fields.method_code,
      svtId,
      limitCount,
      isDecide,
      endAction,
      decideAction->fields.method);
  else
    ServantCommentMaster__DefaultProfileChangeDecideAction(
      svtId,
      limitCount,
      isDecide,
      endAction,
      (const MethodInfo *)endAction);
}


void ServantCommentMaster___c__DisplayClass16_0___ctor(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC7CAF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4CC7CAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_1C71608(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4CC7CB0 & 1) == 0 )
  {
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC7CB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_8:
    sub_1C71608(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}