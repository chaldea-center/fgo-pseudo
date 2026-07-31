void CommandAssistListViewItemObject___ctor(CommandAssistListViewItemObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5931D40 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5931D40 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CommandAssistListViewItemObject__Awake(CommandAssistListViewItemObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_5931D3E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___);
    byte_5931D3E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistListViewItemDraw___);
  this->fields.itemDraw = (struct CommandAssistListViewItemDraw_o *)Component_object;
  sub_21FFBF4(&this->fields.itemDraw, Component_object);
}


void CommandAssistListViewItemObject__SetItem(
        CommandAssistListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  CommandAssistListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_5931D3F & 1) == 0 )
  {
    sub_21FFC50(&CommandAssistListViewItem_TypeInfo);
    byte_5931D3F = 1;
  }
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_21FFECC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = CommandAssistListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CommandAssistListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CommandAssistListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistListViewItemDraw_o *)sub_220024C(item, CommandAssistListViewItem_TypeInfo, v8, v9);
      goto LABEL_9;
    }
  }
  CommandAssistListViewItemDraw__UpdateUi(itemDraw, (CommandAssistListViewItem_o *)item, v8);
}