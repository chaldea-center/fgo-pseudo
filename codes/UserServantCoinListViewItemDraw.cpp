void UserServantCoinListViewItemDraw___ctor(UserServantCoinListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserServantCoinListViewItemDraw__SetInput(
        UserServantCoinListViewItemDraw_o *this,
        UserServantCoinListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x20
  struct UICommonButton_o *v6; // x0

  if ( (byte_4C33096 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33096 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    v6 = this->fields.baseButton;
    if ( !v6
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, const MethodInfo *))v6->klass->vtable._5_set_isEnabled.methodPtr)(
            v6,
            1,
            v6->klass->vtable._5_set_isEnabled.method),
          (v6 = this->fields.baseButton) == 0) )
    {
      sub_1C32E7C(v6);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v6->klass->vtable._14_SetState.methodPtr)(
      v6,
      0,
      1,
      v6->klass->vtable._14_SetState.method);
  }
}


void UserServantCoinListViewItemDraw__SetItem(
        UserServantCoinListViewItemDraw_o *this,
        UserServantCoinListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct SvtCoinEntity_o *svtCoinEntity; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t itemId; // w1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  struct UserSvtCoinEntity_o *userSvtCoinEntity; // x8
  UILabel_o *possessionNum; // x19
  Il2CppObject *v18; // x0
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C33095 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    byte_4C33095 = 1;
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
    ItemIconComponent__SetItem(itemIcon, itemId, -1, 1, 0);
    itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
    if ( !itemIcon )
      goto LABEL_15;
    UIIconLabel__Set((UIIconLabel_o *)itemIcon, item->fields.iconLabelInfo, 0);
    userSvtCoinEntity = item->fields.userSvtCoinEntity;
    possessionNum = this->fields.possessionNum;
    if ( userSvtCoinEntity )
      LODWORD(userSvtCoinEntity) = userSvtCoinEntity->fields.num;
    v19 = (int)userSvtCoinEntity;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10, v11, v12, v13, v14, v15);
    itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v18, 0);
    if ( !possessionNum )
LABEL_15:
      sub_1C32E7C(itemIcon);
    UILabel__set_text(possessionNum, (System_String_o *)itemIcon, 0);
  }
}