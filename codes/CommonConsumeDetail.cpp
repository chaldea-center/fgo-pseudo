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
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_String_o *v14; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x24
  System_String_o *v16; // x0
  __int64 v17; // x1
  signed int max_length; // w8
  unsigned int v19; // w27
  CommonConsumeDetailInfo_o *v20; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v24; // x26
  Il2CppObject *v25; // x0
  System_String_array *v26; // x0
  System_String_o *v27; // x0
  __int64 v29; // x0
  System_String_o *str0; // [xsp+0h] [xbp-60h]
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4183E19 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v5);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3269/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v8);
    sub_B2C35C(&StringLiteral_3268/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v9);
    sub_B2C35C(&StringLiteral_3271/*"COMMON_CONSUME_INFO_SEPARATOR"*/, v10);
    sub_B2C35C(&StringLiteral_3270/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v11);
    byte_4183E19 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_3268/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3269/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3270/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3271/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !consumeItemInfoArray )
    goto LABEL_18;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        v29 = sub_B2C460(v16);
        sub_B2C400(v29, 0LL);
      }
      v20 = consumeItemInfoArray->m_Items[v19];
      if ( !v20 )
        break;
      IsOwnedEnoughly_k__BackingField = v20->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v20->fields._Name_k__BackingField;
      Num_k__BackingField = v20->fields._Num_k__BackingField;
      v24 = IsOwnedEnoughly_k__BackingField ? v12 : v13;
      v31 = Num_k__BackingField;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v16 = System_String__Format_44301068(v24, Name_k__BackingField, v25, 0LL);
      if ( !v15 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_B2C434(v16, v17);
  }
LABEL_16:
  if ( !v15 )
    goto LABEL_18;
  v26 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  v27 = System_String__Join(v14, v26, 0LL);
  return System_String__Concat_44305532(str0, v27, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v14; // w8
  int64_t v15; // x20
  unsigned int v16; // w25
  CommonConsumeEntity_o *v17; // x21
  int64_t v18; // x22
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  CommonConsumeDetailInfo_o *v21; // x23
  const MethodInfo *v22; // x4
  __int64 v24; // x0

  if ( (byte_4183E18 & 1) == 0 )
  {
    sub_B2C35C(&CommonConsumeDetailInfo_TypeInfo, method);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_4183E18 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v10);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   v13);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  v14 = *(_DWORD *)(commonConusmeMaster + 24);
  v15 = commonConusmeMaster;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
      {
        v24 = sub_B2C460(commonConusmeMaster);
        sub_B2C400(v24, 0LL);
      }
      v17 = *(CommonConsumeEntity_o **)(v15 + 8LL * (int)v16 + 32);
      if ( !v17 )
        break;
      if ( v17->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)commonConusmeMaster,
                                         v17->fields.objectId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v18 = commonConusmeMaster;
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
                                     *(_DWORD *)(v18 + 16),
                                     0LL);
          v21 = (CommonConsumeDetailInfo_o *)sub_B2C42C(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v21, v17, (Il2CppObject *)v18, Entity, v22);
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
        }
      }
      v14 = *(_DWORD *)(v15 + 24);
      if ( (int)++v16 >= v14 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(commonConusmeMaster, v12);
  }
LABEL_19:
  if ( !v9 )
    goto LABEL_21;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
    sub_B2C434(consumeItemInfoArray, method);
  max_length = consumeItemInfoArray->max_length;
  if ( max_length < 1 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    if ( v3 >= max_length )
    {
      v6 = sub_B2C460(consumeItemInfoArray);
      sub_B2C400(v6, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4183E15 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4183E15 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4183E16 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4183E16 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4183E17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4183E17 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
}