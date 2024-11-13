void __fastcall ServantCommentMaster___ctor(ServantCommentMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B168B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__, method, v2);
    byte_4B168B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    2,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string___ctor__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  CommonUI_o *UserId; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x1
  Il2CppObject *Master_object; // x22
  CommonUI_o *v35; // x21
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v37; // x21
  CommonUI_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  ServantStatusDialog_EndDelegate_o *v42; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B168C5 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, *(_QWORD *)&limitCount, isDecide);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__, v19, v20);
    sub_1BCA7E0(&ServantCommentMaster___c__DisplayClass16_0_TypeInfo, v21, v22);
    byte_4B168C5 = 1;
  }
  entity = 0LL;
  v23 = sub_1BCAA2C(ServantCommentMaster___c__DisplayClass16_0_TypeInfo, *(_QWORD *)&limitCount, isDecide, endAction);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_20;
  *(_QWORD *)(v23 + 16) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)endAction, v26, v27, v28, v29, v30, v31);
  if ( isDecide )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
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
      UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = UserId;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
      if ( v35 )
      {
        CommonUI__maskFadein(v35, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( UserId )
        {
          CommonUI__CloseConfirmDialog(UserId, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v37 = entity;
          v38 = (CommonUI_o *)Instance;
          v42 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
          ServantStatusDialog_EndDelegate___ctor(
            v42,
            (Il2CppObject *)v23,
            Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__0__,
            0LL);
          if ( v38 )
          {
            CommonUI__OpenServantStatusDialog_30778268(v38, 33, v37, limitCount, v42, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1BCAA3C(UserId, v25);
    }
  }
  UserId = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !UserId )
    goto LABEL_20;
  CommonUI__CloseConfirmDialog_30766896(UserId, *(System_Action_o **)(v23 + 16), 0LL);
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
  __int64 v10; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B168B6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&id);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v9, v10);
    byte_4B168B6 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, *(_QWORD *)&svtId);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&priority);
  return (ServantCommentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__GetEntity__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x24
  __int64 v32; // x26
  int64_t lookup; // x0
  const MethodInfo *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  Il2CppObject *v41; // x25
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
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_String_o *v68; // x26
  __int64 v69; // x8
  int64_t v70; // x27
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x8
  int64_t v81; // x27
  __int64 v82; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v83; // x10
  __int64 v84; // x0
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x0
  int32_t v89; // w8
  ServantCommentEntity_o *v90; // x26
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  const MethodInfo *v93; // x3
  __int64 v94; // x8
  int v95; // w9
  char v96; // w2
  const MethodInfo *v97; // x5
  int32_t v100; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v101; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B168B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&string___TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v29, v30);
    byte_4B168B9 = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&imageLimitCount,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v100 = 0;
  v101 = 1;
  v32 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v32 )
    goto LABEL_72;
  v34 = (const MethodInfo *)lookup;
  v41 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v32 + 24) )
        goto LABEL_71;
      *(_QWORD *)(v32 + 32) = v34;
      sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v34, v35, v36, v37, v38, v39, v40);
      if ( *(_DWORD *)(v32 + 24) <= 1u )
        goto LABEL_71;
      v48 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v32 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), v48, v42, v43, v44, v45, v46, v47);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v101, 0LL);
      if ( *(_DWORD *)(v32 + 24) <= 2u
        || (*(_QWORD *)(v32 + 48) = lookup,
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), lookup, v49, v50, v51, v52, v53, v54),
            *(_DWORD *)(v32 + 24) <= 3u)
        || (v61 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v32 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 56), v61, v55, v56, v57, v58, v59, v60),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v100, 0LL),
            *(_DWORD *)(v32 + 24) <= 4u) )
      {
LABEL_71:
        sub_1BCAA44(lookup, v34);
      }
      *(_QWORD *)(v32 + 64) = lookup;
      sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 64), lookup, v62, v63, v64, v65, v66, v67);
      v68 = System_String__Concat_62414748((System_String_array *)v32, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v69 = *(_QWORD *)lookup;
      v70 = lookup;
      v71 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v72 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_15;
        }
        v73 = v69 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_15:
        v73 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v73)(v70, v68, *(_QWORD *)(v73 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v80 = *(_QWORD *)lookup;
      v81 = lookup;
      v82 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v83 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v80 + 176) + 8LL);
        while ( *(v83 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v82;
          v83 += 2;
          if ( !v82 )
            goto LABEL_23;
        }
        v84 = v80 + 16LL * (*(_DWORD *)v83 + 2) + 312;
      }
      else
      {
LABEL_23:
        v84 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v84)(v81, v68, *(_QWORD *)(v84 + 8));
      if ( !lookup )
        goto LABEL_72;
      v90 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_72;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v34);
      if ( imageLimitCount != -1 )
      {
        if ( ImageLimit )
        {
          v94 = *(_QWORD *)&ImageLimit->max_length;
          if ( v94 )
          {
            if ( overLimit )
            {
              if ( (int)v94 < 1 )
                goto LABEL_67;
              v95 = 0;
              while ( ImageLimit->m_Items[v95 + 1] > imageLimitCount )
              {
                if ( (_DWORD)v94 == ++v95 )
                  goto LABEL_67;
              }
            }
            else if ( (System_Array__IndexOf_int_(
                         ImageLimit,
                         imageLimitCount,
                         (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
            {
              goto LABEL_67;
            }
          }
        }
      }
      if ( condType && v90->fields.condType != condType )
      {
        if ( !addCheck )
          goto LABEL_67;
        lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)lookup,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
        if ( !lookup )
          goto LABEL_72;
        if ( !ServantCommentAddMaster__IsEntityListCondContain(
                (ServantCommentAddMaster_o *)lookup,
                svtIda,
                v101,
                v100,
                condType,
                v97) )
          goto LABEL_67;
        if ( !v41 )
          goto LABEL_66;
        v96 = 1;
      }
      else if ( addCheck )
      {
        v96 = 1;
        if ( !v41 )
          goto LABEL_66;
      }
      else if ( v100 < 1 )
      {
        v96 = 0;
        if ( !v41 )
          goto LABEL_66;
      }
      else
      {
        v96 = v90->fields.condType == 0;
        if ( !v41 )
          goto LABEL_66;
      }
      if ( ServantCommentEntity__IsOpen(v90, -1, v96, v93) )
LABEL_66:
        v41 = (Il2CppObject *)v90;
LABEL_67:
      ++v100;
      v32 = sub_1BCA888(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v34 = (const MethodInfo *)lookup;
      if ( !v32 )
        goto LABEL_72;
    }
    if ( v41 )
    {
      if ( !v31 )
        goto LABEL_72;
      items = v31->fields._items;
      v86 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_72;
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          v41,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v88[4] = (Il2CppClass *)v41;
        sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v41, v74, v75, v76, v77, v78, v79);
      }
LABEL_46:
      v89 = v101;
      goto LABEL_47;
    }
    if ( v100 )
      goto LABEL_46;
    v89 = v101;
    if ( v101 != 1 )
      break;
LABEL_47:
    v100 = 0;
    v101 = v89 + 1;
    v32 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v34 = (const MethodInfo *)lookup;
    v41 = 0LL;
    if ( !v32 )
      goto LABEL_72;
  }
  if ( !v31 )
LABEL_72:
    sub_1BCAA3C(lookup, v34);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v31,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x23
  __int64 v29; // x25
  int64_t lookup; // x0
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_String_o *v65; // x25
  __int64 v66; // x8
  int64_t v67; // x26
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x8
  int64_t v78; // x26
  __int64 v79; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v80; // x10
  __int64 v81; // x0
  ServantCommentEntity_o *v82; // x25
  __int64 methodPtr_low; // x10
  System_Int32_array *ImageLimit; // x0
  __int64 v85; // x10
  __int64 v86; // x9
  char v87; // w8
  int v88; // w11
  const MethodInfo *v89; // x3
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w8
  const MethodInfo *v95; // x5
  int32_t v99; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v100; // [xsp+18h] [xbp-68h] BYREF
  int32_t svtIda; // [xsp+1Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B168BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&svtId, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&string___TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v26, v27);
    byte_4B168BA = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&imageLimitCount,
                                                       *(_QWORD *)&condType);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v99 = 0;
  v100 = 1;
  v29 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
  if ( !v29 )
    goto LABEL_60;
  v31 = (const MethodInfo *)lookup;
  v38 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v29 + 24) )
        goto LABEL_61;
      *(_QWORD *)(v29 + 32) = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v31, v32, v33, v34, v35, v36, v37);
      if ( *(_DWORD *)(v29 + 24) <= 1u )
        goto LABEL_61;
      v45 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v29 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), v45, v39, v40, v41, v42, v43, v44);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v100, 0LL);
      if ( *(_DWORD *)(v29 + 24) <= 2u
        || (*(_QWORD *)(v29 + 48) = lookup,
            sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), lookup, v46, v47, v48, v49, v50, v51),
            *(_DWORD *)(v29 + 24) <= 3u)
        || (v58 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v29 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), v58, v52, v53, v54, v55, v56, v57),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v99, 0LL),
            *(_DWORD *)(v29 + 24) <= 4u) )
      {
LABEL_61:
        sub_1BCAA44(lookup, v31);
      }
      *(_QWORD *)(v29 + 64) = lookup;
      sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 64), lookup, v59, v60, v61, v62, v63, v64);
      v65 = System_String__Concat_62414748((System_String_array *)v29, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v66 = *(_QWORD *)lookup;
      v67 = lookup;
      v68 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_15;
        }
        v70 = v66 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_15:
        v70 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v70)(v67, v65, *(_QWORD *)(v70 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_60;
      v77 = *(_QWORD *)lookup;
      v78 = lookup;
      v79 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v80 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *(v80 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v79;
          v80 += 2;
          if ( !v79 )
            goto LABEL_23;
        }
        v81 = v77 + 16LL * (*(_DWORD *)v80 + 2) + 312;
      }
      else
      {
LABEL_23:
        v81 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v81)(v78, v65, *(_QWORD *)(v81 + 8));
      if ( !lookup )
        goto LABEL_60;
      v82 = (ServantCommentEntity_o *)lookup;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_60;
      }
      ImageLimit = ServantCommentEntity__GetImageLimit((ServantCommentEntity_o *)lookup, v31);
      if ( ImageLimit )
      {
        v85 = *(_QWORD *)&ImageLimit->max_length;
        if ( v85 )
        {
          if ( (int)v85 >= 1 )
          {
            v86 = 0LL;
            v87 = 0;
            do
            {
              v88 = ImageLimit->m_Items[++v86];
              v87 |= v88 > 2;
            }
            while ( (unsigned int)*(_QWORD *)&ImageLimit->max_length != v86 );
            if ( (v87 & 1) != 0
              && (System_Array__IndexOf_int_(
                    ImageLimit,
                    imageLimitCount,
                    (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
            {
              if ( !condType || v82->fields.condType == condType )
                goto LABEL_56;
              if ( addCheck )
              {
                lookup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !lookup )
                  goto LABEL_60;
                lookup = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)lookup,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
                if ( !lookup )
                  goto LABEL_60;
                if ( ServantCommentAddMaster__IsEntityListCondContain(
                       (ServantCommentAddMaster_o *)lookup,
                       svtIda,
                       v100,
                       v99,
                       condType,
                       v95) )
                {
LABEL_56:
                  if ( !v38 || ServantCommentEntity__IsOpen(v82, -1, 1, v89) )
                    v38 = (Il2CppObject *)v82;
                }
              }
            }
          }
        }
      }
      ++v99;
      v29 = sub_1BCA888(string___TypeInfo, 5LL);
      lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
      v31 = (const MethodInfo *)lookup;
      if ( !v29 )
        goto LABEL_60;
    }
    if ( v38 )
    {
      if ( !v28 )
        goto LABEL_60;
      items = v28->fields._items;
      v91 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_60;
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v38,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v93[4] = (Il2CppClass *)v38;
        sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v38, v71, v72, v73, v74, v75, v76);
      }
LABEL_46:
      v94 = v100;
      goto LABEL_47;
    }
    if ( v99 )
      goto LABEL_46;
    v94 = v100;
    if ( v100 != 1 )
      break;
LABEL_47:
    v99 = 0;
    v100 = v94 + 1;
    v29 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&svtIda, 0LL);
    v31 = (const MethodInfo *)lookup;
    v38 = 0LL;
    if ( !v29 )
      goto LABEL_60;
  }
  if ( !v28 )
LABEL_60:
    sub_1BCAA3C(lookup, v31);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v28,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__GetNewList(
        ServantCommentMaster_o *this,
        System_Int32_array **idList,
        System_Int32_array **priorityList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 Instance; // x0
  int64_t id; // x1
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  int32_t ServantLimitCountSealAfter; // w24
  int32_t v45; // w24
  System_Collections_Generic_List_int__o *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_int__o *v50; // x26
  __int64 v51; // x28
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  ServantCommentEntity_o *v58; // x27
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_String_o *v85; // x28
  __int64 v86; // x8
  __int64 v87; // x29
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  const MethodInfo *v91; // x1
  __int64 v92; // x8
  __int64 v93; // x29
  __int64 v94; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v95; // x10
  __int64 v96; // x0
  ServantCommentEntity_o *v97; // x28
  __int64 methodPtr_low; // x10
  const MethodInfo *v99; // x3
  __int64 v100; // x8
  int v101; // w29
  int v102; // w8
  int v103; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  struct System_Int32_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  struct System_Int32_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  int v113; // w8
  struct System_Int32_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  System_Int32_array *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  System_Int32_array *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Collections_Generic_List_int__o *v132; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v133; // [xsp+20h] [xbp-80h]
  __int64 v134; // [xsp+28h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+30h] [xbp-70h] BYREF
  int32_t svtIda; // [xsp+3Ch] [xbp-64h] BYREF

  svtIda = svtId;
  if ( (byte_4B168BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, idList, priorityList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&string___TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v33, v34);
    byte_4B168BF = 1;
  }
  v134 = 0LL;
  entity = 0LL;
  v133 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     idList,
                                                     priorityList,
                                                     *(_QWORD *)&svtId);
  System_Collections_Generic_List_int____ctor(
    v133,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v132 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v35,
                                                     v36,
                                                     v37);
  System_Collections_Generic_List_int____ctor(
    v132,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
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
    v45 = entity->fields.maxLimitCount ? entity->fields.maxLimitCount : 1;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_98;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !Instance )
      goto LABEL_98;
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Instance,
                                   svtIda,
                                   v45,
                                   0LL);
  }
  HIDWORD(v134) = 1;
  while ( 2 )
  {
    LODWORD(v134) = 0;
    v46 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      id,
                                                      v42,
                                                      v43);
    System_Collections_Generic_List_int____ctor(
      v46,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v50 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v47,
                                                      v48,
                                                      v49);
    System_Collections_Generic_List_int____ctor(
      v50,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v51 = sub_1BCA888(string___TypeInfo, 5LL);
    Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
    if ( !v51 )
      goto LABEL_98;
    id = Instance;
    v58 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v51 + 24) )
        goto LABEL_99;
      *(_QWORD *)(v51 + 32) = id;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), id, v52, v53, v54, v55, v56, v57);
      if ( *(_DWORD *)(v51 + 24) <= 1u )
        goto LABEL_99;
      v65 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v51 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 40), v65, v59, v60, v61, v62, v63, v64);
      Instance = (__int64)System_Int32__ToString((int32_t)&v134 + 4, 0LL);
      if ( *(_DWORD *)(v51 + 24) <= 2u
        || (*(_QWORD *)(v51 + 48) = Instance,
            sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 48), Instance, v66, v67, v68, v69, v70, v71),
            *(_DWORD *)(v51 + 24) <= 3u)
        || (v78 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v51 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 56), v78, v72, v73, v74, v75, v76, v77),
            Instance = (__int64)System_Int32__ToString((int32_t)&v134, 0LL),
            *(_DWORD *)(v51 + 24) <= 4u) )
      {
LABEL_99:
        sub_1BCAA44(Instance, id);
      }
      *(_QWORD *)(v51 + 64) = Instance;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 64), Instance, v79, v80, v81, v82, v83, v84);
      v85 = System_String__Concat_62414748((System_String_array *)v51, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v86 = *(_QWORD *)Instance;
      v87 = Instance;
      v88 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v89 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v89 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v88;
          v89 += 4;
          if ( !v88 )
            goto LABEL_28;
        }
        v90 = v86 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_28:
        v90 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v90)(v87, v85, *(_QWORD *)(v90 + 8)) & 1) == 0 )
        break;
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_98;
      v92 = *(_QWORD *)Instance;
      v93 = Instance;
      v94 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
      if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
      {
        v95 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *(v95 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v94;
          v95 += 2;
          if ( !v94 )
            goto LABEL_36;
        }
        v96 = v92 + 16LL * (*(_DWORD *)v95 + 2) + 312;
      }
      else
      {
LABEL_36:
        v96 = sub_1C1C7C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v96)(v93, v85, *(_QWORD *)(v96 + 8));
      if ( !Instance )
        goto LABEL_98;
      v97 = (ServantCommentEntity_o *)Instance;
      methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != ServantCommentEntity_TypeInfo )
      {
        goto LABEL_98;
      }
      Instance = (__int64)ServantCommentEntity__GetImageLimit(
                            (ServantCommentEntity_o *)Instance,
                            (const MethodInfo *)id);
      if ( !Instance || (v100 = *(_QWORD *)(Instance + 24)) == 0 )
      {
        if ( ServantCommentEntity__IsOpen(v97, -1, 0, v99) )
          v58 = v97;
        goto LABEL_71;
      }
      if ( !(_DWORD)v100 )
        goto LABEL_99;
      v101 = *(_DWORD *)(Instance + 32);
      if ( v101 < 3 || ServantLimitCountSealAfter >= v101 )
      {
        Instance = ServantCommentEntity__IsOpen(v97, -1, 0, v99);
        if ( (Instance & 1) != 0 )
          v58 = v97;
        if ( !v58 )
          goto LABEL_71;
      }
      else if ( !v58 )
      {
        goto LABEL_71;
      }
      if ( v101 == 1 )
      {
        if ( !v46 )
          goto LABEL_98;
        v102 = v46->fields._version + 1;
        v46->fields._size = 0;
        v46->fields._version = v102;
        if ( !v50 )
          goto LABEL_98;
        v103 = v50->fields._version + 1;
        v50->fields._size = 0;
        v50->fields._version = v103;
        Instance = ServantCommentEntity__IsNew(v58, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
      }
      else
      {
        Instance = ServantCommentEntity__IsNew(v58, (const MethodInfo *)id);
        if ( (Instance & 1) == 0 )
          goto LABEL_70;
        if ( !v46 )
          goto LABEL_98;
      }
      id = (unsigned int)v58->fields.id;
      items = v46->fields._items;
      v105 = Method_System_Collections_Generic_List_int__Add__;
      ++v46->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v46->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v46,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
      }
      else
      {
        v46->fields._size = size + 1;
        items->m_Items[size + 1] = id;
      }
      if ( !v50 )
        goto LABEL_98;
      id = (unsigned int)v58->fields.priority;
      v107 = v50->fields._items;
      v108 = Method_System_Collections_Generic_List_int__Add__;
      ++v50->fields._version;
      if ( !v107 )
        goto LABEL_98;
      v109 = v50->fields._size;
      if ( (unsigned int)v109 >= v107->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v50,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
LABEL_70:
        v58 = 0LL;
        goto LABEL_71;
      }
      v58 = 0LL;
      v50->fields._size = v109 + 1;
      v107->m_Items[v109 + 1] = id;
LABEL_71:
      LODWORD(v134) = v134 + 1;
      v51 = sub_1BCA888(string___TypeInfo, 5LL);
      Instance = (__int64)System_Int32__ToString((int32_t)&svtIda, 0LL);
      id = Instance;
      if ( !v51 )
        goto LABEL_98;
    }
    if ( v58 )
    {
      if ( !ServantCommentEntity__IsNew(v58, v91) )
        goto LABEL_92;
      Instance = (__int64)v133;
      if ( !v133 )
        goto LABEL_98;
      id = (unsigned int)v58->fields.id;
      v110 = v133->fields._items;
      v111 = Method_System_Collections_Generic_List_int__Add__;
      ++v133->fields._version;
      if ( !v110 )
        goto LABEL_98;
      v112 = v133->fields._size;
      if ( (unsigned int)v112 >= v110->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v133,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v133->fields._size = v112 + 1;
        v110->m_Items[v112 + 1] = id;
      }
      Instance = (__int64)v132;
      if ( !v132 )
        goto LABEL_98;
      id = (unsigned int)v58->fields.priority;
      v114 = v132->fields._items;
      v115 = Method_System_Collections_Generic_List_int__Add__;
      ++v132->fields._version;
      if ( !v114 )
        goto LABEL_98;
      v116 = v132->fields._size;
      if ( (unsigned int)v116 >= v114->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v132,
          id,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v132->fields._size = v116 + 1;
        v114->m_Items[v116 + 1] = id;
      }
LABEL_92:
      v113 = HIDWORD(v134);
LABEL_93:
      HIDWORD(v134) = v113 + 1;
      continue;
    }
    break;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v46, 0LL) )
  {
    Instance = (__int64)v133;
    if ( v133 )
    {
      System_Collections_Generic_List_int___AddRange(
        v133,
        (System_Collections_Generic_IEnumerable_T__o *)v46,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      Instance = (__int64)v132;
      if ( v132 )
      {
        System_Collections_Generic_List_int___AddRange(
          v132,
          (System_Collections_Generic_IEnumerable_T__o *)v50,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        goto LABEL_92;
      }
    }
    goto LABEL_98;
  }
  if ( (_DWORD)v134 )
    goto LABEL_92;
  v113 = HIDWORD(v134);
  if ( HIDWORD(v134) == 1 )
    goto LABEL_93;
  Instance = (__int64)v133;
  if ( !v133
    || (v117 = System_Collections_Generic_List_int___ToArray(
                 v133,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *idList = v117,
        sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v117, v118, v119, v120, v121, v122, v123),
        (Instance = (__int64)v132) == 0)
    || (v124 = System_Collections_Generic_List_int___ToArray(
                 v132,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *priorityList = v124,
        sub_1BCA784((PartyOrganizationUtility_o *)priorityList, (int64_t)v124, v125, v126, v127, v128, v129, v130),
        !*idList) )
  {
LABEL_98:
    sub_1BCAA3C(Instance, id);
  }
  return (*idList)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantCommentEntity__o *__fastcall ServantCommentMaster__GetNewProfileEntities(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  const MethodInfo *v19; // x4
  int64_t NewList; // x0
  int64_t v21; // x1
  System_Int32_array *v22; // x8
  unsigned __int64 v23; // x23
  __int64 v24; // x21
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_String_o *v57; // x21
  __int64 v58; // x8
  int64_t v59; // x22
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  int64_t v64; // x22
  __int64 v65; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v66; // x10
  __int64 v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  System_Int32_array *v80; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-68h] BYREF
  int32_t v82; // [xsp+1Ch] [xbp-54h] BYREF

  v82 = svtId;
  if ( (byte_4B168C2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v16, v17);
    byte_4B168C2 = 1;
  }
  v80 = 0LL;
  idList = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  NewList = ServantCommentMaster__GetNewList(this, &idList, &v80, svtId, v19);
  if ( (NewList & 1) != 0 )
  {
    v22 = idList;
    if ( !idList )
LABEL_41:
      sub_1BCAA3C(NewList, v21);
    v23 = 0LL;
    while ( (__int64)v23 < (int)v22->max_length )
    {
      v24 = sub_1BCA888(string___TypeInfo, 5LL);
      NewList = (int64_t)System_Int32__ToString((int32_t)&v82, 0LL);
      if ( !v24 )
        goto LABEL_41;
      if ( !*(_DWORD *)(v24 + 24) )
        goto LABEL_43;
      *(_QWORD *)(v24 + 32) = NewList;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), NewList, v25, v26, v27, v28, v29, v30);
      if ( *(_DWORD *)(v24 + 24) <= 1u )
        goto LABEL_43;
      v37 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v24 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 40), v37, v31, v32, v33, v34, v35, v36);
      if ( !idList )
        goto LABEL_41;
      if ( v23 >= idList->max_length )
        goto LABEL_43;
      NewList = (int64_t)System_Int32__ToString((int)idList + 4 * (int)v23 + 32, 0LL);
      if ( *(_DWORD *)(v24 + 24) <= 2u )
        goto LABEL_43;
      *(_QWORD *)(v24 + 48) = NewList;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 48), NewList, v38, v39, v40, v41, v42, v43);
      if ( *(_DWORD *)(v24 + 24) <= 3u )
        goto LABEL_43;
      v50 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v24 + 56) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 56), v50, v44, v45, v46, v47, v48, v49);
      if ( !v80 )
        goto LABEL_41;
      if ( v23 >= v80->max_length
        || (NewList = (int64_t)System_Int32__ToString((int)v80 + 4 * (int)v23 + 32, 0LL), *(_DWORD *)(v24 + 24) <= 4u) )
      {
LABEL_43:
        sub_1BCAA44(NewList, v21);
      }
      *(_QWORD *)(v24 + 64) = NewList;
      sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 64), NewList, v51, v52, v53, v54, v55, v56);
      v57 = System_String__Concat_62414748((System_String_array *)v24, 0LL);
      NewList = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !NewList )
        goto LABEL_41;
      v58 = *(_QWORD *)NewList;
      v59 = NewList;
      v60 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
      if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_22;
        }
        v62 = v58 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_22:
        v62 = sub_1C1C7C0(NewList, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v62)(v59, v57, *(_QWORD *)(v62 + 8));
      if ( (NewList & 1) != 0 )
      {
        NewList = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !NewList )
          goto LABEL_41;
        v63 = *(_QWORD *)NewList;
        v64 = NewList;
        v65 = *(unsigned __int16 *)(*(_QWORD *)NewList + 302LL);
        if ( *(_WORD *)(*(_QWORD *)NewList + 302LL) )
        {
          v66 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v63 + 176)
                                                                                            + 8LL);
          while ( *(v66 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v65;
            v66 += 2;
            if ( !v65 )
              goto LABEL_30;
          }
          v67 = v63 + 16LL * (*(_DWORD *)v66 + 2) + 312;
        }
        else
        {
LABEL_30:
          v67 = sub_1C1C7C0(
                  NewList,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        NewList = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v67)(v64, v57, *(_QWORD *)(v67 + 8));
        if ( NewList )
        {
          v21 = NewList;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)NewList + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)NewList + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( !v18 )
              goto LABEL_41;
            items = v18->fields._items;
            v76 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              goto LABEL_41;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)NewList,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v78[4] = (Il2CppClass *)v21;
              sub_1BCA784((PartyOrganizationUtility_o *)(v78 + 4), v21, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      v22 = idList;
      ++v23;
      if ( !idList )
        goto LABEL_41;
    }
  }
  return (System_Collections_Generic_List_ServantCommentEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetOpenEntitiyList(
        ServantCommentMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x22
  int64_t lookup; // x0
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x21
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
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x22
  __int64 v57; // x8
  int64_t v58; // x23
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x8
  int64_t v69; // x23
  __int64 v70; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v71; // x10
  __int64 v72; // x0
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  int v77; // w8
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x22
  __int64 methodPtr_low; // x10
  int v82; // [xsp+4h] [xbp-6Ch] BYREF
  int v83; // [xsp+8h] [xbp-68h] BYREF
  int32_t v84; // [xsp+Ch] [xbp-64h] BYREF

  v84 = svtId;
  if ( (byte_4B168BB & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&string___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v17, v18);
    byte_4B168BB = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  v82 = 0;
  v83 = 1;
  v20 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (int64_t)System_Int32__ToString((int32_t)&v84, 0LL);
  if ( !v20 )
    goto LABEL_47;
  v22 = lookup;
  v29 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v20 + 24) )
        goto LABEL_46;
      *(_QWORD *)(v20 + 32) = v22;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), v22, v23, v24, v25, v26, v27, v28);
      if ( *(_DWORD *)(v20 + 24) <= 1u )
        goto LABEL_46;
      v36 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v20 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 40), v36, v30, v31, v32, v33, v34, v35);
      lookup = (int64_t)System_Int32__ToString((int32_t)&v83, 0LL);
      if ( *(_DWORD *)(v20 + 24) <= 2u
        || (*(_QWORD *)(v20 + 48) = lookup,
            sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 48), lookup, v37, v38, v39, v40, v41, v42),
            *(_DWORD *)(v20 + 24) <= 3u)
        || (v49 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v20 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 56), v49, v43, v44, v45, v46, v47, v48),
            lookup = (int64_t)System_Int32__ToString((int32_t)&v82, 0LL),
            *(_DWORD *)(v20 + 24) <= 4u) )
      {
LABEL_46:
        sub_1BCAA44(lookup, v22);
      }
      *(_QWORD *)(v20 + 64) = lookup;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 64), lookup, v50, v51, v52, v53, v54, v55);
      v56 = System_String__Concat_62414748((System_String_array *)v20, 0LL);
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_47;
      v57 = *(_QWORD *)lookup;
      v58 = lookup;
      v59 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
      if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
      {
        v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_15;
        }
        v61 = v57 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_15:
        v61 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v61)(v58, v56, *(_QWORD *)(v61 + 8));
      if ( (lookup & 1) == 0 )
        break;
      lookup = (int64_t)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v68 = *(_QWORD *)lookup;
        v69 = lookup;
        v70 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
        if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
        {
          v71 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v68 + 176)
                                                                                            + 8LL);
          while ( *(v71 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v70;
            v71 += 2;
            if ( !v70 )
              goto LABEL_23;
          }
          v72 = v68 + 16LL * (*(_DWORD *)v71 + 2) + 312;
        }
        else
        {
LABEL_23:
          v72 = sub_1C1C7C0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (*(__int64 (__fastcall **)(int64_t, System_String_o *, _QWORD))v72)(v69, v56, *(_QWORD *)(v72 + 8));
        if ( lookup )
        {
          v79 = (Il2CppObject *)lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)lookup + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantCommentEntity_c **)(*(_QWORD *)(*(_QWORD *)lookup + 200LL) + 8 * methodPtr_low - 8) == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen((ServantCommentEntity_o *)lookup, -1, 1, v78) )
              v29 = v79;
            ++v82;
            v20 = sub_1BCA888(string___TypeInfo, 5LL);
            lookup = (int64_t)System_Int32__ToString((int32_t)&v84, 0LL);
            v22 = lookup;
            if ( v20 )
              continue;
          }
        }
      }
      goto LABEL_47;
    }
    if ( v29 )
    {
      if ( !v19 )
        goto LABEL_47;
      items = v19->fields._items;
      v74 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_47;
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v76[4] = (Il2CppClass *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v29, v62, v63, v64, v65, v66, v67);
      }
LABEL_41:
      v77 = v83;
      goto LABEL_42;
    }
    if ( v82 )
      goto LABEL_41;
    v77 = v83;
    if ( v83 != 1 )
      break;
LABEL_42:
    v82 = 0;
    v83 = v77 + 1;
    v20 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (int64_t)System_Int32__ToString((int32_t)&v84, 0LL);
    v22 = lookup;
    v29 = 0LL;
    if ( !v20 )
      goto LABEL_47;
  }
  if ( !v19 )
LABEL_47:
    sub_1BCAA3C(lookup, v22);
  return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v19,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall ServantCommentMaster__GetServantListWithQuestClear(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  DataManager_o *Instance; // x0
  ServantCommentEntity_c *svtId; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_int__o *v36; // x23
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  int32_t Count; // w0
  int32_t v39; // w26
  int32_t v40; // w27
  ServantCommentEntity_o *v41; // x28
  __int64 methodPtr_low; // x9
  int32_t m_CachedPtr; // w29
  System_Int32_array *ImageLimit; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  System_Int32_array *v47; // x24
  int64_t UserId; // x2
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  ServantCommentMaster_o *v56; // x0
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ServantLimitImageMaster_o *v60; // [xsp+8h] [xbp-88h]
  UserServantCollectionMaster_o *v61; // [xsp+10h] [xbp-80h]
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B168C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCommentAddMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B168C0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCommentAddMaster___);
  v36 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v33,
                                                    v34,
                                                    v35);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (v60 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                             Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
        v61 = (UserServantCollectionMaster_o *)Instance,
        !list) )
  {
LABEL_34:
    sub_1BCAA3C(Instance, svtId);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return v36;
  v39 = Count;
  v40 = 0;
  while ( 1 )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_34;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  v40,
                                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_34;
    svtId = ServantCommentEntity_TypeInfo;
    v41 = (ServantCommentEntity_o *)Instance;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      break;
    }
    if ( !v36 )
      goto LABEL_34;
    m_CachedPtr = Instance->fields.m_CachedPtr;
    if ( !System_Collections_Generic_List_int___Contains(
            v36,
            m_CachedPtr,
            (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v41, (const MethodInfo *)svtId);
      if ( !ImageLimit )
        goto LABEL_38;
      v47 = ImageLimit;
      if ( !*(_QWORD *)&ImageLimit->max_length )
        goto LABEL_38;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)v61;
      if ( !v61 )
        goto LABEL_34;
      Instance = (DataManager_o *)UserServantCollectionMaster__TryGetEntity(v61, &entity, UserId, m_CachedPtr, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_38;
      if ( !entity )
        goto LABEL_34;
      Instance = (DataManager_o *)v60;
      if ( !v60 )
        goto LABEL_34;
      ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                     v60,
                                     m_CachedPtr,
                                     entity->fields.maxLimitCount,
                                     0LL);
      if ( (System_Array__IndexOf_int_(
              v47,
              ServantLimitCountSealAfter,
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
      {
LABEL_38:
        if ( ServantCommentEntity__IsOnlyOpenQuestCond(v41, questId, questPhase, v46) )
          goto LABEL_39;
        Instance = (DataManager_o *)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_34;
        if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
               (ServantCommentAddMaster_o *)MasterData_object,
               m_CachedPtr,
               v41->fields.id,
               v41->fields.priority,
               1,
               questId,
               questPhase,
               v51) )
        {
LABEL_39:
          Instance = (DataManager_o *)ServantCommentEntity__IsOpen(v41, -1, 1, v50);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            svtId = (ServantCommentEntity_c *)(unsigned int)v41->fields.svtId;
            items = v36->fields._items;
            v53 = Method_System_Collections_Generic_List_int__Add__;
            ++v36->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v36->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v36,
                (int32_t)svtId,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v36->fields._size = size + 1;
              items->m_Items[size + 1] = (int)svtId;
            }
          }
        }
      }
    }
    if ( v39 == ++v40 )
      return v36;
  }
  sub_1BCACFC(Instance);
  return (System_Collections_Generic_List_int__o *)ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
                                                     v56,
                                                     v57,
                                                     v58,
                                                     v59);
}


// local variable allocation has failed, the output may be wrong!
ServantCommentEntity_array *__fastcall ServantCommentMaster__GetServantListWithQuestClearAndImageLimit(
        ServantCommentMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Master_object; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x22
  __int64 v28; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v30; // w24
  int32_t v31; // w25
  const MethodInfo *v32; // x3
  ServantCommentEntity_o *v33; // x26
  __int64 methodPtr_low; // x9
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x7
  const MethodInfo *v37; // x1
  bool IsOpen; // w27
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  ServantCommentMaster_o *v50; // x0
  int32_t v51; // w1
  const MethodInfo *v52; // x2

  if ( (byte_4B168C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantCommentEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantCommentEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v21, v22);
    byte_4B168C1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantCommentEntity__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantCommentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list < 1 )
  {
LABEL_26:
    if ( v27 )
      return (ServantCommentEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v27,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantCommentEntity__ToArray__);
LABEL_28:
    sub_1BCAA3C(list, v28);
  }
  v30 = (int)list;
  v31 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_28;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v31,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_28;
    v33 = (ServantCommentEntity_o *)list;
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
                                                               v32);
    if ( ((unsigned __int8)list & 1) != 0 )
      goto LABEL_15;
    if ( !Master_object )
      goto LABEL_28;
    if ( ServantCommentAddMaster__IsOnlyOpenQuestCond(
           (ServantCommentAddMaster_o *)Master_object,
           v33->fields.svtId,
           v33->fields.id,
           v33->fields.priority,
           1,
           questId,
           questPhase,
           v36) )
    {
LABEL_15:
      IsOpen = ServantCommentEntity__IsOpen(v33, -1, 1, v35);
    }
    else
    {
      IsOpen = 0;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)ServantCommentEntity__GetImageLimit(v33, v37);
    if ( list && IsOpen && list[1].klass )
    {
      if ( !v27 )
        goto LABEL_28;
      items = v27->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantCommentEntity__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_28;
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)v33,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v33;
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v33, v39, v40, v41, v42, v43, v44);
      }
    }
    if ( v30 == ++v31 )
      goto LABEL_26;
  }
  sub_1BCACFC(list);
  return (ServantCommentEntity_array *)ServantCommentMaster__GetNewProfileEntities(v50, v51, v52);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsNew(ServantCommentMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  ServantCommentEntity_o *lookup; // x0
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  ServantCommentEntity_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x21
  ServantCommentEntity_c *klass; // x8
  ServantCommentEntity_o *v48; // x22
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x1
  ServantCommentEntity_c *v53; // x8
  ServantCommentEntity_o *v54; // x22
  __int64 v55; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v56; // x10
  __int64 v57; // x0
  int v58; // w8
  const MethodInfo *v59; // x3
  ServantCommentEntity_o *v60; // x21
  __int64 methodPtr_low; // x10
  int v63; // [xsp+Ch] [xbp-54h] BYREF
  int v64; // [xsp+18h] [xbp-48h] BYREF
  int32_t v65; // [xsp+1Ch] [xbp-44h] BYREF

  v65 = svtId;
  if ( (byte_4B168BE & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v4, v5);
    sub_1BCA7E0(&string___TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v8, v9);
    byte_4B168BE = 1;
  }
  v64 = 1;
  v63 = 0;
  v10 = sub_1BCA888(string___TypeInfo, 5LL);
  lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
  if ( !v10 )
LABEL_42:
    sub_1BCAA3C(lookup, v12);
  v12 = (int64_t)lookup;
  v19 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(v10 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v10 + 32) = v12;
      sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), v12, v13, v14, v15, v16, v17, v18);
      if ( *(_DWORD *)(v10 + 24) <= 1u )
        goto LABEL_41;
      v26 = StringLiteral_1541/*":"*/;
      *(_QWORD *)(v10 + 40) = StringLiteral_1541/*":"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 40), v26, v20, v21, v22, v23, v24, v25);
      lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v64, 0LL);
      if ( *(_DWORD *)(v10 + 24) <= 2u
        || (*(_QWORD *)(v10 + 48) = lookup,
            sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)lookup, v27, v28, v29, v30, v31, v32),
            *(_DWORD *)(v10 + 24) <= 3u)
        || (v39 = StringLiteral_1541/*":"*/,
            *(_QWORD *)(v10 + 56) = StringLiteral_1541/*":"*/,
            sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 56), v39, v33, v34, v35, v36, v37, v38),
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v63, 0LL),
            *(_DWORD *)(v10 + 24) <= 4u) )
      {
LABEL_41:
        sub_1BCAA44(lookup, v12);
      }
      *(_QWORD *)(v10 + 64) = lookup;
      sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 64), (int64_t)lookup, v40, v41, v42, v43, v44, v45);
      v46 = System_String__Concat_62414748((System_String_array *)v10, 0LL);
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v48 = lookup;
      v49 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          --v49;
          p_offset += 4;
          if ( !v49 )
            goto LABEL_15;
        }
        v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_15:
        v51 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v51)(
              v48,
              v46,
              *(_QWORD *)(v51 + 8)) & 1) == 0 )
        break;
      lookup = (ServantCommentEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( lookup )
      {
        v53 = lookup->klass;
        v54 = lookup;
        v55 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
        {
          v56 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v53->_1.interfaceOffsets->offset;
          while ( *(v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            --v55;
            v56 += 2;
            if ( !v55 )
              goto LABEL_23;
          }
          v57 = (__int64)(&v53->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v56);
        }
        else
        {
LABEL_23:
          v57 = sub_1C1C7C0(
                  lookup,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        lookup = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(ServantCommentEntity_o *, System_String_o *, _QWORD))v57)(
                                             v54,
                                             v46,
                                             *(_QWORD *)(v57 + 8));
        if ( lookup )
        {
          v60 = lookup;
          methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(lookup->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (ServantCommentEntity_c *)lookup->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCommentEntity_TypeInfo )
          {
            if ( ServantCommentEntity__IsOpen(lookup, -1, 1, v59) )
              v19 = v60;
            ++v63;
            v10 = sub_1BCA888(string___TypeInfo, 5LL);
            lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
            v12 = (int64_t)lookup;
            if ( v10 )
              continue;
          }
        }
      }
      goto LABEL_42;
    }
    if ( v19 )
    {
      if ( ServantCommentEntity__IsNew(v19, v52) )
        return v19 != 0LL;
      goto LABEL_28;
    }
    if ( !v63 )
      break;
LABEL_28:
    v58 = v64;
LABEL_29:
    v64 = v58 + 1;
    v63 = 0;
    v10 = sub_1BCA888(string___TypeInfo, 5LL);
    lookup = (ServantCommentEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
    v12 = (int64_t)lookup;
    v19 = 0LL;
    if ( !v10 )
      goto LABEL_42;
  }
  v58 = v64;
  if ( v64 == 1 )
    goto LABEL_29;
  return v19 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCommentMaster__IsOpenImageLimitProfile(
        ServantCommentMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v31; // w22
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  ServantCommentEntity_o *v36; // x0
  __int64 v37; // x1
  ServantCommentEntity_o *v38; // x23
  __int64 methodPtr_low; // x9
  System_Int32_array *ImageLimit; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_IEnumerable_T__o *v44; // x25
  System_Collections_Generic_List_int__o *v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B168C3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v22, v23);
    byte_4B168C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || (System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v31 & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_17;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_17:
      v35 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (ServantCommentEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                      Enumerator,
                                      *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      goto LABEL_39;
    methodPtr_low = LOBYTE(ServantCommentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v36->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantCommentEntity_c *)v36->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCommentEntity_TypeInfo )
    {
      sub_1BCACFC(v36);
LABEL_39:
      sub_1BCAA3C(v36, v37);
    }
    if ( v36->fields.svtId == svtId )
    {
      ImageLimit = ServantCommentEntity__GetImageLimit(v36, (const MethodInfo *)ServantCommentEntity_TypeInfo);
      v44 = (System_Collections_Generic_IEnumerable_T__o *)ImageLimit;
      if ( ImageLimit )
      {
        if ( *(_QWORD *)&ImageLimit->max_length )
        {
          v45 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v41,
                                                            v42,
                                                            v43);
          System_Collections_Generic_List_int____ctor_56116492(
            v45,
            v44,
            (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
          if ( !v45 )
            sub_1BCAA3C(v46, v47);
          System_Collections_Generic_List_int___Sort(
            v45,
            (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
          if ( System_Collections_Generic_List_int___get_Item(
                 v45,
                 0,
                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) >= 3
            && System_Collections_Generic_List_int___get_Item(
                 v45,
                 0,
                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == limitCount
            && ServantCommentEntity__IsOpen(v38, -1, 1, v48) )
          {
            goto LABEL_31;
          }
        }
      }
    }
  }
  v31 = 0;
LABEL_31:
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_35;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_35:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return v31 & 1;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v35; // x1
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
  __int64 v48; // x1
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  System_String_o *v51; // x20
  Il2CppObject *Name; // x0
  System_String_o *v53; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v55; // x22
  System_String_o *v56; // x23
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  CommonConfirmDialog_ClickDelegate_o *v60; // x24
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B168C4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount, decideAction);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__, v21, v22);
    sub_1BCA7E0(&ServantCommentMaster___c__DisplayClass15_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_10980/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10979/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10977/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, v31, v32);
    byte_4B168C4 = 1;
  }
  entity = 0LL;
  v33 = sub_1BCAA2C(
          ServantCommentMaster___c__DisplayClass15_0_TypeInfo,
          *(_QWORD *)&limitCount,
          decideAction,
          endAction);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_14;
  *(_QWORD *)(v33 + 16) = decideAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)decideAction, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 32) = endAction;
  *(_DWORD *)(v33 + 24) = svtId;
  *(_DWORD *)(v33 + 28) = limitCount;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)endAction, v42, v43, v44, v45, v46, v47);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_14;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    *(_DWORD *)(v33 + 24),
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_10980/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_SG"*/,
                                                                  0LL);
  if ( !entity )
    goto LABEL_14;
  v51 = (System_String_o *)Master_object;
  Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)entity, *(_DWORD *)(v33 + 28), -1, v50);
  v53 = System_String__Format(v51, Name, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_OPEN_DETAIL"*/, 0LL);
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"QUEST_CLEAR_CHANGE_ACTION_COLLECTION_CLOSE"*/, 0LL);
  v60 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v57, v58, v59);
  CommonConfirmDialog_ClickDelegate___ctor(
    v60,
    (Il2CppObject *)v33,
    Method_ServantCommentMaster___c__DisplayClass15_0__OpenSaintGraphProfileChange_b__0__,
    0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(Master_object, v35);
  CommonUI__OpenConfirmDialogOnFade(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v53,
    v55,
    v56,
    v60,
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
  if ( (byte_4B168BC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&svtCommentId);
    byte_4B168BC = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
  ServantCommentManager__SetOpen(svtId, svtCommentId, svtCommentPriority, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCommentMaster__SetOpen_40357936(
        ServantCommentMaster_o *this,
        int32_t svtId,
        System_Int32_array *svtCommentIdList,
        System_Int32_array *svtCommentPriorityList,
        const MethodInfo *method)
{
  if ( (byte_4B168BD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, *(_QWORD *)&svtId, svtCommentIdList);
    byte_4B168BD = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, *(_QWORD *)&svtId);
  ServantCommentManager__SetOpen_41219032(svtId, svtCommentIdList, svtCommentPriorityList, 0LL);
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
  __int64 v12; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B168B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&ServantCommentEntity_TypeInfo, v11, v12);
    byte_4B168B7 = 1;
  }
  if ( !ServantCommentEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentEntity_TypeInfo, entity);
  PK = (Il2CppObject *)ServantCommentEntity__CreatePK(svtId, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantCommentMaster__ServantCommentEntity__string__TryGetEntity__);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0D6A0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D630;
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
  _QWORD v15[6]; // [xsp+0h] [xbp-80h] BYREF
  char v16[4]; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v17; // [xsp+38h] [xbp-48h] BYREF
  int32_t v18; // [xsp+3Ch] [xbp-44h] BYREF

  v17 = limitCount;
  v18 = svtid;
  v16[0] = isDecide;
  if ( (byte_4B168C6 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, *(_QWORD *)&svtid, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    byte_4B168C6 = 1;
  }
  v15[4] = 0LL;
  v15[0] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15[2] = j_il2cpp_value_box_0(bool_TypeInfo, v16);
  v15[3] = finishCallback;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v15, callback, object);
}


void __fastcall ServantCommentMaster_ProfileChangeDecideDelegate__EndInvoke(
        ServantCommentMaster_ProfileChangeDecideDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__1; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B168C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDcd, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__, v8, v9);
    byte_4B168C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ServantCommentMaster___c__DisplayClass16_0__DefaultProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall ServantCommentMaster___c__DisplayClass16_0___DefaultProfileChangeDecideAction_b__1(
        ServantCommentMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_4B168C8 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B168C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
  if ( !v8 )
LABEL_8:
    sub_1BCAA3C(Instance, v7);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}