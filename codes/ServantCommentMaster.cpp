void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E5D7 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_4A2E5D7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  CommonUI_o *UserId; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Master_object; // x22
  CommonUI_o *v22; // x21
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v24; // x21
  CommonUI_o *v25; // x22
  ServantStatusDialog_EndDelegate_o *v26; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A2E5E4 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B761C0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B761C0(&DataManager_TypeInfo, v10);
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1B761C0(&NetworkManager_TypeInfo, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B761C0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_1B761C0(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v15);
    byte_4A2E5E4 = 1;
  }
  entity = 0LL;
  v16 = sub_1B7640C(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)endAction, v19, v20);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v22 )
      {
        CommonUI__maskFadein(v22, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = entity;
          v25 = (CommonUI_o *)Instance;
          v26 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v26,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v25 )
          {
            CommonUI__OpenServantStatusDialog_30431004(v25, 33, v24, limitCount, v26, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1B7641C(UserId, v18);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30419608(UserId, *(System_Action_o **)(v16 + 16), 0LL);
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

  if ( (byte_4A2E5D5 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v9);
    byte_4A2E5D5 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_30FFAD8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v21; // x24
  __int64 v22; // x26
  __int64 lookup; // x0
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x26
  __int64 v39; // x8
  __int64 v40; // x27
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  __int64 v47; // x27
  __int64 v48; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v49; // x10
  __int64 v50; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w8
  ServantCommentEntity_o *v56; // x26
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  int v61; // w9
  char v62; // w2
  const MethodInfo *v63; // x5
  int32_t v66; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v67; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A2E5D8 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v11);
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v15);
    sub_1B761C0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v16);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v17);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B761C0(&string___TypeInfo, v19);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v20);
    byte_4A2E5D8 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v66 = 0;
  v67 = 1;
  v22 = sub_1B76268(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v22 )
    goto LABEL_72;
  v24 = (const MethodInfo *)lookup;
  v27 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v22 + 24) )
        goto LABEL_71;
      *(_QWORD *)(v22 + 32) = v24;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v24, v25, v26);
      if ( *(_DWORD *)(v22 + 24) <= 1u )
        goto LABEL_71;
      v30 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v22 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 40), v30, v28, v29);
      lookup = (__int64)System_Int32__ToString((int32_t)&v67, 0LL);
      if ( *(_DWORD *)(v22 + 24) <= 2u
        || (*(_QWORD *)(v22 + 48) = lookup,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 48), lookup, v31, v32),
            *(_DWORD *)(v22 + 24) <= 3u)
        || (v35 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v22 + 56) = StringLiteral_1544/*":"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 56), v35, v33, v34),
            lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL),
            *(_DWORD *)(v22 + 24) <= 4u) )
      {
LABEL_71:
        sub_1B76424(lookup, v24);
      }
      *(_QWORD *)(v22 + 64) = lookup;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v22 + 64), lookup, v36, v37);
      v38 = System_String__Concat_61548588((System_String_array *)v22, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v39 = *(_QWORD *)lookup;
      v40 = lookup;
      v41 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_15;
        }
        v43 = v39 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_15:
        v43 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v43)(v40, v38, *(_QWORD *)(v43 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v46 = *(_QWORD *)lookup;
      v47 = lookup;
      v48 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v49 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *(v49 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v48;
          v49 += 2;
          if ( !v48 )
            goto LABEL_23;
        }
        v50 = v46 + 16LL * (*(_DWORD *)v49 + 2) + 312;
      }
      else
      {
LABEL_23:
        v50 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v50)(v47, v38, *(_QWORD *)(v50 + 8));
      if ( !lookup )
        goto LABEL_72;
      v56 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_72;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v24);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v60 = *(_QWORD *)&ImageLimit->max_length;
          if ( v60 )
          {
            if ( overLimit )
            {
              if ( (int)v60 < 1 )
                goto LABEL_67;
              v61 = 0;
              while ( ImageLimit->m_Items[v61 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v60 == ++v61 )
                  goto LABEL_67;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_2F5CB30 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_67;
            }
          }
        }
      }
      if ( condType && v56->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_67;
        lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_72;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v67,
                v66,
                condType,
                v63) )
          goto LABEL_67;
        if ( !v27 )
          goto LABEL_66;
        v62 = 1;
      }
      else if ( addCheck )
      {
        v62 = 1;
        if ( !v27 )
          goto LABEL_66;
      }
      else if ( v66 < 1 )
      {
        v62 = 0;
        if ( !v27 )
          goto LABEL_66;
      }
      else
      {
        v62 = v56->fields.condType == 0;
        if ( !v27 )
          goto LABEL_66;
      }
      if ( ServantCommentEntity__IsOpen(v56, -1, v62, v59) )
LABEL_66:
        v27 = (Il2CppObject *)v56;
LABEL_67:
      ++v66;
      v22 = sub_1B76268(string___TypeInfo, 5LL);
      lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v24 = (const MethodInfo *)lookup;
      if ( !v22 )
        goto LABEL_72;
    }
    if ( v27 )
    {
      if ( !v21 )
        goto LABEL_72;
      items = v21->fields._items;
      v52 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_72;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          v27,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v27;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v27, v44, v45);
      }
LABEL_46:
      v55 = v67;
      goto LABEL_47;
    }
    if ( v66 )
      goto LABEL_46;
    v55 = v67;
    if ( v67 != 1 )
      break;
LABEL_47:
    v66 = 0;
    v67 = v55 + 1;
    v22 = sub_1B76268(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v24 = (const MethodInfo *)lookup;
    v27 = 0LL;
    if ( !v22 )
      goto LABEL_72;
  }
  if ( !v21 )
LABEL_72:
    sub_1B7641C(lookup, v24);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v21,
                                         (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  int32_t v23; // w3
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x25
  __int64 v36; // x8
  __int64 v37; // x26
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x8
  __int64 v44; // x26
  __int64 v45; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v46; // x10
  __int64 v47; // x0
  ServantCommentEntity_o *v48; // x25
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v51; // x10
  __int64 v52; // x9
  char v53; // w8
  int v54; // w11
  const MethodInfo *v55; // x3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int32_t v60; // w8
  const MethodInfo *v61; // x5
  int32_t v65; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v66; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A2E5D9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B761C0(&string___TypeInfo, v16);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v17);
    byte_4A2E5D9 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v65 = 0;
  v66 = 1;
  v19 = sub_1B76268(string___TypeInfo, 5LL);
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
        goto LABEL_61;
      *(_QWORD *)(v19 + 32) = v21;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v21, v22, v23);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_61;
      v27 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 40), v27, v25, v26);
      lookup = (__int64)System_Int32__ToString((int32_t)&v66, 0LL);
      if ( *(_DWORD *)(v19 + 24) <= 2u
        || (*(_QWORD *)(v19 + 48) = lookup,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 48), lookup, v28, v29),
            *(_DWORD *)(v19 + 24) <= 3u)
        || (v32 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v19 + 56) = StringLiteral_1544/*":"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 56), v32, v30, v31),
            lookup = (__int64)System_Int32__ToString((int32_t)&v65, 0LL),
            *(_DWORD *)(v19 + 24) <= 4u) )
      {
LABEL_61:
        sub_1B76424(lookup, v21);
      }
      *(_QWORD *)(v19 + 64) = lookup;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v19 + 64), lookup, v33, v34);
      v35 = System_String__Concat_61548588((System_String_array *)v19, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v36 = *(_QWORD *)lookup;
      v37 = lookup;
      v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v40 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v35, *(_QWORD *)(v40 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v43 = *(_QWORD *)lookup;
      v44 = lookup;
      v45 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v46 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v47 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v47)(v44, v35, *(_QWORD *)(v47 + 8));
      if ( !lookup )
        goto LABEL_60;
      v48 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_60;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v21);
      if ( ImageLimit )
      {
        v51 = *(_QWORD *)&ImageLimit->max_length;
        if ( v51 )
        {
          if ( (int)v51 >= 1 )
          {
            v52 = 0LL;
            v53 = 0;
            do
            {
              v54 = ImageLimit->m_Items[++v52];
              v53 |= v54 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v52 );
            if ( (v53 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_2F5CB30 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v48->fields.condType == condType )
                goto LABEL_56;
              if ( addCheck )
              {
                lookup = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v66,
                       v65,
                       condType,
                       v61) )
                {
LABEL_56:
                  if ( !v24 || ServantCommentEntity__IsOpen(v48, -1, 1, v55) )
                    v24 = (Il2CppObject *)v48;
                }
              }
            }
          }
        }
      }
      ++v65;
      v19 = sub_1B76268(string___TypeInfo, 5LL);
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
      v57 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v24,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v24;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v24, v41, v42);
      }
LABEL_46:
      v60 = v66;
      goto LABEL_47;
    }
    if ( v65 )
      goto LABEL_46;
    v60 = v66;
    if ( v66 != 1 )
      break;
LABEL_47:
    v65 = 0;
    v66 = v60 + 1;
    v19 = sub_1B76268(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v21 = (const MethodInfo *)lookup;
    v24 = 0LL;
    if ( !v19 )
      goto LABEL_60;
  }
  if ( !v18 )
LABEL_60:
    sub_1B7641C(lookup, v21);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_int__o *v28; // x25
  System_Collections_Generic_List_int__o *v29; // x26
  __int64 v30; // x28
  int32_t v31; // w2
  int32_t v32; // w3
  ServantCommentEntity_o *v33; // x27
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x28
  __int64 v45; // x8
  __int64 v46; // x29
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x8
  __int64 v52; // x29
  __int64 v53; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v54; // x10
  __int64 v55; // x0
  ServantCommentEntity_o *v56; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v58; // x3
  __int64 v59; // x8
  int v60; // w29
  int v61; // w8
  int v62; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  int v72; // w8
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  System_Int32_array *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_Int32_array *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_List_int__o *v83; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v84; // [xsp+20h] [xbp-80h]
  __int64 v85; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4A2E5DE & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Clear__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B761C0(&NetworkManager_TypeInfo, v17);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v18);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B761C0(&string___TypeInfo, v20);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v21);
    byte_4A2E5DE = 1;
  }
  v85 = 0LL;
  entity = 0LL;
  v84 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v84,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  v83 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v83,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v26 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_98;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_98;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v26,
                                   v27);
  }
  HIDWORD(v85) = 1;
  while ( 2 )
  {
    LODWORD(v85) = 0;
    v28 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
    v29 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
    v30 = sub_1B76268(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v30 )
      goto LABEL_98;
    id = Instance;
    v33 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v30 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v30 + 32) = id;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 32), id, v31, v32);
      if ( *(_DWORD *)(v30 + 24) <= 1u )
        goto LABEL_99;
      v36 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v30 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 40), v36, v34, v35);
      Instance = (__int64)System_Int32__ToString((int32_t)&v85 + 4, 0LL);
      if ( *(_DWORD *)(v30 + 24) <= 2u
        || (*(_QWORD *)(v30 + 48) = Instance,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 48), Instance, v37, v38),
            *(_DWORD *)(v30 + 24) <= 3u)
        || (v41 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v30 + 56) = StringLiteral_1544/*":"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 56), v41, v39, v40),
            Instance = (__int64)System_Int32__ToString((int32_t)&v85, 0LL),
            *(_DWORD *)(v30 + 24) <= 4u) )
      {
LABEL_99:
        sub_1B76424(Instance, id);
      }
      *(_QWORD *)(v30 + 64) = Instance;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v30 + 64), Instance, v42, v43);
      v44 = System_String__Concat_61548588((System_String_array *)v30, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v45 = *(_QWORD *)Instance;
      v46 = Instance;
      v47 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_28;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_28:
        v49 = sub_1BC81A0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v51 = *(_QWORD *)Instance;
      v52 = Instance;
      v53 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v54 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *(v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v53;
          v54 += 2;
          if ( !v53 )
            goto LABEL_36;
        }
        v55 = v51 + 16LL * (*(_DWORD *)v54 + 2) + 312;
      }
      else
      {
LABEL_36:
        v55 = sub_1BC81A0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v44, *(_QWORD *)(v55 + 8));
      if ( !Instance )
        goto LABEL_98;
      v56 = (ServantCommentEntity_o *)Instance;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_98;
      }
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v59 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v56, -1, 0, v58) )
          v33 = v56;
        goto LABEL_71;
      }
      if ( !(_DWORD)v59 )
        goto LABEL_99;
      v60 = *(_DWORD *)(Instance + 32);
      if ( v60 < 3 || ServantLimitCountSealAfter >= v60 )
      {
        Instance = ServantCommentEntity__IsOpen(v56, -1, 0, v58);
        if ( (Instance & 1) != 0 )
          v33 = v56;
        if ( !v33 )
          goto LABEL_71;
      }
      else if ( !v33 )
      {
        goto LABEL_71;
      }
      if ( v60 == 1 )
      {
        if ( !v28 )
          goto LABEL_98;
        v61 = v28->fields._version + 1;
        v28->fields._size = 0;
        v28->fields._version = v61;
        if ( !v29 )
          goto LABEL_98;
        v62 = v29->fields._version + 1;
        v29->fields._size = 0;
        v29->fields._version = v62;
        Instance = ServantCommentEntity__IsNew(v33, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
      }
      else
      {
        Instance = ServantCommentEntity__IsNew(v33, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
        if ( !v28 )
          goto LABEL_98;
      }
      id = (unsigned int)v33->fields.id;
      items = v28->fields._items;
      v64 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          id,
          *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v29 )
        goto LABEL_98;
      id = (unsigned int)v33->fields.priority;
      v66 = v29->fields._items;
      v67 = Method_System_Collections_Generic_List_int__Add__;
      ++v29->fields._version;
      if ( !v66 )
        goto LABEL_98;
      v68 = v29->fields._size;
      if ( (unsigned int)v68 >= v66->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v29,
          id,
          *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
LABEL_70:
        v33 = 0LL;
        goto LABEL_71;
      }
      v33 = 0LL;
      v29->fields._size = v68 + 1;
      v66->m_Items[v68 + 1] = id;
LABEL_71:
      LODWORD(v85) = v85 + 1;
      v30 = sub_1B76268(string___TypeInfo, 5LL);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v30 )
        goto LABEL_98;
    }
    if ( v33 )
    {
      if ( !ServantCommentEntity__IsNew(v33, v50) )
        goto LABEL_92;
      Instance = (__int64)v84;
      if ( !v84 )
        goto LABEL_98;
      id = (unsigned int)v33->fields.id;
      v69 = v84->fields._items;
      v70 = Method_System_Collections_Generic_List_int__Add__;
      ++v84->fields._version;
      if ( !v69 )
        goto LABEL_98;
      v71 = v84->fields._size;
      if ( (unsigned int)v71 >= v69->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v84,
          id,
          *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v84->fields._size = v71 + 1;
        v69->m_Items[v71 + 1] = id;
      }
      Instance = (__int64)v83;
      if ( !v83 )
        goto LABEL_98;
      id = (unsigned int)v33->fields.priority;
      v73 = v83->fields._items;
      v74 = Method_System_Collections_Generic_List_int__Add__;
      ++v83->fields._version;
      if ( !v73 )
        goto LABEL_98;
      v75 = v83->fields._size;
      if ( (unsigned int)v75 >= v73->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v83,
          id,
          *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v83->fields._size = v75 + 1;
        v73->m_Items[v75 + 1] = id;
      }
LABEL_92:
      v72 = HIDWORD(v85);
LABEL_93:
      HIDWORD(v85) = v72 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v28, 0LL) )
  {
    Instance = (__int64)v84;
    if ( v84 )
    {
      System_Collections_Generic_List_int___AddRange(
        v84,
        (System_Collections_Generic_IEnumerable_T__o *)v28,
        (const MethodInfo_34BA7BC *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v83;
      if ( v83 )
      {
        System_Collections_Generic_List_int___AddRange(
          v83,
          (System_Collections_Generic_IEnumerable_T__o *)v29,
          (const MethodInfo_34BA7BC *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_92;
      }
    }
    goto LABEL_98;
  }
  if ( (_DWORD)v85 )
    goto LABEL_92;
  v72 = HIDWORD(v85);
  if ( HIDWORD(v85) == 1 )
    goto LABEL_93;
  Instance = (__int64)v84;
  if ( !v84
    || (v76 = System_Collections_Generic_List_int___ToArray(
                v84,
                (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v76,
        sub_1B76164((ServantStatusBattleListViewItem_o *)idList, (int32_t)v76, v77, v78),
        (Instance = (__int64)v83) == 0)
    || (v79 = System_Collections_Generic_List_int___ToArray(
                v83,
                (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__),
        *priorityList = v79,
        sub_1B76164((ServantStatusBattleListViewItem_o *)priorityList, (int32_t)v79, v80, v81),
        !*idList) )
  {
LABEL_98:
    sub_1B7641C(Instance, id);
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
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x22
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x22
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Int32_array *v49; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-54h] BYREF

  v51 = svtId;
  if ( (byte_4A2E5E1 & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v8);
    sub_1B761C0(&string___TypeInfo, v9);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v10);
    byte_4A2E5E1 = 1;
  }
  v49 = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v49, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v15 = idList;
    if ( !idList )
LABEL_41:
      sub_1B7641C(NewList, v14);
    v16 = 0LL;
    while ( (__int64)v16 < (int)v15->max_length )
    {
      v17 = sub_1B76268(string___TypeInfo, 5LL);
      NewList = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( !v17 )
        goto LABEL_41;
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_43;
      *(_QWORD *)(v17 + 32) = NewList;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 32), NewList, v18, v19);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_43;
      v22 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 40), v22, v20, v21);
      if ( !idList )
        goto LABEL_41;
      if ( v16 >= idList->max_length )
        goto LABEL_43;
      NewList = (__int64)System_Int32__ToString((int)idList + 4 * (int)v16 + 32, 0LL);
      if ( *(_DWORD *)(v17 + 24) <= 2u )
        goto LABEL_43;
      *(_QWORD *)(v17 + 48) = NewList;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 48), NewList, v23, v24);
      if ( *(_DWORD *)(v17 + 24) <= 3u )
        goto LABEL_43;
      v27 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v17 + 56) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 56), v27, v25, v26);
      if ( !v49 )
        goto LABEL_41;
      if ( v16 >= v49->max_length
        || (NewList = (__int64)System_Int32__ToString((int)v49 + 4 * (int)v16 + 32, 0LL), *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_43:
        sub_1B76424(NewList, v14);
      }
      *(_QWORD *)(v17 + 64) = NewList;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 64), NewList, v28, v29);
      v30 = System_String__Concat_61548588((System_String_array *)v17, 0LL);
      NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !NewList )
        goto LABEL_41;
      v31 = *(_QWORD *)NewList;
      v32 = NewList;
      v33 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v35 = sub_1BC81A0(NewList, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(v32, v30, *(_QWORD *)(v35 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !NewList )
          goto LABEL_41;
        v36 = *(_QWORD *)NewList;
        v37 = NewList;
        v38 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176)
                                                                                            + 8LL);
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
          v40 = sub_1BC81A0(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v30, *(_QWORD *)(v40 + 8));
        if ( NewList )
        {
          v14 = NewList;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( !v11 )
              goto LABEL_41;
            items = v11->fields._items;
            v45 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)NewList,
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v14;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v47 + 4), v14, v41, v42);
            }
          }
        }
      }
      v15 = idList;
      ++v16;
      if ( !idList )
        goto LABEL_41;
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
  int32_t v16; // w3
  Il2CppObject *v17; // x21
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
  System_String_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x23
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  __int64 v37; // x23
  __int64 v38; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x10
  __int64 v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int v45; // w8
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x22
  __int64 methodPtr_low; // x10
  int v50; // [xsp+4h] [xbp-6Ch] BYREF
  int v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF

  v52 = svtId;
  if ( (byte_4A2E5DA & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v8);
    sub_1B761C0(&string___TypeInfo, v9);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v10);
    byte_4A2E5DA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v50 = 0;
  v51 = 1;
  v12 = sub_1B76268(string___TypeInfo, 5LL);
  lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
  if ( !v12 )
    goto LABEL_47;
  v14 = lookup;
  v17 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_46;
      *(_QWORD *)(v12 + 32) = v14;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 32), v14, v15, v16);
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_46;
      v20 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v12 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 40), v20, v18, v19);
      lookup = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
      if ( *(_DWORD *)(v12 + 24) <= 2u
        || (*(_QWORD *)(v12 + 48) = lookup,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 48), lookup, v21, v22),
            *(_DWORD *)(v12 + 24) <= 3u)
        || (v25 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v12 + 56) = StringLiteral_1544/*":"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 56), v25, v23, v24),
            lookup = (__int64)System_Int32__ToString((int32_t)&v50, 0LL),
            *(_DWORD *)(v12 + 24) <= 4u) )
      {
LABEL_46:
        sub_1B76424(lookup, v14);
      }
      *(_QWORD *)(v12 + 64) = lookup;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 64), lookup, v26, v27);
      v28 = System_String__Concat_61548588((System_String_array *)v12, 0LL);
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_47;
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
        v33 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v28, *(_QWORD *)(v33 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v36 = *(_QWORD *)lookup;
        v37 = lookup;
        v38 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v36 + 176)
                                                                                            + 8LL);
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
          v40 = sub_1BC81A0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v40)(v37, v28, *(_QWORD *)(v40 + 8));
        if ( lookup )
        {
          v47 = (Il2CppObject *)lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v46) )
              v17 = v47;
            ++v50;
            v12 = sub_1B76268(string___TypeInfo, 5LL);
            lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
            v14 = lookup;
            if ( v12 )
              continue;
          }
        }
      }
      goto LABEL_47;
    }
    if ( v17 )
    {
      if ( !v11 )
        goto LABEL_47;
      items = v11->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_47;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v17,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v17;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v17, v34, v35);
      }
LABEL_41:
      v45 = v51;
      goto LABEL_42;
    }
    if ( v50 )
      goto LABEL_41;
    v45 = v51;
    if ( v51 != 1 )
      break;
LABEL_42:
    v50 = 0;
    v51 = v45 + 1;
    v12 = sub_1B76268(string___TypeInfo, 5LL);
    lookup = (__int64)System_Int32__ToString((int32_t)&v52, 0LL);
    v14 = lookup;
    v17 = 0LL;
    if ( !v12 )
      goto LABEL_47;
  }
  if ( !v11 )
LABEL_47:
    sub_1B7641C(lookup, v14);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  ServantCommentEntity_c *svtId; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v21; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v24; // w26
  int32_t v25; // w27
  ServantCommentEntity_o *v26; // x28
  __int64 methodPtr_low; // x9
  int32_t m_CachedPtr; // w29
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x24
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  ServantCommentMaster_o *v40; // x0
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  ServantLimitImageMaster_o *v44; // [xsp+8h] [xbp-88h]
  UserServantCollectionMaster_o *v45; // [xsp+10h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A2E5DF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B761C0(&NetworkManager_TypeInfo, v15);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A2E5DF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v44 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v45 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_34:
    sub_1B7641C(Instance, svtId);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v21;
  v24 = Count;
  v25 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_34;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v25,
                                  (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_34;
    svtId = ServantCommentEntity_TypeInfo;
    v26 = (ServantCommentEntity_o *)Instance;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v21 )
      goto LABEL_34;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v21,
            m_CachedPtr,
            (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, (const MethodInfo *)svtId);
      if ( !ImageLimit )
        goto LABEL_38;
      v31 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_38;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v45;
      if ( !v45 )
        goto LABEL_34;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v45, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_38;
      if ( !entity )
        goto LABEL_34;
      Instance = (DataManager_o *)v44;
      if ( !v44 )
        goto LABEL_34;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v44,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     v30);
      if ( (System_Array__IndexOf_int_(
              v31,
              ServantLimitCountSealAfter,
              (const MethodInfo_2F5CB30 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_38:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v26, questId, questPhase, v30) )
          goto LABEL_39;
        Instance = (DataManager_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_34;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               (ServantCommentAddMaster_o *)MasterData_object,
               m_CachedPtr,
               v26->fields.id,
               v26->fields.priority,
               1,
               questId,
               questPhase,
               v35) )
        {
LABEL_39:
          Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v26, -1, 1, v34);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            svtId = (ServantCommentEntity_c *)(unsigned int)v26->fields.svtId;
            items = v21->fields._items;
            v37 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                (int32_t)svtId,
                *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
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
  sub_1B766DC(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v40,
                                                     v41,
                                                     v42,
                                                     v43);
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
  __int64 v14; // x1
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v16; // x22
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v19; // w24
  int32_t v20; // w25
  const MethodInfo *v21; // x3
  ServantCommentEntity_o *v22; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x7
  const MethodInfo *v26; // x1
  bool IsOpen; // w27
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  ServantCommentMaster_o *v35; // x0
  int32_t v36; // w1
  const MethodInfo *v37; // x2

  if ( (byte_4A2E5E0 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1B761C0(&DataManager_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1B761C0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v14);
    byte_4A2E5E0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_26:
    if ( v16 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v16,
                                             (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_28:
    sub_1B7641C(list, v17);
  }
  v19 = (int)list;
  v20 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v20,
                                                               (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v22 = (ServantCommentEntity_o *)list;
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
                                                               v21);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_15;
    if ( !Master_object )
      goto LABEL_28;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           (ServantCommentAddMaster_o *)Master_object,
           v22->fields.svtId,
           v22->fields.id,
           v22->fields.priority,
           1,
           questId,
           questPhase,
           v25) )
    {
LABEL_15:
      IsOpen = ServantCommentEntity__IsOpen(v22, -1, 1, v24);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v22, v26);
    if ( list && IsOpen && list[1].klass )
    {
      if ( !v16 )
        goto LABEL_28;
      items = v16->fields._items;
      v31 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v22,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v22;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v22, v28, v29);
      }
    }
    if ( v19 == ++v20 )
      goto LABEL_26;
  }
  sub_1B766DC(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v35, v36, v37);
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
  int32_t v11; // w3
  ServantCommentEntity_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x10
  __int64 v34; // x0
  int v35; // w8
  const MethodInfo *v36; // x3
  ServantCommentEntity_o *v37; // x21
  __int64 methodPtr_low; // x10
  int v40; // [xsp+Ch] [xbp-54h] BYREF
  int v41; // [xsp+18h] [xbp-48h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-44h] BYREF

  v42 = svtId;
  if ( (byte_4A2E5DD & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v4);
    sub_1B761C0(&string___TypeInfo, v5);
    sub_1B761C0(&StringLiteral_1544/*":"*/, v6);
    byte_4A2E5DD = 1;
  }
  v41 = 1;
  v40 = 0;
  v7 = sub_1B76268(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
  if ( !v7 )
LABEL_42:
    sub_1B7641C(lookup, v9);
  v9 = lookup;
  v12 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v7 + 32) = v9;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v9, v10, v11);
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_41;
      v15 = StringLiteral_1544/*":"*/;
      *(_QWORD *)(v7 + 40) = StringLiteral_1544/*":"*/;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 40), v15, v13, v14);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v41, 0LL);
      if ( *(_DWORD *)(v7 + 24) <= 2u
        || (*(_QWORD *)(v7 + 48) = lookup,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)lookup, v16, v17),
            *(_DWORD *)(v7 + 24) <= 3u)
        || (v20 = StringLiteral_1544/*":"*/,
            *(_QWORD *)(v7 + 56) = StringLiteral_1544/*":"*/,
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 56), v20, v18, v19),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v40, 0LL),
            *(_DWORD *)(v7 + 24) <= 4u) )
      {
LABEL_41:
        sub_1B76424(lookup, v9);
      }
      *(_QWORD *)(v7 + 64) = lookup;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)lookup, v21, v22);
      v23 = System_String__Concat_61548588((System_String_array *)v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v25 = lookup;
      v26 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
        v28 = sub_1BC81A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v28)(
              v25,
              v23,
              *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v30 = lookup->klass;
        v31 = lookup;
        v32 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
          while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
          v34 = sub_1BC81A0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v34)(
                                             v31,
                                             v23,
                                             *(_QWORD *)(v34 + 8));
        if ( lookup )
        {
          v37 = lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v36) )
              v12 = v37;
            ++v40;
            v7 = sub_1B76268(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
            v9 = lookup;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_42;
    }
    if ( v12 )
    {
      if ( ServantCommentEntity__IsNew(v12, v29) )
        return v12 != 0LL;
      goto LABEL_28;
    }
    if ( !v40 )
      break;
LABEL_28:
    v35 = v41;
LABEL_29:
    v41 = v35 + 1;
    v40 = 0;
    v7 = sub_1B76268(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v42, 0LL);
    v9 = lookup;
    v12 = 0LL;
    if ( !v7 )
      goto LABEL_42;
  }
  v35 = v41;
  if ( v41 == 1 )
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
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v22; // w22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  ServantCommentEntity_o *v27; // x0
  __int64 v28; // x1
  ServantCommentEntity_o *v29; // x23
  __int64 methodPtr_low; // x9
  System_Int32_array *ImageLimit; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x25
  System_Collections_Generic_List_int__o *v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A2E5E2 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1B761C0(&System_IDisposable_TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor___75854368, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v14);
    byte_4A2E5E2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1B7641C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_309D0A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B7641C(0LL, v16);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v22 & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_1BC81A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                      Enumerator,
                                      *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v27->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_1B766DC(v27);
LABEL_39:
      sub_1B7641C(v27, v28);
    }
    if ( v27->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v27, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v32 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v33 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_55287428(
            v33,
            v32,
            (const MethodInfo_34B9E84 *)Method_System_Collections_Generic_List_int___ctor___75854368);
          if ( !v33 )
            sub_1B7641C(v34, v35);
          System_Collections_Generic_List_int___Sort(
            v33,
            (const MethodInfo_34BBEF4 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v29, -1, 1, v36) )
          {
            goto LABEL_31;
          }
        }
      }
    }
  }
  v22 = 0;
LABEL_31:
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_35;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_35:
    v40 = sub_1BC81A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return v22 & 1;
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
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x3
  System_String_o *v29; // x20
  Il2CppObject *Name; // x0
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  CommonConfirmDialog_ClickDelegate_o *v35; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A2E5E3 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B761C0(&DataManager_TypeInfo, v11);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_1B761C0(&LocalizationManager_TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B761C0(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_1B761C0(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo, v16);
    sub_1B761C0(&StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_1B761C0(&StringLiteral_10840/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_1B761C0(&StringLiteral_1/*""*/, v19);
    sub_1B761C0(&StringLiteral_10838/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_4A2E5E3 = 1;
  }
  entity = 0LL;
  v21 = sub_1B7640C(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)decideAction, v24, v25);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)endAction, v26, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10841/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v29 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, v28);
  v31 = System_String__Format(v29, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10840/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10838/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v35,
    (Il2CppObject *)v21,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1B7641C(Master_object, v23);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v31,
    v33,
    v34,
    v35,
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
  if ( (byte_4A2E5DB & 1) == 0 )
  {
    sub_1B761C0(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A2E5DB = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_39444936(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4A2E5DC & 1) == 0 )
  {
    sub_1B761C0(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4A2E5DC = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_40295424(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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

  if ( (byte_4A2E5D6 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_1B761C0(&ServantCommentEntity_TypeInfo, v11);
    byte_4A2E5D6 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19BDF94;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19BDF24;
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
  if ( (byte_4A2E5E5 & 1) == 0 )
  {
    sub_1B761C0(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_1B761C0(&int_TypeInfo, v12);
    byte_4A2E5E5 = 1;
  }
  v20[4] = 0LL;
  v20[0] = j_il2cpp_value_box_0(int_TypeInfo, &v23, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v20[1] = j_il2cpp_value_box_0(int_TypeInfo, &v22, v13, v14, v15);
  v20[2] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v16, v17, v18);
  v20[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1B76174(this, v20, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
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
  int32_t v14; // w3

  if ( (byte_4A2E5E6 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDcd);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B761C0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_4A2E5E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !v10 )
    sub_1B7641C(Instance, v8);
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

  if ( (byte_4A2E5E7 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A2E5E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1B7641C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}