void __fastcall EventInfoPossessionItemCounter___ctor(EventInfoPossessionItemCounter_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoPossessionItemCounter__Initialization(
        EventInfoPossessionItemCounter_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoPossessionItemCounter_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x21

  v5 = this;
  if ( (byte_42E951C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    this = (EventInfoPossessionItemCounter_o *)sub_B5D5C4(
                                                 &Method_EventInfoPossessionItemCounter__Initialization_b__8_0__,
                                                 v6,
                                                 v7,
                                                 v8);
    byte_42E951C = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  v5->fields.eventId = entity->fields.eventId;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v5, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, entity, v9, 0LL);
}


void __fastcall EventInfoPossessionItemCounter__OnDestroy(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoPossessionItemCounter__Setup(
        EventInfoPossessionItemCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoPossessionItemCounter_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  EventUiValueEntity_o *v13; // x8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x20
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42E951D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    this = (EventInfoPossessionItemCounter_o *)sub_B5D5C4(&StringLiteral_5746/*"EVENT_POSSESSION_ITEM_TITLE"*/, v9, v10, v11);
    byte_42E951D = 1;
  }
  if ( entity )
  {
    v12 = *(_QWORD *)&entity->max_length;
    if ( v12 )
    {
      if ( !(_DWORD)v12 )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v13 = entity->m_Items[0];
      if ( !v13 )
        goto LABEL_19;
      if ( System_Int32__TryParse(v13->fields.value, &v5->fields.itemId, 0LL) )
      {
        v5->fields.itemNum = 0LL;
        possessionTitleLabel = (UnityEngine_Object_o *)v5->fields.possessionTitleLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
          goto LABEL_17;
        v16 = v5->fields.possessionTitleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v16 )
        {
          UILabel__set_text(v16, (System_String_o *)this, 0LL);
LABEL_17:
          EventInfoPossessionItemCounter__UpdateDisp(v5, v15);
          return;
        }
LABEL_19:
        sub_B5D69C(this, entity);
      }
    }
  }
}


void __fastcall EventInfoPossessionItemCounter__UpdateDisp(
        EventInfoPossessionItemCounter_o *this,
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
  int64_t Instance; // x0
  __int64 v21; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v23; // x9
  int32_t possessionNumMax; // w8
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  int64_t itemNum; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E951E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5747/*"EVENT_POSSESSION_ITEM_VALUE"*/, v17, v18, v19);
    byte_42E951E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        this->fields.itemId,
                        0LL);
  if ( !Instance )
    goto LABEL_17;
  v23 = *(int *)(Instance + 28);
  possessionNumMax = this->fields.possessionNumMax;
  this->fields.itemNum = v23;
  if ( (possessionNumMax & 0x80000000) == 0 && (int)v23 > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5747/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  Instance = (int64_t)System_String__Format(v26, v27, 0LL);
  if ( !possessionValueLabel )
LABEL_17:
    sub_B5D69C(Instance, v21);
  UILabel__set_text(possessionValueLabel, (System_String_o *)Instance, 0LL);
}


void __fastcall EventInfoPossessionItemCounter___Initialization_b__8_0(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, 0LL);
  EventInfoUIBase__SetSpriteByLocalAtlas(
    (EventInfoUIBase_o *)this,
    this->fields.bgSprite,
    this->fields.bgSpriteName,
    0LL);
}