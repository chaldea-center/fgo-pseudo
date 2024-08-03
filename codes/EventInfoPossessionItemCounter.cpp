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
  if ( (byte_49FDBF4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    this = (EventInfoPossessionItemCounter_o *)sub_1B640C8(
                                                 &Method_EventInfoPossessionItemCounter__Initialization_b__8_0__,
                                                 v5);
    byte_49FDBF4 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  v4->fields.eventId = entity->fields.eventId;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, entity, method);
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

  v4 = this;
  if ( (byte_49FDBF5 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, entity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    this = (EventInfoPossessionItemCounter_o *)sub_1B640C8(&StringLiteral_5636/*"EVENT_POSSESSION_ITEM_TITLE"*/, v6);
    byte_49FDBF5 = 1;
  }
  if ( entity )
  {
    v7 = *(_QWORD *)&entity->max_length;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_1B6432C(this, entity);
      v8 = entity->m_Items[0];
      if ( !v8 )
        goto LABEL_17;
      if ( System_Int32__TryParse(v8->fields.value, &v4->fields.itemId, 0LL) )
      {
        v4->fields.itemNum = 0LL;
        possessionTitleLabel = (UnityEngine_Object_o *)v4->fields.possessionTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
          goto LABEL_15;
        v11 = v4->fields.possessionTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5636/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)this, 0LL);
LABEL_15:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v10);
          return;
        }
LABEL_17:
        sub_1B64324(this);
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
  Il2CppObject *MasterData_object; // x20
  int64_t v10; // x10
  int64_t possessionNumMax; // x9
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  int64_t itemNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDBF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B640C8(&long_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_5637/*"EVENT_POSSESSION_ITEM_VALUE"*/, v7);
    byte_49FDBF6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_15;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        (UserItemMaster_o *)MasterData_object,
                        Instance,
                        this->fields.itemId,
                        0LL);
  if ( !Instance )
    goto LABEL_15;
  v10 = *(int *)(Instance + 28);
  possessionNumMax = (unsigned int)this->fields.possessionNumMax;
  this->fields.itemNum = v10;
  if ( (possessionNumMax & 0x80000000) == 0 && v10 > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5637/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  Instance = (int64_t)System_String__Format(v13, v14, 0LL);
  if ( !possessionValueLabel )
LABEL_15:
    sub_1B64324(Instance);
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