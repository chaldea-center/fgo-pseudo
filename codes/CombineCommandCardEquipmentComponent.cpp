void CombineCommandCardEquipmentComponent___ctor(
        CombineCommandCardEquipmentComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineCommandCardEquipmentComponent__HideStatusInfo(
        CombineCommandCardEquipmentComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *statusInfoObj; // x0

  statusInfoObj = this->fields.statusInfoObj;
  if ( !statusInfoObj )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0);
}


void CombineCommandCardEquipmentComponent__SetEquippedInfo(
        CombineCommandCardEquipmentComponent_o *this,
        bool DispInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *equippedInfo; // x0

  equippedInfo = this->fields.equippedInfo;
  if ( !equippedInfo )
    sub_1C32E7C(0);
  if ( DispInfo )
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 1, 0);
    CombineUtility__SetCommandCodeEquippedInfoLabel(
      this->fields.equippedLabel,
      this->fields.nameLabel,
      equippedSvtId,
      equippedSvtId > 0,
      0);
  }
  else
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 0, 0);
  }
}


void CombineCommandCardEquipmentComponent__SetIcon(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool isEquipedCommandCode,
        bool DispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UISprite_o *v14; // x24
  int32_t Rarity; // w23
  UILabel_o *statusInfoLabel; // x23
  System_String_o *v17; // x1
  const MethodInfo *v18; // x3

  if ( (byte_4C3B81E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Rarity_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_11517/*"SELECTED_COMMAND_CODE"*/);
    byte_4C3B81E = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0);
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, userCommandCode != 0, 0);
  this->fields.userCommandCodeEntity = userCommandCode;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v12, v13);
  raritySprite = (UnityEngine_Component_o *)this->fields.icon;
  if ( !raritySprite )
    goto LABEL_22;
  if ( !this->fields.userCommandCodeEntity )
  {
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)raritySprite, 0);
    raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
    if ( raritySprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, 0, 0);
      return;
    }
LABEL_22:
    sub_1C32E7C(raritySprite);
  }
  ServantFaceIconComponent__Set_40913296((ServantFaceIconComponent_o *)raritySprite, userCommandCode, 0, 0, 0);
  if ( !userCommandCode )
    goto LABEL_22;
  v14 = this->fields.raritySprite;
  Rarity = UserCommandCodeEntity__GetRarity(userCommandCode, 0);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0);
  if ( !v14 )
    goto LABEL_22;
  UISprite__set_spriteName(v14, (System_String_o *)raritySprite, 0);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.parent)(
                                              raritySprite,
                                              raritySprite->klass[2]._1.generic_class);
  statusInfoLabel = this->fields.statusInfoLabel;
  if ( isEquipedCommandCode )
  {
    v17 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    raritySprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11517/*"SELECTED_COMMAND_CODE"*/, 0);
    v17 = (System_String_o *)raritySprite;
  }
  if ( !statusInfoLabel )
    goto LABEL_22;
  UILabel__set_text(statusInfoLabel, v17, 0);
  raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, !isEquipedCommandCode, 0);
  CombineCommandCardEquipmentComponent__SetEquippedInfo(this, DispEquippedInfo, equippedSvtId, v18);
}


void CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  UnityEngine_Component_o *raritySprite; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  UISprite_o *v9; // x20
  int32_t Rarity; // w21

  if ( (byte_4C3B81F & 1) == 0 )
  {
    sub_1C32C20(&Rarity_TypeInfo);
    byte_4C3B81F = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_15;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0);
  if ( !raritySprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, userCommandCode != 0, 0);
  this->fields.userCommandCodeEntity = userCommandCode;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userCommandCodeEntity, (int32_t)userCommandCode, v6, v7);
  userCommandCodeEntity = this->fields.userCommandCodeEntity;
  if ( userCommandCodeEntity )
  {
    raritySprite = (UnityEngine_Component_o *)this->fields.icon;
    if ( raritySprite )
    {
      ServantFaceIconComponent__Set_40913296((ServantFaceIconComponent_o *)raritySprite, userCommandCodeEntity, 0, 0, 0);
      raritySprite = (UnityEngine_Component_o *)this->fields.userCommandCodeEntity;
      if ( raritySprite )
      {
        v9 = this->fields.raritySprite;
        Rarity = UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)raritySprite, 0);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0);
        if ( v9 )
        {
          UISprite__set_spriteName(v9, (System_String_o *)raritySprite, 0);
          raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
          if ( raritySprite )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.parent)(
              raritySprite,
              raritySprite->klass[2]._1.generic_class);
            raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
            if ( raritySprite )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C32E7C(raritySprite);
  }
}