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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  int max_length; // w8
  unsigned int v17; // w27
  CommonConsumeDetailInfo_o *v18; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int32_t Num_k__BackingField; // w8
  System_String_o *v22; // x26
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppObject *v29; // x1
  Il2CppClass **v30; // x0
  System_String_array *v31; // x0
  System_String_o *v32; // x0
  int32_t v34; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C567EC & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C3E564(&StringLiteral_3694/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_1C3E564(&StringLiteral_3698/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_1C3E564(&StringLiteral_3697/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_4C567EC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3697/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C3E7C8(v8, v9);
      v18 = consumeItemInfoArray->m_Items[v17];
      if ( !v18 )
        break;
      IsOwnedEnoughly_k__BackingField = v18->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v18->fields._Name_k__BackingField;
      Num_k__BackingField = v18->fields._Num_k__BackingField;
      v22 = IsOwnedEnoughly_k__BackingField ? v4 : v5;
      v34 = Num_k__BackingField;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v10, v11, v12, v13, v14, v15);
      v8 = (Il2CppObject *)System_String__Format_63677760(v22, Name_k__BackingField, v23, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v27 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v29 = v8;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v8,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v29;
        sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v29, v24, v25);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C3E7C0(v8, v9);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  v31 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v7,
                                 (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  v32 = System_String__Join(v6, v31, 0);
  return System_String__Concat_63636468(v3, v32, 0);
}


CommonConsumeDetailInfo_array *CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  void *commonConusmeMaster; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w26
  CommonConsumeEntity_o *v10; // x22
  Il2CppObject *v11; // x23
  UserItemMaster_o *userItemMaster; // x24
  Il2CppObject *Entity; // x25
  CommonConsumeDetailInfo_o *v14; // x24
  const MethodInfo *v15; // x4
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C567EB & 1) == 0 )
  {
    sub_1C3E564(&CommonConsumeDetailInfo_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C567EB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = CommonConsumeDetail__get_commonConusmeMaster(v4);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  commonConusmeMaster = CommonConsumeMaster__GetSortedEntityList(
                          (CommonConsumeMaster_o *)commonConusmeMaster,
                          commonConsumeId,
                          0);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  v7 = *((_DWORD *)commonConusmeMaster + 6);
  v8 = commonConusmeMaster;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C3E7C8(commonConusmeMaster, v6);
      v10 = (CommonConsumeEntity_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      if ( v10->fields.type == 1 )
      {
        commonConusmeMaster = CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                v10->fields.objectId,
                                (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v11 = (Il2CppObject *)commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C50AE2 )
          {
            sub_1C3E564(&NetworkManager_TypeInfo);
            byte_4C50AE2 = 1;
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
                                     (int32_t)v11[1].klass,
                                     0);
          v14 = (CommonConsumeDetailInfo_o *)sub_1C3E7B0(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v14, v10, v11, Entity, v15);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v14,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v14;
            sub_1C3E508((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C3E7C0(commonConusmeMaster, v6);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
        sub_1C3E7C8(consumeItemInfoArray, method);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1C3E7C0(consumeItemInfoArray, method);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C567E8 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C567E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C567E9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C567E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C567EA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C567EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
}