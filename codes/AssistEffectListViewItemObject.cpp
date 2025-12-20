void AssistEffectListViewItemObject___ctor(AssistEffectListViewItemObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D26293 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D26293 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void AssistEffectListViewItemObject__Awake(AssistEffectListViewItemObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4D26291 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_AssistEffectListViewItemDraw___);
    byte_4D26291 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_AssistEffectListViewItemDraw___);
  this->fields.itemDraw = (struct AssistEffectListViewItemDraw_o *)Component_object;
  sub_1C9403C(&this->fields.itemDraw, Component_object);
}


void AssistEffectListViewItemObject__SetItem(
        AssistEffectListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  AssistEffectListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4D26292 & 1) == 0 )
  {
    sub_1C94098(&AssistEffectListViewItem_TypeInfo);
    byte_4D26292 = 1;
  }
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C942F0(itemDraw, v7);
  if ( item )
  {
    naturalAligment = AssistEffectListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (AssistEffectListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != AssistEffectListViewItem_TypeInfo )
    {
      itemDraw = (AssistEffectListViewItemDraw_o *)sub_1C9468C(item);
      goto LABEL_9;
    }
  }
  AssistEffectListViewItemDraw__UpdateUi(itemDraw, (AssistEffectListViewItem_o *)item, v8);
}