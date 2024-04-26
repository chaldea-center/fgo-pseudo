System_String_o *__fastcall CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x22
  System_String_o *v4; // x23
  System_String_o *v5; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x24
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  signed int max_length; // w8
  unsigned int v11; // w27
  CommonConsumeDetailInfo_o *v12; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v16; // x26
  Il2CppObject *v17; // x0
  System_String_array *v18; // x0
  System_String_o *v19; // x0
  __int64 v21; // x0
  System_String_o *str0; // [xsp+0h] [xbp-60h]
  int v23; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_434DF45 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3344/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_B70694(&StringLiteral_3343/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/);
    sub_B70694(&StringLiteral_3346/*"COMMON_CONSUME_INFO_SEPARATOR"*/);
    sub_B70694(&StringLiteral_3345/*"COMMON_CONSUME_INFO_IF_LACKING"*/);
    byte_434DF45 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3344/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_18;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v21 = sub_B70798(v7);
        sub_B70738(v21, 0LL);
      }
      v12 = consumeItemInfoArray->m_Items[v11];
      if ( !v12 )
        break;
      IsOwnedEnoughly_k__BackingField = v12->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v12->fields._Name_k__BackingField;
      Num_k__BackingField = v12->fields._Num_k__BackingField;
      v16 = IsOwnedEnoughly_k__BackingField ? v3 : v4;
      v23 = Num_k__BackingField;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v9);
      v7 = System_String__Format_44753704(v16, Name_k__BackingField, v17, 0LL);
      if ( !v6 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_B7076C(v7, v8);
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_18;
  v18 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v19 = System_String__Join(v5, v18, 0LL);
  return System_String__Concat_44758168(str0, v19, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  const MethodInfo *v4; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  int64_t v9; // x20
  unsigned int v10; // w25
  CommonConsumeEntity_o *v11; // x21
  int64_t v12; // x22
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  CommonConsumeDetailInfo_o *v15; // x23
  const MethodInfo *v16; // x4
  __int64 v18; // x0

  if ( (byte_434DF44 & 1) == 0 )
  {
    sub_B70694(&CommonConsumeDetailInfo_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_434DF44 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v4);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   v7);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  v8 = *(_DWORD *)(commonConusmeMaster + 24);
  v9 = commonConusmeMaster;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v18 = sub_B70798(commonConusmeMaster);
        sub_B70738(v18, 0LL);
      }
      v11 = *(CommonConsumeEntity_o **)(v9 + 8LL * (int)v10 + 32);
      if ( !v11 )
        break;
      if ( v11->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)commonConusmeMaster,
                                         v11->fields.objectId,
                                         (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v12 = commonConusmeMaster;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)commonConusmeMaster);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          commonConusmeMaster = NetworkManager__get_UserId(0LL);
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(
                                     userItemMaster,
                                     commonConusmeMaster,
                                     *(_DWORD *)(v12 + 16),
                                     0LL);
          v15 = (CommonConsumeDetailInfo_o *)sub_B70764(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v15, v11, (Il2CppObject *)v12, Entity, v16);
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
        }
      }
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B7076C(commonConusmeMaster, v6);
  }
LABEL_19:
  if ( !v3 )
    goto LABEL_21;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


bool __fastcall CommonConsumeDetail__IsAllSatisfied(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v3; // w9
  CommonConsumeDetailInfo_o *v4; // x10
  __int64 v6; // x0

  if ( !consumeItemInfoArray )
LABEL_12:
    sub_B7076C(consumeItemInfoArray, method);
  max_length = consumeItemInfoArray->max_length;
  if ( max_length < 1 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    if ( v3 >= max_length )
    {
      v6 = sub_B70798(consumeItemInfoArray);
      sub_B70738(v6, 0LL);
    }
    v4 = consumeItemInfoArray->m_Items[v3];
    if ( !v4 )
      goto LABEL_12;
    if ( !v4->fields._IsOwnedEnoughly_k__BackingField )
      return 0;
    if ( (int)++v3 >= max_length )
      return 1;
  }
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_434DF41 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434DF41 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_434DF42 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434DF42 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1

  if ( (byte_434DF43 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434DF43 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v2);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
}