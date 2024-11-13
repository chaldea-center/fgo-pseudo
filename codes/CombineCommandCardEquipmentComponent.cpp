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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(statusInfoObj, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardEquipmentComponent__SetEquippedInfo(
        CombineCommandCardEquipmentComponent_o *this,
        bool DispInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *equippedInfo; // x0
  const MethodInfo *v7; // x4

  equippedInfo = this->fields.equippedInfo;
  if ( !equippedInfo )
    sub_1BCAA3C(0LL, DispInfo);
  if ( DispInfo )
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 1, 0LL);
    CombineUtility__SetCommandCodeEquippedInfoLabel(
      this->fields.equippedLabel,
      this->fields.nameLabel,
      equippedSvtId,
      equippedSvtId > 0,
      v7);
  }
  else
  {
    UnityEngine_GameObject__SetActive(equippedInfo, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardEquipmentComponent__SetIcon(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        bool isEquipedCommandCode,
        bool DispEquippedInfo,
        int32_t equippedSvtId,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *v9; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *raritySprite; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UISprite_o *v24; // x24
  __int64 v25; // x1
  int32_t Rarity; // w23
  __int64 v27; // x1
  UILabel_o *statusInfoLabel; // x23
  const MethodInfo *v29; // x3

  v9 = userCommandCode;
  if ( (byte_4B199DB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, userCommandCode, isEquipedCommandCode);
    sub_1BCA7E0(&Rarity_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11631/*"SELECTED_COMMAND_CODE"*/, v15, v16);
    byte_4B199DB = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v9 != 0LL, 0LL);
  this->fields.userCommandCodeEntity = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity,
    (int64_t)v9,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  raritySprite = (UnityEngine_Component_o *)this->fields.icon;
  if ( !raritySprite )
    goto LABEL_22;
  if ( !this->fields.userCommandCodeEntity )
  {
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)raritySprite, 0LL);
    raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
    if ( raritySprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, 0, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(raritySprite, userCommandCode);
  }
  ServantFaceIconComponent__Set_38937964((ServantFaceIconComponent_o *)raritySprite, v9, 0LL, 0LL, 0LL);
  if ( !v9 )
    goto LABEL_22;
  v24 = this->fields.raritySprite;
  Rarity = UserCommandCodeEntity__GetRarity(v9, 0LL);
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v25);
  raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0LL);
  if ( !v24 )
    goto LABEL_22;
  UISprite__set_spriteName(v24, (System_String_o *)raritySprite, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_22;
  raritySprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.typeMetadataHandle)(
                                              raritySprite,
                                              raritySprite->klass[2]._1.interopData);
  statusInfoLabel = this->fields.statusInfoLabel;
  if ( isEquipedCommandCode )
  {
    userCommandCode = (UserCommandCodeEntity_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    raritySprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11631/*"SELECTED_COMMAND_CODE"*/, 0LL);
    userCommandCode = (UserCommandCodeEntity_o *)raritySprite;
  }
  if ( !statusInfoLabel )
    goto LABEL_22;
  UILabel__set_text(statusInfoLabel, (System_String_o *)userCommandCode, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
  if ( !raritySprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, !isEquipedCommandCode, 0LL);
  CombineCommandCardEquipmentComponent__SetEquippedInfo(this, DispEquippedInfo, equippedSvtId, v29);
}


void __fastcall CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *v3; // x20
  UnityEngine_Component_o *raritySprite; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UISprite_o *v12; // x20
  __int64 v13; // x1
  int32_t Rarity; // w21

  v3 = userCommandCode;
  if ( (byte_4B199DC & 1) == 0 )
  {
    sub_1BCA7E0(&Rarity_TypeInfo, userCommandCode, method);
    byte_4B199DC = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_15;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !raritySprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v3 != 0LL, 0LL);
  this->fields.userCommandCodeEntity = v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userCommandCodeEntity, (int64_t)v3, v6, v7, v8, v9, v10, v11);
  userCommandCode = this->fields.userCommandCodeEntity;
  if ( userCommandCode )
  {
    raritySprite = (UnityEngine_Component_o *)this->fields.icon;
    if ( raritySprite )
    {
      ServantFaceIconComponent__Set_38937964((ServantFaceIconComponent_o *)raritySprite, userCommandCode, 0LL, 0LL, 0LL);
      raritySprite = (UnityEngine_Component_o *)this->fields.userCommandCodeEntity;
      if ( raritySprite )
      {
        v12 = this->fields.raritySprite;
        Rarity = UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)raritySprite, 0LL);
        if ( !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v13);
        raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0LL);
        if ( v12 )
        {
          UISprite__set_spriteName(v12, (System_String_o *)raritySprite, 0LL);
          raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
          if ( raritySprite )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.typeMetadataHandle)(
              raritySprite,
              raritySprite->klass[2]._1.interopData);
            raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
            if ( raritySprite )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(raritySprite, userCommandCode);
  }
}