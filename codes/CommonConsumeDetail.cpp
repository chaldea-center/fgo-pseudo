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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  signed int max_length; // w8
  unsigned int v24; // w27
  CommonConsumeDetailInfo_o *v25; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v29; // x26
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  System_String_array *v32; // x0
  System_String_o *v33; // x0
  System_String_o *str0; // [xsp+0h] [xbp-60h]
  int v36; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F6556 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3260, v8);
    sub_B16FFC(&StringLiteral_3259, v9);
    sub_B16FFC(&StringLiteral_3262, v10);
    sub_B16FFC(&StringLiteral_3261, v11);
    byte_40F6556 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_3259, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3260, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3261, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3262, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_18;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      v25 = consumeItemInfoArray->m_Items[v24];
      if ( !v25 )
        break;
      IsOwnedEnoughly_k__BackingField = v25->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v25->fields._Name_k__BackingField;
      Num_k__BackingField = v25->fields._Num_k__BackingField;
      v29 = IsOwnedEnoughly_k__BackingField ? v12 : v13;
      v36 = Num_k__BackingField;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
      v31 = System_String__Format_43739268(v29, Name_k__BackingField, v30, 0LL);
      if ( !v19 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_16:
  if ( !v19 )
    goto LABEL_18;
  v32 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  v33 = System_String__Join(v14, v32, 0LL);
  return System_String__Concat_43743732(str0, v33, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  const MethodInfo *v13; // x0
  CommonConsumeMaster_o *commonConusmeMaster; // x0
  const MethodInfo *v15; // x2
  _DWORD *SortedEntityList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int v19; // w8
  _DWORD *v20; // x20
  unsigned int v21; // w25
  CommonConsumeEntity_o *v22; // x21
  ItemMaster_o *itemMaster; // x0
  Il2CppObject *v24; // x22
  UserItemMaster_o *userItemMaster; // x23
  int64_t UserId; // x0
  Il2CppObject *Entity; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CommonConsumeDetailInfo_o *v32; // x23
  const MethodInfo *v33; // x4

  if ( (byte_40F6555 & 1) == 0 )
  {
    sub_B16FFC(&CommonConsumeDetailInfo_TypeInfo, method);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    byte_40F6555 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = CommonConsumeDetail__get_commonConusmeMaster(v13);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(commonConusmeMaster, commonConsumeId, v15);
  if ( !SortedEntityList )
    goto LABEL_21;
  v19 = SortedEntityList[6];
  v20 = SortedEntityList;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
      {
        sub_B17100(SortedEntityList, v17, v18);
        sub_B170A0();
      }
      v22 = *(CommonConsumeEntity_o **)&v20[2 * v21 + 8];
      if ( !v22 )
        break;
      if ( v22->fields.type == 1 )
      {
        itemMaster = CommonConsumeDetail__get_itemMaster((const MethodInfo *)SortedEntityList);
        if ( !itemMaster )
          break;
        SortedEntityList = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)itemMaster,
                             v22->fields.objectId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( SortedEntityList )
        {
          v24 = (Il2CppObject *)SortedEntityList;
          userItemMaster = CommonConsumeDetail__get_userItemMaster((const MethodInfo *)SortedEntityList);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( !userItemMaster )
            break;
          Entity = (Il2CppObject *)UserItemMaster__GetEntity(userItemMaster, UserId, (int32_t)v24[1].klass, 0LL);
          v32 = (CommonConsumeDetailInfo_o *)sub_B170CC(CommonConsumeDetailInfo_TypeInfo, v28, v29, v30, v31);
          CommonConsumeDetailInfo___ctor(v32, v22, v24, Entity, v33);
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
        }
      }
      v19 = v20[6];
      if ( (int)++v21 >= v19 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
}


bool __fastcall CommonConsumeDetail__IsAllSatisfied(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  signed int max_length; // w8
  unsigned int v4; // w9
  CommonConsumeDetailInfo_o *v5; // x10

  if ( !consumeItemInfoArray )
LABEL_12:
    sub_B170D4();
  max_length = consumeItemInfoArray->max_length;
  if ( max_length < 1 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
      sub_B17100(consumeItemInfoArray, method, v2);
      sub_B170A0();
    }
    v5 = consumeItemInfoArray->m_Items[v4];
    if ( !v5 )
      goto LABEL_12;
    if ( !v5->fields._IsOwnedEnoughly_k__BackingField )
      return 0;
    if ( (int)++v4 >= max_length )
      return 1;
  }
}


CommonConsumeMaster_o *__fastcall CommonConsumeDetail__get_commonConusmeMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F6552 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F6552 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F6553 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F6553 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0

  if ( (byte_40F6554 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F6554 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
}