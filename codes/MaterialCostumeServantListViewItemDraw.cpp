void __fastcall MaterialCostumeServantListViewItemDraw___ctor(
        MaterialCostumeServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewItemDraw__SetButtonState(
        MaterialCostumeServantListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4216BC2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4216BC2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v6 = this->fields.baseButton;
    if ( !v6
      || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
            v6,
            isEnable,
            v6->klass->vtable._6_OnInit.methodPtr),
          (v6 = this->fields.baseButton) == 0LL) )
    {
      sub_B0D97C(v6);
    }
    if ( isEnable )
      v7 = 0LL;
    else
      v7 = 3LL;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v6->klass->vtable._14_SetState.method)(
      v6,
      v7,
      1LL,
      v6->klass->vtable._15_OnPress.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantListViewItemDraw__SetInput(
        MaterialCostumeServantListViewItemDraw_o *this,
        MaterialCostumeServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewItemDraw__SetButtonState(this, 1, (const MethodInfo *)isInput);
}


void __fastcall MaterialCostumeServantListViewItemDraw__SetItem(
        MaterialCostumeServantListViewItemDraw_o *this,
        MaterialCostumeServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  const MethodInfo *v11; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  int32_t status; // w8
  int32_t costumeOpenStatus_k__BackingField; // w8
  UILabel_o *maskLabel; // x20
  __int64 *v16; // x8

  if ( (byte_4216BC1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    sub_B0D8A4(&StringLiteral_8680/*"MATERIAL_FIND_SERVANT"*/, v8);
    sub_B0D8A4(&StringLiteral_8679/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/, v9);
    byte_4216BC1 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__Set_29630376(
      servantFaceIcon,
      item->fields._userSvtCollectionEntity_k__BackingField,
      item->fields._svtCostumeEntity_k__BackingField,
      item->fields.iconLabelInfo,
      0LL,
      item->fields.isSecret,
      0LL);
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__SetDispRaritySprite(servantFaceIcon, 0, 0LL);
    userSvtCollectionEntity_k__BackingField = item->fields._userSvtCollectionEntity_k__BackingField;
    if ( !userSvtCollectionEntity_k__BackingField || item->fields.isNotCostumeGet )
      goto LABEL_9;
    status = userSvtCollectionEntity_k__BackingField->fields.status;
    if ( status == 1 )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_35;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_8680/*"MATERIAL_FIND_SERVANT"*/;
    }
    else
    {
      if ( status != 2 )
        goto LABEL_9;
      costumeOpenStatus_k__BackingField = item->fields._costumeOpenStatus_k__BackingField;
      if ( costumeOpenStatus_k__BackingField )
      {
        if ( (unsigned int)(costumeOpenStatus_k__BackingField - 1) > 1 )
          goto LABEL_13;
LABEL_9:
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
        if ( servantFaceIcon )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( servantFaceIcon )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
            servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
            if ( servantFaceIcon )
            {
              UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_13:
              MaterialCostumeServantListViewItemDraw__SetButtonState(this, 1, v11);
              return;
            }
          }
        }
        goto LABEL_35;
      }
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_35;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_8679/*"MATERIAL_FIND_NOT_SELECT_COSTUME"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v16, 0LL);
    if ( maskLabel )
    {
      UILabel__set_text(maskLabel, (System_String_o *)servantFaceIcon, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
      if ( servantFaceIcon )
      {
        UILabel__set_fontSize((UILabel_o *)servantFaceIcon, 18, 0LL);
        goto LABEL_13;
      }
    }
LABEL_35:
    sub_B0D97C(servantFaceIcon);
  }
}