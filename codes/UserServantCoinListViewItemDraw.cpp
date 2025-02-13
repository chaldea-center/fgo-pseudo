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
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0

  if ( (byte_4BD7EA2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7EA2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v7 = this->fields.baseButton;
    if ( !v7
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._5_set_isEnabled.method)(
            v7,
            1LL,
            v7->klass->vtable._6_OnInit.methodPtr),
          (v7 = this->fields.baseButton) == 0LL) )
    {
      sub_1C22094(v7, v6);
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
  struct SvtCoinEntity_o *svtCoinEntity; // x8
  ItemIconComponent_o *itemIcon; // x0
  __int64 itemId; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  UILabel_o *possessionNum; // x19
  Il2CppObject *v15; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD7EA1 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    byte_4BD7EA1 = 1;
  }
  if ( item && mode )
  {
    svtCoinEntity = item->fields.svtCoinEntity;
    itemIcon = this->fields.itemIcon;
    if ( svtCoinEntity )
    {
      itemId = (unsigned int)svtCoinEntity->fields.itemId;
      if ( !itemIcon )
        goto LABEL_15;
    }
    else
    {
      itemId = 0LL;
      if ( !itemIcon )
        goto LABEL_15;
    }
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 1, 0LL);
    itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
    if ( !itemIcon )
      goto LABEL_15;
    UIIconLabel__Set((UIIconLabel_o *)itemIcon, item->fields.iconLabelInfo, 0LL);
    userSvtCoinEntity = item->fields.userSvtCoinEntity;
    possessionNum = this->fields.possessionNum;
    if ( userSvtCoinEntity )
      LODWORD(userSvtCoinEntity) = userSvtCoinEntity->fields.num;
    v16 = (int)userSvtCoinEntity;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v10, v11, v12);
    itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v15, 0LL);
    if ( !possessionNum )
LABEL_15:
      sub_1C22094(itemIcon, itemId);
    UILabel__set_text(possessionNum, (System_String_o *)itemIcon, 0LL);
  }
}