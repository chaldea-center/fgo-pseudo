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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x24
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  signed int max_length; // w8
  unsigned int v22; // w27
  CommonConsumeDetailInfo_o *v23; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v27; // x26
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppObject *v34; // x1
  Il2CppClass **v35; // x0
  System_String_array *v36; // x0
  System_String_o *v37; // x0
  int v39; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FBF33 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_3742/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v8);
    sub_1B640C8(&StringLiteral_3741/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v9);
    sub_1B640C8(&StringLiteral_3744/*"COMMON_CONSUME_INFO_SEPARATOR"*/, v10);
    sub_1B640C8(&StringLiteral_3743/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v11);
    byte_49FBF33 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_21;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1B6432C(v19, v20);
      v23 = consumeItemInfoArray->m_Items[v22];
      if ( !v23 )
        break;
      IsOwnedEnoughly_k__BackingField = v23->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v23->fields._Name_k__BackingField;
      Num_k__BackingField = v23->fields._Num_k__BackingField;
      v27 = IsOwnedEnoughly_k__BackingField ? v13 : v14;
      v39 = Num_k__BackingField;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v19 = (Il2CppObject *)System_String__Format_61389768(v27, Name_k__BackingField, v28, 0LL);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      v34 = v19;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v19,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
      }
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64324(v19);
  }
LABEL_19:
  if ( !v18 )
    goto LABEL_21;
  v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v18,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v37 = System_String__Join(v15, v36, 0LL);
  return System_String__Concat_61375396(v12, v37, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  const MethodInfo *v11; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v13; // x1
  int v14; // w8
  int64_t v15; // x20
  unsigned int v16; // w25
  CommonConsumeEntity_o *v17; // x21
  int64_t v18; // x22
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  CommonConsumeDetailInfo_o *v23; // x23
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_49FBF32 & 1) == 0 )
  {
    sub_1B640C8(&CommonConsumeDetailInfo_TypeInfo, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FBF32 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v11);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   0LL);
  if ( !commonConusmeMaster )
    goto LABEL_23;
  v14 = *(_DWORD *)(commonConusmeMaster + 24);
  v15 = commonConusmeMaster;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
        sub_1B6432C(commonConusmeMaster, v13);
      v17 = *(CommonConsumeEntity_o **)(v15 + 8LL * (int)v16 + 32);
      if ( !v17 )
        break;
      if ( v17->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)commonConusmeMaster,
                                         v17->fields.objectId,
                                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v18 = commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          commonConusmeMaster = NetworkManager__get_UserId(0LL);
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(
                                     userItemMaster,
                                     commonConusmeMaster,
                                     *(_DWORD *)(v18 + 16),
                                     0LL);
          v23 = (CommonConsumeDetailInfo_o *)sub_1B64314(CommonConsumeDetailInfo_TypeInfo, v21, v22);
          CommonConsumeDetailInfo___ctor(v23, v17, (Il2CppObject *)v18, Entity, v24);
          if ( !v10 )
            break;
          items = v10->fields._items;
          v28 = Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v23,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v23;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
          }
        }
      }
      v14 = *(_DWORD *)(v15 + 24);
      if ( (int)++v16 >= v14 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(commonConusmeMaster);
  }
LABEL_21:
  if ( !v10 )
    goto LABEL_23;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
        sub_1B6432C(consumeItemInfoArray, method);
      v4 = consumeItemInfoArray->m_Items[v3];
      if ( !v4 )
        break;
      if ( v4->fields._IsOwnedEnoughly_k__BackingField && max_length != ++v3 )
        continue;
      return v3 >= max_length;
    }
LABEL_12:
    sub_1B64324(consumeItemInfoArray);
  }
  v3 = 0;
  return v3 >= max_length;
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBF2F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49FBF2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBF30 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49FBF30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (ItemMaster_o *)DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FBF31 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49FBF31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (UserItemMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
}