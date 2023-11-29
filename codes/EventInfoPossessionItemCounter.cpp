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
  __int64 v4; // x4
  __int64 v7; // x1
  System_Action_o *v8; // x21

  if ( (byte_40FA153 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, v7);
    byte_40FA153 = 1;
  }
  if ( !entity )
    sub_B170D4();
  this->fields.eventId = entity->fields.eventId;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, entity, method, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, entity, v8, 0LL);
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
  EventInfoPossessionItemCounter_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  EventUiValueEntity_o *v8; // x8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  const MethodInfo *v10; // x1
  UILabel_o *v11; // x20
  System_String_o *v12; // x0

  v4 = this;
  if ( (byte_40FA154 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, entity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    this = (EventInfoPossessionItemCounter_o *)sub_B16FFC(&StringLiteral_5653, v6);
    byte_40FA154 = 1;
  }
  if ( entity )
  {
    v7 = *(_QWORD *)&entity->max_length;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
      {
        sub_B17100(this, entity, method);
        sub_B170A0();
      }
      v8 = entity->m_Items[0];
      if ( !v8 )
        goto LABEL_19;
      if ( System_Int32__TryParse(v8->fields.value, &v4->fields.itemId, 0LL) )
      {
        v4->fields.itemNum = 0LL;
        possessionTitleLabel = (UnityEngine_Object_o *)v4->fields.possessionTitleLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
          goto LABEL_17;
        v11 = v4->fields.possessionTitleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5653, 0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, v12, 0LL);
LABEL_17:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v10);
          return;
        }
LABEL_19:
        sub_B170D4();
      }
    }
  }
}


void __fastcall EventInfoPossessionItemCounter__UpdateDisp(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  int64_t num; // x9
  int32_t possessionNumMax; // w8
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int64_t itemNum; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA155 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&long_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_5654, v7);
    byte_40FA155 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.itemId,
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_17;
  num = EntityDefinitely->fields.num;
  possessionNumMax = this->fields.possessionNumMax;
  this->fields.itemNum = num;
  if ( (possessionNumMax & 0x80000000) == 0 && (int)num > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5654, 0LL);
  itemNum = this->fields.itemNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  v17 = System_String__Format(v15, v16, 0LL);
  if ( !possessionValueLabel )
LABEL_17:
    sub_B170D4();
  UILabel__set_text(possessionValueLabel, v17, 0LL);
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