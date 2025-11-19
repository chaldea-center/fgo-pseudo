void EventInfoPossessionItemCounter___ctor(EventInfoPossessionItemCounter_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoPossessionItemCounter__Initialization(
        EventInfoPossessionItemCounter_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventInfoPossessionItemCounter_o *v4; // x20
  System_Action_o *v5; // x21

  v4 = this;
  if ( (byte_4CB7854 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (EventInfoPossessionItemCounter_o *)sub_1C6BA08(&Method_EventInfoPossessionItemCounter__Initialization_b__8_0__);
    byte_4CB7854 = 1;
  }
  if ( !entity )
    sub_1C6BC60(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)v4, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v5, 0);
}


void EventInfoPossessionItemCounter__OnDestroy(EventInfoPossessionItemCounter_o *this, const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoPossessionItemCounter__Setup(
        EventInfoPossessionItemCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  EventInfoPossessionItemCounter_o *v4; // x19
  il2cpp_array_size_t max_length; // x8
  EventUiValueEntity_o *v6; // x8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  const MethodInfo *v8; // x1
  UILabel_o *v9; // x20

  v4 = this;
  if ( (byte_4CB7855 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (EventInfoPossessionItemCounter_o *)sub_1C6BA08(&StringLiteral_5647/*"EVENT_POSSESSION_ITEM_TITLE"*/);
    byte_4CB7855 = 1;
  }
  if ( entity )
  {
    max_length = entity->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C6BC68(this);
      v6 = entity->m_Items[0];
      if ( !v6 )
        goto LABEL_17;
      if ( System_Int32__TryParse(v6->fields.value, &v4->fields.itemId, 0) )
      {
        v4->fields.itemNum = 0;
        possessionTitleLabel = (UnityEngine_Object_o *)v4->fields.possessionTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0, 0) )
          goto LABEL_15;
        v9 = v4->fields.possessionTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)this, 0);
LABEL_15:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v8);
          return;
        }
LABEL_17:
        sub_1C6BC60(this, entity);
      }
    }
  }
}


void EventInfoPossessionItemCounter__UpdateDisp(EventInfoPossessionItemCounter_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t m_CancellationTokenSource_high; // x10
  int64_t possessionNumMax; // x9
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  int64_t itemNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB7856 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5648/*"EVENT_POSSESSION_ITEM_VALUE"*/);
    byte_4CB7856 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_19;
  Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                this->fields.itemId,
                                0);
  if ( !Instance )
    goto LABEL_19;
  m_CancellationTokenSource_high = SHIDWORD(Instance->fields.m_CancellationTokenSource);
  possessionNumMax = (unsigned int)this->fields.possessionNumMax;
  this->fields.itemNum = m_CancellationTokenSource_high;
  if ( (possessionNumMax & 0x80000000) == 0 && m_CancellationTokenSource_high > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0);
  itemNum = this->fields.itemNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  Instance = (DataManager_o *)System_String__Format(v9, v10, 0);
  if ( !possessionValueLabel )
LABEL_19:
    sub_1C6BC60(Instance, v4);
  UILabel__set_text(possessionValueLabel, (System_String_o *)Instance, 0);
}


void EventInfoPossessionItemCounter___Initialization_b__8_0(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, this->fields.eventId, 0);
  EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, this->fields.bgSprite, this->fields.bgSpriteName, 0);
}