System_String_o *__fastcall CommonConsumeDetail__GetConsumeDetailDescription(
        CommonConsumeDetailInfo_array *consumeItemInfoArray,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  System_String_o *v34; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x24
  System_String_o *v36; // x0
  __int64 v37; // x1
  signed int max_length; // w8
  unsigned int v39; // w27
  CommonConsumeDetailInfo_o *v40; // x8
  _BOOL4 IsOwnedEnoughly_k__BackingField; // w9
  Il2CppObject *Name_k__BackingField; // x25
  int Num_k__BackingField; // w8
  System_String_o *v44; // x26
  Il2CppObject *v45; // x0
  System_String_array *v46; // x0
  System_String_o *v47; // x0
  __int64 v49; // x0
  System_String_o *str0; // [xsp+0h] [xbp-60h]
  int v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E4CE4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3335/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3334/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3337/*"COMMON_CONSUME_INFO_SEPARATOR"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3336/*"COMMON_CONSUME_INFO_IF_LACKING"*/, v29, v30, v31);
    byte_42E4CE4 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  str0 = LocalizationManager__Get((System_String_o *)StringLiteral_3334/*"COMMON_CONSUME_DESCRIPTION_TITLE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONSUME_INFO_IF_LACKING"*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3337/*"COMMON_CONSUME_INFO_SEPARATOR"*/, 0LL);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !consumeItemInfoArray )
    goto LABEL_18;
  max_length = consumeItemInfoArray->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
        v49 = sub_B5D6C8(v36);
        sub_B5D668(v49, 0LL);
      }
      v40 = consumeItemInfoArray->m_Items[v39];
      if ( !v40 )
        break;
      IsOwnedEnoughly_k__BackingField = v40->fields._IsOwnedEnoughly_k__BackingField;
      Name_k__BackingField = (Il2CppObject *)v40->fields._Name_k__BackingField;
      Num_k__BackingField = v40->fields._Num_k__BackingField;
      v44 = IsOwnedEnoughly_k__BackingField ? v32 : v33;
      v51 = Num_k__BackingField;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
      v36 = System_String__Format_44573324(v44, Name_k__BackingField, v45, 0LL);
      if ( !v35 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      max_length = consumeItemInfoArray->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_B5D69C(v36, v37);
  }
LABEL_16:
  if ( !v35 )
    goto LABEL_18;
  v46 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  v47 = System_String__Join(v34, v46, 0LL);
  return System_String__Concat_44577788(str0, v47, 0LL);
}


CommonConsumeDetailInfo_array *__fastcall CommonConsumeDetail__GetConsumeDetailInfoByConsumeId(
        int32_t commonConsumeId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  const MethodInfo *v24; // x0
  int64_t commonConusmeMaster; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  int v28; // w8
  int64_t v29; // x20
  unsigned int v30; // w25
  CommonConsumeEntity_o *v31; // x21
  int64_t v32; // x22
  UserItemMaster_o *userItemMaster; // x23
  Il2CppObject *Entity; // x24
  CommonConsumeDetailInfo_o *v35; // x23
  const MethodInfo *v36; // x4
  __int64 v38; // x0

  if ( (byte_42E4CE3 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConsumeDetailInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    byte_42E4CE3 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommonConsumeDetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo___ctor__);
  commonConusmeMaster = (int64_t)CommonConsumeDetail__get_commonConusmeMaster(v24);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  commonConusmeMaster = (int64_t)CommonConsumeMaster__GetSortedEntityList(
                                   (CommonConsumeMaster_o *)commonConusmeMaster,
                                   commonConsumeId,
                                   v27);
  if ( !commonConusmeMaster )
    goto LABEL_21;
  v28 = *(_DWORD *)(commonConusmeMaster + 24);
  v29 = commonConusmeMaster;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= v28 )
      {
        v38 = sub_B5D6C8(commonConusmeMaster);
        sub_B5D668(v38, 0LL);
      }
      v31 = *(CommonConsumeEntity_o **)(v29 + 8LL * (int)v30 + 32);
      if ( !v31 )
        break;
      if ( v31->fields.type == 1 )
      {
        commonConusmeMaster = (int64_t)CommonConsumeDetail__get_itemMaster((const MethodInfo *)commonConusmeMaster);
        if ( !commonConusmeMaster )
          break;
        commonConusmeMaster = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)commonConusmeMaster,
                                         v31->fields.objectId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( commonConusmeMaster )
        {
          v32 = commonConusmeMaster;
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
                                     *(_DWORD *)(v32 + 16),
                                     0LL);
          v35 = (CommonConsumeDetailInfo_o *)sub_B5D694(CommonConsumeDetailInfo_TypeInfo);
          CommonConsumeDetailInfo___ctor(v35, v31, (Il2CppObject *)v32, Entity, v36);
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__Add__);
        }
      }
      v28 = *(_DWORD *)(v29 + 24);
      if ( (int)++v30 >= v28 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(commonConusmeMaster, v26);
  }
LABEL_19:
  if ( !v23 )
    goto LABEL_21;
  return (CommonConsumeDetailInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommonConsumeDetailInfo__ToArray__);
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
    sub_B5D69C(consumeItemInfoArray, method);
  max_length = consumeItemInfoArray->max_length;
  if ( max_length < 1 )
    return 1;
  v3 = 0;
  while ( 1 )
  {
    if ( v3 >= max_length )
    {
      v6 = sub_B5D6C8(consumeItemInfoArray);
      sub_B5D668(v6, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E4CE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E4CE0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


ItemMaster_o *__fastcall CommonConsumeDetail__get_itemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E4CE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E4CE1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
}


UserItemMaster_o *__fastcall CommonConsumeDetail__get_userItemMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E4CE2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E4CE2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
}