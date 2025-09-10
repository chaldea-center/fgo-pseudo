void ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B63 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_4C27B63 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_338A52C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  const MethodInfo *v13; // x3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v15; // x21
  Il2CppObject *v16; // x0
  UserServantCollectionEntity_o *v17; // x21
  CommonUI_o *v18; // x22
  ServantStatusDialog_EndDelegate_o *v19; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27B70 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__);
    sub_1C2D490(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    byte_4C27B70 = 1;
  }
  entity = 0;
  v9 = sub_1C2D6DC(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)endAction, v12, v13);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v15 )
      {
        CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0);
          v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = entity;
          v18 = (CommonUI_o *)v16;
          v19 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v19,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0);
          if ( v18 )
          {
            CommonUI__OpenServantStatusDialog_31179572(v18, 33, v17, limitCount, v19, 0);
            return;
          }
        }
      }
LABEL_23:
      sub_1C2D6EC(Instance, v11);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_31167972(Instance, *(System_Action_o **)(v9 + 16), 0);
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

  if ( (byte_4C27B61 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_1C2D490(&ServantCommentEntity_TypeInfo);
    byte_4C27B61 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x25
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  System_String_o *v23; // x26
  __int64 v24; // x8
  __int64 v25; // x27
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  __int64 v32; // x27
  __int64 v33; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v34; // x10
  __int64 v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w8
  ServantCommentEntity_o *v41; // x26
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v43; // x3
  il2cpp_array_size_t max_length; // x8
  int v45; // w9
  char v46; // w2
  const MethodInfo *v47; // x5
  int32_t v51; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v52; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C27B64 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B64 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v51 = 0;
  v52 = 1;
  v11 = sub_1C2D538(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v11 )
    goto LABEL_70;
  v13 = (const MethodInfo *)lookup;
  v16 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v11 + 32) = v13;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v13, v14, v15);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_69;
      v18 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), v18, v14, v17);
      lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u
        || (*(_QWORD *)(v11 + 48) = lookup,
            sub_1C2D434((CGThumbnailListItem_o *)(v11 + 48), lookup, v14, v19),
            *(_DWORD *)(v11 + 24) <= 3u)
        || (v21 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v11 + 56) = StringLiteral_1456/*":"*/,
            sub_1C2D434((CGThumbnailListItem_o *)(v11 + 56), v21, v14, v20),
            lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0),
            *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_69:
        sub_1C2D6F4(lookup, v13, v14);
      }
      *(_QWORD *)(v11 + 64) = lookup;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 64), lookup, v14, v22);
      v23 = System_String__Concat_63498380((System_String_array *)v11, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v24 = *(_QWORD *)lookup;
      v25 = lookup;
      v26 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_15;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_15:
        v28 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v28)(v25, v23, *(_QWORD *)(v28 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v31 = *(_QWORD *)lookup;
      v32 = lookup;
      v33 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v34 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v31 + 176)
                                                                                                + 8LL);
        while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v33;
          v34 += 2;
          if ( !v33 )
            goto LABEL_23;
        }
        v35 = v31 + 16LL * (*(_DWORD *)v34 + 2) + 312;
      }
      else
      {
LABEL_23:
        v35 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(v32, v23, *(_QWORD *)(v35 + 8));
      if ( !lookup )
        goto LABEL_70;
      v41 = (ServantCommentEntity_o *)lookup;
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
              v45 = 0;
              while ( ImageLimit->m_Items[v45] > imageLimitCount )
              {
                if ( (_DWORD)max_length == ++v45 )
                  goto LABEL_65;
              }
            }
            else if ( System_Array__IndexOf_int_(
                        ImageLimit,
                        imageLimitCount,
                        (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___) < 0 )
            {
              goto LABEL_65;
            }
          }
        }
      }
      if ( condType && v41->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_65;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_70;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_70;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v52,
                v51,
                condType,
                v47) )
          goto LABEL_65;
        if ( !v16 )
          goto LABEL_64;
        v46 = 1;
      }
      else if ( addCheck )
      {
        v46 = 1;
        if ( !v16 )
          goto LABEL_64;
      }
      else if ( v51 < 1 )
      {
        v46 = 0;
        if ( !v16 )
          goto LABEL_64;
      }
      else
      {
        v46 = v41->fields.condType == 0;
        if ( !v16 )
          goto LABEL_64;
      }
      if ( ServantCommentEntity__IsOpen(v41, -1, v46, v43) )
LABEL_64:
        v16 = (Il2CppObject *)v41;
LABEL_65:
      ++v51;
      v11 = sub_1C2D538(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v13 = (const MethodInfo *)lookup;
      if ( !v11 )
        goto LABEL_70;
    }
    if ( v16 )
    {
      if ( !v10 )
        goto LABEL_70;
      items = v10->fields._items;
      v37 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_70;
      size = v10->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v16,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v16;
        sub_1C2D434((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v16, v29, v30);
      }
LABEL_44:
      v40 = v52;
      goto LABEL_45;
    }
    if ( v51 )
      goto LABEL_44;
    v40 = v52;
    if ( v52 != 1 )
      break;
LABEL_45:
    v51 = 0;
    v52 = v40 + 1;
    v11 = sub_1C2D538(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v13 = (const MethodInfo *)lookup;
    v16 = 0;
    if ( !v11 )
      goto LABEL_70;
  }
  if ( !v10 )
LABEL_70:
    sub_1C2D6EC(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x24
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  System_String_o *v21; // x25
  __int64 v22; // x8
  __int64 v23; // x26
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  __int64 v30; // x26
  __int64 v31; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v32; // x10
  __int64 v33; // x0
  ServantCommentEntity_o *v34; // x25
  System_Int32_array *ImageLimit; // x0
  il2cpp_array_size_t max_length; // x10
  __int64 v37; // x9
  char v38; // w8
  int v39; // w11
  const MethodInfo *v40; // x3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w8
  const MethodInfo *v46; // x5
  int32_t v50; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C27B65 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B65 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v50 = 0;
  v51 = 1;
  v9 = sub_1C2D538(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
  if ( !v9 )
    goto LABEL_60;
  v11 = (const MethodInfo *)lookup;
  v14 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v9 + 32) = v11;
      sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v11, v12, v13);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_59;
      v16 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), v16, v12, v15);
      lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_1C2D434((CGThumbnailListItem_o *)(v9 + 48), lookup, v12, v17),
            *(_DWORD *)(v9 + 24) <= 3u)
        || (v19 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1456/*":"*/,
            sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), v19, v12, v18),
            lookup = (__int64)System_Int32__ToString((int32_t)&v50, 0),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_59:
        sub_1C2D6F4(lookup, v11, v12);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_1C2D434((CGThumbnailListItem_o *)(v9 + 64), lookup, v12, v20);
      v21 = System_String__Concat_63498380((System_String_array *)v9, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
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
        v26 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
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
        v33 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v21, *(_QWORD *)(v33 + 8));
      if ( !lookup )
        goto LABEL_60;
      v34 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v11);
      if ( ImageLimit )
      {
        max_length = ImageLimit->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v37 = 0;
            v38 = 0;
            do
            {
              v39 = ImageLimit->m_Items[v37++];
              v38 |= v39 > 2;
            }
            while ( (unsigned int)ImageLimit->max_length != v37 );
            if ( (v38 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___)
                & 0x80000000) == 0 )
            {
              if ( !condType || v34->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v51,
                       v50,
                       condType,
                       v46) )
                {
LABEL_50:
                  if ( !v14 || ServantCommentEntity__IsOpen(v34, -1, 1, v40) )
                    v14 = (Il2CppObject *)v34;
                }
              }
            }
          }
        }
      }
      ++v50;
      v9 = sub_1C2D538(string___TypeInfo, 5);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      v11 = (const MethodInfo *)lookup;
      if ( !v9 )
        goto LABEL_60;
    }
    if ( v14 )
    {
      if ( !v8 )
        goto LABEL_60;
      items = v8->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v14,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v14, v27, v28);
      }
LABEL_44:
      v45 = v51;
      goto LABEL_45;
    }
    if ( v50 )
      goto LABEL_44;
    v45 = v51;
    if ( v51 != 1 )
      break;
LABEL_45:
    v50 = 0;
    v51 = v45 + 1;
    v9 = sub_1C2D538(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    v11 = (const MethodInfo *)lookup;
    v14 = 0;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_1C2D6EC(lookup, v11);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  ServantCommentEntity_o *v20; // x27
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  System_String_o *v27; // x28
  __int64 v28; // x8
  __int64 v29; // x29
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x1
  __int64 v34; // x8
  __int64 v35; // x29
  __int64 v36; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v37; // x10
  __int64 v38; // x0
  ServantCommentEntity_o *v39; // x28
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  int v42; // w29
  int v43; // w8
  int v44; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct System_Int32_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  int v54; // w8
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  System_Int32_array *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Int32_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  CGThumbnailListItem_o *v65; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v66; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v67; // [xsp+20h] [xbp-80h]
  __int64 v68; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4C27B6A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B6A = 1;
  }
  v68 = 0;
  entity = 0;
  v67 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v67,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v66 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v13,
                                   v14);
  }
  v65 = (CGThumbnailListItem_o *)priorityList;
  HIDWORD(v68) = 1;
  while ( 2 )
  {
    LODWORD(v68) = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    v17 = sub_1C2D538(string___TypeInfo, 5);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
    if ( !v17 )
      goto LABEL_100;
    id = Instance;
    v20 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v17 + 32) = id;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 32), id, v18, v19);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_99;
      v22 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 40), v22, v18, v21);
      Instance = (__int64)System_Int32__ToString((int32_t)&v68 + 4, 0);
      if ( *(_DWORD *)(v17 + 24) <= 2u
        || (*(_QWORD *)(v17 + 48) = Instance,
            sub_1C2D434((CGThumbnailListItem_o *)(v17 + 48), Instance, v18, v23),
            *(_DWORD *)(v17 + 24) <= 3u)
        || (v25 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v17 + 56) = StringLiteral_1456/*":"*/,
            sub_1C2D434((CGThumbnailListItem_o *)(v17 + 56), v25, v18, v24),
            Instance = (__int64)System_Int32__ToString((int32_t)&v68, 0),
            *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_99:
        sub_1C2D6F4(Instance, id, v18);
      }
      *(_QWORD *)(v17 + 64) = Instance;
      sub_1C2D434((CGThumbnailListItem_o *)(v17 + 64), Instance, v18, v26);
      v27 = System_String__Concat_63498380((System_String_array *)v17, 0);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v28 = *(_QWORD *)Instance;
      v29 = Instance;
      v30 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v31 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_32;
        }
        v32 = v28 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_32:
        v32 = sub_1C7DCA8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v32)(v29, v27, *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v34 = *(_QWORD *)Instance;
      v35 = Instance;
      v36 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v37 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v34 + 176)
                                                                                                + 8LL);
        while ( *(v37 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v36;
          v37 += 2;
          if ( !v36 )
            goto LABEL_40;
        }
        v38 = v34 + 16LL * (*(_DWORD *)v37 + 2) + 312;
      }
      else
      {
LABEL_40:
        v38 = sub_1C7DCA8(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v38)(v35, v27, *(_QWORD *)(v38 + 8));
      if ( !Instance )
        goto LABEL_100;
      v39 = (ServantCommentEntity_o *)Instance;
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v41 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v39, -1, 0, v40) )
          v20 = v39;
        goto LABEL_72;
      }
      if ( !(_DWORD)v41 )
        goto LABEL_99;
      v42 = *(_DWORD *)(Instance + 32);
      if ( v42 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v39, -1, 0, v40);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v42 )
      {
        Instance = ServantCommentEntity__IsOpen(v39, -1, 0, v40);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v39 = v20;
      if ( !v20 )
        goto LABEL_72;
LABEL_55:
      if ( v42 == 1 )
      {
        if ( !v15 )
          goto LABEL_100;
        v43 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v43;
        if ( !v16 )
          goto LABEL_100;
        v44 = v16->fields._version + 1;
        v16->fields._size = 0;
        v16->fields._version = v44;
        Instance = ServantCommentEntity__IsNew(v39, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v39, (const MethodInfo *)id);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v15 )
        goto LABEL_100;
LABEL_62:
      id = (unsigned int)v39->fields.id;
      items = v15->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      if ( !v16 )
        goto LABEL_100;
      id = (unsigned int)v39->fields.priority;
      v48 = v16->fields._items;
      v49 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !v48 )
        goto LABEL_100;
      v50 = v16->fields._size;
      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
LABEL_71:
        v20 = 0;
        goto LABEL_72;
      }
      v20 = 0;
      v16->fields._size = v50 + 1;
      v48->m_Items[v50] = id;
LABEL_72:
      LODWORD(v68) = v68 + 1;
      v17 = sub_1C2D538(string___TypeInfo, 5);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0);
      id = Instance;
      if ( !v17 )
        goto LABEL_100;
    }
    if ( v20 )
    {
      if ( !ServantCommentEntity__IsNew(v20, v33) )
        goto LABEL_93;
      Instance = (__int64)v67;
      if ( !v67 )
        goto LABEL_100;
      id = (unsigned int)v20->fields.id;
      v51 = v67->fields._items;
      v52 = Method_System_Collections_Generic_List_int__Add__;
      ++v67->fields._version;
      if ( !v51 )
        goto LABEL_100;
      v53 = v67->fields._size;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v67,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v67->fields._size = v53 + 1;
        v51->m_Items[v53] = id;
      }
      Instance = (__int64)v66;
      if ( !v66 )
        goto LABEL_100;
      id = (unsigned int)v20->fields.priority;
      v55 = v66->fields._items;
      v56 = Method_System_Collections_Generic_List_int__Add__;
      ++v66->fields._version;
      if ( !v55 )
        goto LABEL_100;
      v57 = v66->fields._size;
      if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v66,
          id,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v66->fields._size = v57 + 1;
        v55->m_Items[v57] = id;
      }
LABEL_93:
      v54 = HIDWORD(v68);
LABEL_94:
      HIDWORD(v68) = v54 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0) )
  {
    Instance = (__int64)v67;
    if ( v67 )
    {
      System_Collections_Generic_List_int___AddRange(
        v67,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v66;
      if ( v66 )
      {
        System_Collections_Generic_List_int___AddRange(
          v66,
          (System_Collections_Generic_IEnumerable_T__o *)v16,
          (const MethodInfo_376CD6C *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v68 )
    goto LABEL_93;
  v54 = HIDWORD(v68);
  if ( HIDWORD(v68) == 1 )
    goto LABEL_94;
  Instance = (__int64)v67;
  if ( !v67
    || (v58 = System_Collections_Generic_List_int___ToArray(
                v67,
                (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v58,
        sub_1C2D434((CGThumbnailListItem_o *)idList, (int32_t)v58, v59, v60),
        (Instance = (__int64)v66) == 0)
    || (v61 = System_Collections_Generic_List_int___ToArray(
                v66,
                (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        v65->klass = (CGThumbnailListItem_c *)v61,
        sub_1C2D434(v65, (int32_t)v61, v62, v63),
        !*idList) )
  {
LABEL_100:
    sub_1C2D6EC(Instance, id);
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
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  System_String_o *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x22
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x22
  __int64 v28; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v29; // x10
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x1
  Il2CppClass **v37; // x0
  System_Int32_array *v39; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF

  v41 = svtId;
  if ( (byte_4C27B6D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B6D = 1;
  }
  v39 = 0;
  idList = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v39, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_39:
      sub_1C2D6EC(NewList, v8);
    v10 = 0;
    while ( (__int64)v10 < SLODWORD(v9->max_length) )
    {
      v11 = sub_1C2D538(string___TypeInfo, 5);
      NewList = (__int64)System_Int32__ToString((int32_t)&v41, 0);
      if ( !v11 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v11 + 32) = NewList;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), NewList, v12, v13);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_41;
      v15 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), v15, v12, v14);
      if ( !idList )
        goto LABEL_39;
      if ( v10 >= LODWORD(idList->max_length) )
        goto LABEL_41;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0);
      if ( *(_DWORD *)(v11 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v11 + 48) = NewList;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 48), NewList, v12, v16);
      if ( *(_DWORD *)(v11 + 24) <= 3u )
        goto LABEL_41;
      v18 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v11 + 56) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 56), v18, v12, v17);
      if ( !v39 )
        goto LABEL_39;
      if ( v10 >= LODWORD(v39->max_length)
        || (NewList = (__int64)System_Int32__ToString((int)v39 + 4 * (int)v10 + 32, 0), *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_41:
        sub_1C2D6F4(NewList, v8, v12);
      }
      *(_QWORD *)(v11 + 64) = NewList;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 64), NewList, v12, v19);
      v20 = System_String__Concat_63498380((System_String_array *)v11, 0);
      NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !NewList )
        goto LABEL_39;
      v21 = *(_QWORD *)NewList;
      v22 = NewList;
      v23 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_22;
        }
        v25 = v21 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_22:
        v25 = sub_1C7DCA8(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v25)(v22, v20, *(_QWORD *)(v25 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
        if ( !NewList )
          goto LABEL_39;
        v26 = *(_QWORD *)NewList;
        v27 = NewList;
        v28 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v29 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v26 + 176)
                                                                                                  + 8LL);
          while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v28;
            v29 += 2;
            if ( !v28 )
              goto LABEL_30;
          }
          v30 = v26 + 16LL * (*(_DWORD *)v29 + 2) + 312;
        }
        else
        {
LABEL_30:
          v30 = sub_1C7DCA8(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v30)(v27, v20, *(_QWORD *)(v30 + 8));
        if ( NewList )
        {
          if ( !v5 )
            goto LABEL_39;
          items = v5->fields._items;
          v34 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_39;
          size = v5->fields._size;
          v36 = NewList;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)NewList,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v36;
            sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), v36, v31, v32);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  System_String_o *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x23
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  __int64 v26; // x23
  __int64 v27; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v28; // x10
  __int64 v29; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int v34; // w8
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x22
  int v38; // [xsp+4h] [xbp-6Ch] BYREF
  int v39; // [xsp+8h] [xbp-68h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-64h] BYREF

  v40 = svtId;
  if ( (byte_4C27B66 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B66 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v38 = 0;
  v39 = 1;
  v5 = sub_1C2D538(string___TypeInfo, 5);
  lookup = (__int64)System_Int32__ToString((int32_t)&v40, 0);
  if ( !v5 )
    goto LABEL_45;
  v7 = lookup;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v5 + 32) = v7;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), v7, v8, v9);
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_44;
      v12 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v5 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v12, v8, v11);
      lookup = (__int64)System_Int32__ToString((int32_t)&v39, 0);
      if ( *(_DWORD *)(v5 + 24) <= 2u
        || (*(_QWORD *)(v5 + 48) = lookup,
            sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), lookup, v8, v13),
            *(_DWORD *)(v5 + 24) <= 3u)
        || (v15 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v5 + 56) = StringLiteral_1456/*":"*/,
            sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), v15, v8, v14),
            lookup = (__int64)System_Int32__ToString((int32_t)&v38, 0),
            *(_DWORD *)(v5 + 24) <= 4u) )
      {
LABEL_44:
        sub_1C2D6F4(lookup, v7, v8);
      }
      *(_QWORD *)(v5 + 64) = lookup;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 64), lookup, v8, v16);
      v17 = System_String__Concat_63498380((System_String_array *)v5, 0);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_45;
      v18 = *(_QWORD *)lookup;
      v19 = lookup;
      v20 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_15;
        }
        v22 = v18 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_15:
        v22 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v22)(v19, v17, *(_QWORD *)(v22 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v25 = *(_QWORD *)lookup;
        v26 = lookup;
        v27 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v28 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v25 + 176)
                                                                                                  + 8LL);
          while ( *(v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v27;
            v28 += 2;
            if ( !v27 )
              goto LABEL_23;
          }
          v29 = v25 + 16LL * (*(_DWORD *)v28 + 2) + 312;
        }
        else
        {
LABEL_23:
          v29 = sub_1C7DCA8(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v29)(v26, v17, *(_QWORD *)(v29 + 8));
        if ( lookup )
        {
          v36 = (Il2CppObject *)lookup;
          if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v35) )
            v10 = v36;
          ++v38;
          v5 = sub_1C2D538(string___TypeInfo, 5);
          lookup = (__int64)System_Int32__ToString((int32_t)&v40, 0);
          v7 = lookup;
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
      v31 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_45;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v10,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v10;
        sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v10, v23, v24);
      }
LABEL_39:
      v34 = v39;
      goto LABEL_40;
    }
    if ( v38 )
      goto LABEL_39;
    v34 = v39;
    if ( v39 != 1 )
      break;
LABEL_40:
    v38 = 0;
    v39 = v34 + 1;
    v5 = sub_1C2D538(string___TypeInfo, 5);
    lookup = (__int64)System_Int32__ToString((int32_t)&v40, 0);
    v7 = lookup;
    v10 = 0;
    if ( !v5 )
      goto LABEL_45;
  }
  if ( !v4 )
LABEL_45:
    sub_1C2D6EC(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v4,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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

  if ( (byte_4C27B6B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27B6B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v29 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
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
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v10 )
        break;
      v15 = *((_DWORD *)Instance + 4);
      v16 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v10,
              v15,
              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
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
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          v20 = v29;
          byte_4C211E1 = 1;
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
                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___)
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
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
    sub_1C2D6EC(Instance, svtId);
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
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C27B6C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    byte_4C27B6C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
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
        v22 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          break;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v14, v19, v20);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C2D6EC(list, v9);
  }
LABEL_24:
  if ( !v8 )
    goto LABEL_26;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x21
  ServantCommentEntity_o *lookup; // x0
  ServantCommentEntity_o *v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  ServantCommentEntity_o *v9; // x20
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  System_String_o *v16; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v18; // x22
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  ServantCommentEntity_c *v23; // x8
  ServantCommentEntity_o *v24; // x22
  __int64 v25; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v26; // x10
  __int64 v27; // x0
  int v28; // w8
  const MethodInfo *v29; // x3
  ServantCommentEntity_o *v30; // x21
  int v32; // [xsp+Ch] [xbp-54h] BYREF
  int v33; // [xsp+18h] [xbp-48h] BYREF
  int32_t v34; // [xsp+1Ch] [xbp-44h] BYREF

  v34 = svtId;
  if ( (byte_4C27B69 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27B69 = 1;
  }
  v33 = 1;
  v32 = 0;
  v4 = sub_1C2D538(string___TypeInfo, 5);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v34, 0);
  if ( !v4 )
LABEL_40:
    sub_1C2D6EC(lookup, v6);
  v6 = lookup;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_39;
      *(_QWORD *)(v4 + 32) = v6;
      sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v6, v7, v8);
      if ( *(_DWORD *)(v4 + 24) <= 1u )
        goto LABEL_39;
      v11 = StringLiteral_1456/*":"*/;
      *(_QWORD *)(v4 + 40) = StringLiteral_1456/*":"*/;
      sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), v11, v7, v10);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v33, 0);
      if ( *(_DWORD *)(v4 + 24) <= 2u
        || (*(_QWORD *)(v4 + 48) = lookup,
            sub_1C2D434((CGThumbnailListItem_o *)(v4 + 48), (int32_t)lookup, v7, v12),
            *(_DWORD *)(v4 + 24) <= 3u)
        || (v14 = StringLiteral_1456/*":"*/,
            *(_QWORD *)(v4 + 56) = StringLiteral_1456/*":"*/,
            sub_1C2D434((CGThumbnailListItem_o *)(v4 + 56), v14, v7, v13),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v32, 0),
            *(_DWORD *)(v4 + 24) <= 4u) )
      {
LABEL_39:
        sub_1C2D6F4(lookup, v6, v7);
      }
      *(_QWORD *)(v4 + 64) = lookup;
      sub_1C2D434((CGThumbnailListItem_o *)(v4 + 64), (int32_t)lookup, v7, v15);
      v16 = System_String__Concat_63498380((System_String_array *)v4, 0);
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_40;
      klass = lookup->klass;
      v18 = lookup;
      v19 = *(unsigned __int16 *)&lookup->klass->_2.rank;
      if ( *(_WORD *)&lookup->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_15;
        }
        v21 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_15:
        v21 = sub_1C7DCA8(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v21)(
              v18,
              v16,
              *(_QWORD *)(v21 + 8))
          & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_338A644 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v23 = lookup->klass;
        v24 = lookup;
        v25 = *(unsigned __int16 *)&lookup->klass->_2.rank;
        if ( *(_WORD *)&lookup->klass->_2.rank )
        {
          v26 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)&v23->_1.interfaceOffsets->offset;
          while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_23;
          }
          v27 = (__int64)(&v23->vtable._2_GetHashCode + *(_DWORD *)v26);
        }
        else
        {
LABEL_23:
          v27 = sub_1C7DCA8(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v27)(
                                             v24,
                                             v16,
                                             *(_QWORD *)(v27 + 8));
        if ( lookup )
        {
          v30 = lookup;
          if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v29) )
            v9 = v30;
          ++v32;
          v4 = sub_1C2D538(string___TypeInfo, 5);
          lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v34, 0);
          v6 = lookup;
          if ( v4 )
            continue;
        }
      }
      goto LABEL_40;
    }
    if ( v9 )
    {
      if ( ServantCommentEntity__IsNew(v9, v22) )
        return v9 != 0;
      goto LABEL_28;
    }
    if ( !v32 )
      break;
LABEL_28:
    v28 = v33;
LABEL_29:
    v33 = v28 + 1;
    v32 = 0;
    v4 = sub_1C2D538(string___TypeInfo, 5);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v34, 0);
    v6 = lookup;
    v9 = 0;
    if ( !v4 )
      goto LABEL_40;
  }
  v28 = v33;
  if ( v33 == 1 )
    goto LABEL_29;
  return v9 != 0;
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

  if ( (byte_4C27B6E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor___77944936);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C27B6E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
    sub_1C2D6EC(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
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
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0);
    }
    v18 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                      Enumerator,
                                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( v18->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v18, v19);
      v22 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( ImageLimit->max_length )
        {
          v23 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_58115124(
            v23,
            v22,
            (const MethodInfo_376C434 *)Method_System_Collections_Generic_List_int___ctor___77944936);
          if ( !v23 )
            sub_1C2D6EC(v24, v25);
          System_Collections_Generic_List_int___Sort(
            v23,
            (const MethodInfo_376E4A4 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
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
    v30 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  System_String_o *v17; // x20
  Il2CppObject *Name; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4C27B6F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__);
    sub_1C2D490(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
    sub_1C2D490(&StringLiteral_10836/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_1C2D490(&StringLiteral_10835/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10833/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_4C27B6F = 1;
  }
  entity = 0;
  v9 = sub_1C2D6DC(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)decideAction, v12, v13);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)endAction, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10836/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0);
  if ( !entity )
    goto LABEL_14;
  v17 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0, v16);
  v19 = System_String__Format(v17, Name, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10835/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1C2D6EC(Master_object, v11);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v19,
    v21,
    v22,
    v23,
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
  if ( (byte_4C27B67 & 1) == 0 )
  {
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    byte_4C27B67 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0);
}


void ServantCommentMaster__SetOpen_42407144(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4C27B68 & 1) == 0 )
  {
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    byte_4C27B68 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_43235060(svtId, svtCommentIdList, svtCommentPriorityList, 0);
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

  if ( (byte_4C27B62 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_1C2D490(&ServantCommentEntity_TypeInfo);
    byte_4C27B62 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72768;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A726F8;
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  _QWORD v19[6]; // [xsp+0h] [xbp-80h] BYREF
  bool v20[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v21; // [xsp+38h] [xbp-48h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-44h] BYREF

  v21 = limitCount;
  v22 = svtid;
  v20[0] = isDecide;
  if ( (byte_4C27B71 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C27B71 = 1;
  }
  v19[4] = 0;
  v19[0] = j_il2cpp_value_box_0(int_TypeInfo, &v22, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v19[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14);
  v19[2] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v15, v16, v17);
  v19[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v19, callback, object);
}


void ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C27B72 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4C27B72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v7 )
    sub_1C2D6EC(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0);
}


void ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4C27B73 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C27B73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_8:
    sub_1C2D6EC(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}