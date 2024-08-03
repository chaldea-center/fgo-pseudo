void __fastcall CommandAssistListViewItemObject___ctor(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F7538 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F7538 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemObject__Awake(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49F7536 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___, method);
    byte_49F7536 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  this->fields.itemDraw = (struct CommandAssistListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      dispObject,
                                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___);
  sub_1B6406C(&this->fields.itemDraw);
}


void __fastcall CommandAssistListViewItemObject__SetItem(
        CommandAssistListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  CommandAssistListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_49F7537 & 1) == 0 )
  {
    sub_1B640C8(&CommandAssistListViewItem_TypeInfo, item);
    byte_49F7537 = 1;
  }
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B64324(itemDraw);
  if ( item )
  {
    methodPtr_low = LOBYTE(CommandAssistListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandAssistListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandAssistListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistListViewItemDraw_o *)sub_1B645E4(item);
      goto LABEL_9;
    }
  }
  CommandAssistListViewItemDraw__UpdateUi(itemDraw, (CommandAssistListViewItem_o *)item, v7);
}