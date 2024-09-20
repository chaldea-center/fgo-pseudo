void __fastcall SupportDeckFixErrorListViewObject___ctor(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57AA2 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A57AA2 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorListViewObject__Awake(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A57AA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
    byte_4A57AA0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
  this->fields.itemDraw = (struct SupportDeckFixErrorListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall SupportDeckFixErrorListViewObject__Init(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  SupportDeckFixErrorListViewItem_c *v5; // x10
  struct ListViewItem_o *v6; // x21
  UnityEngine_Object_o *itemDraw; // x20
  UILabel_o *messageLabel; // x0
  __int64 v9; // x1
  struct SupportDeckFixErrorListViewItemDraw_o *v10; // x8

  if ( (byte_4A57AA1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportDeckFixErrorListViewItem_TypeInfo);
    byte_4A57AA1 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(SupportDeckFixErrorListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v5 = (SupportDeckFixErrorListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v6 = v5 == SupportDeckFixErrorListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v5 == SupportDeckFixErrorListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        messageLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
        if ( ((unsigned __int8)messageLabel & 1) != 0 )
        {
          if ( !v6 || (v10 = this->fields.itemDraw) == 0LL || (messageLabel = v10->fields.messageLabel) == 0LL )
            sub_1B8880C(messageLabel, v9);
          UILabel__set_text(messageLabel, (System_String_o *)v6[1].klass, 0LL);
        }
      }
    }
  }
}


void __fastcall SupportDeckFixErrorListViewObject__SetMode(
        SupportDeckFixErrorListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ((void (__fastcall *)(SupportDeckFixErrorListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}