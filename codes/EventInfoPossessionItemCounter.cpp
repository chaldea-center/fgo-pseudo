void __fastcall EventInfoPossessionItemCounter___ctor(EventInfoPossessionItemCounter_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoPossessionItemCounter__Initialization(
        EventInfoPossessionItemCounter_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoPossessionItemCounter_o *v4; // x20
  __int64 v5; // x1
  System_Action_o *v6; // x21

  v4 = this;
  if ( (byte_4188686 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    this = (EventInfoPossessionItemCounter_o *)sub_B2C35C(
                                                 &Method_EventInfoPossessionItemCounter__Initialization_b__8_0__,
                                                 v5);
    byte_4188686 = 1;
  }
  if ( !entity )
    sub_B2C434(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v4, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v6, 0LL);
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
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4188687 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, entity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    this = (EventInfoPossessionItemCounter_o *)sub_B2C35C(&StringLiteral_5669/*"EVENT_POSSESSION_ITEM_TITLE"*/, v6);
    byte_4188687 = 1;
  }
  if ( entity )
  {
    v7 = *(_QWORD *)&entity->max_length;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)this, 0LL);
LABEL_17:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v10);
          return;
        }
LABEL_19:
        sub_B2C434(this, entity);
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
  int64_t Instance; // x0
  __int64 v9; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t v11; // x9
  int32_t possessionNumMax; // w8
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  int64_t itemNum; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188688 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&long_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_5670/*"EVENT_POSSESSION_ITEM_VALUE"*/, v7);
    byte_4188688 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  v11 = *(int *)(Instance + 28);
  possessionNumMax = this->fields.possessionNumMax;
  this->fields.itemNum = v11;
  if ( (possessionNumMax & 0x80000000) == 0 && (int)v11 > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  Instance = (int64_t)System_String__Format(v14, v15, 0LL);
  if ( !possessionValueLabel )
LABEL_17:
    sub_B2C434(Instance, v9);
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