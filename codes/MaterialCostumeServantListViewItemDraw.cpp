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
  struct UICommonButton_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_40FCBD5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnable);
    byte_40FCBD5 = 1;
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
          (v7 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    if ( isEnable )
      v8 = 0LL;
    else
      v8 = 3LL;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      v8,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
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
  ServantFaceIconComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  struct UserServantCollectionEntity_o *userSvtCollectionEntity_k__BackingField; // x8
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *v16; // x0
  int32_t status; // w8
  int32_t costumeOpenStatus_k__BackingField; // w8
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *maskLabel; // x20
  __int64 *v22; // x8
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  System_String_o *v25; // x0
  UILabel_o *v26; // x0

  if ( (byte_40FCBD4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_1, v7);
    sub_B16FFC(&StringLiteral_8629, v8);
    sub_B16FFC(&StringLiteral_8628, v9);
    byte_40FCBD4 = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__Set_30709412(
      servantFaceIcon,
      item->fields._userSvtCollectionEntity_k__BackingField,
      item->fields._svtCostumeEntity_k__BackingField,
      item->fields.iconLabelInfo,
      0LL,
      item->fields.isSecret,
      0LL);
    v11 = this->fields.servantFaceIcon;
    if ( !v11 )
      goto LABEL_35;
    ServantFaceIconComponent__SetDispRaritySprite(v11, 0, 0LL);
    userSvtCollectionEntity_k__BackingField = item->fields._userSvtCollectionEntity_k__BackingField;
    if ( !userSvtCollectionEntity_k__BackingField || item->fields.isNotCostumeGet )
      goto LABEL_9;
    status = userSvtCollectionEntity_k__BackingField->fields.status;
    if ( status == 1 )
    {
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_8629;
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
        v14 = (UnityEngine_Component_o *)this->fields.maskSprite;
        if ( v14 )
        {
          v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
          if ( v15 )
          {
            UnityEngine_GameObject__SetActive(v15, 0, 0LL);
            v16 = this->fields.maskLabel;
            if ( v16 )
            {
              UILabel__set_text(v16, (System_String_o *)StringLiteral_1, 0LL);
LABEL_13:
              MaterialCostumeServantListViewItemDraw__SetButtonState(this, 1, v12);
              return;
            }
          }
        }
        goto LABEL_35;
      }
      v23 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v23 )
        goto LABEL_35;
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !v24 )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(v24, 1, 0LL);
      maskLabel = this->fields.maskLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_8628;
    }
    v25 = LocalizationManager__Get((System_String_o *)*v22, 0LL);
    if ( maskLabel )
    {
      UILabel__set_text(maskLabel, v25, 0LL);
      v26 = this->fields.maskLabel;
      if ( v26 )
      {
        UILabel__set_fontSize(v26, 18, 0LL);
        goto LABEL_13;
      }
    }
LABEL_35:
    sub_B170D4();
  }
}