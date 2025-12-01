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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_o *maskSprite; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UISprite_o *v17; // x8
  struct System_String_o *mSpriteName; // x1

  maskSprite = this->fields.maskSprite;
  if ( maskSprite )
    mAtlas = maskSprite->fields.mAtlas;
  else
    mAtlas = 0;
  this->fields.defaultMaskAtlas = mAtlas;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskAtlas, (int32_t)mAtlas, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.maskSprite;
  if ( v17 )
    mSpriteName = v17->fields.mSpriteName;
  else
    mSpriteName = 0;
  this->fields.defaultMaskName = mSpriteName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultMaskName,
    (int32_t)mSpriteName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void MaterialCostumeServantListViewItemDraw__SetButtonState(
        MaterialCostumeServantListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4CC254D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC254D = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C71608(v7, v6);
    }
    if ( isEnable )
      v8 = 0;
    else
      v8 = 3;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._14_SetState.methodPtr)(
      v7,
      v8,
      1,
      v7->klass->vtable._14_SetState.method);
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
  UILabel_o *maskLabel; // x20
  __int64 *v13; // x8

  if ( (byte_4CC254C & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_8580/*"MATERIAL_FIND_SERVANT"*/);
    sub_1C713B0(&StringLiteral_8579/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/);
    byte_4CC254C = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_34;
    ServantFaceIconComponent__Set_41285296(
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_8580/*"MATERIAL_FIND_SERVANT"*/;
    }
    else
    {
      if ( status != 2 )
        goto LABEL_10;
      costumeOpenStatus_k__BackingField = item->fields._costumeOpenStatus_k__BackingField;
      if ( costumeOpenStatus_k__BackingField )
      {
        if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_8579/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v13, 0);
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
    sub_1C71608(servantFaceIcon, item);
  }
}