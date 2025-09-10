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
  int max_length; // w8
  unsigned int v14; // w27
  CommonConsumeDetailInfo_o *v15; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int32_t Num_k__BackingField; // w8
  System_String_o *v19; // x26
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppObject *v26; // x1
  Il2CppClass **v27; // x0
  System_String_array *v28; // x0
  System_String_o *v29; // x0
  int32_t v31; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C26D7B & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3689/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C2D490(&StringLiteral_3687/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_1C2D490(&StringLiteral_3691/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_1C2D490(&StringLiteral_3690/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_4C26D7B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3687/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2D6F4(v8, v9, v10);
      v15 = consumeItemInfoArray->m_Items[v14];
      if ( !v15 )
        break;
      IsOwnedEnoughly_k__BackingField = v15->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v15->fields._Name_k__BackingField;
      Num_k__BackingField = v15->fields._Num_k__BackingField;
      v19 = IsOwnedEnoughly_k__BackingField ? v4 : v5;
      v31 = Num_k__BackingField;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v10, v11, v12);
      v8 = (Il2CppObject *)System_String__Format_63499156(v19, Name_k__BackingField, v20, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      v26 = v8;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          v8,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1C2D6EC(v8, v9);
  }
LABEL_19:
  if ( !v7 )
    goto LABEL_21;
  v28 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v7,
                                 (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
  v29 = System_String__Join(v6, v28, 0);
  return System_String__Concat_63457864(v3, v29, 0);
}


CommonConsumeDetailInfo_array *CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x0
  void *commonConusmeMaster; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w26
  CommonConsumeEntity_o *v11; // x22
  Il2CppObject *v12; // x23
  UserItemMaster_o *userItemMaster; // x24
  Il2CppObject *Entity; // x25
  CommonConsumeDetailInfo_o *v15; // x24
  const MethodInfo *v16; // x4
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4C26D7A & 1) == 0 )
  {
    sub_1C2D490(&CommonConsumeDetailInfo_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C26D7A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = CommonConsumeDetail__get_commonConusmeMaster(v4);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  commonConusmeMaster = CommonConsumeMaster__GetSortedEntityList(
                          (CommonConsumeMaster_o *)commonConusmeMaster,
                          commonConsumeId,
                          0);
  if ( !commonConusmeMaster )
    goto LABEL_27;
  v8 = *((_DWORD *)commonConusmeMaster + 6);
  v9 = commonConusmeMaster;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1C2D6F4(commonConusmeMaster, v6, v7);
      v11 = (CommonConsumeEntity_o *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        break;
      if ( v11->fields.type == 1 )
      {
        commonConusmeMaster = CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                v11->fields.objectId,
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v12 = (Il2CppObject *)commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
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
                                     (int32_t)v12[1].klass,
                                     0);
          v15 = (CommonConsumeDetailInfo_o *)sub_1C2D6DC(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v15, v11, v12, Entity, v16);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)v15,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v15;
            sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
          }
        }
      }
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C2D6EC(commonConusmeMaster, v6);
  }
LABEL_25:
  if ( !v3 )
    goto LABEL_27;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


bool CommonConsumeDetail__IsAllSatisfied(CommonConsumeDetailInfo_array *consumeItemInfoArray, const MethodInfo *method)
{
  __int64 v2; // x2
  int max_length; // w8
  int v4; // w9
  CommonConsumeDetailInfo_o *v5; // x10

  if ( !consumeItemInfoArray )
    goto LABEL_12;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_1C2D6F4(consumeItemInfoArray, method, v2);
      v5 = consumeItemInfoArray->m_Items[v4];
      if ( !v5 )
        break;
      if ( v5->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v4 )
        continue;
      return v4 >= max_length;
    }
LABEL_12:
    sub_1C2D6EC(consumeItemInfoArray, method);
  }
  v4 = 0;
  return v4 >= max_length;
}


CommonConsumeMaster_o *CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C26D77 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26D77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C26D78 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26D78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C26D79 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26D79 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
}