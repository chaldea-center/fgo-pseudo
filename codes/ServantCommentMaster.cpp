void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCC3E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
    byte_4BDCC3E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_325E55C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
}


void __fastcall ServantCommentMaster__DefaultProfileChangeDecideAction(
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v9; // x20
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Master_object; // x23
  CommonUI_o *v19; // x21
  Il2CppObject *v20; // x0
  UserServantCollectionEntity_o *v21; // x21
  CommonUI_o *v22; // x22
  ServantStatusDialog_EndDelegate_o *v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDCC4B & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__);
    sub_1C21E38(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
    byte_4BDCC4B = 1;
  }
  entity = 0LL;
  v9 = sub_1C22084(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_23;
  *(_QWORD *)(v9 + 16) = endAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)endAction, v12, v13, v14, v15, v16, v17);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v19 )
      {
        CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0LL);
          v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = entity;
          v22 = (CommonUI_o *)v20;
          v23 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v23,
            (Il2CppObject *)v9,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v22 )
          {
            CommonUI__OpenServantStatusDialog_31140128(v22, 33, v21, limitCount, v23, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_1C22094(Instance, v11);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_31128756(Instance, *(System_Action_o **)(v9 + 16), 0LL);
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

  if ( (byte_4BDCC3C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
    sub_1C21E38(&ServantCommentEntity_TypeInfo);
    byte_4BDCC3C = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3260880 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  System_Collections_Generic_List_object__o *v10; // x24
  __int64 v11; // x26
  int64_t lookup; // x0
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x25
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_String_o *v47; // x26
  __int64 v48; // x8
  int64_t v49; // x27
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  int64_t v60; // x27
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
  __int64 v72; // x8
  int v73; // w9
  char v74; // w2
  const MethodInfo *v75; // x5
  int32_t v79; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v80; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4BDCC3F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC3F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v79 = 0;
  v80 = 1;
  v11 = sub_1C21EE0(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v11 )
    goto LABEL_70;
  v13 = (const MethodInfo *)lookup;
  v20 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v11 + 32) = v13;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v13, v14, v15, v16, v17, v18, v19);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_69;
      v27 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), v27, v21, v22, v23, v24, v25, v26);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v80, 0LL);
      if ( *(_DWORD *)(v11 + 24) <= 2u
        || (*(_QWORD *)(v11 + 48) = lookup,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 48), lookup, v28, v29, v30, v31, v32, v33),
            *(_DWORD *)(v11 + 24) <= 3u)
        || (v40 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v11 + 56) = StringLiteral_1546/*":"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 56), v40, v34, v35, v36, v37, v38, v39),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v79, 0LL),
            *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_69:
        sub_1C2209C(lookup, v13);
      }
      *(_QWORD *)(v11 + 64) = lookup;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 64), lookup, v41, v42, v43, v44, v45, v46);
      v47 = System_String__Concat_63129004((System_String_array *)v11, 0LL);
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v52 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v52)(v49, v47, *(_QWORD *)(v52 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v63 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v63)(v60, v47, *(_QWORD *)(v63 + 8));
      if ( !lookup )
        goto LABEL_70;
      v69 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v13);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v72 = *(_QWORD *)&ImageLimit->max_length;
          if ( v72 )
          {
            if ( overLimit )
            {
              if ( (int)v72 < 1 )
                goto LABEL_65;
              v73 = 0;
              while ( ImageLimit->m_Items[v73 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v72 == ++v73 )
                  goto LABEL_65;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
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
        lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_70;
        lookup = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
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
      v11 = sub_1C21EE0(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v20,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v20;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v20, v53, v54, v55, v56, v57, v58);
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
    v11 = sub_1C21EE0(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v13 = (const MethodInfo *)lookup;
    v20 = 0LL;
    if ( !v11 )
      goto LABEL_70;
  }
  if ( !v10 )
LABEL_70:
    sub_1C22094(lookup, v13);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  int64_t lookup; // x0
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *v18; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_String_o *v45; // x25
  __int64 v46; // x8
  int64_t v47; // x26
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x8
  int64_t v58; // x26
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v60; // x10
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x25
  System_Int32_array *ImageLimit; // x0
  __int64 v64; // x10
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
  if ( (byte_4BDCC40 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC40 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v78 = 0;
  v79 = 1;
  v9 = sub_1C21EE0(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v9 )
    goto LABEL_60;
  v11 = (const MethodInfo *)lookup;
  v18 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v9 + 24) )
        goto LABEL_59;
      *(_QWORD *)(v9 + 32) = v11;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)v11, v12, v13, v14, v15, v16, v17);
      if ( *(_DWORD *)(v9 + 24) <= 1u )
        goto LABEL_59;
      v25 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v9 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), v25, v19, v20, v21, v22, v23, v24);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v79, 0LL);
      if ( *(_DWORD *)(v9 + 24) <= 2u
        || (*(_QWORD *)(v9 + 48) = lookup,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), lookup, v26, v27, v28, v29, v30, v31),
            *(_DWORD *)(v9 + 24) <= 3u)
        || (v38 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v9 + 56) = StringLiteral_1546/*":"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 56), v38, v32, v33, v34, v35, v36, v37),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v78, 0LL),
            *(_DWORD *)(v9 + 24) <= 4u) )
      {
LABEL_59:
        sub_1C2209C(lookup, v11);
      }
      *(_QWORD *)(v9 + 64) = lookup;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), lookup, v39, v40, v41, v42, v43, v44);
      v45 = System_String__Concat_63129004((System_String_array *)v9, 0LL);
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v50 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v50)(v47, v45, *(_QWORD *)(v50 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v61 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v61)(v58, v45, *(_QWORD *)(v61 + 8));
      if ( !lookup )
        goto LABEL_60;
      v62 = (ServantCommentEntity_o *)lookup;
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v11);
      if ( ImageLimit )
      {
        v64 = *(_QWORD *)&ImageLimit->max_length;
        if ( v64 )
        {
          if ( (int)v64 >= 1 )
          {
            v65 = 0LL;
            v66 = 0;
            do
            {
              v67 = ImageLimit->m_Items[++v65];
              v66 |= v67 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v65 );
            if ( (v66 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v62->fields.condType == condType )
                goto LABEL_50;
              if ( addCheck )
              {
                lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
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
      v9 = sub_1C21EE0(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v18,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v72[4] = (Il2CppClass *)v18;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v18, v51, v52, v53, v54, v55, v56);
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
    v9 = sub_1C21EE0(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v11 = (const MethodInfo *)lookup;
    v18 = 0LL;
    if ( !v9 )
      goto LABEL_60;
  }
  if ( !v8 )
LABEL_60:
    sub_1C22094(lookup, v11);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  int64_t id; // x1
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v13; // w24
  System_Collections_Generic_List_int__o *v14; // x25
  System_Collections_Generic_List_int__o *v15; // x26
  __int64 v16; // x28
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ServantCommentEntity_o *v23; // x27
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_String_o *v50; // x28
  __int64 v51; // x8
  int64_t v52; // x29
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  const MethodInfo *v56; // x1
  __int64 v57; // x8
  int64_t v58; // x29
  __int64 v59; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v60; // x10
  __int64 v61; // x0
  ServantCommentEntity_o *v62; // x28
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  int v65; // w29
  int v66; // w8
  int v67; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  int v77; // w8
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  System_Int32_array *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Int32_array *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  PartyOrganizationUtility_o *v96; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v97; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v98; // [xsp+20h] [xbp-80h]
  __int64 v99; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4BDCC45 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC45 = 1;
  }
  v99 = 0LL;
  entity = 0LL;
  v98 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v98,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v97 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v97,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
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
    v13 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_100;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v13,
                                   0LL);
  }
  v96 = (PartyOrganizationUtility_o *)priorityList;
  HIDWORD(v99) = 1;
  while ( 2 )
  {
    LODWORD(v99) = 0;
    v14 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v14,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    v15 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    v16 = sub_1C21EE0(string___TypeInfo, 5LL);
    Instance = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v16 )
      goto LABEL_100;
    id = Instance;
    v23 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v16 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v16 + 32) = id;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 32), id, v17, v18, v19, v20, v21, v22);
      if ( *(_DWORD *)(v16 + 24) <= 1u )
        goto LABEL_99;
      v30 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v16 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 40), v30, v24, v25, v26, v27, v28, v29);
      Instance = (int64_t)System_Int32__ToString((int32_t)&v99 + 4, 0LL);
      if ( *(_DWORD *)(v16 + 24) <= 2u
        || (*(_QWORD *)(v16 + 48) = Instance,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 48), Instance, v31, v32, v33, v34, v35, v36),
            *(_DWORD *)(v16 + 24) <= 3u)
        || (v43 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v16 + 56) = StringLiteral_1546/*":"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 56), v43, v37, v38, v39, v40, v41, v42),
            Instance = (int64_t)System_Int32__ToString((int32_t)&v99, 0LL),
            *(_DWORD *)(v16 + 24) <= 4u) )
      {
LABEL_99:
        sub_1C2209C(Instance, id);
      }
      *(_QWORD *)(v16 + 64) = Instance;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 64), Instance, v44, v45, v46, v47, v48, v49);
      v50 = System_String__Concat_63129004((System_String_array *)v16, 0LL);
      Instance = (int64_t)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v51 = *(_QWORD *)Instance;
      v52 = Instance;
      v53 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_32;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_32:
        v55 = sub_1C73E18(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8)) & 1) == 0 )
        break;
      Instance = (int64_t)DataMasterBase_object__object__object___get_lookup(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !Instance )
        goto LABEL_100;
      v57 = *(_QWORD *)Instance;
      v58 = Instance;
      v59 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v60 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)(*(_QWORD *)(v57 + 176)
                                                                                                + 8LL);
        while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_40;
        }
        v61 = v57 + 16LL * (*(_DWORD *)v60 + 2) + 312;
      }
      else
      {
LABEL_40:
        v61 = sub_1C73E18(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v61)(v58, v50, *(_QWORD *)(v61 + 8));
      if ( !Instance )
        goto LABEL_100;
      v62 = (ServantCommentEntity_o *)Instance;
      Instance = (int64_t)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v64 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v62, -1, 0, v63) )
          v23 = v62;
        goto LABEL_72;
      }
      if ( !(_DWORD)v64 )
        goto LABEL_99;
      v65 = *(_DWORD *)(Instance + 32);
      if ( v65 <= 2 )
      {
        Instance = ServantCommentEntity__IsOpen(v62, -1, 0, v63);
        if ( (Instance & 1) != 0 )
          goto LABEL_55;
      }
      else if ( ServantLimitCountSealAfter >= v65 )
      {
        Instance = ServantCommentEntity__IsOpen(v62, -1, 0, v63);
        if ( (Instance & 1) != 0 )
          goto LABEL_60;
      }
      v62 = v23;
      if ( !v23 )
        goto LABEL_72;
LABEL_55:
      if ( v65 == 1 )
      {
        if ( !v14 )
          goto LABEL_100;
        v66 = v14->fields._version + 1;
        v14->fields._size = 0;
        v14->fields._version = v66;
        if ( !v15 )
          goto LABEL_100;
        v67 = v15->fields._version + 1;
        v15->fields._size = 0;
        v15->fields._version = v67;
        Instance = ServantCommentEntity__IsNew(v62, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_71;
        goto LABEL_62;
      }
LABEL_60:
      Instance = ServantCommentEntity__IsNew(v62, (const MethodInfo *)id);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      if ( !v14 )
        goto LABEL_100;
LABEL_62:
      id = (unsigned int)v62->fields.id;
      items = v14->fields._items;
      v69 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_100;
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v15 )
        goto LABEL_100;
      id = (unsigned int)v62->fields.priority;
      v71 = v15->fields._items;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !v71 )
        goto LABEL_100;
      v73 = v15->fields._size;
      if ( (unsigned int)v73 >= v71->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
LABEL_71:
        v23 = 0LL;
        goto LABEL_72;
      }
      v23 = 0LL;
      v15->fields._size = v73 + 1;
      v71->m_Items[v73 + 1] = id;
LABEL_72:
      LODWORD(v99) = v99 + 1;
      v16 = sub_1C21EE0(string___TypeInfo, 5LL);
      Instance = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v16 )
        goto LABEL_100;
    }
    if ( v23 )
    {
      if ( !ServantCommentEntity__IsNew(v23, v56) )
        goto LABEL_93;
      Instance = (int64_t)v98;
      if ( !v98 )
        goto LABEL_100;
      id = (unsigned int)v23->fields.id;
      v74 = v98->fields._items;
      v75 = Method_System_Collections_Generic_List_int__Add__;
      ++v98->fields._version;
      if ( !v74 )
        goto LABEL_100;
      v76 = v98->fields._size;
      if ( (unsigned int)v76 >= v74->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v98,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v98->fields._size = v76 + 1;
        v74->m_Items[v76 + 1] = id;
      }
      Instance = (int64_t)v97;
      if ( !v97 )
        goto LABEL_100;
      id = (unsigned int)v23->fields.priority;
      v78 = v97->fields._items;
      v79 = Method_System_Collections_Generic_List_int__Add__;
      ++v97->fields._version;
      if ( !v78 )
        goto LABEL_100;
      v80 = v97->fields._size;
      if ( (unsigned int)v80 >= v78->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v97,
          id,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v97->fields._size = v80 + 1;
        v78->m_Items[v80 + 1] = id;
      }
LABEL_93:
      v77 = HIDWORD(v99);
LABEL_94:
      HIDWORD(v99) = v77 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v14, 0LL) )
  {
    Instance = (int64_t)v98;
    if ( v98 )
    {
      System_Collections_Generic_List_int___AddRange(
        v98,
        (System_Collections_Generic_IEnumerable_T__o *)v14,
        (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (int64_t)v97;
      if ( v97 )
      {
        System_Collections_Generic_List_int___AddRange(
          v97,
          (System_Collections_Generic_IEnumerable_T__o *)v15,
          (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_93;
      }
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v99 )
    goto LABEL_93;
  v77 = HIDWORD(v99);
  if ( HIDWORD(v99) == 1 )
    goto LABEL_94;
  Instance = (int64_t)v98;
  if ( !v98
    || (v81 = System_Collections_Generic_List_int___ToArray(
                v98,
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v81,
        sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v81, v82, v83, v84, v85, v86, v87),
        (Instance = (int64_t)v97) == 0)
    || (v88 = System_Collections_Generic_List_int___ToArray(
                v97,
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        v96->klass = (PartyOrganizationUtility_c *)v88,
        sub_1C21DDC(v96, (int64_t)v88, v89, v90, v91, v92, v93, v94),
        !*idList) )
  {
LABEL_100:
    sub_1C22094(Instance, id);
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
  int64_t NewList; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x8
  unsigned __int64 v10; // x23
  __int64 v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_String_o *v44; // x21
  __int64 v45; // x8
  int64_t v46; // x22
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  int64_t v51; // x22
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **v53; // x10
  __int64 v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  System_Int32_array *v67; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  v69 = svtId;
  if ( (byte_4BDCC48 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC48 = 1;
  }
  v67 = 0LL;
  idList = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v67, svtId, v6);
  if ( (NewList & 1) != 0 )
  {
    v9 = idList;
    if ( !idList )
LABEL_39:
      sub_1C22094(NewList, v8);
    v10 = 0LL;
    while ( (__int64)v10 < (int)v9->max_length )
    {
      v11 = sub_1C21EE0(string___TypeInfo, 5LL);
      NewList = (int64_t)System_Int32__ToString((int32_t)&v69, 0LL);
      if ( !v11 )
        goto LABEL_39;
      if ( !*(_DWORD *)(v11 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v11 + 32) = NewList;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 32), NewList, v12, v13, v14, v15, v16, v17);
      if ( *(_DWORD *)(v11 + 24) <= 1u )
        goto LABEL_41;
      v24 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v11 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 40), v24, v18, v19, v20, v21, v22, v23);
      if ( !idList )
        goto LABEL_39;
      if ( v10 >= idList->max_length )
        goto LABEL_41;
      NewList = (int64_t)System_Int32__ToString((int)idList + 4 * (int)v10 + 32, 0LL);
      if ( *(_DWORD *)(v11 + 24) <= 2u )
        goto LABEL_41;
      *(_QWORD *)(v11 + 48) = NewList;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 48), NewList, v25, v26, v27, v28, v29, v30);
      if ( *(_DWORD *)(v11 + 24) <= 3u )
        goto LABEL_41;
      v37 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v11 + 56) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 56), v37, v31, v32, v33, v34, v35, v36);
      if ( !v67 )
        goto LABEL_39;
      if ( v10 >= v67->max_length
        || (NewList = (int64_t)System_Int32__ToString((int)v67 + 4 * (int)v10 + 32, 0LL), *(_DWORD *)(v11 + 24) <= 4u) )
      {
LABEL_41:
        sub_1C2209C(NewList, v8);
      }
      *(_QWORD *)(v11 + 64) = NewList;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v11 + 64), NewList, v38, v39, v40, v41, v42, v43);
      v44 = System_String__Concat_63129004((System_String_array *)v11, 0LL);
      NewList = (int64_t)DataMasterBase_object__object__object___get_lookup(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                           (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v49 = sub_1C73E18(
                NewList,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v49)(v46, v44, *(_QWORD *)(v49 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (int64_t)DataMasterBase_object__object__object___get_lookup(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
          v54 = sub_1C73E18(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v54)(v51, v44, *(_QWORD *)(v54 + 8));
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)NewList,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v65[4] = (Il2CppClass *)v64;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
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


ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x22
  int64_t lookup; // x0
  int64_t v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_String_o *v41; // x22
  __int64 v42; // x8
  int64_t v43; // x23
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x8
  int64_t v54; // x23
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
  if ( (byte_4BDCC41 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC41 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v66 = 0;
  v67 = 1;
  v5 = sub_1C21EE0(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&v68, 0LL);
  if ( !v5 )
    goto LABEL_45;
  v7 = lookup;
  v14 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
        goto LABEL_44;
      *(_QWORD *)(v5 + 32) = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), v7, v8, v9, v10, v11, v12, v13);
      if ( *(_DWORD *)(v5 + 24) <= 1u )
        goto LABEL_44;
      v21 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v5 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), v21, v15, v16, v17, v18, v19, v20);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v67, 0LL);
      if ( *(_DWORD *)(v5 + 24) <= 2u
        || (*(_QWORD *)(v5 + 48) = lookup,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), lookup, v22, v23, v24, v25, v26, v27),
            *(_DWORD *)(v5 + 24) <= 3u)
        || (v34 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v5 + 56) = StringLiteral_1546/*":"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 56), v34, v28, v29, v30, v31, v32, v33),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v66, 0LL),
            *(_DWORD *)(v5 + 24) <= 4u) )
      {
LABEL_44:
        sub_1C2209C(lookup, v7);
      }
      *(_QWORD *)(v5 + 64) = lookup;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 64), lookup, v35, v36, v37, v38, v39, v40);
      v41 = System_String__Concat_63129004((System_String_array *)v5, 0LL);
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
        v46 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v46)(v43, v41, *(_QWORD *)(v46 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase_object__object__object___get_lookup(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
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
          v57 = sub_1C73E18(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v57)(v54, v41, *(_QWORD *)(v57 + 8));
        if ( lookup )
        {
          v64 = (Il2CppObject *)lookup;
          if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v63) )
            v14 = v64;
          ++v66;
          v5 = sub_1C21EE0(string___TypeInfo, 5LL);
          lookup = (int64_t)System_Int32__ToString((int32_t)&v68, 0LL);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v14,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v14, v47, v48, v49, v50, v51, v52);
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
    v5 = sub_1C21EE0(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&v68, 0LL);
    v7 = lookup;
    v14 = 0LL;
    if ( !v5 )
      goto LABEL_45;
  }
  if ( !v4 )
LABEL_45:
    sub_1C22094(lookup, v7);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v4,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *svtId; // x1
  Il2CppObject *MasterData_object; // x25
  System_Collections_Generic_List_int__o *v10; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v13; // w26
  int32_t v14; // w27
  int32_t m_CachedPtr; // w24
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

  if ( (byte_4BDCC46 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCommentAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC46 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  v28 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                       Instance,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v29 = (UserServantCollectionMaster_o *)Instance;
  if ( !list )
    goto LABEL_36;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v14,
                                    (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
      if ( !Instance || !v10 )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v16 = (ServantCommentEntity_o *)Instance;
      if ( !System_Collections_Generic_List_int___Contains(
              v10,
              m_CachedPtr,
              (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        ImageLimit = ServantCommentEntity__GetImageLimit(v16, svtId);
        if ( !ImageLimit )
          goto LABEL_39;
        v19 = ImageLimit;
        if ( !*(_QWORD *)&ImageLimit->max_length )
          goto LABEL_39;
        v20 = v29;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v29;
        }
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          v20 = v29;
          byte_4BD6FF5 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v20 = v29;
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !v20 )
          break;
        Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                      v20,
                                      &entity,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      m_CachedPtr,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_39;
        if ( !entity )
          break;
        Instance = (DataManager_o *)v28;
        if ( !v28 )
          break;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v28,
                                       m_CachedPtr,
                                       entity->fields.maxLimitCount,
                                       0LL);
        if ( (System_Array__IndexOf_int_(
                v19,
                ServantLimitCountSealAfter,
                (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
        {
LABEL_39:
          if ( ServantCommentEntity__IsOnlyOpenQuestCond(v16, questId, questPhase, v18) )
            goto LABEL_40;
          Instance = (DataManager_o *)MasterData_object;
          if ( !MasterData_object )
            break;
          if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
                 (ServantCommentAddMaster_o *)MasterData_object,
                 m_CachedPtr,
                 v16->fields.id,
                 v16->fields.priority,
                 1,
                 questId,
                 questPhase,
                 v23) )
          {
LABEL_40:
            Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v16, -1, 1, v22);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              svtId = (const MethodInfo *)(unsigned int)v16->fields.svtId;
              items = v10->fields._items;
              v25 = Method_System_Collections_Generic_List_int__Add__;
              ++v10->fields._version;
              if ( !items )
                break;
              size = v10->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v10,
                  (int32_t)svtId,
                  *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v10->fields._size = size + 1;
                items->m_Items[size + 1] = (int)svtId;
              }
            }
          }
        }
      }
      if ( v13 == ++v14 )
        return v10;
    }
LABEL_36:
    sub_1C22094(Instance, svtId);
  }
  return v10;
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
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x7
  const MethodInfo *v17; // x1
  bool IsOpen; // w27
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4BDCC47 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
    byte_4BDCC47 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
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
                                                                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Item__);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v14;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v14, v19, v20, v21, v22, v23, v24);
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C22094(list, v9);
  }
LABEL_24:
  if ( !v8 )
    goto LABEL_26;
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v8,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x21
  ServantCommentEntity_o *lookup; // x0
  int64_t v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ServantCommentEntity_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
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
  if ( (byte_4BDCC44 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
    sub_1C21E38(&System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDCC44 = 1;
  }
  v57 = 1;
  v56 = 0;
  v4 = sub_1C21EE0(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0LL);
  if ( !v4 )
LABEL_40:
    sub_1C22094(lookup, v6);
  v6 = (int64_t)lookup;
  v13 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 24) )
        goto LABEL_39;
      *(_QWORD *)(v4 + 32) = v6;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), v6, v7, v8, v9, v10, v11, v12);
      if ( *(_DWORD *)(v4 + 24) <= 1u )
        goto LABEL_39;
      v20 = StringLiteral_1546/*":"*/;
      *(_QWORD *)(v4 + 40) = StringLiteral_1546/*":"*/;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 40), v20, v14, v15, v16, v17, v18, v19);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v57, 0LL);
      if ( *(_DWORD *)(v4 + 24) <= 2u
        || (*(_QWORD *)(v4 + 48) = lookup,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 48), (int64_t)lookup, v21, v22, v23, v24, v25, v26),
            *(_DWORD *)(v4 + 24) <= 3u)
        || (v33 = StringLiteral_1546/*":"*/,
            *(_QWORD *)(v4 + 56) = StringLiteral_1546/*":"*/,
            sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 56), v33, v27, v28, v29, v30, v31, v32),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v56, 0LL),
            *(_DWORD *)(v4 + 24) <= 4u) )
      {
LABEL_39:
        sub_1C2209C(lookup, v6);
      }
      *(_QWORD *)(v4 + 64) = lookup;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 64), (int64_t)lookup, v34, v35, v36, v37, v38, v39);
      v40 = System_String__Concat_63129004((System_String_array *)v4, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( !lookup )
        goto LABEL_40;
      klass = lookup->klass;
      v42 = lookup;
      v43 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
        {
          --v43;
          p_offset += 4;
          if ( !v43 )
            goto LABEL_15;
        }
        v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v45 = sub_1C73E18(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v45)(
              v42,
              v40,
              *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase_object__object__object___get_lookup(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (const MethodInfo_325E674 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__get_lookup__);
      if ( lookup )
      {
        v47 = lookup->klass;
        v48 = lookup;
        v49 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v50 = (System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__c **)&v47->_1.interfaceOffsets->offset;
          while ( *(v50 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo )
          {
            --v49;
            v50 += 2;
            if ( !v49 )
              goto LABEL_23;
          }
          v51 = (__int64)(&v47->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v50);
        }
        else
        {
LABEL_23:
          v51 = sub_1C73E18(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__ServantCommentEntity__TypeInfo,
                  2LL);
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
          v4 = sub_1C21EE0(string___TypeInfo, 5LL);
          lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0LL);
          v6 = (int64_t)lookup;
          if ( v4 )
            continue;
        }
      }
      goto LABEL_40;
    }
    if ( v13 )
    {
      if ( ServantCommentEntity__IsNew(v13, v46) )
        return v13 != 0LL;
      goto LABEL_28;
    }
    if ( !v56 )
      break;
LABEL_28:
    v52 = v57;
LABEL_29:
    v57 = v52 + 1;
    v56 = 0;
    v4 = sub_1C21EE0(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v58, 0LL);
    v6 = (int64_t)lookup;
    v13 = 0LL;
    if ( !v4 )
      goto LABEL_40;
  }
  v52 = v57;
  if ( v57 == 1 )
    goto LABEL_29;
  return v13 != 0LL;
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

  if ( (byte_4BDCC49 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDCC49 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1C22094(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_ServantCommentEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v7);
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
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantCommentEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo )
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
      v17 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_ServantCommentEntity__TypeInfo, 0LL);
    }
    v18 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                      Enumerator,
                                      *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C22094(0LL, v19);
    if ( v18->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v18, v19);
      v22 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v23 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_56826212(
            v23,
            v22,
            (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
          if ( !v23 )
            sub_1C22094(v24, v25);
          System_Collections_Generic_List_int___Sort(
            v23,
            (const MethodInfo_36339D4 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v23,
                 0,
                 (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
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
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_33;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_33:
    v30 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x4
  System_String_o *v25; // x20
  Il2CppObject *Name; // x0
  System_String_o *v27; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v29; // x22
  System_String_o *v30; // x23
  CommonConfirmDialog_ClickDelegate_o *v31; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BDCC4A & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__);
    sub_1C21E38(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
    sub_1C21E38(&StringLiteral_11054/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/);
    sub_1C21E38(&StringLiteral_11053/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_11051/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/);
    byte_4BDCC4A = 1;
  }
  entity = 0LL;
  v9 = sub_1C22084(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = decideAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)decideAction, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = endAction;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)endAction, v18, v19, v20, v21, v22, v23);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v9 + 24),
    (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11054/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v25 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v9 + 28), -1, 0, v24);
  v27 = System_String__Format(v25, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11053/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11051/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)v9,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1C22094(Master_object, v11);
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
    0LL);
}


void __fastcall ServantCommentMaster__SetOpen(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        const MethodInfo *method)
{
  if ( (byte_4BDCC42 & 1) == 0 )
  {
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    byte_4BDCC42 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


void __fastcall ServantCommentMaster__SetOpen_40897736(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4BDCC43 & 1) == 0 )
  {
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    byte_4BDCC43 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_41763684(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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

  if ( (byte_4BDCC3D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
    sub_1C21E38(&ServantCommentEntity_TypeInfo);
    byte_4BDCC3D = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 4 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A63A7C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A63A0C;
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
  if ( (byte_4BDCC4C & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    byte_4BDCC4C = 1;
  }
  v19[4] = 0LL;
  v19[0] = j_il2cpp_value_box_0(int_TypeInfo, &v22, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v19[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14);
  v19[2] = j_il2cpp_value_box_0(bool_TypeInfo, v20, v15, v16, v17);
  v19[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v19, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDCC4D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__);
    byte_4BDCC4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
    sub_1C22094(Instance, v5);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20

  if ( (byte_4BDCC4E & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDCC4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
LABEL_8:
    sub_1C22094(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}