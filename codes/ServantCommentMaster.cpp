void ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38265 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_4C38265 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v14; // x21
  Il2CppObject *v15; // x0
  UserServantCollectionEntity_o *v16; // x21
  CommonUI_o *v17; // x22
  ServantStatusDialog_EndDelegate_o *v18; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C38272 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__);
    sub_1C32C20(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    byte_4C38272 = 1;
  }
  entity = 0;
  v9 = sub_1C32E6C(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)endAction, v11, v12);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v14 )
      {
        CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = entity;
          v17 = (CommonUI_o *)v15;
          v18 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v18,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0);
          if ( v17 )
          {
            CommonUI__OpenServantStatusDialog_31202680(v17, 33, v16, limitCount, v18, 0);
            return;
          }
        }
      }
LABEL_23:
      sub_1C32E7C(Instance);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_31191080(Instance, *(System_Action_o **)(v9 + 16), 0);
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

  if ( (byte_4C38263 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_1C32C20(&ServantCommentEntity_TypeInfo);
    byte_4C38263 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_339B2F0 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  Il2CppObject *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x26
  __int64 v28; // x8
  __int64 v29; // x27
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  __int64 v36; // x27
  __int64 v37; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v38; // x10
  __int64 v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w8
  const MethodInfo *v45; // x1
  ServantCommentEntity_o *v46; // x26
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v48; // x3
  il2cpp_array_size_t max_length; // x8
  int v50; // w9
  char v51; // w2
  const MethodInfo *v52; // x5
  int32_t v56; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v57; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C38266 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C38266 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v56 = 0;
  v57 = 1;
  v11 = sub_1C32CC8(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v11 )
    goto LABEL_70;
  v15 = lookup;
  v16 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v11 + 32) = v15;
      sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), v15, v13, v14);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_69;
      v19 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), v19, v17, v18);
      lookup = (__int64)System_Int32__ToString((int32_t)&v57, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u
        || (*(_QWORD *)(v11 + 48) = lookup,
            sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 48), lookup, v20, v21),
            *(_DWORD *)(v11 + 24) <= 3u)
        || (v24 = StringLiteral_1457/*":"*/,
            *(_QWORD *)(v11 + 56) = StringLiteral_1457/*":"*/,
            sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 56), v24, v22, v23),
            lookup = (__int64)System_Int32__ToString((int32_t)&v56, 0),
            *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_69:
        sub_1C32E84(lookup);
      }
      *(_QWORD *)(v11 + 64) = lookup;
      sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 64), lookup, v25, v26);
      v27 = System_String__Concat_63559060((System_String_array *)v11, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v28 = *(_QWORD *)lookup;
      v29 = lookup;
      v30 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_15;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_15:
        v32 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v32)(v29, v27, *(_QWORD *)(v32 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v35 = *(_QWORD *)lookup;
      v36 = lookup;
      v37 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v38 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v35 + 176)
                                                                                                + 8LL);
        while ( *(v38 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_23;
        }
        v39 = v35 + 16LL * (*(_DWORD *)v38 + 2) + 312;
      }
      else
      {
LABEL_23:
        v39 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v39)(v36, v27, *(_QWORD *)(v39 + 8));
      if ( !lookup )
        goto LABEL_70;
      v46 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v45);
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
              v50 = 0;
              while ( ImageLimit->m_Items[v50] > imageLimitCount )
              {
                if ( (_DWORD)max_length == ++v50 )
                  goto LABEL_65;
              }
            }
            else if ( System_Array__IndexOf_int_(
                        ImageLimit,
                        imageLimitCount,
                        (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___) < 0 )
            {
              goto LABEL_65;
            }
          }
        }
      }
      if ( condType && v46->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_65;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_70;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_70;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v57,
                v56,
                condType,
                v52) )
          goto LABEL_65;
        if ( !v16 )
          goto LABEL_64;
        v51 = 1;
      }
      else if ( addCheck )
      {
        v51 = 1;
        if ( !v16 )
          goto LABEL_64;
      }
      else if ( v56 < 1 )
      {
        v51 = 0;
        if ( !v16 )
          goto LABEL_64;
      }
      else
      {
        v51 = v46->fields.condType == 0;
        if ( !v16 )
          goto LABEL_64;
      }
      if ( ServantCommentEntity__IsOpen(v46, -1, v51, v48) )
LABEL_64:
        v16 = (Il2CppObject *)v46;
LABEL_65:
      ++v56;
      v11 = sub_1C32CC8(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v15 = lookup;
      if ( !v11 )
        goto LABEL_70;
    }
    if ( v16 )
    {
      if ( !v10 )
        goto LABEL_70;
      items = v10->fields._items;
      v41 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_70;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v16,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v16;
        sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v16, v33, v34);
      }
LABEL_44:
      v44 = v57;
      goto LABEL_45;
    }
    if ( v56 )
      goto LABEL_44;
    v44 = v57;
    if ( v57 != 1 )
      break;
LABEL_45:
    v56 = 0;
    v57 = v44 + 1;
    v11 = sub_1C32CC8(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v15 = lookup;
    v16 = 0;
    if ( !v11 )
      goto LABEL_70;
  }
  if ( !v10 )
LABEL_70:
    sub_1C32E7C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  Il2CppObject *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *v25; // x25
  __int64 v26; // x8
  __int64 v27; // x26
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  __int64 v34; // x26
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v36; // x10
  __int64 v37; // x0
  const MethodInfo *v38; // x1
  ServantCommentEntity_o *v39; // x25
  System_Int32_array *ImageLimit; // x0
  il2cpp_array_size_t max_length; // x10
  __int64 v42; // x9
  char v43; // w8
  int v44; // w11
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w8
  const MethodInfo *v51; // x5
  int32_t v55; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v56; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C38267 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C38267 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v55 = 0;
  v56 = 1;
  v9 = sub_1C32CC8(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v9 )
    goto LABEL_60;
  v13 = lookup;
  v14 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v9 + 32) = v13;
      sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), v13, v11, v12);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_59;
      v17 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), v17, v15, v16);
      lookup = (__int64)System_Int32__ToString((int32_t)&v56, 0);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 48), lookup, v18, v19),
            *(_DWORD *)(v9 + 24) <= 3u)
        || (v22 = StringLiteral_1457/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1457/*":"*/,
            sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 56), v22, v20, v21),
            lookup = (__int64)System_Int32__ToString((int32_t)&v55, 0),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_59:
        sub_1C32E84(lookup);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 64), lookup, v23, v24);
      v25 = System_String__Concat_63559060((System_String_array *)v9, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v26 = *(_QWORD *)lookup;
      v27 = lookup;
      v28 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_15;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_15:
        v30 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v30)(v27, v25, *(_QWORD *)(v30 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v33 = *(_QWORD *)lookup;
      v34 = lookup;
      v35 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v36 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v33 + 176)
                                                                                                + 8LL);
        while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v35;
          v36 += 2;
          if ( !v35 )
            goto LABEL_23;
        }
        v37 = v33 + 16LL * (*(_DWORD *)v36 + 2) + 312;
      }
      else
      {
LABEL_23:
        v37 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v25, *(_QWORD *)(v37 + 8));
      if ( !lookup )
        goto LABEL_60;
      v39 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v38);
      if ( ImageLimit )
      {
        max_length = ImageLimit->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v42 = 0;
            v43 = 0;
            do
            {
              v44 = ImageLimit->m_Items[v42++];
              v43 |= v44 > 2;
            }
            while ( (unsigned int)ImageLimit->max_length != v42 );
            if ( (v43 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___)
                & 0x80000000) == 0 )
            {
              if ( !condType || v39->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v56,
                       v55,
                       condType,
                       v51) )
                {
LABEL_50:
                  if ( !v14 || ServantCommentEntity__IsOpen(v39, -1, 1, v45) )
                    v14 = (Il2CppObject *)v39;
                }
              }
            }
          }
        }
      }
      ++v55;
      v9 = sub_1C32CC8(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v13 = lookup;
      if ( !v9 )
        goto LABEL_60;
    }
    if ( v14 )
    {
      if ( !v8 )
        goto LABEL_60;
      items = v8->fields._items;
      v47 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v14, v31, v32);
      }
LABEL_44:
      v50 = v56;
      goto LABEL_45;
    }
    if ( v55 )
      goto LABEL_44;
    v50 = v56;
    if ( v56 != 1 )
      break;
LABEL_45:
    v55 = 0;
    v56 = v50 + 1;
    v9 = sub_1C32CC8(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v13 = lookup;
    v14 = 0;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_1C32E7C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v12; // w24
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_int__o *v14; // x25
  System_Collections_Generic_List_int__o *v15; // x26
  __int64 v16; // x28
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  ServantCommentEntity_o *v20; // x27
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *v31; // x28
  __int64 v32; // x8
  __int64 v33; // x29
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x8
  __int64 v39; // x29
  __int64 v40; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v41; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x1
  ServantCommentEntity_o *v44; // x28
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  int v48; // w29
  int v49; // w8
  int v50; // w8
  int32_t id; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  int32_t priority; // w1
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int32_t v59; // w1
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  int v63; // w8
  int32_t v64; // w1
  struct System_Int32_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  System_Int32_array *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Int32_array *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  CGThumbnailListItem_o *v75; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v76; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v77; // [xsp+20h] [xbp-80h]
  __int64 v78; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C3826C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3826C = 1;
  }
  v78 = 0;
  entity = 0;
  v77 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v76 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v76,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    v12 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v12,
                                   v13);
  }
  v75 = (CGThumbnailListItem_o *)priorityList;
  HIDWORD(v78) = 1;
  while ( 2 )
  {
    LODWORD(v78) = 0;
    v14 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    v15 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = sub_1C32CC8(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    if ( !v16 )
      goto LABEL_100;
    v19 = Instance;
    v20 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v16 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v16 + 32) = v19;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), v19, v17, v18);
      if ( *(_DWORD *)(v16 + 24) <= 1u )
        goto LABEL_99;
      v23 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v16 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 40), v23, v21, v22);
      Instance = (__int64)System_Int32__ToString((int32_t)&v78 + 4, 0);
      if ( *(_DWORD *)(v16 + 24) <= 2u
        || (*(_QWORD *)(v16 + 48) = Instance,
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 48), Instance, v24, v25),
            *(_DWORD *)(v16 + 24) <= 3u)
        || (v28 = StringLiteral_1457/*":"*/,
            *(_QWORD *)(v16 + 56) = StringLiteral_1457/*":"*/,
            sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 56), v28, v26, v27),
            Instance = (__int64)System_Int32__ToString((int32_t)&v78, 0),
            *(_DWORD *)(v16 + 24) <= 4u) )
      {
LABEL_99:
        sub_1C32E84(Instance);
      }
      *(_QWORD *)(v16 + 64) = Instance;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 64), Instance, v29, v30);
      v31 = System_String__Concat_63559060((System_String_array *)v16, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v32 = *(_QWORD *)Instance;
      v33 = Instance;
      v34 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_32;
        }
        v36 = v32 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_32:
        v36 = sub_1C83438(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v36)(v33, v31, *(_QWORD *)(v36 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v38 = *(_QWORD *)Instance;
      v39 = Instance;
      v40 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v41 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v38 + 176)
                                                                                                + 8LL);
        while ( *(v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_40;
        }
        v42 = v38 + 16LL * (*(_DWORD *)v41 + 2) + 312;
      }
      else
      {
LABEL_40:
        v42 = sub_1C83438(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v42)(v39, v31, *(_QWORD *)(v42 + 8));
      if ( !Instance )
        goto LABEL_100;
      v44 = (ServantCommentEntity_o *)Instance;
      Instance = (__int64)ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)Instance, v43);
      if ( !Instance || (v47 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v44, -1, 0, v46) )
          v20 = v44;
        goto LABEL_72;
      }
      if ( !(_DWORD)v47 )
        goto LABEL_99;
      v48 = *(_DWORD *)(Instance + 32);
      if ( v48 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v44, -1, 0, v46);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v48 )
      {
        Instance = ServantCommentEntity__IsOpen(v44, -1, 0, v46);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v44 = v20;
      if ( !v20 )
        goto LABEL_72;
LABEL_55:
      if ( v48 == 1 )
      {
        if ( !v14 )
          goto LABEL_100;
        v49 = v14->fields._version + 1;
        v14->fields._size = 0;
        v14->fields._version = v49;
        if ( !v15 )
          goto LABEL_100;
        v50 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v50;
        Instance = ServantCommentEntity__IsNew(v44, v45);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v44, v45);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v14 )
        goto LABEL_100;
LABEL_62:
      id = v44->fields.id;
      items = v14->fields._items;
      v53 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          id,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      if ( !v15 )
        goto LABEL_100;
      priority = v44->fields.priority;
      v56 = v15->fields._items;
      v57 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v56 )
        goto LABEL_100;
      v58 = v15->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          priority,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
LABEL_71:
        v20 = 0;
        goto LABEL_72;
      }
      v20 = 0;
      v15->fields._size = v58 + 1;
      v56->m_Items[v58] = priority;
LABEL_72:
      LODWORD(v78) = v78 + 1;
      v16 = sub_1C32CC8(string___TypeInfo, 5);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v19 = Instance;
      if ( !v16 )
        goto LABEL_100;
    }
    if ( v20 )
    {
      if ( !ServantCommentEntity__IsNew(v20, v37) )
        goto LABEL_93;
      Instance = (__int64)v77;
      if ( !v77 )
        goto LABEL_100;
      v59 = v20->fields.id;
      v60 = v77->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v77->fields._version;
      if ( !v60 )
        goto LABEL_100;
      v62 = v77->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v77,
          v59,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v77->fields._size = v62 + 1;
        v60->m_Items[v62] = v59;
      }
      Instance = (__int64)v76;
      if ( !v76 )
        goto LABEL_100;
      v64 = v20->fields.priority;
      v65 = v76->fields._items;
      v66 = Method_System_Collections_Generic_List_int__Add__;
      ++v76->fields._version;
      if ( !v65 )
        goto LABEL_100;
      v67 = v76->fields._size;
      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v76,
          v64,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v76->fields._size = v67 + 1;
        v65->m_Items[v67] = v64;
      }
LABEL_93:
      v63 = HIDWORD(v78);
LABEL_94:
      HIDWORD(v78) = v63 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0) )
  {
    Instance = (__int64)v77;
    if ( v77 )
    {
      System_Collections_Generic_List_int___AddRange(
        v77,
        (System_Collections_Generic_IEnumerable_T__o *)v14,
        (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v76;
      if ( v76 )
      {
        System_Collections_Generic_List_int___AddRange(
          v76,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v78 )
    goto LABEL_93;
  v63 = HIDWORD(v78);
  if ( HIDWORD(v78) == 1 )
    goto LABEL_94;
  Instance = (__int64)v77;
  if ( !v77
    || (v68 = System_Collections_Generic_List_int___ToArray(
                v77,
                (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v68,
        sub_1C32BC4((CGThumbnailListItem_o *)idList, (int32_t)v68, v69, v70),
        (Instance = (__int64)v76) == 0)
    || (v71 = System_Collections_Generic_List_int___ToArray(
                v76,
                (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__),
        v75->klass = (CGThumbnailListItem_c *)v71,
        sub_1C32BC4(v75, (int32_t)v71, v72, v73),
        !*idList) )
  {
LABEL_100:
    sub_1C32E7C(Instance);
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
  System_Int32_array *v8; // x8
  unsigned __int64 v9; // x23
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x22
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x22
  __int64 v31; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  __int64 v39; // x1
  Il2CppClass **v40; // x0
  System_Int32_array *v42; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-54h] BYREF

  v44 = svtId;
  if ( (byte_4C3826F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3826F = 1;
  }
  v42 = 0;
  idList = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v42, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v8 = idList;
    if ( !idList )
LABEL_39:
      sub_1C32E7C(NewList);
    v9 = 0;
    while ( (__int64)v9 < SLODWORD(v8->max_length) )
    {
      v10 = sub_1C32CC8(string___TypeInfo, 5);
      NewList = (__int64)System_Int32__ToString((int32_t)&v44, 0);
      if ( !v10 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v10 + 32) = NewList;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), NewList, v11, v12);
      if ( *(_DWORD *)(v10 + 24) <= 1u )
        goto LABEL_41;
      v15 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v10 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 40), v15, v13, v14);
      if ( !idList )
        goto LABEL_39;
      if ( v9 >= LODWORD(idList->max_length) )
        goto LABEL_41;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v9 + 32, 0);
      if ( *(_DWORD *)(v10 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v10 + 48) = NewList;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 48), NewList, v16, v17);
      if ( *(_DWORD *)(v10 + 24) <= 3u )
        goto LABEL_41;
      v20 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v10 + 56) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 56), v20, v18, v19);
      if ( !v42 )
        goto LABEL_39;
      if ( v9 >= LODWORD(v42->max_length)
        || (NewList = (__int64)System_Int32__ToString((int)v42 + 4 * (int)v9 + 32, 0), *(_DWORD *)(v10 + 24) <= 4u) )
      {
LABEL_41:
        sub_1C32E84(NewList);
      }
      *(_QWORD *)(v10 + 64) = NewList;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 64), NewList, v21, v22);
      v23 = System_String__Concat_63559060((System_String_array *)v10, 0);
      NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !NewList )
        goto LABEL_39;
      v24 = *(_QWORD *)NewList;
      v25 = NewList;
      v26 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_22;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_22:
        v28 = sub_1C83438(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v28)(v25, v23, *(_QWORD *)(v28 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
        if ( !NewList )
          goto LABEL_39;
        v29 = *(_QWORD *)NewList;
        v30 = NewList;
        v31 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v32 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v29 + 176)
                                                                                                  + 8LL);
          while ( *(v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_30;
          }
          v33 = v29 + 16LL * (*(_DWORD *)v32 + 2) + 312;
        }
        else
        {
LABEL_30:
          v33 = sub_1C83438(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v23, *(_QWORD *)(v33 + 8));
        if ( NewList )
        {
          if ( !v5 )
            goto LABEL_39;
          items = v5->fields._items;
          v37 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_39;
          size = v5->fields._size;
          v39 = NewList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)NewList,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v39;
            sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 4), v39, v34, v35);
          }
        }
      }
      v8 = idList;
      ++v9;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_o *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x23
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v32; // x10
  __int64 v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int v38; // w8
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  int v42; // [xsp+4h] [xbp-6Ch] BYREF
  int v43; // [xsp+8h] [xbp-68h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-64h] BYREF

  v44 = svtId;
  if ( (byte_4C38268 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C38268 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v42 = 0;
  v43 = 1;
  v5 = sub_1C32CC8(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&v44, 0);
  if ( !v5 )
    goto LABEL_45;
  v9 = lookup;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v5 + 32) = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), v9, v7, v8);
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_44;
      v13 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v5 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), v13, v11, v12);
      lookup = (__int64)System_Int32__ToString((int32_t)&v43, 0);
      if ( *(_DWORD *)(v5 + 24) <= 2u
        || (*(_QWORD *)(v5 + 48) = lookup,
            sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 48), lookup, v14, v15),
            *(_DWORD *)(v5 + 24) <= 3u)
        || (v18 = StringLiteral_1457/*":"*/,
            *(_QWORD *)(v5 + 56) = StringLiteral_1457/*":"*/,
            sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 56), v18, v16, v17),
            lookup = (__int64)System_Int32__ToString((int32_t)&v42, 0),
            *(_DWORD *)(v5 + 24) <= 4u) )
      {
LABEL_44:
        sub_1C32E84(lookup);
      }
      *(_QWORD *)(v5 + 64) = lookup;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 64), lookup, v19, v20);
      v21 = System_String__Concat_63559060((System_String_array *)v5, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_45;
      v22 = *(_QWORD *)lookup;
      v23 = lookup;
      v24 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_15;
        }
        v26 = v22 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_15:
        v26 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v29 = *(_QWORD *)lookup;
        v30 = lookup;
        v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v32 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v29 + 176)
                                                                                                  + 8LL);
          while ( *(v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_23;
          }
          v33 = v29 + 16LL * (*(_DWORD *)v32 + 2) + 312;
        }
        else
        {
LABEL_23:
          v33 = sub_1C83438(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v21, *(_QWORD *)(v33 + 8));
        if ( lookup )
        {
          v40 = (Il2CppObject *)lookup;
          if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v39) )
            v10 = v40;
          ++v42;
          v5 = sub_1C32CC8(string___TypeInfo, 5);
          lookup = (__int64)System_Int32__ToString((int32_t)&v44, 0);
          v9 = lookup;
          if ( v5 )
            continue;
        }
      }
      goto LABEL_45;
    }
    if ( v10 )
    {
      if ( !v4 )
        goto LABEL_45;
      items = v4->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_45;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v10,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v10;
        sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v10, v27, v28);
      }
LABEL_39:
      v38 = v43;
      goto LABEL_40;
    }
    if ( v42 )
      goto LABEL_39;
    v38 = v43;
    if ( v43 != 1 )
      break;
LABEL_40:
    v42 = 0;
    v43 = v38 + 1;
    v5 = sub_1C32CC8(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&v44, 0);
    v9 = lookup;
    v10 = 0;
    if ( !v5 )
      goto LABEL_45;
  }
  if ( !v4 )
LABEL_45:
    sub_1C32E7C(lookup);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v4,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_int__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v12; // w26
  int32_t v13; // w27
  int32_t v14; // w24
  ServantCommentEntity_o *v15; // x29
  const MethodInfo *v16; // x1
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x28
  UserServantCollectionMaster_o *v20; // x9
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  int32_t svtId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  ServantLimitImageMaster_o *v29; // [xsp+0h] [xbp-80h]
  UserServantCollectionMaster_o *v30; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C3826D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3826D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v29 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v30 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v13,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v9 )
        break;
      v14 = *((_DWORD *)Instance + 4);
      v15 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v9,
              v14,
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        ImageLimit = ServantCommentEntity__GetImageLimit(v15, v16);
        if ( !ImageLimit )
          goto LABEL_39;
        v19 = ImageLimit;
        if ( !ImageLimit->max_length )
          goto LABEL_39;
        v20 = v30;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v30;
        }
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          v20 = v30;
          byte_4C31812 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v30;
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v20 )
          break;
        Instance = (void *)UserServantCollectionMaster__TryGetEntity(
                             v20,
                             &entity,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             v14,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_39;
        if ( !entity )
          break;
        Instance = v29;
        if ( !v29 )
          break;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v29,
                                       v14,
                                       entity->fields.maxLimitCount,
                                       v18);
        if ( (System_Array__IndexOf_int_(
                v19,
                ServantLimitCountSealAfter,
                (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
        {
LABEL_39:
          if ( ServantCommentEntity__IsOnlyOpenQuestCond(v15, questId, questPhase, v18) )
            goto LABEL_40;
          Instance = MasterData_object;
          if ( !MasterData_object )
            break;
          if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
                 (ServantCommentAddMaster_o *)MasterData_object,
                 v14,
                 v15->fields.id,
                 v15->fields.priority,
                 1,
                 questId,
                 questPhase,
                 v23) )
          {
LABEL_40:
            Instance = (void *)ServantCommentEntity__IsOpen(v15, -1, 1, v22);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              svtId = v15->fields.svtId;
              items = v9->fields._items;
              v26 = Method_System_Collections_Generic_List_int__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v9,
                  svtId,
                  *(const MethodInfo_377B798 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v9->fields._size = size + 1;
                items->m_Items[size] = svtId;
              }
            }
          }
        }
      }
      if ( v12 == ++v13 )
        return v9;
    }
LABEL_36:
    sub_1C32E7C(Instance);
  }
  return v9;
}


ServantCommentEntity_array *ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w24
  int32_t v11; // w25
  const MethodInfo *v12; // x3
  ServantCommentEntity_o *v13; // x26
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x7
  const MethodInfo *v16; // x1
  bool IsOpen; // w27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C3826E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    byte_4C3826E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !list )
        break;
      v13 = (ServantCommentEntity_o *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                 (ServantCommentEntity_o *)list,
                                                                 questId,
                                                                 questPhase,
                                                                 v12);
      if ( ((unsigned __int8)list & 1) != 0 )
        goto LABEL_13;
      if ( !Master_object )
        break;
      if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
             (ServantCommentAddMaster_o *)Master_object,
             v13->fields.svtId,
             v13->fields.id,
             v13->fields.priority,
             1,
             questId,
             questPhase,
             v15) )
      {
LABEL_13:
        IsOpen = ServantCommentEntity__IsOpen(v13, -1, 1, v14);
      }
      else
      {
        IsOpen = 0;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v13, v16);
      if ( list && IsOpen && list[1].klass )
      {
        if ( !v8 )
          break;
        items = v8->fields._items;
        v21 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v13,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v13;
          sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v13, v18, v19);
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C32E7C(list);
  }
LABEL_24:
  if ( !v8 )
    goto LABEL_26;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x21
  ServantCommentEntity_o *lookup; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ServantCommentEntity_o *v8; // x1
  ServantCommentEntity_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v22; // x22
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  ServantCommentEntity_c *v27; // x8
  ServantCommentEntity_o *v28; // x22
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v30; // x10
  __int64 v31; // x0
  int v32; // w8
  const MethodInfo *v33; // x3
  ServantCommentEntity_o *v34; // x21
  int v36; // [xsp+Ch] [xbp-54h] BYREF
  int v37; // [xsp+18h] [xbp-48h] BYREF
  int32_t v38; // [xsp+1Ch] [xbp-44h] BYREF

  v38 = svtId;
  if ( (byte_4C3826B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_1457/*":"*/);
    byte_4C3826B = 1;
  }
  v37 = 1;
  v36 = 0;
  v4 = sub_1C32CC8(string___TypeInfo, 5);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v38, 0);
  if ( !v4 )
LABEL_40:
    sub_1C32E7C(lookup);
  v8 = lookup;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_39;
      *(_QWORD *)(v4 + 32) = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v8, v6, v7);
      if ( *(_DWORD *)(v4 + 24) <= 1u )
        goto LABEL_39;
      v12 = StringLiteral_1457/*":"*/;
      *(_QWORD *)(v4 + 40) = StringLiteral_1457/*":"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 40), v12, v10, v11);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v37, 0);
      if ( *(_DWORD *)(v4 + 24) <= 2u
        || (*(_QWORD *)(v4 + 48) = lookup,
            sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 48), (int32_t)lookup, v13, v14),
            *(_DWORD *)(v4 + 24) <= 3u)
        || (v17 = StringLiteral_1457/*":"*/,
            *(_QWORD *)(v4 + 56) = StringLiteral_1457/*":"*/,
            sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 56), v17, v15, v16),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v36, 0),
            *(_DWORD *)(v4 + 24) <= 4u) )
      {
LABEL_39:
        sub_1C32E84(lookup);
      }
      *(_QWORD *)(v4 + 64) = lookup;
      sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 64), (int32_t)lookup, v18, v19);
      v20 = System_String__Concat_63559060((System_String_array *)v4, 0);
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_40;
      klass = lookup->klass;
      v22 = lookup;
      v23 = *(unsigned __int16 *)&lookup->klass->_2.rank;
      if ( *(_WORD *)&lookup->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_15;
        }
        v25 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_15:
        v25 = sub_1C83438(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v25)(
              v22,
              v20,
              *(_QWORD *)(v25 + 8))
          & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_33990E4 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v27 = lookup->klass;
        v28 = lookup;
        v29 = *(unsigned __int16 *)&lookup->klass->_2.rank;
        if ( *(_WORD *)&lookup->klass->_2.rank )
        {
          v30 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)&v27->_1.interfaceOffsets->offset;
          while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v29;
            v30 += 2;
            if ( !v29 )
              goto LABEL_23;
          }
          v31 = (__int64)(&v27->vtable._2_GetHashCode + *(_DWORD *)v30);
        }
        else
        {
LABEL_23:
          v31 = sub_1C83438(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v31)(
                                             v28,
                                             v20,
                                             *(_QWORD *)(v31 + 8));
        if ( lookup )
        {
          v34 = lookup;
          if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v33) )
            v9 = v34;
          ++v36;
          v4 = sub_1C32CC8(string___TypeInfo, 5);
          lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v38, 0);
          v8 = lookup;
          if ( v4 )
            continue;
        }
      }
      goto LABEL_40;
    }
    if ( v9 )
    {
      if ( ServantCommentEntity__IsNew(v9, v26) )
        return v9 != 0;
      goto LABEL_28;
    }
    if ( !v36 )
      break;
LABEL_28:
    v32 = v37;
LABEL_29:
    v37 = v32 + 1;
    v36 = 0;
    v4 = sub_1C32CC8(string___TypeInfo, 5);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v38, 0);
    v8 = lookup;
    v9 = 0;
    if ( !v4 )
      goto LABEL_40;
  }
  v32 = v37;
  if ( v37 == 1 )
    goto LABEL_29;
  return v9 != 0;
}


bool ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w22
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantCommentEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  ServantCommentEntity_o *v19; // x23
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x25
  System_Collections_Generic_List_int__o *v22; // x24
  __int64 v23; // x0
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4C38270 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C38270 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
    sub_1C32E7C(list);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCommentEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_17:
      v16 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0);
    }
    v17 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                      Enumerator,
                                      *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      sub_1C32E7C(0);
    if ( v17->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v17, v18);
      v21 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( ImageLimit->max_length )
        {
          v22 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_58175596(
            v22,
            v21,
            (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
          if ( !v22 )
            sub_1C32E7C(v23);
          System_Collections_Generic_List_int___Sort(
            v22,
            (const MethodInfo_377D0DC *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v22,
                 0,
                 (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v22,
                 0,
                 (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v19, -1, 1, v24) )
          {
            goto LABEL_29;
          }
        }
      }
    }
  }
  v12 = 0;
LABEL_29:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_33:
    v28 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v12 & 1;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  System_String_o *v16; // x20
  Il2CppObject *Name; // x0
  System_String_o *v18; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x23
  CommonConfirmDialog_ClickDelegate_o *v22; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C38271 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__);
    sub_1C32C20(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
    sub_1C32C20(&StringLiteral_10842/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_1C32C20(&StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10839/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_4C38271 = 1;
  }
  entity = 0;
  v9 = sub_1C32E6C(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)decideAction, v11, v12);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)endAction, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10842/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0);
  if ( !entity )
    goto LABEL_14;
  v16 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0, v15);
  v18 = System_String__Format(v16, Name, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10839/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0);
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1C32E7C(Master_object);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v18,
    v20,
    v21,
    v22,
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
  if ( (byte_4C38269 & 1) == 0 )
  {
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    byte_4C38269 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0);
}


void ServantCommentMaster__SetOpen_42539472(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4C3826A & 1) == 0 )
  {
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    byte_4C3826A = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_43369140(svtId, svtCommentIdList, svtCommentPriorityList, 0);
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

  if ( (byte_4C38264 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_1C32C20(&ServantCommentEntity_TypeInfo);
    byte_4C38264 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


void ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 4 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A77E90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A77E20;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  _QWORD v25[6]; // [xsp+0h] [xbp-80h] BYREF
  bool v26[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v27; // [xsp+38h] [xbp-48h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-44h] BYREF

  v27 = limitCount;
  v28 = svtid;
  v26[0] = isDecide;
  if ( (byte_4C38273 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C38273 = 1;
  }
  v25[4] = 0;
  v25[0] = j_il2cpp_value_box_0(
             int_TypeInfo,
             &v28,
             *(_QWORD *)&limitCount,
             isDecide,
             finishCallback,
             callback,
             object,
             method);
  v25[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14, v15, v16, v17);
  v25[2] = j_il2cpp_value_box_0(bool_TypeInfo, v26, v18, v19, v20, v21, v22, v23);
  v25[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v25, callback, object);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C38274 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4C38274 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v6 )
    sub_1C32E7C(Instance);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x20

  if ( (byte_4C38275 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C38275 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
LABEL_8:
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}