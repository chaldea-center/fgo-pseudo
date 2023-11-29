void __fastcall UserServantCoinListViewItemDraw___ctor(
        UserServantCoinListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserServantCoinListViewItemDraw__SetInput(
        UserServantCoinListViewItemDraw_o *this,
        UserServantCoinListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v6; // x0
  struct UICommonButton_o *v7; // x0

  if ( (byte_40F8117 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40F8117 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v6 = this->fields.baseButton;
    if ( !v6
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
            v6,
            1LL,
            v6->klass->vtable._6_OnInit.methodPtr),
          (v7 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v7->klass->vtable._14_SetState.method)(
      v7,
      0LL,
      1LL,
      v7->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall UserServantCoinListViewItemDraw__SetItem(
        UserServantCoinListViewItemDraw_o *this,
        UserServantCoinListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct SvtCoinEntity_o *svtCoinEntity; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t itemId; // w1
  UIIconLabel_o *iconInfoLabel; // x0
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  UILabel_o *possessionNum; // x19
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8116 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&StringLiteral_23395, v7);
    byte_40F8116 = 1;
  }
  if ( item && mode )
  {
    svtCoinEntity = item->fields.svtCoinEntity;
    itemIcon = this->fields.itemIcon;
    if ( svtCoinEntity )
    {
      itemId = svtCoinEntity->fields.itemId;
      if ( !itemIcon )
        goto LABEL_15;
    }
    else
    {
      itemId = 0;
      if ( !itemIcon )
        goto LABEL_15;
    }
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 0LL);
    iconInfoLabel = this->fields.iconInfoLabel;
    if ( !iconInfoLabel )
      goto LABEL_15;
    UIIconLabel__Set(iconInfoLabel, item->fields.iconLabelInfo, 0LL);
    userSvtCoinEntity = item->fields.userSvtCoinEntity;
    possessionNum = this->fields.possessionNum;
    if ( userSvtCoinEntity )
      LODWORD(userSvtCoinEntity) = userSvtCoinEntity->fields.num;
    v16 = (int)userSvtCoinEntity;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v15 = System_String__Format((System_String_o *)StringLiteral_23395, v14, 0LL);
    if ( !possessionNum )
LABEL_15:
      sub_B170D4();
    UILabel__set_text(possessionNum, v15, 0LL);
  }
}