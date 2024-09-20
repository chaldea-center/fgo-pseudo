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
  System_Action_o *v5; // x21

  v4 = this;
  if ( (byte_4A5C7C6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventInfoPossessionItemCounter_o *)sub_1B885B0(&Method_EventInfoPossessionItemCounter__Initialization_b__8_0__);
    byte_4A5C7C6 = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  v4->fields.eventId = entity->fields.eventId;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)v4, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v4, entity, v5, 0LL);
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
  __int64 v5; // x8
  EventUiValueEntity_o *v6; // x8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  const MethodInfo *v8; // x1
  UILabel_o *v9; // x20

  v4 = this;
  if ( (byte_4A5C7C7 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (EventInfoPossessionItemCounter_o *)sub_1B885B0(&StringLiteral_5662/*"EVENT_POSSESSION_ITEM_TITLE"*/);
    byte_4A5C7C7 = 1;
  }
  if ( entity )
  {
    v5 = *(_QWORD *)&entity->max_length;
    if ( v5 )
    {
      if ( !(_DWORD)v5 )
        sub_1B88814(this, entity);
      v6 = entity->m_Items[0];
      if ( !v6 )
        goto LABEL_17;
      if ( System_Int32__TryParse(v6->fields.value, &v4->fields.itemId, 0LL) )
      {
        v4->fields.itemNum = 0LL;
        possessionTitleLabel = (UnityEngine_Object_o *)v4->fields.possessionTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
          goto LABEL_15;
        v9 = v4->fields.possessionTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)this, 0LL);
LABEL_15:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v8);
          return;
        }
LABEL_17:
        sub_1B8880C(this, entity);
      }
    }
  }
}


void __fastcall EventInfoPossessionItemCounter__UpdateDisp(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v6; // x10
  int64_t possessionNumMax; // x9
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int64_t itemNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C7C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5663/*"EVENT_POSSESSION_ITEM_VALUE"*/);
    byte_4A5C7C8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  v6 = *(int *)(Instance + 28);
  possessionNumMax = (unsigned int)this->fields.possessionNumMax;
  this->fields.itemNum = v6;
  if ( (possessionNumMax & 0x80000000) == 0 && v6 > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5663/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum, v10, v11, v12);
  Instance = (int64_t)System_String__Format(v9, v13, 0LL);
  if ( !possessionValueLabel )
LABEL_15:
    sub_1B8880C(Instance, v4);
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