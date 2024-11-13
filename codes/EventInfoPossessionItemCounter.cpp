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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21

  v5 = this;
  if ( (byte_4B177C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, method);
    this = (EventInfoPossessionItemCounter_o *)sub_1BCA7E0(
                                                 &Method_EventInfoPossessionItemCounter__Initialization_b__8_0__,
                                                 v6,
                                                 v7);
    byte_4B177C8 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  v5->fields.eventId = entity->fields.eventId;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, entity, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)v5, Method_EventInfoPossessionItemCounter__Initialization_b__8_0__, 0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)v5, entity, v8, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  EventUiValueEntity_o *v10; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *possessionTitleLabel; // x20
  const MethodInfo *v13; // x1
  UILabel_o *v14; // x20

  v4 = this;
  if ( (byte_4B177C9 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, entity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    this = (EventInfoPossessionItemCounter_o *)sub_1BCA7E0(&StringLiteral_5746/*"EVENT_POSSESSION_ITEM_TITLE"*/, v7, v8);
    byte_4B177C9 = 1;
  }
  if ( entity )
  {
    v9 = *(_QWORD *)&entity->max_length;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
        sub_1BCAA44(this, entity);
      v10 = entity->m_Items[0];
      if ( !v10 )
        goto LABEL_17;
      if ( System_Int32__TryParse(v10->fields.value, &v4->fields.itemId, 0LL) )
      {
        v4->fields.itemNum = 0LL;
        possessionTitleLabel = (UnityEngine_Object_o *)v4->fields.possessionTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( !UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
          goto LABEL_15;
        v14 = v4->fields.possessionTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
        this = (EventInfoPossessionItemCounter_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5746/*"EVENT_POSSESSION_ITEM_TITLE"*/, 0LL);
        if ( v14 )
        {
          UILabel__set_text(v14, (System_String_o *)this, 0LL);
LABEL_15:
          EventInfoPossessionItemCounter__UpdateDisp(v4, v13);
          return;
        }
LABEL_17:
        sub_1BCAA3C(this, entity);
      }
    }
  }
}


void __fastcall EventInfoPossessionItemCounter__UpdateDisp(
        EventInfoPossessionItemCounter_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  int64_t v18; // x10
  int64_t possessionNumMax; // x9
  UILabel_o *possessionValueLabel; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int64_t itemNum; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B177CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&long_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_5747/*"EVENT_POSSESSION_ITEM_VALUE"*/, v12, v13);
    byte_4B177CA = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
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
  v18 = *(int *)(Instance + 28);
  possessionNumMax = (unsigned int)this->fields.possessionNumMax;
  this->fields.itemNum = v18;
  if ( (possessionNumMax & 0x80000000) == 0 && v18 > possessionNumMax )
    this->fields.itemNum = possessionNumMax;
  possessionValueLabel = this->fields.possessionValueLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5747/*"EVENT_POSSESSION_ITEM_VALUE"*/, 0LL);
  itemNum = this->fields.itemNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &itemNum);
  Instance = (int64_t)System_String__Format(v21, v22, 0LL);
  if ( !possessionValueLabel )
LABEL_15:
    sub_1BCAA3C(Instance, v15);
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