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
  int max_length; // w8
  unsigned int v11; // w27
  CommonConsumeDetailInfo_o *v12; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int32_t Num_k__BackingField; // w8
  System_String_o *v16; // x26
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppObject *v27; // x1
  Il2CppClass **v28; // x0
  System_String_array *v29; // x0
  System_String_o *v30; // x0
  int32_t v32; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D30488 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3718/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C93AD4(&StringLiteral_3716/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3720/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_1C93AD4(&StringLiteral_3719/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_4D30488 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C93D34(v8);
      v12 = consumeItemInfoArray->m_Items[v11];
      if ( !v12 )
        break;
      IsOwnedEnoughly_k__BackingField = v12->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v12->fields._Name_k__BackingField;
      Num_k__BackingField = v12->fields._Num_k__BackingField;
      v16 = IsOwnedEnoughly_k__BackingField ? v4 : v5;
      v32 = Num_k__BackingField;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      v8 = (Il2CppObject *)System_String__Format_64467032(v16, Name_k__BackingField, v17, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v25 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v27 = v8;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v8,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v27;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C93D2C(v8, v9);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  v29 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v7,
                                 (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v30 = System_String__Join(v6, v29, 0);
  return System_String__Concat_64425724(v3, v30, 0);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4D30487 & 1) == 0 )
  {
    sub_1C93AD4(&CommonConsumeDetailInfo_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30487 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
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
        sub_1C93D34(commonConusmeMaster);
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
                                (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v11 = (Il2CppObject *)commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
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
          v14 = (CommonConsumeDetailInfo_o *)sub_1C93D20(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v14, v10, v11, Entity, v15);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v14,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v14;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C93D2C(commonConusmeMaster, v6);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


CommonConsumeMaster_o *CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D30484 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30484 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D30485 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D30486 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30486 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
}