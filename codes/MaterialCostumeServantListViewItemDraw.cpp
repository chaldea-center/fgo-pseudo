void MaterialCostumeServantListViewItemDraw___ctor(
        MaterialCostumeServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MaterialCostumeServantListViewItemDraw__Awake(
        MaterialCostumeServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
    (int32_t)mAtlas,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeServantListViewItemDraw__SetButtonState(
        MaterialCostumeServantListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_596B70E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B70E = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, const MethodInfo *))v7->klass->vtable._5_set_isEnabled.methodPtr)(
            v7,
            isEnable,
            v7->klass->vtable._5_set_isEnabled.method),
          (v7 = this->fields.baseButton) == 0) )
    {
      sub_2213CDC(v7, v6);
    }
    v7->klass->vtable._14_SetState.methodPtr();
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeServantListViewItemDraw__SetInput(
        MaterialCostumeServantListViewItemDraw_o *this,
        MaterialCostumeServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItemDraw__SetButtonState(this, 1, (const MethodInfo *)isInput);
}


void MaterialCostumeServantListViewItemDraw__SetItem(
        MaterialCostumeServantListViewItemDraw_o *this,
        MaterialCostumeServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  const MethodInfo *v8; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w8
  int32_t costumeOpenStatus_k__BackingField; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *maskLabel; // x20
  __int64 *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_596B70D & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/);
    sub_2213A60(&StringLiteral_8941/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/);
    byte_596B70D = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_34;
    ServantFaceIconComponent__Set_48053060(
      servantFaceIcon,
      item->fields._userSvtCollectionEntity_k__BackingField,
      item->fields._svtCostumeEntity_k__BackingField,
      item->fields.iconLabelInfo,
      0,
      item->fields.isSecret,
      0);
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_34;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      servantFaceIcon,
      this->fields.maskSprite,
      this->fields.defaultMaskName,
      this->fields.defaultMaskAtlas,
      0);
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_34;
    ServantFaceIconComponent__SetDispRaritySprite(servantFaceIcon, 0, 0);
    userSvtCollectionEntity_k__BackingField = item->fields._userSvtCollectionEntity_k__BackingField;
    if ( !userSvtCollectionEntity_k__BackingField || item->fields.isNotCostumeGet )
      goto LABEL_10;
    status = userSvtCollectionEntity_k__BackingField->fields.status;
    if ( status == 1 )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_34;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0);
      if ( !servantFaceIcon )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
      maskLabel = this->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
      v15 = &StringLiteral_8942/*"MATERIAL_FIND_SERVANT"*/;
    }
    else
    {
      if ( status != 2 )
        goto LABEL_10;
      costumeOpenStatus_k__BackingField = item->fields._costumeOpenStatus_k__BackingField;
      if ( costumeOpenStatus_k__BackingField )
      {
        if ( (unsigned int)(costumeOpenStatus_k__BackingField - 3) < 0xFFFFFFFE )
          goto LABEL_14;
LABEL_10:
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
        if ( servantFaceIcon )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0);
          if ( servantFaceIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
            servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
            if ( servantFaceIcon )
            {
              UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_14:
              MaterialCostumeServantListViewItemDraw__SetButtonState(this, 1, v8);
              return;
            }
          }
        }
        goto LABEL_34;
      }
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_34;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0);
      if ( !servantFaceIcon )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
      maskLabel = this->fields.maskLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
      v15 = &StringLiteral_8941/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v15, 0);
    if ( maskLabel )
    {
      UILabel__set_text(maskLabel, (System_String_o *)servantFaceIcon, 0);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
      if ( servantFaceIcon )
      {
        UILabel__set_fontSize((UILabel_o *)servantFaceIcon, 18, 0);
        goto LABEL_14;
      }
    }
LABEL_34:
    sub_2213CDC(servantFaceIcon, item);
  }
}