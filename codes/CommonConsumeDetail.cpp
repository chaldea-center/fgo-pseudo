System_String_o *__fastcall CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x20
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x21
  System_Collections_Generic_List_object__o *v16; // x24
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  signed int max_length; // w8
  unsigned int v23; // w27
  CommonConsumeDetailInfo_o *v24; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v28; // x26
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  int64_t v39; // x1
  Il2CppClass **v40; // x0
  System_String_array *v41; // x0
  System_String_o *v42; // x0
  int v44; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B666B0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_3806/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v8);
    sub_1BE4ACC(&StringLiteral_3805/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v9);
    sub_1BE4ACC(&StringLiteral_3808/*"COMMON_CONSUME_INFO_SEPARATOR"*/, v10);
    sub_1BE4ACC(&StringLiteral_3807/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v11);
    byte_4B666B0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3808/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1BE4D30(v17, v18);
      v24 = consumeItemInfoArray->m_Items[v23];
      if ( !v24 )
        break;
      IsOwnedEnoughly_k__BackingField = v24->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v24->fields._Name_k__BackingField;
      Num_k__BackingField = v24->fields._Num_k__BackingField;
      v28 = IsOwnedEnoughly_k__BackingField ? v13 : v14;
      v44 = Num_k__BackingField;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v19, v20, v21);
      v17 = (Il2CppObject *)System_String__Format_62713180(v28, Name_k__BackingField, v29, 0LL);
      if ( !v16 )
        break;
      items = v16->fields._items;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      ++v16->fields._version;
      if ( !items )
        break;
      size = v16->fields._size;
      v39 = (int64_t)v17;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          v17,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v16->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v39;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v39, v30, v31, v32, v33, v34, v35);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BE4D28(v17, v18);
  }
LABEL_19:
  if ( !v16 )
    goto LABEL_21;
  v41 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v16,
                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
  v42 = System_String__Join(v15, v41, 0LL);
  return System_String__Concat_62698808(v12, v42, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  const MethodInfo *v10; // x0
  void *commonConusmeMaster; // x0
  __int64 v12; // x1
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w26
  CommonConsumeEntity_o *v16; // x22
  Il2CppObject *v17; // x23
  UserItemMaster_o *userItemMaster; // x24
  Il2CppObject *Entity; // x25
  CommonConsumeDetailInfo_o *v20; // x24
  const MethodInfo *v21; // x4
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B666AF & 1) == 0 )
  {
    sub_1BE4ACC(&CommonConsumeDetailInfo_TypeInfo, method);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    byte_4B666AF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = CommonConsumeDetail__get_commonConusmeMaster(v10);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  commonConusmeMaster = CommonConsumeMaster__GetSortedEntityList(
                          (CommonConsumeMaster_o *)commonConusmeMaster,
                          commonConsumeId,
                          0LL);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  v13 = *((_DWORD *)commonConusmeMaster + 6);
  v14 = commonConusmeMaster;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1BE4D30(commonConusmeMaster, v12);
      v16 = (CommonConsumeEntity_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 )
        break;
      if ( v16->fields.type == 1 )
      {
        commonConusmeMaster = CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                v16->fields.objectId,
                                (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v17 = (Il2CppObject *)commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B61717 )
          {
            sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
            byte_4B61717 = 1;
          }
          commonConusmeMaster = NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            commonConusmeMaster = NetworkManager_TypeInfo;
          }
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(
                                     userItemMaster,
                                     *(_QWORD *)(*((_QWORD *)commonConusmeMaster + 23) + 64LL),
                                     (int32_t)v17[1].klass,
                                     0LL);
          v20 = (CommonConsumeDetailInfo_o *)sub_1BE4D18(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v20, v16, v17, Entity, v21);
          if ( !v9 )
            break;
          items = v9->fields._items;
          v29 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v20,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v20;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1BE4D28(commonConusmeMaster, v12);
  }
LABEL_25:
  if ( !v9 )
    goto LABEL_27;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v9,
                                            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
        sub_1BE4D30(consumeItemInfoArray, method);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1BE4D28(consumeItemInfoArray, method);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B666AC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B666AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B666AD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B666AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B666AE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B666AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
}