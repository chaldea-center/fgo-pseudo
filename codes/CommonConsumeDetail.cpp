System_String_o *__fastcall CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v4; // x22
  System_String_o *v5; // x23
  System_String_o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x24
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  signed int max_length; // w8
  unsigned int v14; // w27
  CommonConsumeDetailInfo_o *v15; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v19; // x26
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *v26; // x1
  Il2CppClass **v27; // x0
  System_String_array *v28; // x0
  System_String_o *v29; // x0
  int v31; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5AC75 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3765/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1B885B0(&StringLiteral_3764/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_1B885B0(&StringLiteral_3767/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_1B885B0(&StringLiteral_3766/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_4A5AC75 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B88814(v8, v9);
      v15 = consumeItemInfoArray->m_Items[v14];
      if ( !v15 )
        break;
      IsOwnedEnoughly_k__BackingField = v15->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v15->fields._Name_k__BackingField;
      Num_k__BackingField = v15->fields._Num_k__BackingField;
      v19 = IsOwnedEnoughly_k__BackingField ? v4 : v5;
      v31 = Num_k__BackingField;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v10, v11, v12);
      v8 = (Il2CppObject *)System_String__Format_61721404(v19, Name_k__BackingField, v20, 0LL);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v26 = v8;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v8,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B8880C(v8, v9);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  v28 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v7,
                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
  v29 = System_String__Join(v6, v28, 0LL);
  return System_String__Concat_61707032(v3, v29, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v6; // x1
  int v7; // w8
  int64_t v8; // x20
  unsigned int v9; // w25
  CommonConsumeEntity_o *v10; // x21
  int64_t v11; // x22
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  CommonConsumeDetailInfo_o *v14; // x23
  const MethodInfo *v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5AC74 & 1) == 0 )
  {
    sub_1B885B0(&CommonConsumeDetailInfo_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5AC74 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v4);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   0LL);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  v7 = *(_DWORD *)(commonConusmeMaster + 24);
  v8 = commonConusmeMaster;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1B88814(commonConusmeMaster, v6);
      v10 = *(CommonConsumeEntity_o **)(v8 + 8LL * (int)v9 + 32);
      if ( !v10 )
        break;
      if ( v10->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                         v10->fields.objectId,
                                         (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v11 = commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          commonConusmeMaster = NetworkManager__get_UserId(0LL);
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(
                                     userItemMaster,
                                     commonConusmeMaster,
                                     *(_DWORD *)(v11 + 16),
                                     0LL);
          v14 = (CommonConsumeDetailInfo_o *)sub_1B887FC(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v14, v10, (Il2CppObject *)v11, Entity, v15);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v14,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v14;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
          }
        }
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(commonConusmeMaster, v6);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
        sub_1B88814(consumeItemInfoArray, method);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1B8880C(consumeItemInfoArray, method);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5AC71 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5AC72 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5AC73 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
}