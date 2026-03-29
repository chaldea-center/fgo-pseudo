void CommandAssistLvUpListViewItemObject___ctor(CommandAssistLvUpListViewItemObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2AE91 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2AE91 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CommandAssistLvUpListViewItemObject__Awake(CommandAssistLvUpListViewItemObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4D2AE8F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
    byte_4D2AE8F = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommandAssistLvUpListViewItemDraw___);
  this->fields.itemDraw = (struct CommandAssistLvUpListViewItemDraw_o *)Component_object;
  sub_1C93A78(&this->fields.itemDraw, Component_object);
}


void CommandAssistLvUpListViewItemObject__SetItem(
        CommandAssistLvUpListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  CommandAssistLvUpListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4D2AE90 & 1) == 0 )
  {
    sub_1C93AD4(&CommandAssistLvUpListViewItem_TypeInfo);
    byte_4D2AE90 = 1;
  }
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C93D2C(itemDraw, v7);
  if ( item )
  {
    naturalAligment = CommandAssistLvUpListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (CommandAssistLvUpListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != CommandAssistLvUpListViewItem_TypeInfo )
    {
      itemDraw = (CommandAssistLvUpListViewItemDraw_o *)sub_1C940C8(item);
      goto LABEL_9;
    }
  }
  CommandAssistLvUpListViewItemDraw__UpdateUi(itemDraw, (CommandAssistLvUpListViewItem_o *)item, v8);
}