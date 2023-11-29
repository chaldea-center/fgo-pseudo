void __fastcall CombineCommandCardEquipmentComponent___ctor(
        CombineCommandCardEquipmentComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineCommandCardEquipmentComponent__HideStatusInfo(
        CombineCommandCardEquipmentComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *statusInfoObj; // x0

  statusInfoObj = this->fields.statusInfoObj;
  if ( !statusInfoObj )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0LL);
}


void __fastcall CombineCommandCardEquipmentComponent__SetEquippedInfo(
        CombineCommandCardEquipmentComponent_o *this,
        bool DispInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *equippedInfo; // x0

  equippedInfo = this->fields.equippedInfo;
  if ( !equippedInfo )
    sub_B170D4();
  if ( DispInfo )
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 1, 0LL);
    CombineUtility__SetCommandCodeEquippedInfoLabel(
      this->fields.equippedLabel,
      this->fields.nameLabel,
      equippedSvtId,
      equippedSvtId > 0,
      0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 0, 0LL);
  }
}


void __fastcall CombineCommandCardEquipmentComponent__SetIcon(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool isEquipedCommandCode,
        bool DispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ServantFaceIconComponent_o *icon; // x0
  UISprite_o *v23; // x24
  int32_t Rarity; // w23
  System_String_o *v25; // x0
  struct UISprite_o *v26; // x0
  UILabel_o *statusInfoLabel; // x23
  System_String_o *v28; // x1
  UnityEngine_GameObject_o *statusInfoObj; // x0
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x3

  if ( (byte_40F9AB1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, userCommandCode);
    sub_B16FFC(&Rarity_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    sub_B16FFC(&StringLiteral_11582, v13);
    byte_40F9AB1 = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, userCommandCode != 0LL, 0LL);
  this->fields.userCommandCodeEntity = userCommandCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  icon = this->fields.icon;
  if ( !icon )
    goto LABEL_24;
  if ( !this->fields.userCommandCodeEntity )
  {
    ServantFaceIconComponent__NoMount(icon, 0LL);
    statusInfoObj = this->fields.statusInfoObj;
    if ( !statusInfoObj )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0LL);
    return;
  }
  ServantFaceIconComponent__Set_30711528(icon, userCommandCode, 0LL, 0LL, 0LL);
  if ( !userCommandCode )
    goto LABEL_24;
  v23 = this->fields.raritySprite;
  Rarity = UserCommandCodeEntity__GetRarity(userCommandCode, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  v25 = Rarity__getIcon(Rarity, 0LL);
  if ( !v23 )
    goto LABEL_24;
  UISprite__set_spriteName(v23, v25, 0LL);
  v26 = this->fields.raritySprite;
  if ( !v26 )
    goto LABEL_24;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v26->klass->vtable._33_MakePixelPerfect.method)(
    v26,
    v26->klass->vtable._34_get_minWidth.methodPtr);
  statusInfoLabel = this->fields.statusInfoLabel;
  if ( isEquipedCommandCode )
  {
    v28 = (System_String_o *)StringLiteral_1;
    if ( !statusInfoLabel )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11582, 0LL);
  if ( !statusInfoLabel )
LABEL_24:
    sub_B170D4();
LABEL_22:
  UILabel__set_text(statusInfoLabel, v28, 0LL);
  v30 = this->fields.statusInfoObj;
  if ( !v30 )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(v30, !isEquipedCommandCode, 0LL);
  CombineCommandCardEquipmentComponent__SetEquippedInfo(this, DispEquippedInfo, equippedSvtId, v31);
}


void __fastcall CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *icon; // x0
  UserCommandCodeEntity_o *v15; // x0
  UISprite_o *v16; // x20
  int32_t Rarity; // w21
  System_String_o *v18; // x0
  struct UISprite_o *v19; // x0
  UnityEngine_GameObject_o *statusInfoObj; // x0

  if ( (byte_40F9AB2 & 1) == 0 )
  {
    sub_B16FFC(&Rarity_TypeInfo, userCommandCode);
    byte_40F9AB2 = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, userCommandCode != 0LL, 0LL);
  this->fields.userCommandCodeEntity = userCommandCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)userCommandCode,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    icon = this->fields.icon;
    if ( icon )
    {
      ServantFaceIconComponent__Set_30711528(icon, userCommandCodeEntity, 0LL, 0LL, 0LL);
      v15 = this->fields.userCommandCodeEntity;
      if ( v15 )
      {
        v16 = this->fields.raritySprite;
        Rarity = UserCommandCodeEntity__GetRarity(v15, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        v18 = Rarity__getIcon(Rarity, 0LL);
        if ( v16 )
        {
          UISprite__set_spriteName(v16, v18, 0LL);
          v19 = this->fields.raritySprite;
          if ( v19 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v19->klass->vtable._33_MakePixelPerfect.method)(
              v19,
              v19->klass->vtable._34_get_minWidth.methodPtr);
            statusInfoObj = this->fields.statusInfoObj;
            if ( statusInfoObj )
            {
              UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
}