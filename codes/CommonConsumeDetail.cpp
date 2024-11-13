System_String_o *__fastcall CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  System_String_o *v22; // x20
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x24
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  signed int max_length; // w8
  unsigned int v33; // w27
  CommonConsumeDetailInfo_o *v34; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v38; // x26
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  int64_t v49; // x1
  Il2CppClass **v50; // x0
  System_String_array *v51; // x0
  System_String_o *v52; // x0
  int v54; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B15CFA & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_3797/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3796/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3799/*"COMMON_CONSUME_INFO_SEPARATOR"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3798/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v20, v21);
    byte_4B15CFA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        sub_1BCAA44(v30, v31);
      v34 = consumeItemInfoArray->m_Items[v33];
      if ( !v34 )
        break;
      IsOwnedEnoughly_k__BackingField = v34->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v34->fields._Name_k__BackingField;
      Num_k__BackingField = v34->fields._Num_k__BackingField;
      v38 = IsOwnedEnoughly_k__BackingField ? v23 : v24;
      v54 = Num_k__BackingField;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
      v30 = (Il2CppObject *)System_String__Format_62415592(v38, Name_k__BackingField, v39, 0LL);
      if ( !v29 )
        break;
      items = v29->fields._items;
      v47 = Method_System_Collections_Generic_List_string__Add__;
      ++v29->fields._version;
      if ( !items )
        break;
      size = v29->fields._size;
      v49 = (int64_t)v30;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          v30,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v49, v40, v41, v42, v43, v44, v45);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(v30, v31);
  }
LABEL_19:
  if ( !v29 )
    goto LABEL_21;
  v51 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v29,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v52 = System_String__Join(v25, v51, 0LL);
  return System_String__Concat_62401220(v22, v52, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v17; // x19
  const MethodInfo *v18; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v20; // x1
  int v21; // w8
  int64_t v22; // x20
  unsigned int v23; // w25
  CommonConsumeEntity_o *v24; // x21
  int64_t v25; // x22
  __int64 v26; // x1
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  CommonConsumeDetailInfo_o *v32; // x23
  const MethodInfo *v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4B15CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConsumeDetailInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    byte_4B15CF9 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v18);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   0LL);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  v21 = *(_DWORD *)(commonConusmeMaster + 24);
  v22 = commonConusmeMaster;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= v21 )
        sub_1BCAA44(commonConusmeMaster, v20);
      v24 = *(CommonConsumeEntity_o **)(v22 + 8LL * (int)v23 + 32);
      if ( !v24 )
        break;
      if ( v24->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                         v24->fields.objectId,
                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v25 = commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
          commonConusmeMaster = NetworkManager__get_UserId(0LL);
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(
                                     userItemMaster,
                                     commonConusmeMaster,
                                     *(_DWORD *)(v25 + 16),
                                     0LL);
          v32 = (CommonConsumeDetailInfo_o *)sub_1BCAA2C(CommonConsumeDetailInfo_TypeInfo, v29, v30, v31);
          CommonConsumeDetailInfo___ctor(v32, v24, (Il2CppObject *)v25, Entity, v33);
          if ( !v17 )
            break;
          items = v17->fields._items;
          v41 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v32,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v32;
            sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v32, v34, v35, v36, v37, v38, v39);
          }
        }
      }
      v21 = *(_DWORD *)(v22 + 24);
      if ( (int)++v23 >= v21 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(commonConusmeMaster, v20);
  }
LABEL_21:
  if ( !v17 )
    goto LABEL_23;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v17,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


bool __fastcall CommonConsumeDetail__IsAllSatisfied(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  signed int max_length; // w8
  signed int v3; // w9
  CommonConsumeDetailInfo_o *v4; // x10

  if ( !consumeItemInfoArray )
    goto LABEL_12;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( max_length == v3 )
        sub_1BCAA44(consumeItemInfoArray, method);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1BCAA3C(consumeItemInfoArray, method);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15CF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15CF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B15CF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B15CF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
}