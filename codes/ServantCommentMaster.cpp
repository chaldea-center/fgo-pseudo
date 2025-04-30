void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4ECCB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_4A4ECCB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Master_object; // x23
  CommonUI_o *v22; // x21
  Il2CppObject *v23; // x0
  UserServantCollectionEntity_o *v24; // x21
  CommonUI_o *v25; // x22
  ServantStatusDialog_EndDelegate_o *v26; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4ECD8 & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B863B8(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_1B863B8(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v15);
    byte_4A4ECD8 = 1;
  }
  entity = 0LL;
  v16 = sub_1B86604(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)endAction, v19, v20);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v18);
      byte_4A48C25 = 1;
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
           0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v22 )
      {
        CommonUI__maskFadein(v22, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0LL);
          v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = entity;
          v25 = (CommonUI_o *)v23;
          v26 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v26,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v25 )
          {
            CommonUI__OpenServantStatusDialog_30495064(v25, 33, v24, limitCount, v26, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_1B86614(Instance, v18);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_30483660(Instance, *(System_Action_o **)(v16 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x1

  if ( (byte_4A4ECC9 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&ServantCommentEntity_TypeInfo, v9);
    byte_4A4ECC9 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3218D38 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v20; // x24
  __int64 v21; // x26
  __int64 lookup; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x25
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x26
  __int64 v38; // x8
  __int64 v39; // x27
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  __int64 v46; // x27
  __int64 v47; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v48; // x10
  __int64 v49; // x0
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w8
  ServantCommentEntity_o *v55; // x26
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  int v59; // w9
  char v60; // w2
  const MethodInfo *v61; // x5
  int32_t v65; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v66; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A4ECCC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__, v11);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&string___TypeInfo, v18);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v19);
    byte_4A4ECCC = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v65 = 0;
  v66 = 1;
  v21 = sub_1B86460(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v21 )
    goto LABEL_70;
  v23 = (const MethodInfo *)lookup;
  v26 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v21 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v21 + 32) = v23;
      sub_1B8635C((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v23, v24, v25);
      if ( *(_DWORD *)(v21 + 24) <= 1u )
        goto LABEL_69;
      v29 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v21 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v21 + 40), v29, v27, v28);
      lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
      if ( *(_DWORD *)(v21 + 24) <= 2u
        || (*(_QWORD *)(v21 + 48) = lookup,
            sub_1B8635C((CGThumbnailListItem_o *)(v21 + 48), lookup, v30, v31),
            *(_DWORD *)(v21 + 24) <= 3u)
        || (v34 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v21 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v21 + 56), v34, v32, v33),
            lookup = (__int64)System_Int32__ToString((int32_t)&v65, 0LL),
            *(_DWORD *)(v21 + 24) <= 4u) )
      {
LABEL_69:
        sub_1B8661C(lookup, v23);
      }
      *(_QWORD *)(v21 + 64) = lookup;
      sub_1B8635C((CGThumbnailListItem_o *)(v21 + 64), lookup, v35, v36);
      v37 = System_String__Concat_61685692((System_String_array *)v21, 0LL);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v38 = *(_QWORD *)lookup;
      v39 = lookup;
      v40 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_15;
        }
        v42 = v38 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_15:
        v42 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v42)(v39, v37, *(_QWORD *)(v42 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_70;
      v45 = *(_QWORD *)lookup;
      v46 = lookup;
      v47 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v48 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v45 + 176)
                                                                                                + 8LL);
        while ( *(v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v47;
          v48 += 2;
          if ( !v47 )
            goto LABEL_23;
        }
        v49 = v45 + 16LL * (*(_DWORD *)v48 + 2) + 312;
      }
      else
      {
LABEL_23:
        v49 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v37, *(_QWORD *)(v49 + 8));
      if ( !lookup )
        goto LABEL_70;
      v55 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v23);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v58 = *(_QWORD *)&ImageLimit->max_length;
          if ( v58 )
          {
            if ( overLimit )
            {
              if ( (int)v58 < 1 )
                goto LABEL_65;
              v59 = 0;
              while ( ImageLimit->m_Items[v59 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v58 == ++v59 )
                  goto LABEL_65;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_65;
            }
          }
        }
      }
      if ( condType && v55->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_65;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_70;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_70;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v66,
                v65,
                condType,
                v61) )
          goto LABEL_65;
        if ( !v26 )
          goto LABEL_64;
        v60 = 1;
      }
      else if ( addCheck )
      {
        v60 = 1;
        if ( !v26 )
          goto LABEL_64;
      }
      else if ( v65 < 1 )
      {
        v60 = 0;
        if ( !v26 )
          goto LABEL_64;
      }
      else
      {
        v60 = v55->fields.condType == 0;
        if ( !v26 )
          goto LABEL_64;
      }
      if ( ServantCommentEntity__IsOpen(v55, -1, v60, v57) )
LABEL_64:
        v26 = (Il2CppObject *)v55;
LABEL_65:
      ++v65;
      v21 = sub_1B86460(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v23 = (const MethodInfo *)lookup;
      if ( !v21 )
        goto LABEL_70;
    }
    if ( v26 )
    {
      if ( !v20 )
        goto LABEL_70;
      items = v20->fields._items;
      v51 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_70;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          v26,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v26;
        sub_1B8635C((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v26, v43, v44);
      }
LABEL_44:
      v54 = v66;
      goto LABEL_45;
    }
    if ( v65 )
      goto LABEL_44;
    v54 = v66;
    if ( v66 != 1 )
      break;
LABEL_45:
    v65 = 0;
    v66 = v54 + 1;
    v21 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v23 = (const MethodInfo *)lookup;
    v26 = 0LL;
    if ( !v21 )
      goto LABEL_70;
  }
  if ( !v20 )
LABEL_70:
    sub_1B86614(lookup, v23);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v20,
                                         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityListWithImageList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v18; // x23
  __int64 v19; // x25
  __int64 lookup; // x0
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x25
  __int64 v36; // x8
  __int64 v37; // x26
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  __int64 v44; // x26
  __int64 v45; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v46; // x10
  __int64 v47; // x0
  ServantCommentEntity_o *v48; // x25
  System_Int32_array *ImageLimit; // x0
  __int64 v50; // x10
  __int64 v51; // x9
  char v52; // w8
  int v53; // w11
  const MethodInfo *v54; // x3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w8
  const MethodInfo *v60; // x5
  int32_t v64; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v65; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A4ECCD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__, v9);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&string___TypeInfo, v16);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v17);
    byte_4A4ECCD = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v64 = 0;
  v65 = 1;
  v19 = sub_1B86460(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v19 )
    goto LABEL_60;
  v21 = (const MethodInfo *)lookup;
  v24 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v19 + 32) = v21;
      sub_1B8635C((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v21, v22, v23);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_59;
      v27 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v19 + 40), v27, v25, v26);
      lookup = (__int64)System_Int32__ToString((int32_t)&v65, 0LL);
      if ( *(_DWORD *)(v19 + 24) <= 2u
        || (*(_QWORD *)(v19 + 48) = lookup,
            sub_1B8635C((CGThumbnailListItem_o *)(v19 + 48), lookup, v28, v29),
            *(_DWORD *)(v19 + 24) <= 3u)
        || (v32 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v19 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v19 + 56), v32, v30, v31),
            lookup = (__int64)System_Int32__ToString((int32_t)&v64, 0LL),
            *(_DWORD *)(v19 + 24) <= 4u) )
      {
LABEL_59:
        sub_1B8661C(lookup, v21);
      }
      *(_QWORD *)(v19 + 64) = lookup;
      sub_1B8635C((CGThumbnailListItem_o *)(v19 + 64), lookup, v33, v34);
      v35 = System_String__Concat_61685692((System_String_array *)v19, 0LL);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v36 = *(_QWORD *)lookup;
      v37 = lookup;
      v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_15;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_15:
        v40 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_60;
      v43 = *(_QWORD *)lookup;
      v44 = lookup;
      v45 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v46 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v43 + 176)
                                                                                                + 8LL);
        while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v45;
          v46 += 2;
          if ( !v45 )
            goto LABEL_23;
        }
        v47 = v43 + 16LL * (*(_DWORD *)v46 + 2) + 312;
      }
      else
      {
LABEL_23:
        v47 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v47)(v44, v35, *(_QWORD *)(v47 + 8));
      if ( !lookup )
        goto LABEL_60;
      v48 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v21);
      if ( ImageLimit )
      {
        v50 = *(_QWORD *)&ImageLimit->max_length;
        if ( v50 )
        {
          if ( (int)v50 >= 1 )
          {
            v51 = 0LL;
            v52 = 0;
            do
            {
              v53 = ImageLimit->m_Items[++v51];
              v52 |= v53 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v51 );
            if ( (v52 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v48->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v65,
                       v64,
                       condType,
                       v60) )
                {
LABEL_50:
                  if ( !v24 || ServantCommentEntity__IsOpen(v48, -1, 1, v54) )
                    v24 = (Il2CppObject *)v48;
                }
              }
            }
          }
        }
      }
      ++v64;
      v19 = sub_1B86460(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v21 = (const MethodInfo *)lookup;
      if ( !v19 )
        goto LABEL_60;
    }
    if ( v24 )
    {
      if ( !v18 )
        goto LABEL_60;
      items = v18->fields._items;
      v56 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v24,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v24;
        sub_1B8635C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v24, v41, v42);
      }
LABEL_44:
      v59 = v65;
      goto LABEL_45;
    }
    if ( v64 )
      goto LABEL_44;
    v59 = v65;
    if ( v65 != 1 )
      break;
LABEL_45:
    v64 = 0;
    v65 = v59 + 1;
    v19 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v21 = (const MethodInfo *)lookup;
    v24 = 0LL;
    if ( !v19 )
      goto LABEL_60;
  }
  if ( !v18 )
LABEL_60:
    sub_1B86614(lookup, v21);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  __int64 id; // x1
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v26; // w24
  System_Collections_Generic_List_int__o *v27; // x25
  System_Collections_Generic_List_int__o *v28; // x26
  __int64 v29; // x28
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  ServantCommentEntity_o *v32; // x27
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x28
  __int64 v44; // x8
  __int64 v45; // x29
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x8
  __int64 v51; // x29
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v53; // x10
  __int64 v54; // x0
  ServantCommentEntity_o *v55; // x28
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  int v58; // w29
  int v59; // w8
  int v60; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  int v70; // w8
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  System_Int32_array *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Int32_array *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  CGThumbnailListItem_o *v81; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v82; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v83; // [xsp+20h] [xbp-80h]
  __int64 v84; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A4ECD2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__, v10);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B863B8(&NetworkManager_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&string___TypeInfo, v20);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v21);
    byte_4A4ECD2 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  v83 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v83,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v82 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v82,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, id);
    byte_4A48C25 = 1;
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
               0LL);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_100;
    v26 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v26,
                                   0LL);
  }
  v81 = (CGThumbnailListItem_o *)priorityList;
  HIDWORD(v84) = 1;
  while ( 2 )
  {
    LODWORD(v84) = 0;
    v27 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v28 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
    v29 = sub_1B86460(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v29 )
      goto LABEL_100;
    id = Instance;
    v32 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v29 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v29 + 32) = id;
      sub_1B8635C((CGThumbnailListItem_o *)(v29 + 32), id, v30, v31);
      if ( *(_DWORD *)(v29 + 24) <= 1u )
        goto LABEL_99;
      v35 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v29 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v29 + 40), v35, v33, v34);
      Instance = (__int64)System_Int32__ToString((int32_t)&v84 + 4, 0LL);
      if ( *(_DWORD *)(v29 + 24) <= 2u
        || (*(_QWORD *)(v29 + 48) = Instance,
            sub_1B8635C((CGThumbnailListItem_o *)(v29 + 48), Instance, v36, v37),
            *(_DWORD *)(v29 + 24) <= 3u)
        || (v40 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v29 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v29 + 56), v40, v38, v39),
            Instance = (__int64)System_Int32__ToString((int32_t)&v84, 0LL),
            *(_DWORD *)(v29 + 24) <= 4u) )
      {
LABEL_99:
        sub_1B8661C(Instance, id);
      }
      *(_QWORD *)(v29 + 64) = Instance;
      sub_1B8635C((CGThumbnailListItem_o *)(v29 + 64), Instance, v41, v42);
      v43 = System_String__Concat_61685692((System_String_array *)v29, 0LL);
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v44 = *(_QWORD *)Instance;
      v45 = Instance;
      v46 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v47 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_32;
        }
        v48 = v44 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_32:
        v48 = sub_1BD6B4C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v48)(v45, v43, *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v50 = *(_QWORD *)Instance;
      v51 = Instance;
      v52 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v53 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v50 + 176)
                                                                                                + 8LL);
        while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v52;
          v53 += 2;
          if ( !v52 )
            goto LABEL_40;
        }
        v54 = v50 + 16LL * (*(_DWORD *)v53 + 2) + 312;
      }
      else
      {
LABEL_40:
        v54 = sub_1BD6B4C(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v54)(v51, v43, *(_QWORD *)(v54 + 8));
      if ( !Instance )
        goto LABEL_100;
      v55 = (ServantCommentEntity_o *)Instance;
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v57 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v55, -1, 0, v56) )
          v32 = v55;
        goto LABEL_72;
      }
      if ( !(_DWORD)v57 )
        goto LABEL_99;
      v58 = *(_DWORD *)(Instance + 32);
      if ( v58 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v55, -1, 0, v56);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v58 )
      {
        Instance = ServantCommentEntity__IsOpen(v55, -1, 0, v56);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v55 = v32;
      if ( !v32 )
        goto LABEL_72;
LABEL_55:
      if ( v58 == 1 )
      {
        if ( !v27 )
          goto LABEL_100;
        v59 = v27->fields._version + 1;
        v27->fields._size = 0;
        v27->fields._version = v59;
        if ( !v28 )
          goto LABEL_100;
        v60 = v28->fields._version + 1;
        v28->fields._size = 0;
        v28->fields._version = v60;
        Instance = ServantCommentEntity__IsNew(v55, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v55, (const MethodInfo *)id);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v27 )
        goto LABEL_100;
LABEL_62:
      id = (unsigned int)v55->fields.id;
      items = v27->fields._items;
      v62 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          id,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v28 )
        goto LABEL_100;
      id = (unsigned int)v55->fields.priority;
      v64 = v28->fields._items;
      v65 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v64 )
        goto LABEL_100;
      v66 = v28->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          id,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
LABEL_71:
        v32 = 0LL;
        goto LABEL_72;
      }
      v32 = 0LL;
      v28->fields._size = v66 + 1;
      v64->m_Items[v66 + 1] = id;
LABEL_72:
      LODWORD(v84) = v84 + 1;
      v29 = sub_1B86460(string___TypeInfo, 5LL);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v29 )
        goto LABEL_100;
    }
    if ( v32 )
    {
      if ( !ServantCommentEntity__IsNew(v32, v49) )
        goto LABEL_93;
      Instance = (__int64)v83;
      if ( !v83 )
        goto LABEL_100;
      id = (unsigned int)v32->fields.id;
      v67 = v83->fields._items;
      v68 = Method_System_Collections_Generic_List_int__Add__;
      ++v83->fields._version;
      if ( !v67 )
        goto LABEL_100;
      v69 = v83->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v83,
          id,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v83->fields._size = v69 + 1;
        v67->m_Items[v69 + 1] = id;
      }
      Instance = (__int64)v82;
      if ( !v82 )
        goto LABEL_100;
      id = (unsigned int)v32->fields.priority;
      v71 = v82->fields._items;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v82->fields._version;
      if ( !v71 )
        goto LABEL_100;
      v73 = v82->fields._size;
      if ( (unsigned int)v73 >= v71->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v82,
          id,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v82->fields._size = v73 + 1;
        v71->m_Items[v73 + 1] = id;
      }
LABEL_93:
      v70 = HIDWORD(v84);
LABEL_94:
      HIDWORD(v84) = v70 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v27, 0LL) )
  {
    Instance = (__int64)v83;
    if ( v83 )
    {
      System_Collections_Generic_List_int___AddRange(
        v83,
        (System_Collections_Generic_IEnumerable_T__o *)v27,
        (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v82;
      if ( v82 )
      {
        System_Collections_Generic_List_int___AddRange(
          v82,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v84 )
    goto LABEL_93;
  v70 = HIDWORD(v84);
  if ( HIDWORD(v84) == 1 )
    goto LABEL_94;
  Instance = (__int64)v83;
  if ( !v83
    || (v74 = System_Collections_Generic_List_int___ToArray(
                v83,
                (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v74,
        sub_1B8635C((CGThumbnailListItem_o *)idList, (int32_t)v74, v75, v76),
        (Instance = (__int64)v82) == 0)
    || (v77 = System_Collections_Generic_List_int___ToArray(
                v82,
                (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        v81->klass = (CGThumbnailListItem_c *)v77,
        sub_1B8635C(v81, (int32_t)v77, v78, v79),
        !*idList) )
  {
LABEL_100:
    sub_1B86614(Instance, id);
  }
  return (*idList)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x4
  __int64 NewList; // x0
  __int64 v14; // x1
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x23
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x22
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x22
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x1
  Il2CppClass **v47; // x0
  System_Int32_array *v49; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-54h] BYREF

  v51 = svtId;
  if ( (byte_4A4ECD5 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v8);
    sub_1B863B8(&string___TypeInfo, v9);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v10);
    byte_4A4ECD5 = 1;
  }
  v49 = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v49, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v15 = idList;
    if ( !idList )
LABEL_39:
      sub_1B86614(NewList, v14);
    v16 = 0LL;
    while ( (__int64)v16 < (int)v15->max_length )
    {
      v17 = sub_1B86460(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( !v17 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v17 + 32) = NewList;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), NewList, v18, v19);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_41;
      v22 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 40), v22, v20, v21);
      if ( !idList )
        goto LABEL_39;
      if ( v16 >= idList->max_length )
        goto LABEL_41;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v16 + 32, 0LL);
      if ( *(_DWORD *)(v17 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v17 + 48) = NewList;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 48), NewList, v23, v24);
      if ( *(_DWORD *)(v17 + 24) <= 3u )
        goto LABEL_41;
      v27 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v17 + 56) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 56), v27, v25, v26);
      if ( !v49 )
        goto LABEL_39;
      if ( v16 >= v49->max_length
        || (NewList = (__int64)System_Int32__ToString((int)v49 + 4 * (int)v16 + 32, 0LL), *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_41:
        sub_1B8661C(NewList, v14);
      }
      *(_QWORD *)(v17 + 64) = NewList;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 64), NewList, v28, v29);
      v30 = System_String__Concat_61685692((System_String_array *)v17, 0LL);
      NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !NewList )
        goto LABEL_39;
      v31 = *(_QWORD *)NewList;
      v32 = NewList;
      v33 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_22;
        }
        v35 = v31 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_22:
        v35 = sub_1BD6B4C(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(v32, v30, *(_QWORD *)(v35 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
        if ( !NewList )
          goto LABEL_39;
        v36 = *(_QWORD *)NewList;
        v37 = NewList;
        v38 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v36 + 176)
                                                                                                  + 8LL);
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v38;
            v39 += 2;
            if ( !v38 )
              goto LABEL_30;
          }
          v40 = v36 + 16LL * (*(_DWORD *)v39 + 2) + 312;
        }
        else
        {
LABEL_30:
          v40 = sub_1BD6B4C(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v30, *(_QWORD *)(v40 + 8));
        if ( NewList )
        {
          if ( !v11 )
            goto LABEL_39;
          items = v11->fields._items;
          v44 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_39;
          size = v11->fields._size;
          v46 = NewList;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)NewList,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v46;
            sub_1B8635C((CGThumbnailListItem_o *)(v47 + 4), v46, v41, v42);
          }
        }
      }
      v15 = idList;
      ++v16;
      if ( !idList )
        goto LABEL_39;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x22
  __int64 lookup; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  __int64 v37; // x23
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v39; // x10
  __int64 v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int v45; // w8
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x22
  int v49; // [xsp+4h] [xbp-6Ch] BYREF
  int v50; // [xsp+8h] [xbp-68h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-64h] BYREF

  v51 = svtId;
  if ( (byte_4A4ECCE & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v8);
    sub_1B863B8(&string___TypeInfo, v9);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v10);
    byte_4A4ECCE = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v49 = 0;
  v50 = 1;
  v12 = sub_1B86460(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
  if ( !v12 )
    goto LABEL_45;
  v14 = lookup;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v12 + 32) = v14;
      sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), v14, v15, v16);
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_44;
      v20 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v12 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v12 + 40), v20, v18, v19);
      lookup = (__int64)System_Int32__ToString((int32_t)&v50, 0LL);
      if ( *(_DWORD *)(v12 + 24) <= 2u
        || (*(_QWORD *)(v12 + 48) = lookup,
            sub_1B8635C((CGThumbnailListItem_o *)(v12 + 48), lookup, v21, v22),
            *(_DWORD *)(v12 + 24) <= 3u)
        || (v25 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v12 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v12 + 56), v25, v23, v24),
            lookup = (__int64)System_Int32__ToString((int32_t)&v49, 0LL),
            *(_DWORD *)(v12 + 24) <= 4u) )
      {
LABEL_44:
        sub_1B8661C(lookup, v14);
      }
      *(_QWORD *)(v12 + 64) = lookup;
      sub_1B8635C((CGThumbnailListItem_o *)(v12 + 64), lookup, v26, v27);
      v28 = System_String__Concat_61685692((System_String_array *)v12, 0LL);
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_45;
      v29 = *(_QWORD *)lookup;
      v30 = lookup;
      v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_15;
        }
        v33 = v29 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_15:
        v33 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v28, *(_QWORD *)(v33 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v36 = *(_QWORD *)lookup;
        v37 = lookup;
        v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v36 + 176)
                                                                                                  + 8LL);
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v38;
            v39 += 2;
            if ( !v38 )
              goto LABEL_23;
          }
          v40 = v36 + 16LL * (*(_DWORD *)v39 + 2) + 312;
        }
        else
        {
LABEL_23:
          v40 = sub_1BD6B4C(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v28, *(_QWORD *)(v40 + 8));
        if ( lookup )
        {
          v47 = (Il2CppObject *)lookup;
          if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v46) )
            v17 = v47;
          ++v49;
          v12 = sub_1B86460(string___TypeInfo, 5LL);
          lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
          v14 = lookup;
          if ( v12 )
            continue;
        }
      }
      goto LABEL_45;
    }
    if ( v17 )
    {
      if ( !v11 )
        goto LABEL_45;
      items = v11->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_45;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v17,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v17;
        sub_1B8635C((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v17, v34, v35);
      }
LABEL_39:
      v45 = v50;
      goto LABEL_40;
    }
    if ( v49 )
      goto LABEL_39;
    v45 = v50;
    if ( v50 != 1 )
      break;
LABEL_40:
    v49 = 0;
    v50 = v45 + 1;
    v12 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
    v14 = lookup;
    v17 = 0LL;
    if ( !v12 )
      goto LABEL_45;
  }
  if ( !v11 )
LABEL_45:
    sub_1B86614(lookup, v14);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  const MethodInfo *svtId; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_int__o *v21; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v24; // w26
  int32_t v25; // w27
  int32_t m_CachedPtr; // w24
  ServantCommentEntity_o *v27; // x29
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x28
  UserServantCollectionMaster_o *v31; // x9
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  ServantLimitImageMaster_o *v39; // [xsp+0h] [xbp-80h]
  UserServantCollectionMaster_o *v40; // [xsp+10h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A4ECD3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A4ECD3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v39 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       Instance,
                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v40 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v25,
                                    (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v21 )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v27 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v21,
              m_CachedPtr,
              (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        ImageLimit = ServantCommentEntity__GetImageLimit(v27, svtId);
        if ( !ImageLimit )
          goto LABEL_39;
        v30 = ImageLimit;
        if ( !*(_QWORD *)&ImageLimit->max_length )
          goto LABEL_39;
        v31 = v40;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v31 = v40;
        }
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, svtId);
          v31 = v40;
          byte_4A48C25 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v31 = v40;
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v31 )
          break;
        Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                      v31,
                                      &entity,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      m_CachedPtr,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_39;
        if ( !entity )
          break;
        Instance = (DataManager_o *)v39;
        if ( !v39 )
          break;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v39,
                                       m_CachedPtr,
                                       entity->fields.maxLimitCount,
                                       0LL);
        if ( (System_Array__IndexOf_int_(
                v30,
                ServantLimitCountSealAfter,
                (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
        {
LABEL_39:
          if ( ServantCommentEntity__IsOnlyOpenQuestCond(v27, questId, questPhase, v29) )
            goto LABEL_40;
          Instance = (DataManager_o *)MasterData_object;
          if ( !MasterData_object )
            break;
          if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
                 (ServantCommentAddMaster_o *)MasterData_object,
                 m_CachedPtr,
                 v27->fields.id,
                 v27->fields.priority,
                 1,
                 questId,
                 questPhase,
                 v34) )
          {
LABEL_40:
            Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v27, -1, 1, v33);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              svtId = (const MethodInfo *)(unsigned int)v27->fields.svtId;
              items = v21->fields._items;
              v36 = Method_System_Collections_Generic_List_int__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v21,
                  (int32_t)svtId,
                  *(const MethodInfo_35DF934 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v21->fields._size = size + 1;
                items->m_Items[size + 1] = (int)svtId;
              }
            }
          }
        }
      }
      if ( v24 == ++v25 )
        return v21;
    }
LABEL_36:
    sub_1B86614(Instance, svtId);
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v18; // w24
  int32_t v19; // w25
  const MethodInfo *v20; // x3
  ServantCommentEntity_o *v21; // x26
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  const MethodInfo *v24; // x1
  bool IsOpen; // w27
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4A4ECD4 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    byte_4A4ECD4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v19,
                                                                 (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !list )
        break;
      v21 = (ServantCommentEntity_o *)list;
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                                 (ServantCommentEntity_o *)list,
                                                                 questId,
                                                                 questPhase,
                                                                 v20);
      if ( ((unsigned __int8)list & 1) != 0 )
        goto LABEL_13;
      if ( !Master_object )
        break;
      if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
             (ServantCommentAddMaster_o *)Master_object,
             v21->fields.svtId,
             v21->fields.id,
             v21->fields.priority,
             1,
             questId,
             questPhase,
             v23) )
      {
LABEL_13:
        IsOpen = ServantCommentEntity__IsOpen(v21, -1, 1, v22);
      }
      else
      {
        IsOpen = 0;
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v21, v24);
      if ( list && IsOpen && list[1].klass )
      {
        if ( !v15 )
          break;
        items = v15->fields._items;
        v29 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v21,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_1B8635C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v21, v26, v27);
        }
      }
      if ( v18 == ++v19 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1B86614(list, v16);
  }
LABEL_24:
  if ( !v15 )
    goto LABEL_26;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v15,
                                         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  ServantCommentEntity_o *lookup; // x0
  ServantCommentEntity_o *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ServantCommentEntity_o *v12; // x20
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
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v25; // x22
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  const MethodInfo *v29; // x1
  ServantCommentEntity_c *v30; // x8
  ServantCommentEntity_o *v31; // x22
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v33; // x10
  __int64 v34; // x0
  int v35; // w8
  const MethodInfo *v36; // x3
  ServantCommentEntity_o *v37; // x21
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  int v40; // [xsp+18h] [xbp-48h] BYREF
  int32_t v41; // [xsp+1Ch] [xbp-44h] BYREF

  v41 = svtId;
  if ( (byte_4A4ECD1 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo, v4);
    sub_1B863B8(&string___TypeInfo, v5);
    sub_1B863B8(&StringLiteral_1468/*":"*/, v6);
    byte_4A4ECD1 = 1;
  }
  v40 = 1;
  v39 = 0;
  v7 = sub_1B86460(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
  if ( !v7 )
LABEL_40:
    sub_1B86614(lookup, v9);
  v9 = lookup;
  v12 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_39;
      *(_QWORD *)(v7 + 32) = v9;
      sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v9, v10, v11);
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_39;
      v15 = StringLiteral_1468/*":"*/;
      *(_QWORD *)(v7 + 40) = StringLiteral_1468/*":"*/;
      sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), v15, v13, v14);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL);
      if ( *(_DWORD *)(v7 + 24) <= 2u
        || (*(_QWORD *)(v7 + 48) = lookup,
            sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)lookup, v16, v17),
            *(_DWORD *)(v7 + 24) <= 3u)
        || (v20 = StringLiteral_1468/*":"*/,
            *(_QWORD *)(v7 + 56) = StringLiteral_1468/*":"*/,
            sub_1B8635C((CGThumbnailListItem_o *)(v7 + 56), v20, v18, v19),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v39, 0LL),
            *(_DWORD *)(v7 + 24) <= 4u) )
      {
LABEL_39:
        sub_1B8661C(lookup, v9);
      }
      *(_QWORD *)(v7 + 64) = lookup;
      sub_1B8635C((CGThumbnailListItem_o *)(v7 + 64), (int32_t)lookup, v21, v22);
      v23 = System_String__Concat_61685692((System_String_array *)v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_40;
      klass = lookup->klass;
      v25 = lookup;
      v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v26;
          p_offset += 4;
          if ( !v26 )
            goto LABEL_15;
        }
        v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v28 = sub_1BD6B4C(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v28)(
              v25,
              v23,
              *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_3216B2C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v30 = lookup->klass;
        v31 = lookup;
        v32 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v33 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)&v30->_1.interfaceOffsets->offset;
          while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v32;
            v33 += 2;
            if ( !v32 )
              goto LABEL_23;
          }
          v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
        }
        else
        {
LABEL_23:
          v34 = sub_1BD6B4C(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v34)(
                                             v31,
                                             v23,
                                             *(_QWORD *)(v34 + 8));
        if ( lookup )
        {
          v37 = lookup;
          if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v36) )
            v12 = v37;
          ++v39;
          v7 = sub_1B86460(string___TypeInfo, 5LL);
          lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
          v9 = lookup;
          if ( v7 )
            continue;
        }
      }
      goto LABEL_40;
    }
    if ( v12 )
    {
      if ( ServantCommentEntity__IsNew(v12, v29) )
        return v12 != 0LL;
      goto LABEL_28;
    }
    if ( !v39 )
      break;
LABEL_28:
    v35 = v40;
LABEL_29:
    v40 = v35 + 1;
    v39 = 0;
    v7 = sub_1B86460(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
    v9 = lookup;
    v12 = 0LL;
    if ( !v7 )
      goto LABEL_40;
  }
  v35 = v40;
  if ( v40 == 1 )
    goto LABEL_29;
  return v12 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v21; // w22
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  ServantCommentEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  ServantCommentEntity_o *v28; // x23
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x25
  System_Collections_Generic_List_int__o *v31; // x24
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4A4ECD6 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__, v6);
    sub_1B863B8(&System_IDisposable_TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, v8);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4A4ECD6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1B86614(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31B0EE0 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B86614(0LL, v15);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v21 & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCommentEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_17:
      v25 = sub_1BD6B4C(Enumerator, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0LL);
    }
    v26 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                      Enumerator,
                                      *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_1B86614(0LL, v27);
    if ( v26->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, v27);
      v30 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v31 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_56488456(
            v31,
            v30,
            (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
          if ( !v31 )
            sub_1B86614(v32, v33);
          System_Collections_Generic_List_int___Sort(
            v31,
            (const MethodInfo_35E1278 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v31,
                 0,
                 (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v31,
                 0,
                 (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v28, -1, 1, v34) )
          {
            goto LABEL_29;
          }
        }
      }
    }
  }
  v21 = 0;
LABEL_29:
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_33;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_33:
    v38 = sub_1BD6B4C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v21 & 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__OpenSaintGraphProfileChange(
        int32_t svtId,
        int32_t limitCount,
        ServantCommentMaster_ProfileChangeDecideDelegate_o *decideAction,
        System_Action_o *endAction,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *v28; // x20
  Il2CppObject *Name; // x0
  System_String_o *v30; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  CommonConfirmDialog_ClickDelegate_o *v34; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A4ECD7 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B863B8(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_1B863B8(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_10682/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_1B863B8(&StringLiteral_10681/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_1B863B8(&StringLiteral_1/*""*/, v19);
    sub_1B863B8(&StringLiteral_10679/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_4A4ECD7 = 1;
  }
  entity = 0LL;
  v21 = sub_1B86604(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)decideAction, v24, v25);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 32), (int32_t)endAction, v26, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_32142CC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10682/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v28 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, 0, 0LL);
  v30 = System_String__Format(v28, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10681/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10679/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)v21,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1B86614(Master_object, v23);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v30,
    v32,
    v33,
    v34,
    0,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    42.0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  if ( (byte_4A4ECCF & 1) == 0 )
  {
    sub_1B863B8(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4ECCF = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_40727852(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4A4ECD0 & 1) == 0 )
  {
    sub_1B863B8(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A4ECD0 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_41532524(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__TryGetEntity(
        ServantCommentMaster_o *this,
        ServantCommentEntity_o **entity,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *PK; // x2

  if ( (byte_4A4ECCA & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_1B863B8(&ServantCommentEntity_TypeInfo, v11);
    byte_4A4ECCA = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 4 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D340C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D339C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantCommentMaster_ProfileChangeDecideDelegate__BeginInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  _QWORD v20[6]; // [xsp+0h] [xbp-80h] BYREF
  char v21[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v22; // [xsp+38h] [xbp-48h] BYREF
  int32_t v23; // [xsp+3Ch] [xbp-44h] BYREF

  v22 = limitCount;
  v23 = svtid;
  v21[0] = isDecide;
  if ( (byte_4A4ECD9 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_1B863B8(&int_TypeInfo, v12);
    byte_4A4ECD9 = 1;
  }
  v20[4] = 0LL;
  v20[0] = j_il2cpp_value_box_0(int_TypeInfo, &v23, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v20[1] = j_il2cpp_value_box_0(int_TypeInfo, &v22, v13, v14, v15);
  v20[2] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v16, v17, v18);
  v20[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1B8636C(this, v20, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__Invoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        int32_t svtid,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, bool, System_Action_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    svtid,
    limitCount,
    isDecide,
    finishCallback,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantCommentMaster___c__DisplayClass15_0___ctor(
        ServantCommentMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass15_0___OpenSaintGraphProfileChange_b__0(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, bool, System_Action_o *, _QWORD))decideAction->fields.m_target)(
      decideAction->fields.original_method_info,
      svtId,
      limitCount,
      isDecide,
      endAction,
      *(_QWORD *)&decideAction->fields.extra_arg);
  else
    ServantCommentMaster__DefaultProfileChangeDecideAction(
      svtId,
      limitCount,
      isDecide,
      endAction,
      (const MethodInfo *)endAction);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___ctor(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__0(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        bool isDcd,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A4ECDA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDcd);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_4A4ECDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !v10 )
    sub_1B86614(Instance, v8);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4A4ECDB & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A4ECDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1B86614(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}