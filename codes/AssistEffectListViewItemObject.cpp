void AssistEffectListViewItemObject___ctor(AssistEffectListViewItemObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C3CCBB & 1) == 0 )
  {
    sub_1C37058(&ListViewObject_TypeInfo);
    byte_4C3CCBB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void AssistEffectListViewItemObject__Awake(AssistEffectListViewItemObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3CCB9 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_AssistEffectListViewItemDraw___);
    byte_4C3CCB9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_AssistEffectListViewItemDraw___);
  this->fields.itemDraw = (struct AssistEffectListViewItemDraw_o *)Component_object;
  sub_1C36FFC(&this->fields.itemDraw, Component_object);
}


void AssistEffectListViewItemObject__SetItem(
        AssistEffectListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  AssistEffectListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C3CCBA & 1) == 0 )
  {
    sub_1C37058(&AssistEffectListViewItem_TypeInfo);
    byte_4C3CCBA = 1;
  }
  ListViewObject__SetItem_43831492((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C372B4(itemDraw);
  if ( item )
  {
    naturalAligment = AssistEffectListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (AssistEffectListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != AssistEffectListViewItem_TypeInfo )
    {
      itemDraw = (AssistEffectListViewItemDraw_o *)sub_1C37574(item);
      goto LABEL_9;
    }
  }
  AssistEffectListViewItemDraw__UpdateUi(itemDraw, (AssistEffectListViewItem_o *)item, v7);
}