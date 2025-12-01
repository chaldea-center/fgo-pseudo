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
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0);
}


void CombineCommandCardEquipmentComponent__SetEquippedInfo(
        CombineCommandCardEquipmentComponent_o *this,
        bool DispInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *equippedInfo; // x0
  const MethodInfo *v7; // x4

  equippedInfo = this->fields.equippedInfo;
  if ( !equippedInfo )
    sub_1C71608(0, DispInfo);
  if ( DispInfo )
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 1, 0);
    CombineUtility__SetCommandCodeEquippedInfoLabel(
      this->fields.equippedLabel,
      this->fields.nameLabel,
      equippedSvtId,
      equippedSvtId > 0,
      v7);
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
  struct UserCommandCodeEntity_o *v9; // x23
  UnityEngine_Component_o *raritySprite; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UISprite_o *v18; // x24
  int32_t Rarity; // w23
  UILabel_o *statusInfoLabel; // x23
  const MethodInfo *v21; // x3

  v9 = userCommandCode;
  if ( (byte_4CCB353 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Rarity_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_11523/*"SELECTED_COMMAND_CODE"*/);
    byte_4CCB353 = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0);
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v9 != 0, 0);
  this->fields.userCommandCodeEntity = v9;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity,
    (int32_t)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_1C71608(raritySprite, userCommandCode);
  }
  ServantFaceIconComponent__Set_41289308((ServantFaceIconComponent_o *)raritySprite, v9, 0, 0, 0);
  if ( !v9 )
    goto LABEL_22;
  v18 = this->fields.raritySprite;
  Rarity = UserCommandCodeEntity__GetRarity(v9, 0);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0);
  if ( !v18 )
    goto LABEL_22;
  UISprite__set_spriteName(v18, (System_String_o *)raritySprite, 0);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.parent)(
                                              raritySprite,
                                              raritySprite->klass[2]._1.generic_class);
  statusInfoLabel = this->fields.statusInfoLabel;
  if ( isEquipedCommandCode )
  {
    userCommandCode = (UserCommandCodeEntity_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    raritySprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11523/*"SELECTED_COMMAND_CODE"*/, 0);
    userCommandCode = (UserCommandCodeEntity_o *)raritySprite;
  }
  if ( !statusInfoLabel )
    goto LABEL_22;
  UILabel__set_text(statusInfoLabel, (System_String_o *)userCommandCode, 0);
  raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, !isEquipedCommandCode, 0);
  CombineCommandCardEquipmentComponent__SetEquippedInfo(this, DispEquippedInfo, equippedSvtId, v21);
}


void CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *v3; // x20
  UnityEngine_Component_o *raritySprite; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UISprite_o *v12; // x20
  int32_t Rarity; // w21

  v3 = userCommandCode;
  if ( (byte_4CCB354 & 1) == 0 )
  {
    sub_1C713B0(&Rarity_TypeInfo);
    byte_4CCB354 = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_15;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0);
  if ( !raritySprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v3 != 0, 0);
  this->fields.userCommandCodeEntity = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.userCommandCodeEntity, (int32_t)v3, v6, v7, v8, v9, v10, v11);
  userCommandCode = this->fields.userCommandCodeEntity;
  if ( userCommandCode )
  {
    raritySprite = (UnityEngine_Component_o *)this->fields.icon;
    if ( raritySprite )
    {
      ServantFaceIconComponent__Set_41289308((ServantFaceIconComponent_o *)raritySprite, userCommandCode, 0, 0, 0);
      raritySprite = (UnityEngine_Component_o *)this->fields.userCommandCodeEntity;
      if ( raritySprite )
      {
        v12 = this->fields.raritySprite;
        Rarity = UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)raritySprite, 0);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
        raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0);
        if ( v12 )
        {
          UISprite__set_spriteName(v12, (System_String_o *)raritySprite, 0);
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
    sub_1C71608(raritySprite, userCommandCode);
  }
}