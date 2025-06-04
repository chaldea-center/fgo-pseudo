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
  if ( (byte_4B03610 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, entity);
    this = (EventInfoPossessionItemCounter_o *)sub_1BC3008(
                                                 &Method_EventInfoPossessionItemCounter__Initialization_b__8_0__,
                                                 v5);
    byte_4B03610 = 1;
  }
  if ( !entity )
    sub_1BC3264(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
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
  if ( (byte_4B03611 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, entity);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    this = (EventInfoPossessionItemCounter_o *)sub_1BC3008(&StringLiteral_5607/*"EVENT_POSSESSION_ITEM_TITLE"*/, v6);
    byte_4B03611 = 1;
  }
  if ( entity )
  {
    v7 = *(_QWORD *)&entity->max_length;
    if ( v7 )
    {
      if ( !(_DWORD)v7 )
        sub_1BC326C(this, entity, method);
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
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)this, 0LL);
LABEL_15:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v10);
          return;
        }
LABEL_17:
        sub_1BC3264(this, entity);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t m_CancellationTokenSource_high; // x10
  int64_t possessionNumMax; // x9
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int64_t itemNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B03612 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BC3008(&long_TypeInfo, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_5608/*"EVENT_POSSESSION_ITEM_VALUE"*/, v7);
    byte_4B03612 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    byte_4AFC1F1 = 1;
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
                                0LL);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5608/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum, v15, v16, v17);
  Instance = (DataManager_o *)System_String__Format(v14, v18, 0LL);
  if ( !possessionValueLabel )
LABEL_19:
    sub_1BC3264(Instance, v9);
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