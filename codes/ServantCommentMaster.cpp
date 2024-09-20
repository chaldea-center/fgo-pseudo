void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B805 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_4A5B805 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  CommonUI_o *UserId; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Master_object; // x22
  CommonUI_o *v15; // x21
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v17; // x21
  CommonUI_o *v18; // x22
  ServantStatusDialog_EndDelegate_o *v19; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B812 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__);
    sub_1B885B0(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    byte_4A5B812 = 1;
  }
  entity = 0LL;
  v9 = sub_1B887FC(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_20;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)endAction, v12, v13);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = (CommonUI_o *)NetworkManager__get_UserId(0LL);
    if ( !Master_object )
      goto LABEL_20;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)UserId,
           svtId,
           0LL) )
    {
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v15 )
      {
        CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = entity;
          v18 = (CommonUI_o *)Instance;
          v19 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v19,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v18 )
          {
            CommonUI__OpenServantStatusDialog_30505968(v18, 33, v17, limitCount, v19, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1B8880C(UserId, v11);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30494572(UserId, *(System_Action_o **)(v9 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_o *__fastcall ServantCommentMaster__GetEntity(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B803 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B803 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t condType,
        bool addCheck,
        bool overLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  __int64 v12; // x26
  __int64 lookup; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x26
  __int64 v29; // x8
  __int64 v30; // x27
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  __int64 v37; // x27
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w8
  ServantCommentEntity_o *v46; // x26
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  int v51; // w9
  char v52; // w2
  const MethodInfo *v53; // x5
  int32_t v56; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v57; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A5B806 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B806 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v56 = 0;
  v57 = 1;
  v12 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v12 )
    goto LABEL_72;
  v14 = (const MethodInfo *)lookup;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_71;
      *(_QWORD *)(v12 + 32) = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v14, v15, v16);
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_71;
      v20 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v12 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 40), v20, v18, v19);
      lookup = (__int64)System_Int32__ToString((int32_t)&v57, 0LL);
      if ( *(_DWORD *)(v12 + 24) <= 2u
        || (*(_QWORD *)(v12 + 48) = lookup,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 48), lookup, v21, v22),
            *(_DWORD *)(v12 + 24) <= 3u)
        || (v25 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v12 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 56), v25, v23, v24),
            lookup = (__int64)System_Int32__ToString((int32_t)&v56, 0LL),
            *(_DWORD *)(v12 + 24) <= 4u) )
      {
LABEL_71:
        sub_1B88814(lookup, v14);
      }
      *(_QWORD *)(v12 + 64) = lookup;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 64), lookup, v26, v27);
      v28 = System_String__Concat_61720560((System_String_array *)v12, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v29 = *(_QWORD *)lookup;
      v30 = lookup;
      v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v33 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v28, *(_QWORD *)(v33 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v36 = *(_QWORD *)lookup;
      v37 = lookup;
      v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v40 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v28, *(_QWORD *)(v40 + 8));
      if ( !lookup )
        goto LABEL_72;
      v46 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_72;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v14);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v50 = *(_QWORD *)&ImageLimit->max_length;
          if ( v50 )
          {
            if ( overLimit )
            {
              if ( (int)v50 < 1 )
                goto LABEL_67;
              v51 = 0;
              while ( ImageLimit->m_Items[v51 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v50 == ++v51 )
                  goto LABEL_67;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_67;
            }
          }
        }
      }
      if ( condType && v46->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_67;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_72;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v57,
                v56,
                condType,
                v53) )
          goto LABEL_67;
        if ( !v17 )
          goto LABEL_66;
        v52 = 1;
      }
      else if ( addCheck )
      {
        v52 = 1;
        if ( !v17 )
          goto LABEL_66;
      }
      else if ( v56 < 1 )
      {
        v52 = 0;
        if ( !v17 )
          goto LABEL_66;
      }
      else
      {
        v52 = v46->fields.condType == 0;
        if ( !v17 )
          goto LABEL_66;
      }
      if ( ServantCommentEntity__IsOpen(v46, -1, v52, v49) )
LABEL_66:
        v17 = (Il2CppObject *)v46;
LABEL_67:
      ++v56;
      v12 = sub_1B88658(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v14 = (const MethodInfo *)lookup;
      if ( !v12 )
        goto LABEL_72;
    }
    if ( v17 )
    {
      if ( !v11 )
        goto LABEL_72;
      items = v11->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_72;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v17, v34, v35);
      }
LABEL_46:
      v45 = v57;
      goto LABEL_47;
    }
    if ( v56 )
      goto LABEL_46;
    v45 = v57;
    if ( v57 != 1 )
      break;
LABEL_47:
    v56 = 0;
    v57 = v45 + 1;
    v12 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v14 = (const MethodInfo *)lookup;
    v17 = 0LL;
    if ( !v12 )
      goto LABEL_72;
  }
  if ( !v11 )
LABEL_72:
    sub_1B8880C(lookup, v14);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetEntityListWithImageList(
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
  Il2CppObject *v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x25
  __int64 v26; // x8
  __int64 v27; // x26
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  __int64 v34; // x26
  __int64 v35; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v36; // x10
  __int64 v37; // x0
  ServantCommentEntity_o *v38; // x25
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v41; // x10
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
  if ( (byte_4A5B807 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B807 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v55 = 0;
  v56 = 1;
  v9 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v9 )
    goto LABEL_60;
  v11 = (const MethodInfo *)lookup;
  v14 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_61;
      *(_QWORD *)(v9 + 32) = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v11, v12, v13);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_61;
      v17 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v17, v15, v16);
      lookup = (__int64)System_Int32__ToString((int32_t)&v56, 0LL);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 48), lookup, v18, v19),
            *(_DWORD *)(v9 + 24) <= 3u)
        || (v22 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), v22, v20, v21),
            lookup = (__int64)System_Int32__ToString((int32_t)&v55, 0LL),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_61:
        sub_1B88814(lookup, v11);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), lookup, v23, v24);
      v25 = System_String__Concat_61720560((System_String_array *)v9, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v26 = *(_QWORD *)lookup;
      v27 = lookup;
      v28 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v30 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v30)(v27, v25, *(_QWORD *)(v30 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v33 = *(_QWORD *)lookup;
      v34 = lookup;
      v35 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v36 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *(v36 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v37 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v25, *(_QWORD *)(v37 + 8));
      if ( !lookup )
        goto LABEL_60;
      v38 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_60;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v11);
      if ( ImageLimit )
      {
        v41 = *(_QWORD *)&ImageLimit->max_length;
        if ( v41 )
        {
          if ( (int)v41 >= 1 )
          {
            v42 = 0LL;
            v43 = 0;
            do
            {
              v44 = ImageLimit->m_Items[++v42];
              v43 |= v44 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v42 );
            if ( (v43 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v38->fields.condType == condType )
                goto LABEL_56;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
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
LABEL_56:
                  if ( !v14 || ServantCommentEntity__IsOpen(v38, -1, 1, v45) )
                    v14 = (Il2CppObject *)v38;
                }
              }
            }
          }
        }
      }
      ++v55;
      v9 = sub_1B88658(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v11 = (const MethodInfo *)lookup;
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v14,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v14, v31, v32);
      }
LABEL_46:
      v50 = v56;
      goto LABEL_47;
    }
    if ( v55 )
      goto LABEL_46;
    v50 = v56;
    if ( v56 != 1 )
      break;
LABEL_47:
    v55 = 0;
    v56 = v50 + 1;
    v9 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v11 = (const MethodInfo *)lookup;
    v14 = 0LL;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_1B8880C(lookup, v11);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__GetNewList(
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
  ServantCommentEntity_o *v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v41; // x10
  __int64 v42; // x0
  ServantCommentEntity_o *v43; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  int v47; // w29
  int v48; // w8
  int v49; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  struct System_Int32_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int v59; // w8
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  System_Int32_array *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_Int32_array *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_Collections_Generic_List_int__o *v70; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v71; // [xsp+20h] [xbp-80h]
  __int64 v72; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A5B80C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B80C = 1;
  }
  v72 = 0LL;
  entity = 0LL;
  v71 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v70 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_98;
  Instance = UserServantCollectionMaster__TryGetEntity(
               (UserServantCollectionMaster_o *)MasterData_object,
               &entity,
               Instance,
               svtId,
               0LL);
  ServantLimitCountSealAfter = 1;
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_98;
    v13 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_98;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_98;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v13,
                                   v14);
  }
  HIDWORD(v72) = 1;
  while ( 2 )
  {
    LODWORD(v72) = 0;
    v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v17 = sub_1B88658(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v17 )
      goto LABEL_98;
    id = Instance;
    v20 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v17 + 32) = id;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), id, v18, v19);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_99;
      v23 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 40), v23, v21, v22);
      Instance = (__int64)System_Int32__ToString((int32_t)&v72 + 4, 0LL);
      if ( *(_DWORD *)(v17 + 24) <= 2u
        || (*(_QWORD *)(v17 + 48) = Instance,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 48), Instance, v24, v25),
            *(_DWORD *)(v17 + 24) <= 3u)
        || (v28 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v17 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 56), v28, v26, v27),
            Instance = (__int64)System_Int32__ToString((int32_t)&v72, 0LL),
            *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_99:
        sub_1B88814(Instance, id);
      }
      *(_QWORD *)(v17 + 64) = Instance;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 64), Instance, v29, v30);
      v31 = System_String__Concat_61720560((System_String_array *)v17, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v32 = *(_QWORD *)Instance;
      v33 = Instance;
      v34 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_28;
        }
        v36 = v32 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_28:
        v36 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v36)(v33, v31, *(_QWORD *)(v36 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v38 = *(_QWORD *)Instance;
      v39 = Instance;
      v40 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v41 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v38 + 176) + 8LL);
        while ( *(v41 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_36;
        }
        v42 = v38 + 16LL * (*(_DWORD *)v41 + 2) + 312;
      }
      else
      {
LABEL_36:
        v42 = sub_1BDA590(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v42)(v39, v31, *(_QWORD *)(v42 + 8));
      if ( !Instance )
        goto LABEL_98;
      v43 = (ServantCommentEntity_o *)Instance;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_98;
      }
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v46 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v43, -1, 0, v45) )
          v20 = v43;
        goto LABEL_71;
      }
      if ( !(_DWORD)v46 )
        goto LABEL_99;
      v47 = *(_DWORD *)(Instance + 32);
      if ( v47 < 3 || ServantLimitCountSealAfter >= v47 )
      {
        Instance = ServantCommentEntity__IsOpen(v43, -1, 0, v45);
        if ( (Instance & 1) != 0 )
          v20 = v43;
        if ( !v20 )
          goto LABEL_71;
      }
      else if ( !v20 )
      {
        goto LABEL_71;
      }
      if ( v47 == 1 )
      {
        if ( !v15 )
          goto LABEL_98;
        v48 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v48;
        if ( !v16 )
          goto LABEL_98;
        v49 = v16->fields._version + 1;
        v16->fields._size = 0;
        v16->fields._version = v49;
        Instance = ServantCommentEntity__IsNew(v20, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
      }
      else
      {
        Instance = ServantCommentEntity__IsNew(v20, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
        if ( !v15 )
          goto LABEL_98;
      }
      id = (unsigned int)v20->fields.id;
      items = v15->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v16 )
        goto LABEL_98;
      id = (unsigned int)v20->fields.priority;
      v53 = v16->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !v53 )
        goto LABEL_98;
      v55 = v16->fields._size;
      if ( (unsigned int)v55 >= v53->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          id,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
LABEL_70:
        v20 = 0LL;
        goto LABEL_71;
      }
      v20 = 0LL;
      v16->fields._size = v55 + 1;
      v53->m_Items[v55 + 1] = id;
LABEL_71:
      LODWORD(v72) = v72 + 1;
      v17 = sub_1B88658(string___TypeInfo, 5LL);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v17 )
        goto LABEL_98;
    }
    if ( v20 )
    {
      if ( !ServantCommentEntity__IsNew(v20, v37) )
        goto LABEL_92;
      Instance = (__int64)v71;
      if ( !v71 )
        goto LABEL_98;
      id = (unsigned int)v20->fields.id;
      v56 = v71->fields._items;
      v57 = Method_System_Collections_Generic_List_int__Add__;
      ++v71->fields._version;
      if ( !v56 )
        goto LABEL_98;
      v58 = v71->fields._size;
      if ( (unsigned int)v58 >= v56->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v71,
          id,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v71->fields._size = v58 + 1;
        v56->m_Items[v58 + 1] = id;
      }
      Instance = (__int64)v70;
      if ( !v70 )
        goto LABEL_98;
      id = (unsigned int)v20->fields.priority;
      v60 = v70->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v70->fields._version;
      if ( !v60 )
        goto LABEL_98;
      v62 = v70->fields._size;
      if ( (unsigned int)v62 >= v60->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v70,
          id,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v70->fields._size = v62 + 1;
        v60->m_Items[v62 + 1] = id;
      }
LABEL_92:
      v59 = HIDWORD(v72);
LABEL_93:
      HIDWORD(v72) = v59 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL) )
  {
    Instance = (__int64)v71;
    if ( v71 )
    {
      System_Collections_Generic_List_int___AddRange(
        v71,
        (System_Collections_Generic_IEnumerable_T__o *)v15,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v70;
      if ( v70 )
      {
        System_Collections_Generic_List_int___AddRange(
          v70,
          (System_Collections_Generic_IEnumerable_T__o *)v16,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_92;
      }
    }
    goto LABEL_98;
  }
  if ( (_DWORD)v72 )
    goto LABEL_92;
  v59 = HIDWORD(v72);
  if ( HIDWORD(v72) == 1 )
    goto LABEL_93;
  Instance = (__int64)v71;
  if ( !v71
    || (v63 = System_Collections_Generic_List_int___ToArray(
                v71,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v63,
        sub_1B88554((ServantStatusBattleListViewItem_o *)idList, (int32_t)v63, v64, v65),
        (Instance = (__int64)v70) == 0)
    || (v66 = System_Collections_Generic_List_int___ToArray(
                v70,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *priorityList = v66,
        sub_1B88554((ServantStatusBattleListViewItem_o *)priorityList, (int32_t)v66, v67, v68),
        !*idList) )
  {
LABEL_98:
    sub_1B8880C(Instance, id);
  }
  return (*idList)->max_length != 0;
}


System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x22
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x22
  __int64 v32; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Int32_array *v43; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v45; // [xsp+1Ch] [xbp-54h] BYREF

  v45 = svtId;
  if ( (byte_4A5B80F & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B80F = 1;
  }
  v43 = 0LL;
  idList = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v43, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_41:
      sub_1B8880C(NewList, v8);
    v10 = 0LL;
    while ( (__int64)v10 < (int)v9->max_length )
    {
      v11 = sub_1B88658(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v45, 0LL);
      if ( !v11 )
        goto LABEL_41;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_43;
      *(_QWORD *)(v11 + 32) = NewList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 32), NewList, v12, v13);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_43;
      v16 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), v16, v14, v15);
      if ( !idList )
        goto LABEL_41;
      if ( v10 >= idList->max_length )
        goto LABEL_43;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0LL);
      if ( *(_DWORD *)(v11 + 24) <= 2u )
        goto LABEL_43;
      *(_QWORD *)(v11 + 48) = NewList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 48), NewList, v17, v18);
      if ( *(_DWORD *)(v11 + 24) <= 3u )
        goto LABEL_43;
      v21 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v11 + 56) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 56), v21, v19, v20);
      if ( !v43 )
        goto LABEL_41;
      if ( v10 >= v43->max_length
        || (NewList = (__int64)System_Int32__ToString((int)v43 + 4 * (int)v10 + 32, 0LL), *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_43:
        sub_1B88814(NewList, v8);
      }
      *(_QWORD *)(v11 + 64) = NewList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 64), NewList, v22, v23);
      v24 = System_String__Concat_61720560((System_String_array *)v11, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !NewList )
        goto LABEL_41;
      v25 = *(_QWORD *)NewList;
      v26 = NewList;
      v27 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_22;
        }
        v29 = v25 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_22:
        v29 = sub_1BDA590(NewList, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v29)(v26, v24, *(_QWORD *)(v29 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !NewList )
          goto LABEL_41;
        v30 = *(_QWORD *)NewList;
        v31 = NewList;
        v32 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v30 + 176)
                                                                                            + 8LL);
          while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v32;
            v33 += 2;
            if ( !v32 )
              goto LABEL_30;
          }
          v34 = v30 + 16LL * (*(_DWORD *)v33 + 2) + 312;
        }
        else
        {
LABEL_30:
          v34 = sub_1BDA590(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v34)(v31, v24, *(_QWORD *)(v34 + 8));
        if ( NewList )
        {
          v8 = NewList;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( !v5 )
              goto LABEL_41;
            items = v5->fields._items;
            v39 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)NewList,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), v8, v35, v36);
            }
          }
        }
      }
      v9 = idList;
      ++v10;
      if ( !idList )
        goto LABEL_41;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v5;
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
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
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x23
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v32; // x10
  __int64 v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int v38; // w8
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x22
  __int64 methodPtr_low; // x10
  int v43; // [xsp+4h] [xbp-6Ch] BYREF
  int v44; // [xsp+8h] [xbp-68h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-64h] BYREF

  v45 = svtId;
  if ( (byte_4A5B808 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B808 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v43 = 0;
  v44 = 1;
  v5 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v45, 0LL);
  if ( !v5 )
    goto LABEL_47;
  v7 = lookup;
  v10 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_46;
      *(_QWORD *)(v5 + 32) = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), v7, v8, v9);
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_46;
      v13 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v5 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v13, v11, v12);
      lookup = (__int64)System_Int32__ToString((int32_t)&v44, 0LL);
      if ( *(_DWORD *)(v5 + 24) <= 2u
        || (*(_QWORD *)(v5 + 48) = lookup,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), lookup, v14, v15),
            *(_DWORD *)(v5 + 24) <= 3u)
        || (v18 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v5 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v18, v16, v17),
            lookup = (__int64)System_Int32__ToString((int32_t)&v43, 0LL),
            *(_DWORD *)(v5 + 24) <= 4u) )
      {
LABEL_46:
        sub_1B88814(lookup, v7);
      }
      *(_QWORD *)(v5 + 64) = lookup;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), lookup, v19, v20);
      v21 = System_String__Concat_61720560((System_String_array *)v5, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_47;
      v22 = *(_QWORD *)lookup;
      v23 = lookup;
      v24 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v26 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v26)(v23, v21, *(_QWORD *)(v26 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v29 = *(_QWORD *)lookup;
        v30 = lookup;
        v31 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v32 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v29 + 176)
                                                                                            + 8LL);
          while ( *(v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
          v33 = sub_1BDA590(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v21, *(_QWORD *)(v33 + 8));
        if ( lookup )
        {
          v40 = (Il2CppObject *)lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v39) )
              v10 = v40;
            ++v43;
            v5 = sub_1B88658(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v45, 0LL);
            v7 = lookup;
            if ( v5 )
              continue;
          }
        }
      }
      goto LABEL_47;
    }
    if ( v10 )
    {
      if ( !v4 )
        goto LABEL_47;
      items = v4->fields._items;
      v35 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_47;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v10,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v10, v27, v28);
      }
LABEL_41:
      v38 = v44;
      goto LABEL_42;
    }
    if ( v43 )
      goto LABEL_41;
    v38 = v44;
    if ( v44 != 1 )
      break;
LABEL_42:
    v43 = 0;
    v44 = v38 + 1;
    v5 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v45, 0LL);
    v7 = lookup;
    v10 = 0LL;
    if ( !v5 )
      goto LABEL_47;
  }
  if ( !v4 )
LABEL_47:
    sub_1B8880C(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v4,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  ServantCommentEntity_c *svtId; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v9; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v12; // w26
  int32_t v13; // w27
  ServantCommentEntity_o *v14; // x28
  __int64 methodPtr_low; // x9
  int32_t m_CachedPtr; // w29
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x24
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  ServantCommentMaster_o *v28; // x0
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  ServantLimitImageMaster_o *v32; // [xsp+8h] [xbp-88h]
  UserServantCollectionMaster_o *v33; // [xsp+10h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5B80D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B80D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v32 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v33 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_34:
    sub_1B8880C(Instance, svtId);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v9;
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_34;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v13,
                                  (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_34;
    svtId = ServantCommentEntity_TypeInfo;
    v14 = (ServantCommentEntity_o *)Instance;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v9 )
      goto LABEL_34;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v9,
            m_CachedPtr,
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v14, (const MethodInfo *)svtId);
      if ( !ImageLimit )
        goto LABEL_38;
      v19 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_38;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v33;
      if ( !v33 )
        goto LABEL_34;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v33, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_38;
      if ( !entity )
        goto LABEL_34;
      Instance = (DataManager_o *)v32;
      if ( !v32 )
        goto LABEL_34;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v32,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     v18);
      if ( (System_Array__IndexOf_int_(
              v19,
              ServantLimitCountSealAfter,
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_38:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v14, questId, questPhase, v18) )
          goto LABEL_39;
        Instance = (DataManager_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_34;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               (ServantCommentAddMaster_o *)MasterData_object,
               m_CachedPtr,
               v14->fields.id,
               v14->fields.priority,
               1,
               questId,
               questPhase,
               v23) )
        {
LABEL_39:
          Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v14, -1, 1, v22);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            svtId = (ServantCommentEntity_c *)(unsigned int)v14->fields.svtId;
            items = v9->fields._items;
            v25 = Method_System_Collections_Generic_List_int__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v9,
                (int32_t)svtId,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v9->fields._size = size + 1;
              items->m_Items[size + 1] = (int)svtId;
            }
          }
        }
      }
    }
    if ( v12 == ++v13 )
      return v9;
  }
  sub_1B88ACC(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v28,
                                                     v29,
                                                     v30,
                                                     v31);
}


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
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
  __int64 methodPtr_low; // x9
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x7
  const MethodInfo *v18; // x1
  bool IsOpen; // w27
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  ServantCommentMaster_o *v27; // x0
  int32_t v28; // w1
  const MethodInfo *v29; // x2

  if ( (byte_4A5B80E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B80E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_26:
    if ( v8 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_28:
    sub_1B8880C(list, v9);
  }
  v11 = (int)list;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v14 = (ServantCommentEntity_o *)list;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__IsOnlyOpenQuestCond(
                                                               (ServantCommentEntity_o *)list,
                                                               questId,
                                                               questPhase,
                                                               v13);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_15;
    if ( !Master_object )
      goto LABEL_28;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           (ServantCommentAddMaster_o *)Master_object,
           v14->fields.svtId,
           v14->fields.id,
           v14->fields.priority,
           1,
           questId,
           questPhase,
           v17) )
    {
LABEL_15:
      IsOpen = ServantCommentEntity__IsOpen(v14, -1, 1, v16);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v14, v18);
    if ( list && IsOpen && list[1].klass )
    {
      if ( !v8 )
        goto LABEL_28;
      items = v8->fields._items;
      v23 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v14,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v14, v20, v21);
      }
    }
    if ( v11 == ++v12 )
      goto LABEL_26;
  }
  sub_1B88ACC(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v27, v28, v29);
}


bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x21
  ServantCommentEntity_o *lookup; // x0
  ServantCommentEntity_o *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  ServantCommentEntity_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v30; // x10
  __int64 v31; // x0
  int v32; // w8
  const MethodInfo *v33; // x3
  ServantCommentEntity_o *v34; // x21
  __int64 methodPtr_low; // x10
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int v38; // [xsp+18h] [xbp-48h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-44h] BYREF

  v39 = svtId;
  if ( (byte_4A5B80B & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B80B = 1;
  }
  v38 = 1;
  v37 = 0;
  v4 = sub_1B88658(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v39, 0LL);
  if ( !v4 )
LABEL_42:
    sub_1B8880C(lookup, v6);
  v6 = lookup;
  v9 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v4 + 32) = v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)v6, v7, v8);
      if ( *(_DWORD *)(v4 + 24) <= 1u )
        goto LABEL_41;
      v12 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v4 + 40) = StringLiteral_1544/*":"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), v12, v10, v11);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v38, 0LL);
      if ( *(_DWORD *)(v4 + 24) <= 2u
        || (*(_QWORD *)(v4 + 48) = lookup,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 48), (int32_t)lookup, v13, v14),
            *(_DWORD *)(v4 + 24) <= 3u)
        || (v17 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v4 + 56) = StringLiteral_1544/*":"*/,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 56), v17, v15, v16),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v37, 0LL),
            *(_DWORD *)(v4 + 24) <= 4u) )
      {
LABEL_41:
        sub_1B88814(lookup, v6);
      }
      *(_QWORD *)(v4 + 64) = lookup;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)lookup, v18, v19);
      v20 = System_String__Concat_61720560((System_String_array *)v4, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v22 = lookup;
      v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_15;
        }
        v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v25 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v25)(
              v22,
              v20,
              *(_QWORD *)(v25 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v27 = lookup->klass;
        v28 = lookup;
        v29 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v30 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v27->_1.interfaceOffsets->offset;
          while ( *(v30 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v29;
            v30 += 2;
            if ( !v29 )
              goto LABEL_23;
          }
          v31 = (__int64)(&v27->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v30);
        }
        else
        {
LABEL_23:
          v31 = sub_1BDA590(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v31)(
                                             v28,
                                             v20,
                                             *(_QWORD *)(v31 + 8));
        if ( lookup )
        {
          v34 = lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v33) )
              v9 = v34;
            ++v37;
            v4 = sub_1B88658(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v39, 0LL);
            v6 = lookup;
            if ( v4 )
              continue;
          }
        }
      }
      goto LABEL_42;
    }
    if ( v9 )
    {
      if ( ServantCommentEntity__IsNew(v9, v26) )
        return v9 != 0LL;
      goto LABEL_28;
    }
    if ( !v37 )
      break;
LABEL_28:
    v32 = v38;
LABEL_29:
    v38 = v32 + 1;
    v37 = 0;
    v4 = sub_1B88658(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v39, 0LL);
    v6 = lookup;
    v9 = 0LL;
    if ( !v4 )
      goto LABEL_42;
  }
  v32 = v38;
  if ( v38 == 1 )
    goto LABEL_29;
  return v9 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsOpenImageLimitProfile(
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
  __int64 p_method; // x0
  char v13; // w22
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ServantCommentEntity_o *v18; // x0
  __int64 v19; // x1
  ServantCommentEntity_o *v20; // x23
  __int64 methodPtr_low; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x25
  System_Collections_Generic_List_int__o *v24; // x24
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5B810 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B810 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v13 & 1) == 0 )
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
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                      Enumerator,
                                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_39:
      sub_1B8880C(v18, v19);
    }
    if ( v18->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v18, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v23 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v24 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_55443684(
            v24,
            v23,
            (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
          if ( !v24 )
            sub_1B8880C(v25, v26);
          System_Collections_Generic_List_int___Sort(
            v24,
            (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v24,
                 0,
                 (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v24,
                 0,
                 (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v20, -1, 1, v27) )
          {
            goto LABEL_31;
          }
        }
      }
    }
  }
  v13 = 0;
LABEL_31:
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
        goto LABEL_35;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_35:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v13 & 1;
}


void __fastcall ServantCommentMaster__OpenSaintGraphProfileChange(
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
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x3
  System_String_o *v17; // x20
  Il2CppObject *Name; // x0
  System_String_o *v19; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A5B811 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__);
    sub_1B885B0(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10844/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_1B885B0(&StringLiteral_10843/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_4A5B811 = 1;
  }
  entity = 0LL;
  v9 = sub_1B887FC(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)decideAction, v12, v13);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)endAction, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10844/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v17 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, v16);
  v19 = System_String__Format(v17, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10843/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1B8880C(Master_object, v11);
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
    0LL);
}


void __fastcall ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  if ( (byte_4A5B809 & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5B809 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


void __fastcall ServantCommentMaster__SetOpen_39629696(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4A5B80A & 1) == 0 )
  {
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    byte_4A5B80A = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_40480624(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B804 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_1B885B0(&ServantCommentEntity_TypeInfo);
    byte_4A5B804 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CF138;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CF0C8;
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  _QWORD v19[6]; // [xsp+0h] [xbp-80h] BYREF
  char v20[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v21; // [xsp+38h] [xbp-48h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-44h] BYREF

  v21 = limitCount;
  v22 = svtid;
  v20[0] = isDecide;
  if ( (byte_4A5B813 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5B813 = 1;
  }
  v19[4] = 0LL;
  v19[0] = j_il2cpp_value_box_0(int_TypeInfo, &v22, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v19[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14);
  v19[2] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v15, v16, v17);
  v19[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1B88564(this, v19, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__0(
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

  if ( (byte_4A5B814 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4A5B814 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v7 )
    sub_1B8880C(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4A5B815 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5B815 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_8:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}