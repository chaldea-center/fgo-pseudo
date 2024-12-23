void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6729C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method);
    byte_4B6729C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *Master_object; // x23
  CommonUI_o *v26; // x21
  Il2CppObject *v27; // x0
  UserServantCollectionEntity_o *v28; // x21
  CommonUI_o *v29; // x22
  ServantStatusDialog_EndDelegate_o *v30; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B672A9 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__, v14);
    sub_1BE4ACC(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v15);
    byte_4B672A9 = 1;
  }
  entity = 0LL;
  v16 = sub_1BE4D18(ServantCommentMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = endAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)endAction, v19, v20, v21, v22, v23, v24);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v18);
      byte_4B61717 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v26 )
      {
        CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__CloseConfirmDialog(Instance, 0LL);
          v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = entity;
          v29 = (CommonUI_o *)v27;
          v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v30,
            (Il2CppObject *)v16,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v29 )
          {
            CommonUI__OpenServantStatusDialog_30885676(v29, 33, v28, limitCount, v30, 0LL);
            return;
          }
        }
      }
LABEL_23:
      sub_1BE4D28(Instance, v18);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_30874304(Instance, *(System_Action_o **)(v16 + 16), 0LL);
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

  if ( (byte_4B6729A & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v9);
    byte_4B6729A = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  int64_t lookup; // x0
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x25
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_String_o *v58; // x26
  __int64 v59; // x8
  int64_t v60; // x27
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  int64_t v71; // x27
  __int64 v72; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v73; // x10
  __int64 v74; // x0
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w8
  ServantCommentEntity_o *v80; // x26
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  int v85; // w9
  char v86; // w2
  const MethodInfo *v87; // x5
  int32_t v90; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v91; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B6729D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v11);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v16);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&string___TypeInfo, v19);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v20);
    byte_4B6729D = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v90 = 0;
  v91 = 1;
  v22 = sub_1BE4B74(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v22 )
    goto LABEL_72;
  v24 = (const MethodInfo *)lookup;
  v31 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v22 + 24) )
        goto LABEL_71;
      *(_QWORD *)(v22 + 32) = v24;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v24, v25, v26, v27, v28, v29, v30);
      if ( *(_DWORD *)(v22 + 24) <= 1u )
        goto LABEL_71;
      v38 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v22 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 40), v38, v32, v33, v34, v35, v36, v37);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v91, 0LL);
      if ( *(_DWORD *)(v22 + 24) <= 2u
        || (*(_QWORD *)(v22 + 48) = lookup,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 48), lookup, v39, v40, v41, v42, v43, v44),
            *(_DWORD *)(v22 + 24) <= 3u)
        || (v51 = StringLiteral_1542/*":"*/,
            *(_QWORD *)(v22 + 56) = StringLiteral_1542/*":"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 56), v51, v45, v46, v47, v48, v49, v50),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v90, 0LL),
            *(_DWORD *)(v22 + 24) <= 4u) )
      {
LABEL_71:
        sub_1BE4D30(lookup, v24);
      }
      *(_QWORD *)(v22 + 64) = lookup;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 64), lookup, v52, v53, v54, v55, v56, v57);
      v58 = System_String__Concat_62712336((System_String_array *)v22, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v59 = *(_QWORD *)lookup;
      v60 = lookup;
      v61 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_15;
        }
        v63 = v59 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_15:
        v63 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v63)(v60, v58, *(_QWORD *)(v63 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v70 = *(_QWORD *)lookup;
      v71 = lookup;
      v72 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v73 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *(v73 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v72;
          v73 += 2;
          if ( !v72 )
            goto LABEL_23;
        }
        v74 = v70 + 16LL * (*(_DWORD *)v73 + 2) + 312;
      }
      else
      {
LABEL_23:
        v74 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v74)(v71, v58, *(_QWORD *)(v74 + 8));
      if ( !lookup )
        goto LABEL_72;
      v80 = (ServantCommentEntity_o *)lookup;
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
          v84 = *(_QWORD *)&ImageLimit->max_length;
          if ( v84 )
          {
            if ( overLimit )
            {
              if ( (int)v84 < 1 )
                goto LABEL_67;
              v85 = 0;
              while ( ImageLimit->m_Items[v85 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v84 == ++v85 )
                  goto LABEL_67;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_67;
            }
          }
        }
      }
      if ( condType && v80->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_67;
        lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_72;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v91,
                v90,
                condType,
                v87) )
          goto LABEL_67;
        if ( !v31 )
          goto LABEL_66;
        v86 = 1;
      }
      else if ( addCheck )
      {
        v86 = 1;
        if ( !v31 )
          goto LABEL_66;
      }
      else if ( v90 < 1 )
      {
        v86 = 0;
        if ( !v31 )
          goto LABEL_66;
      }
      else
      {
        v86 = v80->fields.condType == 0;
        if ( !v31 )
          goto LABEL_66;
      }
      if ( ServantCommentEntity__IsOpen(v80, -1, v86, v83) )
LABEL_66:
        v31 = (Il2CppObject *)v80;
LABEL_67:
      ++v90;
      v22 = sub_1BE4B74(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v24 = (const MethodInfo *)lookup;
      if ( !v22 )
        goto LABEL_72;
    }
    if ( v31 )
    {
      if ( !v21 )
        goto LABEL_72;
      items = v21->fields._items;
      v76 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_72;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          v31,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v78[4] = (Il2CppClass *)v31;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v31, v64, v65, v66, v67, v68, v69);
      }
LABEL_46:
      v79 = v91;
      goto LABEL_47;
    }
    if ( v90 )
      goto LABEL_46;
    v79 = v91;
    if ( v91 != 1 )
      break;
LABEL_47:
    v90 = 0;
    v91 = v79 + 1;
    v22 = sub_1BE4B74(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v24 = (const MethodInfo *)lookup;
    v31 = 0LL;
    if ( !v22 )
      goto LABEL_72;
  }
  if ( !v21 )
LABEL_72:
    sub_1BE4D28(lookup, v24);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v21,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  int64_t lookup; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x24
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_String_o *v55; // x25
  __int64 v56; // x8
  int64_t v57; // x26
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  int64_t v68; // x26
  __int64 v69; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v70; // x10
  __int64 v71; // x0
  ServantCommentEntity_o *v72; // x25
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v75; // x10
  __int64 v76; // x9
  char v77; // w8
  int v78; // w11
  const MethodInfo *v79; // x3
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  int32_t v84; // w8
  const MethodInfo *v85; // x5
  int32_t v89; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v90; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B6729E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&string___TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v17);
    byte_4B6729E = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v89 = 0;
  v90 = 1;
  v19 = sub_1BE4B74(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v19 )
    goto LABEL_60;
  v21 = (const MethodInfo *)lookup;
  v28 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_61;
      *(_QWORD *)(v19 + 32) = v21;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v21, v22, v23, v24, v25, v26, v27);
      if ( *(_DWORD *)(v19 + 24) <= 1u )
        goto LABEL_61;
      v35 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v19 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 40), v35, v29, v30, v31, v32, v33, v34);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v90, 0LL);
      if ( *(_DWORD *)(v19 + 24) <= 2u
        || (*(_QWORD *)(v19 + 48) = lookup,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 48), lookup, v36, v37, v38, v39, v40, v41),
            *(_DWORD *)(v19 + 24) <= 3u)
        || (v48 = StringLiteral_1542/*":"*/,
            *(_QWORD *)(v19 + 56) = StringLiteral_1542/*":"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 56), v48, v42, v43, v44, v45, v46, v47),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v89, 0LL),
            *(_DWORD *)(v19 + 24) <= 4u) )
      {
LABEL_61:
        sub_1BE4D30(lookup, v21);
      }
      *(_QWORD *)(v19 + 64) = lookup;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 64), lookup, v49, v50, v51, v52, v53, v54);
      v55 = System_String__Concat_62712336((System_String_array *)v19, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v56 = *(_QWORD *)lookup;
      v57 = lookup;
      v58 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_15;
        }
        v60 = v56 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_15:
        v60 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v60)(v57, v55, *(_QWORD *)(v60 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v67 = *(_QWORD *)lookup;
      v68 = lookup;
      v69 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v70 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *(v70 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v69;
          v70 += 2;
          if ( !v69 )
            goto LABEL_23;
        }
        v71 = v67 + 16LL * (*(_DWORD *)v70 + 2) + 312;
      }
      else
      {
LABEL_23:
        v71 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v71)(v68, v55, *(_QWORD *)(v71 + 8));
      if ( !lookup )
        goto LABEL_60;
      v72 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_60;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v21);
      if ( ImageLimit )
      {
        v75 = *(_QWORD *)&ImageLimit->max_length;
        if ( v75 )
        {
          if ( (int)v75 >= 1 )
          {
            v76 = 0LL;
            v77 = 0;
            do
            {
              v78 = ImageLimit->m_Items[++v76];
              v77 |= v78 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v76 );
            if ( (v77 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v72->fields.condType == condType )
                goto LABEL_56;
              if ( addCheck )
              {
                lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v90,
                       v89,
                       condType,
                       v85) )
                {
LABEL_56:
                  if ( !v28 || ServantCommentEntity__IsOpen(v72, -1, 1, v79) )
                    v28 = (Il2CppObject *)v72;
                }
              }
            }
          }
        }
      }
      ++v89;
      v19 = sub_1BE4B74(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v21 = (const MethodInfo *)lookup;
      if ( !v19 )
        goto LABEL_60;
    }
    if ( v28 )
    {
      if ( !v18 )
        goto LABEL_60;
      items = v18->fields._items;
      v81 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v28,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v83[4] = (Il2CppClass *)v28;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v28, v61, v62, v63, v64, v65, v66);
      }
LABEL_46:
      v84 = v90;
      goto LABEL_47;
    }
    if ( v89 )
      goto LABEL_46;
    v84 = v90;
    if ( v90 != 1 )
      break;
LABEL_47:
    v89 = 0;
    v90 = v84 + 1;
    v19 = sub_1BE4B74(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v21 = (const MethodInfo *)lookup;
    v28 = 0LL;
    if ( !v19 )
      goto LABEL_60;
  }
  if ( !v18 )
LABEL_60:
    sub_1BE4D28(lookup, v21);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v18,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  int64_t Instance; // x0
  int64_t id; // x1
  Il2CppObject *MasterData_object; // x25
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v26; // w24
  System_Collections_Generic_List_int__o *v27; // x25
  System_Collections_Generic_List_int__o *v28; // x26
  __int64 v29; // x28
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  ServantCommentEntity_o *v36; // x27
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
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *v63; // x28
  __int64 v64; // x8
  int64_t v65; // x29
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  __int64 v70; // x8
  int64_t v71; // x29
  __int64 v72; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v73; // x10
  __int64 v74; // x0
  ServantCommentEntity_o *v75; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  int v79; // w29
  int v80; // w8
  int v81; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  struct System_Int32_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  struct System_Int32_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  int v91; // w8
  struct System_Int32_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  System_Int32_array *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Int32_array *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  PartyOrganizationUtility_o *v110; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_int__o *v111; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v112; // [xsp+20h] [xbp-80h]
  __int64 v113; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B672A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Clear__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v17);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&string___TypeInfo, v20);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v21);
    byte_4B672A3 = 1;
  }
  v113 = 0LL;
  entity = 0LL;
  v112 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v112,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v111 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v111,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_102;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, id);
    byte_4B61717 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_102;
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
      goto LABEL_102;
    v26 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_102;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_102;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v26,
                                   0LL);
  }
  v110 = (PartyOrganizationUtility_o *)priorityList;
  HIDWORD(v113) = 1;
  while ( 2 )
  {
    LODWORD(v113) = 0;
    v27 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v27,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
    v28 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
    v29 = sub_1BE4B74(string___TypeInfo, 5LL);
    Instance = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v29 )
      goto LABEL_102;
    id = Instance;
    v36 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v29 + 24) )
        goto LABEL_103;
      *(_QWORD *)(v29 + 32) = id;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 32), id, v30, v31, v32, v33, v34, v35);
      if ( *(_DWORD *)(v29 + 24) <= 1u )
        goto LABEL_103;
      v43 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v29 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 40), v43, v37, v38, v39, v40, v41, v42);
      Instance = (int64_t)System_Int32__ToString((int32_t)&v113 + 4, 0LL);
      if ( *(_DWORD *)(v29 + 24) <= 2u
        || (*(_QWORD *)(v29 + 48) = Instance,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 48), Instance, v44, v45, v46, v47, v48, v49),
            *(_DWORD *)(v29 + 24) <= 3u)
        || (v56 = StringLiteral_1542/*":"*/,
            *(_QWORD *)(v29 + 56) = StringLiteral_1542/*":"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 56), v56, v50, v51, v52, v53, v54, v55),
            Instance = (int64_t)System_Int32__ToString((int32_t)&v113, 0LL),
            *(_DWORD *)(v29 + 24) <= 4u) )
      {
LABEL_103:
        sub_1BE4D30(Instance, id);
      }
      *(_QWORD *)(v29 + 64) = Instance;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 64), Instance, v57, v58, v59, v60, v61, v62);
      v63 = System_String__Concat_62712336((System_String_array *)v29, 0LL);
      Instance = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_102;
      v64 = *(_QWORD *)Instance;
      v65 = Instance;
      v66 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_32;
        }
        v68 = v64 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_32:
        v68 = sub_1C36AAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v68)(v65, v63, *(_QWORD *)(v68 + 8)) & 1) == 0 )
        break;
      Instance = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_102;
      v70 = *(_QWORD *)Instance;
      v71 = Instance;
      v72 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v73 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *(v73 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v72;
          v73 += 2;
          if ( !v72 )
            goto LABEL_40;
        }
        v74 = v70 + 16LL * (*(_DWORD *)v73 + 2) + 312;
      }
      else
      {
LABEL_40:
        v74 = sub_1C36AAC(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v74)(v71, v63, *(_QWORD *)(v74 + 8));
      if ( !Instance )
        goto LABEL_102;
      v75 = (ServantCommentEntity_o *)Instance;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_102;
      }
      Instance = (int64_t)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v78 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v75, -1, 0, v77) )
          v36 = v75;
        goto LABEL_75;
      }
      if ( !(_DWORD)v78 )
        goto LABEL_103;
      v79 = *(_DWORD *)(Instance + 32);
      if ( v79 < 3 || ServantLimitCountSealAfter >= v79 )
      {
        Instance = ServantCommentEntity__IsOpen(v75, -1, 0, v77);
        if ( (Instance & 1) != 0 )
          v36 = v75;
        if ( !v36 )
          goto LABEL_75;
      }
      else if ( !v36 )
      {
        goto LABEL_75;
      }
      if ( v79 == 1 )
      {
        if ( !v27 )
          goto LABEL_102;
        v80 = v27->fields._version + 1;
        v27->fields._size = 0;
        v27->fields._version = v80;
        if ( !v28 )
          goto LABEL_102;
        v81 = v28->fields._version + 1;
        v28->fields._size = 0;
        v28->fields._version = v81;
        Instance = ServantCommentEntity__IsNew(v36, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_74;
      }
      else
      {
        Instance = ServantCommentEntity__IsNew(v36, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_74;
        if ( !v27 )
          goto LABEL_102;
      }
      id = (unsigned int)v36->fields.id;
      items = v27->fields._items;
      v83 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_102;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          id,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v28 )
        goto LABEL_102;
      id = (unsigned int)v36->fields.priority;
      v85 = v28->fields._items;
      v86 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !v85 )
        goto LABEL_102;
      v87 = v28->fields._size;
      if ( (unsigned int)v87 >= v85->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          id,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
LABEL_74:
        v36 = 0LL;
        goto LABEL_75;
      }
      v36 = 0LL;
      v28->fields._size = v87 + 1;
      v85->m_Items[v87 + 1] = id;
LABEL_75:
      LODWORD(v113) = v113 + 1;
      v29 = sub_1BE4B74(string___TypeInfo, 5LL);
      Instance = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v29 )
        goto LABEL_102;
    }
    if ( v36 )
    {
      if ( !ServantCommentEntity__IsNew(v36, v69) )
        goto LABEL_96;
      Instance = (int64_t)v112;
      if ( !v112 )
        goto LABEL_102;
      id = (unsigned int)v36->fields.id;
      v88 = v112->fields._items;
      v89 = Method_System_Collections_Generic_List_int__Add__;
      ++v112->fields._version;
      if ( !v88 )
        goto LABEL_102;
      v90 = v112->fields._size;
      if ( (unsigned int)v90 >= v88->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v112,
          id,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v112->fields._size = v90 + 1;
        v88->m_Items[v90 + 1] = id;
      }
      Instance = (int64_t)v111;
      if ( !v111 )
        goto LABEL_102;
      id = (unsigned int)v36->fields.priority;
      v92 = v111->fields._items;
      v93 = Method_System_Collections_Generic_List_int__Add__;
      ++v111->fields._version;
      if ( !v92 )
        goto LABEL_102;
      v94 = v111->fields._size;
      if ( (unsigned int)v94 >= v92->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v111,
          id,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v111->fields._size = v94 + 1;
        v92->m_Items[v94 + 1] = id;
      }
LABEL_96:
      v91 = HIDWORD(v113);
LABEL_97:
      HIDWORD(v113) = v91 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v27, 0LL) )
  {
    Instance = (int64_t)v112;
    if ( v112 )
    {
      System_Collections_Generic_List_int___AddRange(
        v112,
        (System_Collections_Generic_IEnumerable_T__o *)v27,
        (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (int64_t)v111;
      if ( v111 )
      {
        System_Collections_Generic_List_int___AddRange(
          v111,
          (System_Collections_Generic_IEnumerable_T__o *)v28,
          (const MethodInfo_35CF40C *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_96;
      }
    }
    goto LABEL_102;
  }
  if ( (_DWORD)v113 )
    goto LABEL_96;
  v91 = HIDWORD(v113);
  if ( HIDWORD(v113) == 1 )
    goto LABEL_97;
  Instance = (int64_t)v112;
  if ( !v112
    || (v95 = System_Collections_Generic_List_int___ToArray(
                v112,
                (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v95,
        sub_1BE4A70((PartyOrganizationUtility_o *)idList, (int64_t)v95, v96, v97, v98, v99, v100, v101),
        (Instance = (int64_t)v111) == 0)
    || (v102 = System_Collections_Generic_List_int___ToArray(
                 v111,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        v110->klass = (PartyOrganizationUtility_c *)v102,
        sub_1BE4A70(v110, (int64_t)v102, v103, v104, v105, v106, v107, v108),
        !*idList) )
  {
LABEL_102:
    sub_1BE4D28(Instance, id);
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
  int64_t NewList; // x0
  int64_t v14; // x1
  System_Int32_array *v15; // x8
  unsigned __int64 v16; // x23
  __int64 v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
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
  System_String_o *v50; // x21
  __int64 v51; // x8
  int64_t v52; // x22
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  int64_t v57; // x22
  __int64 v58; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x10
  __int64 v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  System_Int32_array *v73; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v75; // [xsp+1Ch] [xbp-54h] BYREF

  v75 = svtId;
  if ( (byte_4B672A6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v8);
    sub_1BE4ACC(&string___TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v10);
    byte_4B672A6 = 1;
  }
  v73 = 0LL;
  idList = 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v73, svtId, v12);
  if ( (NewList & 1) != 0 )
  {
    v15 = idList;
    if ( !idList )
LABEL_41:
      sub_1BE4D28(NewList, v14);
    v16 = 0LL;
    while ( (__int64)v16 < (int)v15->max_length )
    {
      v17 = sub_1BE4B74(string___TypeInfo, 5LL);
      NewList = (int64_t)System_Int32__ToString((int32_t)&v75, 0LL);
      if ( !v17 )
        goto LABEL_41;
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_43;
      *(_QWORD *)(v17 + 32) = NewList;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 32), NewList, v18, v19, v20, v21, v22, v23);
      if ( *(_DWORD *)(v17 + 24) <= 1u )
        goto LABEL_43;
      v30 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v17 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 40), v30, v24, v25, v26, v27, v28, v29);
      if ( !idList )
        goto LABEL_41;
      if ( v16 >= idList->max_length )
        goto LABEL_43;
      NewList = (int64_t)System_Int32__ToString((int)idList + 4 * (int)v16 + 32, 0LL);
      if ( *(_DWORD *)(v17 + 24) <= 2u )
        goto LABEL_43;
      *(_QWORD *)(v17 + 48) = NewList;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 48), NewList, v31, v32, v33, v34, v35, v36);
      if ( *(_DWORD *)(v17 + 24) <= 3u )
        goto LABEL_43;
      v43 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v17 + 56) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 56), v43, v37, v38, v39, v40, v41, v42);
      if ( !v73 )
        goto LABEL_41;
      if ( v16 >= v73->max_length
        || (NewList = (int64_t)System_Int32__ToString((int)v73 + 4 * (int)v16 + 32, 0LL), *(_DWORD *)(v17 + 24) <= 4u) )
      {
LABEL_43:
        sub_1BE4D30(NewList, v14);
      }
      *(_QWORD *)(v17 + 64) = NewList;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 64), NewList, v44, v45, v46, v47, v48, v49);
      v50 = System_String__Concat_62712336((System_String_array *)v17, 0LL);
      NewList = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !NewList )
        goto LABEL_41;
      v51 = *(_QWORD *)NewList;
      v52 = NewList;
      v53 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_22;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_22:
        v55 = sub_1C36AAC(NewList, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v55)(v52, v50, *(_QWORD *)(v55 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !NewList )
          goto LABEL_41;
        v56 = *(_QWORD *)NewList;
        v57 = NewList;
        v58 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v56 + 176)
                                                                                            + 8LL);
          while ( *(v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v58;
            v59 += 2;
            if ( !v58 )
              goto LABEL_30;
          }
          v60 = v56 + 16LL * (*(_DWORD *)v59 + 2) + 312;
        }
        else
        {
LABEL_30:
          v60 = sub_1C36AAC(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v60)(v57, v50, *(_QWORD *)(v60 + 8));
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
            v69 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)NewList,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v71 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v71[4] = (Il2CppClass *)v14;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v71 + 4), v14, v61, v62, v63, v64, v65, v66);
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
  int64_t lookup; // x0
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_String_o *v48; // x22
  __int64 v49; // x8
  int64_t v50; // x23
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x8
  int64_t v61; // x23
  __int64 v62; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v63; // x10
  __int64 v64; // x0
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  int v69; // w8
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x22
  __int64 methodPtr_low; // x10
  int v74; // [xsp+4h] [xbp-6Ch] BYREF
  int v75; // [xsp+8h] [xbp-68h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-64h] BYREF

  v76 = svtId;
  if ( (byte_4B6729F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v7);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v8);
    sub_1BE4ACC(&string___TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v10);
    byte_4B6729F = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v74 = 0;
  v75 = 1;
  v12 = sub_1BE4B74(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&v76, 0LL);
  if ( !v12 )
    goto LABEL_47;
  v14 = lookup;
  v21 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_46;
      *(_QWORD *)(v12 + 32) = v14;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 32), v14, v15, v16, v17, v18, v19, v20);
      if ( *(_DWORD *)(v12 + 24) <= 1u )
        goto LABEL_46;
      v28 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v12 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 40), v28, v22, v23, v24, v25, v26, v27);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v75, 0LL);
      if ( *(_DWORD *)(v12 + 24) <= 2u
        || (*(_QWORD *)(v12 + 48) = lookup,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 48), lookup, v29, v30, v31, v32, v33, v34),
            *(_DWORD *)(v12 + 24) <= 3u)
        || (v41 = StringLiteral_1542/*":"*/,
            *(_QWORD *)(v12 + 56) = StringLiteral_1542/*":"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 56), v41, v35, v36, v37, v38, v39, v40),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v74, 0LL),
            *(_DWORD *)(v12 + 24) <= 4u) )
      {
LABEL_46:
        sub_1BE4D30(lookup, v14);
      }
      *(_QWORD *)(v12 + 64) = lookup;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v12 + 64), lookup, v42, v43, v44, v45, v46, v47);
      v48 = System_String__Concat_62712336((System_String_array *)v12, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_47;
      v49 = *(_QWORD *)lookup;
      v50 = lookup;
      v51 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_15;
        }
        v53 = v49 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_15:
        v53 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v53)(v50, v48, *(_QWORD *)(v53 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v60 = *(_QWORD *)lookup;
        v61 = lookup;
        v62 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v63 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v60 + 176)
                                                                                            + 8LL);
          while ( *(v63 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v62;
            v63 += 2;
            if ( !v62 )
              goto LABEL_23;
          }
          v64 = v60 + 16LL * (*(_DWORD *)v63 + 2) + 312;
        }
        else
        {
LABEL_23:
          v64 = sub_1C36AAC(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v64)(v61, v48, *(_QWORD *)(v64 + 8));
        if ( lookup )
        {
          v71 = (Il2CppObject *)lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v70) )
              v21 = v71;
            ++v74;
            v12 = sub_1BE4B74(string___TypeInfo, 5LL);
            lookup = (int64_t)System_Int32__ToString((int32_t)&v76, 0LL);
            v14 = lookup;
            if ( v12 )
              continue;
          }
        }
      }
      goto LABEL_47;
    }
    if ( v21 )
    {
      if ( !v11 )
        goto LABEL_47;
      items = v11->fields._items;
      v66 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_47;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          v21,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v68[4] = (Il2CppClass *)v21;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v21, v54, v55, v56, v57, v58, v59);
      }
LABEL_41:
      v69 = v75;
      goto LABEL_42;
    }
    if ( v74 )
      goto LABEL_41;
    v69 = v75;
    if ( v75 != 1 )
      break;
LABEL_42:
    v74 = 0;
    v75 = v69 + 1;
    v12 = sub_1BE4B74(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&v76, 0LL);
    v14 = lookup;
    v21 = 0LL;
    if ( !v12 )
      goto LABEL_47;
  }
  if ( !v11 )
LABEL_47:
    sub_1BE4D28(lookup, v14);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  ServantCommentEntity_o *v26; // x29
  __int64 methodPtr_low; // x9
  int32_t m_CachedPtr; // w24
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v30; // x3
  System_Int32_array *v31; // x28
  UserServantCollectionMaster_o *v32; // x9
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
  UserServantCollectionMaster_o *v45; // [xsp+18h] [xbp-78h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B672A4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B672A4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v44 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v45 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_38:
    sub_1BE4D28(Instance, svtId);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v21;
  v24 = Count;
  v25 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_38;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v25,
                                  (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_38;
    svtId = ServantCommentEntity_TypeInfo;
    v26 = (ServantCommentEntity_o *)Instance;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v21 )
      goto LABEL_38;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v21,
            m_CachedPtr,
            (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v26, (const MethodInfo *)svtId);
      if ( !ImageLimit )
        goto LABEL_42;
      v31 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_42;
      v32 = v45;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v32 = v45;
      }
      if ( !byte_4B61717 )
      {
        sub_1BE4ACC(&NetworkManager_TypeInfo, svtId);
        v32 = v45;
        byte_4B61717 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v32 = v45;
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( !v32 )
        goto LABEL_38;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(
                                    v32,
                                    &entity,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    m_CachedPtr,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_42;
      if ( !entity )
        goto LABEL_38;
      Instance = (DataManager_o *)v44;
      if ( !v44 )
        goto LABEL_38;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v44,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v31,
              ServantLimitCountSealAfter,
              (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_42:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v26, questId, questPhase, v30) )
          goto LABEL_43;
        Instance = (DataManager_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_38;
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
LABEL_43:
          Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v26, -1, 1, v34);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            svtId = (ServantCommentEntity_c *)(unsigned int)v26->fields.svtId;
            items = v21->fields._items;
            v37 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                (int32_t)svtId,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
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
  sub_1BE4FE8(Instance);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  ServantCommentMaster_o *v39; // x0
  int32_t v40; // w1
  const MethodInfo *v41; // x2

  if ( (byte_4B672A5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v13);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v14);
    byte_4B672A5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantCommentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_26:
    if ( v16 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v16,
                                             (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_28:
    sub_1BE4D28(list, v17);
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
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      v35 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v16->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v22,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v22;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v22, v28, v29, v30, v31, v32, v33);
      }
    }
    if ( v19 == ++v20 )
      goto LABEL_26;
  }
  sub_1BE4FE8(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  ServantCommentEntity_o *lookup; // x0
  int64_t v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  ServantCommentEntity_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v45; // x22
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  const MethodInfo *v49; // x1
  ServantCommentEntity_c *v50; // x8
  ServantCommentEntity_o *v51; // x22
  __int64 v52; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v53; // x10
  __int64 v54; // x0
  int v55; // w8
  const MethodInfo *v56; // x3
  ServantCommentEntity_o *v57; // x21
  __int64 methodPtr_low; // x10
  int v60; // [xsp+Ch] [xbp-54h] BYREF
  int v61; // [xsp+18h] [xbp-48h] BYREF
  int32_t v62; // [xsp+1Ch] [xbp-44h] BYREF

  v62 = svtId;
  if ( (byte_4B672A2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v4);
    sub_1BE4ACC(&string___TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v6);
    byte_4B672A2 = 1;
  }
  v61 = 1;
  v60 = 0;
  v7 = sub_1BE4B74(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v62, 0LL);
  if ( !v7 )
LABEL_42:
    sub_1BE4D28(lookup, v9);
  v9 = (int64_t)lookup;
  v16 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v7 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v7 + 32) = v9;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), v9, v10, v11, v12, v13, v14, v15);
      if ( *(_DWORD *)(v7 + 24) <= 1u )
        goto LABEL_41;
      v23 = StringLiteral_1542/*":"*/;
      *(_QWORD *)(v7 + 40) = StringLiteral_1542/*":"*/;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 40), v23, v17, v18, v19, v20, v21, v22);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v61, 0LL);
      if ( *(_DWORD *)(v7 + 24) <= 2u
        || (*(_QWORD *)(v7 + 48) = lookup,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)lookup, v24, v25, v26, v27, v28, v29),
            *(_DWORD *)(v7 + 24) <= 3u)
        || (v36 = StringLiteral_1542/*":"*/,
            *(_QWORD *)(v7 + 56) = StringLiteral_1542/*":"*/,
            sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 56), v36, v30, v31, v32, v33, v34, v35),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v60, 0LL),
            *(_DWORD *)(v7 + 24) <= 4u) )
      {
LABEL_41:
        sub_1BE4D30(lookup, v9);
      }
      *(_QWORD *)(v7 + 64) = lookup;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)lookup, v37, v38, v39, v40, v41, v42);
      v43 = System_String__Concat_62712336((System_String_array *)v7, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v45 = lookup;
      v46 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v46;
          p_offset += 4;
          if ( !v46 )
            goto LABEL_15;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v48 = sub_1C36AAC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v48)(
              v45,
              v43,
              *(_QWORD *)(v48 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v50 = lookup->klass;
        v51 = lookup;
        v52 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v53 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v50->_1.interfaceOffsets->offset;
          while ( *(v53 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v52;
            v53 += 2;
            if ( !v52 )
              goto LABEL_23;
          }
          v54 = (__int64)(&v50->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v53);
        }
        else
        {
LABEL_23:
          v54 = sub_1C36AAC(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v54)(
                                             v51,
                                             v43,
                                             *(_QWORD *)(v54 + 8));
        if ( lookup )
        {
          v57 = lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v56) )
              v16 = v57;
            ++v60;
            v7 = sub_1BE4B74(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v62, 0LL);
            v9 = (int64_t)lookup;
            if ( v7 )
              continue;
          }
        }
      }
      goto LABEL_42;
    }
    if ( v16 )
    {
      if ( ServantCommentEntity__IsNew(v16, v49) )
        return v16 != 0LL;
      goto LABEL_28;
    }
    if ( !v60 )
      break;
LABEL_28:
    v55 = v61;
LABEL_29:
    v61 = v55 + 1;
    v60 = 0;
    v7 = sub_1BE4B74(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v62, 0LL);
    v9 = (int64_t)lookup;
    v16 = 0LL;
    if ( !v7 )
      goto LABEL_42;
  }
  v55 = v61;
  if ( v61 == 1 )
    goto LABEL_29;
  return v16 != 0LL;
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

  if ( (byte_4B672A7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Sort__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v14);
    byte_4B672A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1BE4D28(list, *(_QWORD *)&svtId);
  }
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v26 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1BE4FE8(v27);
LABEL_39:
      sub_1BE4D28(v27, v28);
    }
    if ( v27->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v27, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v32 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v33 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor_56421076(
            v33,
            v32,
            (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
          if ( !v33 )
            sub_1BE4D28(v34, v35);
          System_Collections_Generic_List_int___Sort(
            v33,
            (const MethodInfo_35D0B44 *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v33,
                 0,
                 (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
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
    v40 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  System_String_o *v37; // x20
  Il2CppObject *Name; // x0
  System_String_o *v39; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  CommonConfirmDialog_ClickDelegate_o *v43; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B672A8 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BE4ACC(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__, v15);
    sub_1BE4ACC(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_11010/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v17);
    sub_1BE4ACC(&StringLiteral_11009/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v18);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v19);
    sub_1BE4ACC(&StringLiteral_11007/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v20);
    byte_4B672A8 = 1;
  }
  entity = 0LL;
  v21 = sub_1BE4D18(ServantCommentMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = decideAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)decideAction, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = endAction;
  *(_DWORD *)(v21 + 24) = svtId;
  *(_DWORD *)(v21 + 28) = limitCount;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)endAction, v30, v31, v32, v33, v34, v35);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v21 + 24),
    (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_11010/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v37 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v21 + 28), -1, v36);
  v39 = System_String__Format(v37, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_11009/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11007/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v43 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v43,
    (Il2CppObject *)v21,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
LABEL_14:
    sub_1BE4D28(Master_object, v23);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v39,
    v41,
    v42,
    v43,
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
  if ( (byte_4B672A0 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B672A0 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_40577348(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4B672A1 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B672A1 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__SetOpen_41458320(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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

  if ( (byte_4B6729B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__, entity);
    sub_1BE4ACC(&ServantCommentEntity_TypeInfo, v11);
    byte_4B6729B = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A27478;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A27408;
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
  if ( (byte_4B672AA & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, *(_QWORD *)&svtid);
    sub_1BE4ACC(&int_TypeInfo, v12);
    byte_4B672AA = 1;
  }
  v20[4] = 0LL;
  v20[0] = j_il2cpp_value_box_0(int_TypeInfo, &v23, *(_QWORD *)&limitCount, isDecide, finishCallback);
  v20[1] = j_il2cpp_value_box_0(int_TypeInfo, &v22, v13, v14, v15);
  v20[2] = j_il2cpp_value_box_0(bool_TypeInfo, v21, v16, v17, v18);
  v20[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v20, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B672AB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDcd);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__, v6);
    byte_4B672AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !v10 )
    sub_1BE4D28(Instance, v8);
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

  if ( (byte_4B672AC & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B672AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1BE4D28(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}