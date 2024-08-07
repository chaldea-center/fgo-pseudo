void __fastcall CommandAssistListViewItemObject___ctor(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F9C48 & 1) == 0 )
  {
    sub_1B64A00(&ListViewObject_TypeInfo, method);
    byte_49F9C48 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemObject__Awake(
        CommandAssistListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49F9C46 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___, method);
    byte_49F9C46 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64C5C(0LL, v3);
  this->fields.itemDraw = (struct CommandAssistListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      dispObject,
                                                                      (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___);
  sub_1B649A4(&this->fields.itemDraw);
}


void __fastcall CommandAssistListViewItemObject__SetItem(
        CommandAssistListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandAssistListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_49F9C47 & 1) == 0 )
  {
    sub_1B64A00(&CommandAssistListViewItem_TypeInfo, item);
    byte_49F9C47 = 1;
  }
  ListViewObject__SetItem_40424740((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B64C5C(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(CommandAssistListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandAssistListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandAssistListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistListViewItemDraw_o *)sub_1B64F1C(item);
      goto LABEL_9;
    }
  }
  CommandAssistListViewItemDraw__UpdateUi(itemDraw, (CommandAssistListViewItem_o *)item, v8);
}