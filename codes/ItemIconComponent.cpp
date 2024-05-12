void __fastcall ItemIconComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  ItemIconComponent_c *v7; // x8
  struct ItemIconComponent_StaticFields *static_fields; // x0
  System_Int32_array **v9; // x1

  if ( (byte_438C9B6 & 1) == 0 )
  {
    sub_B775C4(&ItemIconComponent_TypeInfo);
    sub_B775C4(&StringLiteral_18954/*"event_skill_icon_{0:D2}"*/);
    byte_438C9B6 = 1;
  }
  ItemIconComponent_TypeInfo->static_fields->CHANGE_FONT_COUNT = 4;
  ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 20;
  v7 = ItemIconComponent_TypeInfo;
  ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH = 16;
  v7->static_fields->EQUIP_ITEM_RARITY = 3;
  static_fields = v7->static_fields;
  v9 = (System_Int32_array **)StringLiteral_18954/*"event_skill_icon_{0:D2}"*/;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)StringLiteral_18954/*"event_skill_icon_{0:D2}"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->ASSIST_SPRITE_NAME, v9, v1, v2, v3, v4, v5, v6);
}


void __fastcall ItemIconComponent___ctor(ItemIconComponent_o *this, const MethodInfo *method)
{
  this->fields.PossessionLabelWidth = 84.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemIconComponent__Awake(ItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  unsigned int localPosition; // s0
  float v7; // s8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  UILabel_o *v9; // x19
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C991 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_7608/*"ITEM_POSSESSION_TITLE"*/);
    byte_438C991 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_22;
    v7 = *(float *)&localPosition;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    v10.fields.y = -64.0;
    v10.fields.z = 0.0;
    v10.fields.x = v7;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0LL);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    v9 = this->fields.possessionTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7608/*"ITEM_POSSESSION_TITLE"*/, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_22:
    sub_B7769C(transform, v4);
  }
}


int32_t __fastcall ItemIconComponent__CalcPossessionNum(
        ItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  void *SelfUserGame; // x0
  __int64 v5; // x1
  int64_t v6; // x21
  _DWORD *v7; // x20
  const MethodInfo *v8; // x3
  int v9; // w8

  if ( (byte_438C9AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C9AC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v6 = *((_QWORD *)SelfUserGame + 2),
        v7 = SelfUserGame,
        (SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)SelfUserGame,
                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (SelfUserGame = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                         objectId,
                         (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(SelfUserGame, v5);
  }
  v9 = *((_DWORD *)SelfUserGame + 12);
  if ( v9 == 22 )
    return v7[45];
  if ( v9 == 5 )
    return v7[44];
  return ItemIconComponent__getUserItemNum((ItemIconComponent_o *)SelfUserGame, v6, objectId, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__CalcSetPossession(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        const MethodInfo *method)
{
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( giftType == 2 )
  {
    v5 = ItemIconComponent__CalcPossessionNum(this, objectId, *(const MethodInfo **)&objectId);
    ItemIconComponent__SetPossession(this, v5, v6);
  }
}


void __fastcall ItemIconComponent__Clear(ItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x20
  bool v4; // w0
  UISprite_o *backSprite; // x20
  __int64 v6; // x1
  UISprite_o *iconSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20

  if ( (byte_438C992 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20671/*"listframes_shadow"*/);
    byte_438C992 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v4 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0LL, 0LL), (iconSprite = this->fields.frameSprite) == 0LL)
      || (UISprite__set_spriteName(iconSprite, (System_String_o *)StringLiteral_20671/*"listframes_shadow"*/, 0LL),
          (iconSprite = this->fields.typeSprite) == 0LL) )
    {
LABEL_53:
      sub_B7769C(iconSprite, v6);
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
    {
      iconSprite = this->fields.backSprite;
      if ( !iconSprite )
        goto LABEL_53;
      iconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, 0, 0LL);
    }
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_53;
  }
  UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)iconSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.svtJoinIcon;
    if ( !iconSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)iconSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.materialTdSprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__CloseCommandCodeDetail(
        ItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438C9B1 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C9B1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


void __fastcall ItemIconComponent__OnClickItem(
        ItemIconComponent_o *this,
        UIScrollBar_o *bar,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v15; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v16; // x23
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  float value; // s0
  float v20; // s0
  WebViewManager_o *v21; // x0
  CommandCodeEntity_o *v22; // x21
  CommonUI_o *v23; // x22
  ServantStatusDialog_EndDelegate_o *v24; // x23
  WebViewManager_o *v25; // x0
  int32_t svtId; // w21
  CommonUI_o *v27; // x22
  ServantStatusDialog_EndDelegate_o *v28; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C9AE & 1) == 0 )
  {
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_ItemIconComponent_CloseCommandCodeDetail__);
    sub_B775C4(&Method_ItemIconComponent_closeItemDetail__);
    sub_B775C4(&Method_ItemIconComponent_closeSvtDetail__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C9AE = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.detailCloseCallBack,
    (System_Int32_array **)closeCallBack,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v15 = (CommonUI_o *)Instance;
    v16 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ItemIconComponent_closeItemDetail__,
      0LL);
    if ( !v15 )
      goto LABEL_26;
    CommonUI__OpenItemDetailDialog(v15, itemEnt, v16, 50, 0LL);
  }
  else if ( this->fields.commandCodeId )
  {
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = (CommandCodeEntity_o *)entity;
      v23 = (CommonUI_o *)v21;
      v24 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0LL);
      if ( !v23 )
        goto LABEL_26;
      CommonUI__OpenServantEquipStatusDialog_18072364(v23, 25, v22, 0, v24, 0LL, 0LL);
    }
  }
  else if ( this->fields.svtId )
  {
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v27 = (CommonUI_o *)v25;
    v28 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v28, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0LL);
    if ( !v27 )
      goto LABEL_26;
    CommonUI__OpenServantStatusDialog_18069932(v27, 7, svtId, v28, 0LL);
  }
  else
  {
    ActionExtensions__Call(closeCallBack, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)bar,
                                                          0LL,
                                                          0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0LL);
      v20 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v20 + -0.00001, 0LL);
      return;
    }
LABEL_26:
    sub_B7769C(MasterData_WarQuestSelectionMaster, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *backSprite; // x20
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_438C9A6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A6 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v7 = this->fields.backSprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v7 = this->fields.frameSprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v7 = this->fields.typeSprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v7 = this->fields.classSprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v7 = this->fields.raritySprite;
    if ( !v7 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v7 = this->fields.counterLabel;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
        v7,
        *(_QWORD *)(*(_QWORD *)v7 + 448LL),
        v3);
      return;
    }
LABEL_46:
    sub_B7769C(v7, v6);
  }
}


void __fastcall ItemIconComponent__SetCoinImage(
        ItemIconComponent_o *this,
        int32_t coinImageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x24
  bool v12; // w0
  __int64 v13; // x2
  UISprite_o *backSprite; // x24
  Il2CppObject *v15; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v17; // x1
  UISprite_o *iconSprite; // x24
  struct UISprite_o *v19; // x22
  __int64 v20; // x2
  Il2CppObject *v21; // x0
  System_String_o *v22; // x1
  UnityEngine_Object_o *v23; // x23
  UISprite_o *v24; // x23
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  __int64 v29; // x2
  UILabel_o *v30; // x21
  Il2CppObject *v31; // x22
  Il2CppObject *v32; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v35; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438C99F & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19863/*"img_common_frame01"*/);
    sub_B775C4(&StringLiteral_20673/*"listframes{0}_bg"*/);
    sub_B775C4(&StringLiteral_24137/*"{0}{1:#,0}"*/);
    sub_B775C4(&StringLiteral_20676/*"listframes{0}_txt_item"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20671/*"listframes_shadow"*/);
    byte_438C99F = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v12 )
  {
    v37 = bgImageId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v13);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20673/*"listframes{0}_bg"*/, v15, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      iconSprite = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(iconSprite, coinImageId, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20671/*"listframes_shadow"*/, 0LL);
        v19 = this->fields.typeSprite;
        v36 = bgImageId;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v20);
        frameSprite = System_String__Format((System_String_o *)StringLiteral_20676/*"listframes{0}_txt_item"*/, v21, 0LL);
        if ( v19 )
        {
          v22 = frameSprite;
          frameSprite = (System_String_o *)v19;
LABEL_35:
          UISprite__set_spriteName((UISprite_o *)frameSprite, v22, 0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_70:
    sub_B7769C(frameSprite, v17);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_70;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v23 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    v24 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCoin(v24, coinImageId, 0LL);
  }
  v25 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_70;
    v22 = (System_String_o *)StringLiteral_19863/*"img_common_frame01"*/;
    goto LABEL_35;
  }
LABEL_36:
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v30 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v30 )
        goto LABEL_70;
    }
    else
    {
      v31 = (Il2CppObject *)frameSprite;
      v35 = count;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v29);
      frameSprite = System_String__Format_44897472((System_String_o *)StringLiteral_24137/*"{0}{1:#,0}"*/, v31, v32, 0LL);
      v17 = frameSprite;
      if ( !v30 )
        goto LABEL_70;
    }
    UILabel__set_text(v30, v17, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_70;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetColor(
        ItemIconComponent_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *backSprite; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_438C9A5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A5 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.backSprite;
    if ( !v10 )
      goto LABEL_46;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_46;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v10 )
      goto LABEL_46;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v10 )
      goto LABEL_46;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.classSprite;
    if ( !v10 )
      goto LABEL_46;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v10, v21, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v10 )
      goto LABEL_46;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v10, v22, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.counterLabel;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0LL);
      return;
    }
LABEL_46:
    sub_B7769C(v10, v9);
  }
}


void __fastcall ItemIconComponent__SetCombineItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  bool v10; // w22
  int32_t ImageId; // w0
  const MethodInfo *v12; // x5

  if ( (byte_438C994 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_438C994 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          itemId,
                                                                                          (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  }
  v9 = Master_WarQuestSelectionMaster;
  v10 = LODWORD(Master_WarQuestSelectionMaster->fields.seriazlier) == 29;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_WarQuestSelectionMaster, v8);
  ItemIconComponent__SetCombineItemImage(this, ImageId, HIDWORD(v9->fields._lookup), count, v10, v12);
}


void __fastcall ItemIconComponent__SetCombineItemImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t count,
        bool isCoin,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x23
  System_String_o *v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v14; // x23
  UnityEngine_Object_o *frameSprite; // x21
  __int64 v16; // x2
  UISprite_o *v17; // x21
  Il2CppObject *v18; // x0
  UnityEngine_Object_o *typeSprite; // x21
  __int64 v20; // x2
  UISprite_o *v21; // x21
  Il2CppObject *v22; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v26; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v30 = count;
  if ( (byte_438C9A0 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_20673/*"listframes{0}_bg"*/);
    sub_B775C4(&StringLiteral_20676/*"listframes{0}_txt_item"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C9A0 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.iconSprite;
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(v14, imageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v14, imageId, 0LL);
    }
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v17 = this->fields.frameSprite;
    v29 = bgImageId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v16);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20673/*"listframes{0}_bg"*/, v18, 0LL);
    if ( !v17 )
      goto LABEL_66;
    UISprite__set_spriteName(v17, (System_String_o *)gameObject, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v21 = this->fields.typeSprite;
    v28 = bgImageId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20676/*"listframes{0}_txt_item"*/, v22, 0LL);
    if ( !v21 )
      goto LABEL_66;
    UISprite__set_spriteName(v21, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = this->fields.counterLabel;
    if ( (v30 & 0x80000000) != 0 )
    {
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v26 )
        goto LABEL_66;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v30, 0LL);
      if ( gameObject )
        v11 = (System_String_o *)gameObject;
      else
        v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v26 )
LABEL_66:
        sub_B7769C(gameObject, v11);
    }
    UILabel__set_text(v26, v11, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetCommandCodeImage(
        ItemIconComponent_o *this,
        int32_t commandCodeId,
        int32_t count,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v8; // x1
  int32_t v9; // w21
  UnityEngine_Object_o *typeSprite; // x23
  bool v11; // w0
  UISprite_o *backSprite; // x23
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v14; // x23
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v18; // x22
  UnityEngine_Object_o *counterLabel; // x21
  UILabel_o *v20; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v22; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  v25 = count;
  if ( (byte_438C9A3 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C9A3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     commandCodeId,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_75:
    sub_B7769C(Instance, v8);
  }
  v9 = *((_DWORD *)Instance + 16);
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v11 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeBaseIcon(backSprite, v9, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.iconSprite, commandCodeId, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_75;
    goto LABEL_36;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    Instance = this->fields.backSprite;
    if ( !Instance )
      goto LABEL_75;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeImage(v14, commandCodeId, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_75;
LABEL_36:
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = this->fields.classSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v18 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v9, 0LL);
    if ( !v18 )
      goto LABEL_75;
    UISprite__set_spriteName(v18, (System_String_o *)Instance, 0LL);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_75;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v20 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v8 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v20 )
        goto LABEL_75;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v22 = System_Int32__ToString((int32_t)&v25, 0LL);
      Instance = System_String__Concat_44901936(CrossOperatorString, v22, 0LL);
      v8 = (System_String_o *)Instance;
      if ( !v20 )
        goto LABEL_75;
    }
    UILabel__set_text(v20, v8, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_75;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = this->fields.materialTdSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetCondensedScale(
        ItemIconComponent_o *this,
        int32_t maxWidth,
        const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel )
    sub_B7769C(0LL, maxWidth);
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0LL);
}


void __fastcall ItemIconComponent__SetCountLabelActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_438C9B2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9B2 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7769C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  UIWidget_o *iconSprite; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *backSprite; // x21
  int32_t v9; // w21
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *v14; // x22
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *counterLabel; // x21

  if ( (byte_438C9A4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A4 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconSprite = (UIWidget_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( ((unsigned __int8)iconSprite & 1) != 0 )
  {
    if ( !backSprite )
      goto LABEL_61;
    UIWidget__set_depth((UIWidget_o *)this->fields.backSprite, depth, 0LL);
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 1, 0LL);
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_61;
    v9 = depth + 3;
    UIWidget__set_depth(iconSprite, depth + 2, 0LL);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
    {
      iconSprite = (UIWidget_o *)this->fields.classSprite;
      if ( !iconSprite )
        goto LABEL_61;
      UIWidget__set_depth(iconSprite, v9, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      iconSprite = (UIWidget_o *)this->fields.raritySprite;
      if ( !iconSprite )
        goto LABEL_61;
      UIWidget__set_depth(iconSprite, v9, 0LL);
    }
    iconSprite = (UIWidget_o *)this->fields.typeSprite;
    if ( !iconSprite )
LABEL_61:
      sub_B7769C(iconSprite, v7);
    goto LABEL_53;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth, 0LL);
  }
  v12 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 1, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 2, 0LL);
  }
  v14 = (UnityEngine_Object_o *)this->fields.classSprite;
  v9 = depth + 3;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, v9, 0LL);
  }
  v15 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_61;
LABEL_53:
    UIWidget__set_depth(iconSprite, v9, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 4, 0LL);
  }
}


// attributes: thunk
void __fastcall ItemIconComponent__SetEquipItem(
        ItemIconComponent_o *this,
        int32_t equipItemId,
        const MethodInfo *method)
{
  ItemIconComponent__SetEquipItemImage(this, equipItemId, method);
}


void __fastcall ItemIconComponent__SetEquipItemImage(
        ItemIconComponent_o *this,
        int32_t equipImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x2
  UISprite_o *v9; // x21
  ItemIconComponent_c *v10; // x0
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  UISprite_o *v14; // x21
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v16; // x2
  UISprite_o *v17; // x20
  ItemIconComponent_c *v18; // x0
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v25; // [xsp+8h] [xbp-28h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C9A1 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&ItemIconComponent_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_20677/*"listframes{0}_txt_mysticcode"*/);
    sub_B775C4(&StringLiteral_20673/*"listframes{0}_bg"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C9A1 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_68;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v9 = this->fields.backSprite;
    v10 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v10 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v10->static_fields->EQUIP_ITEM_RARITY;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EQUIP_ITEM_RARITY, v8);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20673/*"listframes{0}_bg"*/, v11, 0LL);
    if ( !v9 )
      goto LABEL_68;
    UISprite__set_spriteName(v9, (System_String_o *)gameObject, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipItem(v14, equipImageId, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v17 = this->fields.typeSprite;
    v18 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v18 = ItemIconComponent_TypeInfo;
    }
    v25 = v18->static_fields->EQUIP_ITEM_RARITY;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20677/*"listframes{0}_txt_mysticcode"*/, v19, 0LL);
    if ( !v17 )
      goto LABEL_68;
    UISprite__set_spriteName(v17, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject )
      goto LABEL_68;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.svtJoinIcon;
    if ( !gameObject )
      goto LABEL_68;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      return;
    }
LABEL_68:
    sub_B7769C(gameObject, v6);
  }
}


void __fastcall ItemIconComponent__SetEventPointBuffImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x22
  bool v8; // w0
  __int64 v9; // x2
  UISprite_o *backSprite; // x22
  Il2CppObject *v11; // x0
  System_String_o *frameSprite; // x0
  __int64 v13; // x1
  UISprite_o *iconSprite; // x22
  struct UISprite_o *v15; // x20
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x21
  UISprite_o *v20; // x21
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438C99B & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19863/*"img_common_frame01"*/);
    sub_B775C4(&StringLiteral_20673/*"listframes{0}_bg"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20675/*"listframes{0}_txt_eventbonus"*/);
    sub_B775C4(&StringLiteral_20671/*"listframes_shadow"*/);
    byte_438C99B = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v8 )
  {
    v26 = bgImageId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v9);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20673/*"listframes{0}_bg"*/, v11, 0LL);
    if ( !backSprite )
      goto LABEL_55;
    UISprite__set_spriteName(backSprite, frameSprite, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20671/*"listframes_shadow"*/, 0LL);
    v15 = this->fields.typeSprite;
    v25 = bgImageId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20675/*"listframes{0}_txt_eventbonus"*/, v17, 0LL);
    if ( !v15 )
      goto LABEL_55;
    v18 = frameSprite;
    frameSprite = (System_String_o *)v15;
    goto LABEL_35;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_55;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v19 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    v20 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v20, imageId, 0LL);
  }
  v21 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_55;
    v18 = (System_String_o *)StringLiteral_19863/*"img_common_frame01"*/;
LABEL_35:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v18, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.counterLabel;
    if ( frameSprite )
    {
      UILabel__set_text((UILabel_o *)frameSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_55:
    sub_B7769C(frameSprite, v13);
  }
}


void __fastcall ItemIconComponent__SetFaceImage(
        ItemIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t count,
        int32_t giftType,
        bool isQuestBoard,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v13; // x1
  ServantEntity_o *v14; // x22
  int32_t v15; // w23
  const MethodInfo *v16; // x2
  int32_t FrameType_31751840; // w25
  int32_t ImageLimitCount; // w26
  UnityEngine_Object_o *Component_WebViewObject; // x27
  UnityEngine_Object_o *typeSprite; // x27
  bool v21; // w0
  UISprite_o *backSprite; // x27
  UnityEngine_Object_o *iconSprite; // x27
  UISprite_o *v24; // x27
  UnityEngine_Object_o *frameSprite; // x24
  UISprite_o *v26; // x24
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v28; // x24
  UnityEngine_Object_o *raritySprite; // x23
  UISprite_o *v30; // x23
  int32_t v31; // w24
  UnityEngine_Object_o *counterLabel; // x23
  UILabel_o *v33; // x23
  System_String_o *CrossOperatorString; // x24
  System_String_o *v35; // x0
  UnityEngine_Object_o *svtJoinIcon; // x23
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v38; // x20
  System_String_o **v39; // x8
  System_String_o *v40; // x19
  int32_t rarity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  v42 = count;
  if ( (byte_438C9A2 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_22293/*"ribbon_noblephantasmup_01"*/);
    sub_B775C4(&StringLiteral_22294/*"ribbon_noblephantasmup_02"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20671/*"listframes_shadow"*/);
    sub_B775C4(&StringLiteral_19732/*"icon_eventjoin_01"*/);
    byte_438C9A2 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               svtId,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_105;
  v14 = (ServantEntity_o *)Instance;
  v15 = *((_DWORD *)Instance + 20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_105;
  FrameType_31751840 = ServantExceedMaster__GetFrameType_31751840(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         limitCount,
                         0,
                         0LL);
  if ( svtId < 1 )
  {
    ImageLimitCount = 0;
  }
  else
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, v16);
  }
  Instance = this->fields.iconSprite;
  if ( !Instance )
    goto LABEL_105;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_105;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v21 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_31751840, v15, 0LL);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_105;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20671/*"listframes_shadow"*/, 0LL);
    AtlasManager__SetServantType(this->fields.typeSprite, v14->fields.type, FrameType_31751840, v15, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
    {
      Instance = this->fields.backSprite;
      if ( !Instance )
        goto LABEL_105;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
    {
      v24 = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v24, svtId, ImageLimitCount, 0LL);
    }
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      v26 = this->fields.frameSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceFrameIcon(v26, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (void *)ServantEntity__get_IsServantEquip(v14, 0LL);
    v28 = this->fields.classSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_105;
      UISprite__set_spriteName(this->fields.classSprite, 0LL, 0LL);
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClass(v28, v15, FrameType_31751840, 0LL);
    }
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v30 = this->fields.raritySprite;
    v31 = rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v31, 0LL);
    if ( v30 )
    {
      UISprite__set_spriteName(v30, (System_String_o *)Instance, 0LL);
      Instance = this->fields.raritySprite;
      if ( Instance )
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 848LL));
        goto LABEL_74;
      }
    }
LABEL_105:
    sub_B7769C(Instance, v13);
  }
LABEL_74:
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v33 = this->fields.counterLabel;
    if ( v42 <= 1 )
    {
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v33 )
        goto LABEL_105;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v35 = System_Int32__ToString((int32_t)&v42, 0LL);
      Instance = System_String__Concat_44901936(CrossOperatorString, v35, 0LL);
      v13 = (System_String_o *)Instance;
      if ( !v33 )
        goto LABEL_105;
    }
    UILabel__set_text(v33, v13, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_105;
    if ( giftType == 6 )
      ShiningIconComponent__Set_34095256(
        (ShiningIconComponent_o *)Instance,
        (System_String_o *)StringLiteral_19732/*"icon_eventjoin_01"*/,
        0LL);
    else
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = (void *)ServantEntity__get_IsServantMaterialTd(v14, 0LL);
    v38 = this->fields.materialTdSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v39 = (System_String_o **)&StringLiteral_22294/*"ribbon_noblephantasmup_02"*/;
      if ( !isQuestBoard )
        v39 = (System_String_o **)&StringLiteral_22293/*"ribbon_noblephantasmup_01"*/;
      v40 = *v39;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v38, v40, 0LL);
    }
    else
    {
      if ( !v38 )
        goto LABEL_105;
      UISprite__set_spriteName(v38, 0LL, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetGift(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int32_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  int32_t v12; // w1
  int32_t v13; // w3
  int32_t v14; // w4
  ItemIconComponent_o *v15; // x0
  int32_t v16; // w2
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  ItemEntity_o *v19; // x20
  const MethodInfo *v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarEntity_o *Entity; // x20
  const MethodInfo *v28; // x2
  int masterCheckName_high; // w8
  int64_t targetId; // x20
  __int64 v31; // x21
  int32_t v32; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438C995 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C995 = 1;
  }
  switch ( giftType )
  {
    case 1:
    case 6:
    case 7:
      if ( objectId >= 1 )
      {
        ItemIconComponent__SetFaceImage(this, objectId, 0, count, giftType, isQuestBoard, v6);
        this->fields.svtId = objectId;
        return;
      }
      v12 = 4;
      goto LABEL_31;
    case 2:
      if ( objectId < 1 )
        goto LABEL_26;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    objectId,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_43;
      v19 = (ItemEntity_o *)Instance;
      if ( ItemEntity__GetImageId((ItemEntity_o *)Instance, v18) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v19, count, v20);
      }
      else
      {
        ItemIconComponent__SetItem_28174616(this, v19, count, v20);
        this->fields.itemEnt = v19;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)v19,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      return;
    case 5:
      if ( objectId < 1 )
        goto LABEL_26;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 objectId,
                 (const MethodInfo_21FB894 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_43;
      masterCheckName_high = HIDWORD(Instance->fields.masterCheckName);
      if ( masterCheckName_high == 2 )
      {
        if ( Entity )
        {
          v31 = *(_QWORD *)&Entity->fields.startType;
          targetId = Entity->fields.targetId;
LABEL_37:
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v33.fields.currentCryptoKey = v31;
          *(_QWORD *)&v33.fields.fakeValue = targetId;
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
          goto LABEL_42;
        }
LABEL_43:
        sub_B7769C(Instance, v18);
      }
      if ( masterCheckName_high == 1 )
      {
        if ( Entity )
        {
          v31 = *(_QWORD *)&Entity->fields.flag;
          targetId = (int64_t)Entity->fields.emptyMessage;
          goto LABEL_37;
        }
        goto LABEL_43;
      }
      v32 = 0;
LABEL_42:
      ItemIconComponent__SetEquipItemImage(this, v32, v28);
      return;
    case 8:
      if ( objectId < 1 )
        goto LABEL_26;
      v13 = -1;
      v14 = -1;
      v15 = this;
      v12 = objectId;
      v16 = 0;
      goto LABEL_33;
    case 9:
      v12 = 23;
      v16 = 3;
      v13 = 23;
      v14 = -1;
      v15 = this;
      goto LABEL_33;
    case 11:
      if ( objectId < 1 )
      {
        v12 = 8014;
LABEL_31:
        v13 = -1;
        v15 = this;
LABEL_32:
        v16 = 0;
        v14 = count;
LABEL_33:
        ItemIconComponent__SetItemImage_28175904(v15, v12, v16, v13, v14, method);
      }
      else
      {
        ItemIconComponent__SetCommandCodeImage(this, objectId, count, *(const MethodInfo **)&count);
        this->fields.commandCodeId = objectId;
      }
      return;
    case 14:
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_28178620(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    default:
LABEL_26:
      v13 = -1;
      v15 = this;
      v12 = 0;
      goto LABEL_32;
  }
}


void __fastcall ItemIconComponent__SetGiftDesignSize(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  _DWORD *v10; // x0
  __int64 v11; // x1
  int v12; // w24
  int v13; // w8
  UILabel_o *counterLabel; // x22
  int32_t DEFAULT_FONT_SIZE; // w1
  int32_t counta; // [xsp+Ch] [xbp-34h] BYREF

  counta = count;
  if ( (byte_438C996 & 1) == 0 )
  {
    sub_B775C4(&ItemIconComponent_TypeInfo);
    byte_438C996 = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0LL);
    if ( v10 )
    {
      v12 = v10[4];
      v10 = ItemIconComponent_TypeInfo;
      if ( (WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
      {
        if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
          v10 = ItemIconComponent_TypeInfo;
        }
        v13 = WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
      }
      else
      {
        v13 = 0;
      }
      counterLabel = this->fields.counterLabel;
      if ( v12 <= **((_DWORD **)v10 + 23) )
      {
        if ( v13 && !v10[56] )
          j_il2cpp_runtime_class_init_0(v10);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v13 && !v10[56] )
          j_il2cpp_runtime_class_init_0(v10);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH;
LABEL_21:
          UILabel__set_fontSize(counterLabel, DEFAULT_FONT_SIZE, 0LL);
          goto LABEL_22;
        }
      }
    }
    sub_B7769C(v10, v11);
  }
LABEL_22:
  ItemIconComponent__SetGift(this, giftType, objectId, counta, 0, v5);
}


void __fastcall ItemIconComponent__SetItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  ItemEntity_o *Entity; // x1
  const MethodInfo *v10; // x3

  if ( (byte_438C993 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C993 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v8);
  }
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             itemId,
                             (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_28174616(this, Entity, count, v10);
}


void __fastcall ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  ItemIconComponent__SetItemImage_28175904(this, imageId, 0, -1, -1, v3);
}


void __fastcall ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  bool v6; // w0
  UISprite_o *iconSprite; // x21
  const MethodInfo *v8; // x4

  if ( (byte_438C99D & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C99D = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v6 )
    goto LABEL_12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.iconSprite;
LABEL_12:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItemByName(iconSprite, spriteNamet, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, v8);
}


void __fastcall ItemIconComponent__SetItemImage_28175904(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x24
  bool v12; // w0
  UISprite_o *iconSprite; // x24
  const MethodInfo *v14; // x4

  if ( (byte_438C99C & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C99C = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v12 )
    goto LABEL_12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.iconSprite;
LABEL_12:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, v14);
}


void __fastcall ItemIconComponent__SetItemImage_28178440(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ItemIconComponent__SetItemImage_28175904(this, imageId, 0, -1, count, v4);
}


void __fastcall ItemIconComponent__SetItemImage_28178620(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  int32_t longName_high; // w2
  ItemIconComponent_o *v13; // x0
  int32_t v14; // w1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C99A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C99A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                objectId,
                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v13 = this;
    v14 = imageId;
    longName_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_B7769C(Instance, v10);
  longName_high = HIDWORD(entity->fields.longName);
  v13 = this;
  v14 = imageId;
LABEL_9:
  ItemIconComponent__SetItemImage_28175904(v13, v14, longName_high, -1, count, v11);
}


void __fastcall ItemIconComponent__SetItemInfo(
        ItemIconComponent_o *this,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x23
  bool v10; // w0
  __int64 v11; // x2
  UISprite_o *backSprite; // x23
  Il2CppObject *v13; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v15; // x1
  __int64 v16; // x2
  struct UISprite_o *v17; // x23
  Il2CppObject *v18; // x0
  __int64 *v19; // x8
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x1
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  __int64 v25; // x2
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438C99E & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_20674/*"listframes{0}_txt_costume"*/);
    sub_B775C4(&StringLiteral_20680/*"listframes{0}_txt_quest"*/);
    sub_B775C4(&StringLiteral_19863/*"img_common_frame01"*/);
    sub_B775C4(&StringLiteral_20673/*"listframes{0}_bg"*/);
    sub_B775C4(&StringLiteral_24137/*"{0}{1:#,0}"*/);
    sub_B775C4(&StringLiteral_20679/*"listframes{0}_txt_point"*/);
    sub_B775C4(&StringLiteral_20676/*"listframes{0}_txt_item"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_20678/*"listframes{0}_txt_plain"*/);
    sub_B775C4(&StringLiteral_20671/*"listframes_shadow"*/);
    byte_438C99E = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v10 )
  {
    v31 = bgImageId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v11);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20673/*"listframes{0}_bg"*/, v13, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20671/*"listframes_shadow"*/, 0LL);
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            v17 = this->fields.typeSprite;
            v31 = bgImageId;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16);
            v19 = &StringLiteral_20674/*"listframes{0}_txt_costume"*/;
            goto LABEL_32;
          }
          if ( type == 24 )
          {
            v17 = this->fields.typeSprite;
            v31 = bgImageId;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16);
            v19 = &StringLiteral_20678/*"listframes{0}_txt_plain"*/;
            goto LABEL_32;
          }
        }
        else
        {
          if ( type == 14 )
          {
            v17 = this->fields.typeSprite;
            v31 = bgImageId;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16);
            v19 = &StringLiteral_20679/*"listframes{0}_txt_point"*/;
            goto LABEL_32;
          }
          if ( type == 16 )
          {
            v17 = this->fields.typeSprite;
            v31 = bgImageId;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16);
            v19 = &StringLiteral_20680/*"listframes{0}_txt_quest"*/;
LABEL_32:
            frameSprite = System_String__Format((System_String_o *)*v19, v18, 0LL);
            if ( !v17 )
              goto LABEL_69;
            v21 = frameSprite;
            frameSprite = (System_String_o *)v17;
            goto LABEL_34;
          }
        }
        v17 = this->fields.typeSprite;
        v31 = bgImageId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16);
        v19 = &StringLiteral_20676/*"listframes{0}_txt_item"*/;
        goto LABEL_32;
      }
    }
LABEL_69:
    sub_B7769C(frameSprite, v15);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_69;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v20 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_69;
    v21 = (System_String_o *)StringLiteral_19863/*"img_common_frame01"*/;
LABEL_34:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v21, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v26 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v26 )
        goto LABEL_69;
    }
    else
    {
      v27 = (Il2CppObject *)frameSprite;
      v31 = count;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v25);
      frameSprite = System_String__Format_44897472((System_String_o *)StringLiteral_24137/*"{0}{1:#,0}"*/, v27, v28, 0LL);
      v15 = frameSprite;
      if ( !v26 )
        goto LABEL_69;
    }
    UILabel__set_text(v26, v15, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_69;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetItem_28174616(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEntity,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t type; // w3
  int32_t ImageId; // w0
  const MethodInfo *v10; // x5

  if ( !itemEntity )
    sub_B7769C(this, 0LL);
  type = itemEntity->fields.type;
  if ( type == 29 )
  {
    ImageId = ItemEntity__GetImageId(itemEntity, (const MethodInfo *)itemEntity);
    ItemIconComponent__SetCoinImage(this, ImageId, itemEntity->fields.bgImageId, itemEntity->fields.type, count, v10);
  }
  else
  {
    ItemIconComponent__SetItemImage_28175904(
      this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      type,
      count,
      v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetNotifyDirectGetCounter(
        ItemIconComponent_o *this,
        int32_t condensedWidth,
        const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s0
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel
    || (UILabel__SetCondensedScale(counterLabel, condensedWidth, 0LL), (counterLabel = this->fields.counterLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0LL),
        LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL),
        (counterLabel = this->fields.counterLabel) == 0LL) )
  {
    sub_B7769C(counterLabel, *(_QWORD *)&condensedWidth);
  }
  v7 = LocalScaleX;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32809988(v8, v7 * 3.33, 3.33, 1.0, 0LL);
}


void __fastcall ItemIconComponent__SetPointEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t PointEventImageId; // w1
  const MethodInfo *v8; // x5

  if ( (byte_438C998 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C998 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  PointEventImageId = EventMaster__GetPointEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_28175904(this, PointEventImageId, 0, -1, -1, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPossession(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v7; // x1
  UILabel_o *Component_WebViewObject; // x20
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  float PossessionLabelWidth; // s8
  float mWidth; // s9
  UnityEngine_Transform_o *v13; // x21
  float v14; // s0
  float v15; // s1
  float v16; // s2
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_438C9AB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    byte_438C9AB = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child )
    goto LABEL_12;
  Child = UnityEngine_Transform__GetChild(Child, 0, 0LL);
  if ( !Child )
    goto LABEL_12;
  Component_WebViewObject = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)Child,
                                           (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v17 = this->fields.possessionNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9);
  Child = (UnityEngine_Transform_o *)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v10, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UILabel__set_text(Component_WebViewObject, (System_String_o *)Child, 0LL);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_WebViewObject->fields.mWidth;
  Child = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
  v13 = Child;
  if ( PossessionLabelWidth >= mWidth )
  {
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
    if ( v13 )
    {
      Child = v13;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(Child, v7);
  }
  if ( !Child )
    goto LABEL_12;
  v14 = this->fields.PossessionLabelWidth / (float)Component_WebViewObject->fields.mWidth;
  v15 = 1.0;
  v16 = 1.0;
LABEL_11:
  UnityEngine_Transform__set_localScale(Child, *(UnityEngine_Vector3_o *)&v14, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionOneLabel(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *klass; // x21
  UILabel_o *v10; // x20
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C9B5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    byte_438C9B5 = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child
    || (Child = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             Child,
                                             (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0LL )
  {
    sub_B7769C(Child, v7);
  }
  klass = (System_String_o *)Child[17].klass;
  v10 = (UILabel_o *)Child;
  v14 = this->fields.possessionNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8);
  v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v11, 0LL);
  v13 = System_String__Format(klass, v12, 0LL);
  UILabel__set_text(v10, v13, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438C9B4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9B4 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0LL, 0LL) )
  {
    v7 = this->fields.possessionRoot;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    gameObject = UnityEngine_GameObject__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL);
  }
}


void __fastcall ItemIconComponent__SetPossessionTitleActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionTitleLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_438C9B3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9B3 = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B7769C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ItemIconComponent__SetPresentItem(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEnt,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t type; // w3
  int32_t bgImageId; // w2
  int32_t v8; // w1

  if ( !itemEnt )
    sub_B7769C(this, 0LL);
  type = itemEnt->fields.type;
  switch ( type )
  {
    case 1:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 5;
      type = 1;
      break;
    case 2:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 6;
      type = 2;
      break;
    case 5:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 7;
      type = 5;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 9;
      break;
    case 12:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 8;
      type = 12;
      break;
    default:
      type = -1;
      v8 = 0;
      bgImageId = 0;
      break;
  }
  ItemIconComponent__SetItemImage_28175904(this, v8, bgImageId, type, count, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPurchase(
        ItemIconComponent_o *this,
        int32_t purchaseType,
        int32_t targetId,
        int32_t imageId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v6; // x6
  ItemIconComponent_o *v11; // x0
  int32_t v12; // w1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  ItemEntity_o *Entity; // x0
  const MethodInfo *v16; // x3
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v18; // x2
  AssistEntity_o *v19; // x20
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v21; // x0
  int v22; // w9
  System_String_o *ASSIST_SPRITE_NAME; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C997 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&ItemIconComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C997 = 1;
  }
  if ( imageId >= 1 )
  {
LABEL_4:
    v11 = this;
    v12 = imageId;
LABEL_5:
    ItemIconComponent__SetItemImage_28175904(v11, v12, 0, -1, -1, v5);
    return;
  }
  if ( purchaseType <= 4 )
  {
    if ( purchaseType != 1 )
    {
      if ( purchaseType == 4 )
      {
LABEL_17:
        ItemIconComponent__SetFaceImage(this, targetId, 0, -1, 1, 0, v6);
        return;
      }
      goto LABEL_4;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
    {
LABEL_30:
      sub_B7769C(Instance, v14);
    }
    Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               targetId,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
      ItemIconComponent__SetItem_28174616(this, Entity, 0, v16);
  }
  else
  {
    switch ( purchaseType )
    {
      case 14:
        v12 = 23;
        v11 = this;
        goto LABEL_5;
      case 15:
      case 16:
      case 17:
      case 18:
      case 20:
        goto LABEL_4;
      case 19:
        ItemIconComponent__SetCommandCodeImage(this, targetId, -1, *(const MethodInfo **)&imageId);
        return;
      case 21:
        goto LABEL_17;
      case 22:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_30;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AssistMaster___);
        if ( !Instance )
          goto LABEL_30;
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, targetId, 0LL);
        if ( CurrentLevelEntity )
        {
          v19 = CurrentLevelEntity;
          iconSprite = this->fields.iconSprite;
          v21 = ItemIconComponent_TypeInfo;
          if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ItemIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
            v21 = ItemIconComponent_TypeInfo;
          }
          v22 = v19->fields.imageId;
          ASSIST_SPRITE_NAME = v21->static_fields->ASSIST_SPRITE_NAME;
          v26 = v22;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v18);
          v25 = System_String__Format(ASSIST_SPRITE_NAME, v24, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBoostRequestIcon(iconSprite, v25, 0LL);
        }
        break;
      default:
        if ( purchaseType == 8 )
          goto LABEL_17;
        goto LABEL_4;
    }
  }
}


void __fastcall ItemIconComponent__SetRaidEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t RaidEventImageId; // w1
  const MethodInfo *v8; // x5

  if ( (byte_438C999 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C999 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v6);
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_28175904(this, RaidEventImageId, 0, -1, -1, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__ShowPossession(
        ItemIconComponent_o *this,
        bool showPossession,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x21
  __int64 v6; // x1
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x1
  unsigned int v13; // s0
  unsigned int v14; // s1
  unsigned int v15; // s2
  unsigned int v16; // s3
  unsigned __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C9AA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9AA = 1;
  }
  v17 = 0LL;
  v18 = 0LL;
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionRoot, 0LL, 0LL) )
  {
    if ( this->fields.possessionNum )
    {
      v11 = this->fields.possessionRoot;
      if ( !v11 )
        sub_B7769C(0LL, v6);
      UnityEngine_GameObject__SetActive(v11, showPossession, 0LL);
    }
    if ( showPossession )
    {
      v19.fields.r = 0.31373;
      v19.fields.a = 1.0;
      v19.fields.g = 0.31373;
      v19.fields.b = 0.31373;
      UnityEngine_Color___ctor(v19, v7, v8, v9, v10, (const MethodInfo *)&v17);
      v14 = HIDWORD(v17);
      v13 = v17;
      v16 = HIDWORD(v18);
      v15 = v18;
    }
    else
    {
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      v17 = __PAIR64__(v14, v13);
      v18 = __PAIR64__(v16, v15);
    }
    ItemIconComponent__SetColor(this, *(UnityEngine_Color_o *)&v13, v12);
  }
}


void __fastcall ItemIconComponent__closeItemDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438C9AF & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C9AF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0LL);
}


void __fastcall ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_438C9B0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C9B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


int32_t __fastcall ItemIconComponent__getUserItemNum(
        ItemIconComponent_o *this,
        int64_t userId,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C9AD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C9AD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, userId, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_B7769C(Instance, v7);
  }
  return 0;
}


UISprite_o *__fastcall ItemIconComponent__get_IconSprite(ItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.iconSprite;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__setFrameSprite(
        ItemIconComponent_o *this,
        bool isSetActive,
        System_String_o *frameName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frameSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_438C9A9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A9 = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    if ( isSetActive )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
      if ( !gameObject )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)gameObject, frameName, 0LL);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          v11 = (UnityEngine_Component_o *)this->fields.iconSprite;
          if ( v11 )
          {
            v12 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v11, 0LL);
            if ( gameObject )
            {
              *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 0LL);
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_B7769C(gameObject, v8);
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
}


void __fastcall ItemIconComponent__setLocalPositionIconSprite(
        ItemIconComponent_o *this,
        float x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438C9A8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A8 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
  }
}


void __fastcall ItemIconComponent__setLocalScaleIconSprite(
        ItemIconComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438C9A7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C9A7 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalScale_32809816(gameObject, scale, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__setTypeSpritePositionY(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v7; // s9
  float v8; // s2
  float v9; // s10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_8;
  typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL);
  if ( !typeSprite )
    goto LABEL_8;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)typeSprite, 0LL);
  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (v7 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)typeSprite,
                                                0LL),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v9 = v8, (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B7769C(typeSprite, method);
  }
  v10.fields.x = v7;
  v10.fields.y = y;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v10, 0LL);
}