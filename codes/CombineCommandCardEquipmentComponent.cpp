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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, DispInfo);
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
  struct UserCommandCodeEntity_o *v9; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Component_o *raritySprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UISprite_o *v21; // x24
  int32_t Rarity; // w23
  UILabel_o *statusInfoLabel; // x23
  const MethodInfo *v24; // x3

  v9 = userCommandCode;
  if ( (byte_41888CE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, userCommandCode);
    sub_B2C35C(&Rarity_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    sub_B2C35C(&StringLiteral_11618/*"SELECTED_COMMAND_CODE"*/, v13);
    byte_41888CE = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_24;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !raritySprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v9 != 0LL, 0LL);
  this->fields.userCommandCodeEntity = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)v9,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  raritySprite = (UnityEngine_Component_o *)this->fields.icon;
  if ( !raritySprite )
    goto LABEL_24;
  if ( !this->fields.userCommandCodeEntity )
  {
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)raritySprite, 0LL);
    raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
    if ( !raritySprite )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, 0, 0LL);
    return;
  }
  ServantFaceIconComponent__Set_30799200((ServantFaceIconComponent_o *)raritySprite, v9, 0LL, 0LL, 0LL);
  if ( !v9 )
    goto LABEL_24;
  v21 = this->fields.raritySprite;
  Rarity = UserCommandCodeEntity__GetRarity(v9, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  raritySprite = (UnityEngine_Component_o *)Rarity__getIcon(Rarity, 0LL);
  if ( !v21 )
    goto LABEL_24;
  UISprite__set_spriteName(v21, (System_String_o *)raritySprite, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_24;
  raritySprite = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))raritySprite->klass[2]._1.typeMetadataHandle)(
                                              raritySprite,
                                              raritySprite->klass[2]._1.interopData);
  statusInfoLabel = this->fields.statusInfoLabel;
  if ( isEquipedCommandCode )
  {
    userCommandCode = (UserCommandCodeEntity_o *)StringLiteral_1/*""*/;
    if ( !statusInfoLabel )
      goto LABEL_24;
    goto LABEL_22;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  raritySprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11618/*"SELECTED_COMMAND_CODE"*/, 0LL);
  userCommandCode = (UserCommandCodeEntity_o *)raritySprite;
  if ( !statusInfoLabel )
LABEL_24:
    sub_B2C434(raritySprite, userCommandCode);
LABEL_22:
  UILabel__set_text(statusInfoLabel, (System_String_o *)userCommandCode, 0LL);
  raritySprite = (UnityEngine_Component_o *)this->fields.statusInfoObj;
  if ( !raritySprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, !isEquipedCommandCode, 0LL);
  CombineCommandCardEquipmentComponent__SetEquippedInfo(this, DispEquippedInfo, equippedSvtId, v24);
}


void __fastcall CombineCommandCardEquipmentComponent__SetIconNoDispStatus(
        CombineCommandCardEquipmentComponent_o *this,
        UserCommandCodeEntity_o *userCommandCode,
        const MethodInfo *method)
{
  struct UserCommandCodeEntity_o *v3; // x20
  UnityEngine_Component_o *raritySprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UISprite_o *v12; // x20
  int32_t Rarity; // w21

  v3 = userCommandCode;
  if ( (byte_41888CF & 1) == 0 )
  {
    sub_B2C35C(&Rarity_TypeInfo, userCommandCode);
    byte_41888CF = 1;
  }
  raritySprite = (UnityEngine_Component_o *)this->fields.raritySprite;
  if ( !raritySprite )
    goto LABEL_16;
  raritySprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(raritySprite, 0LL);
  if ( !raritySprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)raritySprite, v3 != 0LL, 0LL);
  this->fields.userCommandCodeEntity = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeEntity,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  userCommandCode = this->fields.userCommandCodeEntity;
  if ( userCommandCode )
  {
    raritySprite = (UnityEngine_Component_o *)this->fields.icon;
    if ( raritySprite )
    {
      ServantFaceIconComponent__Set_30799200((ServantFaceIconComponent_o *)raritySprite, userCommandCode, 0LL, 0LL, 0LL);
      raritySprite = (UnityEngine_Component_o *)this->fields.userCommandCodeEntity;
      if ( raritySprite )
      {
        v12 = this->fields.raritySprite;
        Rarity = UserCommandCodeEntity__GetRarity((UserCommandCodeEntity_o *)raritySprite, 0LL);
        if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
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
LABEL_16:
    sub_B2C434(raritySprite, userCommandCode);
  }
}