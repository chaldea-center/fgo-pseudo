void __fastcall CommandAssistLvUpListViewItemObject___ctor(
        CommandAssistLvUpListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFC7BC & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4AFC7BC = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpListViewItemObject__Awake(
        CommandAssistLvUpListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4AFC7BA & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___, method);
    byte_4AFC7BA = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  this->fields.itemDraw = (struct CommandAssistLvUpListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          dispObject,
                                                                          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
  sub_1BC2FAC(&this->fields.itemDraw);
}


void __fastcall CommandAssistLvUpListViewItemObject__SetItem(
        CommandAssistLvUpListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandAssistLvUpListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4AFC7BB & 1) == 0 )
  {
    sub_1BC3008(&CommandAssistLvUpListViewItem_TypeInfo, item);
    byte_4AFC7BB = 1;
  }
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1BC3264(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(CommandAssistLvUpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandAssistLvUpListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandAssistLvUpListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistLvUpListViewItemDraw_o *)sub_1BC3524(item);
      goto LABEL_9;
    }
  }
  CommandAssistLvUpListViewItemDraw__UpdateUi(itemDraw, (CommandAssistLvUpListViewItem_o *)item, v8);
}