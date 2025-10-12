System_String_o *CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v4; // x22
  System_String_o *v5; // x23
  System_String_o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x24
  Il2CppObject *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int max_length; // w8
  unsigned int v16; // w27
  CommonConsumeDetailInfo_o *v17; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int32_t Num_k__BackingField; // w8
  System_String_o *v21; // x26
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppObject *v28; // x1
  Il2CppClass **v29; // x0
  System_String_array *v30; // x0
  System_String_o *v31; // x0
  int32_t v33; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C37453 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C32C20(&StringLiteral_3694/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_1C32C20(&StringLiteral_3698/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_1C32C20(&StringLiteral_3697/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_4C37453 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3697/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C32E84(v8);
      v17 = consumeItemInfoArray->m_Items[v16];
      if ( !v17 )
        break;
      IsOwnedEnoughly_k__BackingField = v17->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v17->fields._Name_k__BackingField;
      Num_k__BackingField = v17->fields._Num_k__BackingField;
      v21 = IsOwnedEnoughly_k__BackingField ? v4 : v5;
      v33 = Num_k__BackingField;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v9, v10, v11, v12, v13, v14);
      v8 = (Il2CppObject *)System_String__Format_63559836(v21, Name_k__BackingField, v22, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v28 = v8;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v8,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v28;
        sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v23, v24);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C32E7C(v8);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  v30 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v7,
                                 (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
  v31 = System_String__Join(v6, v30, 0);
  return System_String__Concat_63518544(v3, v31, 0);
}


CommonConsumeDetailInfo_array *CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  void *commonConusmeMaster; // x0
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w26
  CommonConsumeEntity_o *v9; // x22
  Il2CppObject *v10; // x23
  UserItemMaster_o *userItemMaster; // x24
  Il2CppObject *Entity; // x25
  CommonConsumeDetailInfo_o *v13; // x24
  const MethodInfo *v14; // x4
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C37452 & 1) == 0 )
  {
    sub_1C32C20(&CommonConsumeDetailInfo_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37452 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = CommonConsumeDetail__get_commonConusmeMaster(v4);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  commonConusmeMaster = CommonConsumeMaster__GetSortedEntityList(
                          (CommonConsumeMaster_o *)commonConusmeMaster,
                          commonConsumeId,
                          0);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  v6 = *((_DWORD *)commonConusmeMaster + 6);
  v7 = commonConusmeMaster;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C32E84(commonConusmeMaster);
      v9 = (CommonConsumeEntity_o *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        break;
      if ( v9->fields.type == 1 )
      {
        commonConusmeMaster = CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                v9->fields.objectId,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v10 = (Il2CppObject *)commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C31812 )
          {
            sub_1C32C20(&NetworkManager_TypeInfo);
            byte_4C31812 = 1;
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
                                     (int32_t)v10[1].klass,
                                     0);
          v13 = (CommonConsumeDetailInfo_o *)sub_1C32E6C(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v13, v9, v10, Entity, v14);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v13,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v13;
            sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
          }
        }
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C32E7C(commonConusmeMaster);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


bool CommonConsumeDetail__IsAllSatisfied(CommonConsumeDetailInfo_array *consumeItemInfoArray, const MethodInfo *method)
{
  int max_length; // w8
  int v3; // w9
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
        sub_1C32E84(consumeItemInfoArray);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1C32E7C(consumeItemInfoArray);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3744F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3744F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37450 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37450 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37451 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37451 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
}