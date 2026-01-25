void EventEquipSkillPartsAddPartsViewItemObject___ctor(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE87D7 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CE87D7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventEquipSkillPartsAddPartsViewItemObject__Awake(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CE87D5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___);
    byte_4CE87D5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___);
  this->fields.itemDraw = (struct EventEquipSkillPartsAddPartsListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(&this->fields.itemDraw, Component_object);
}


void EventEquipSkillPartsAddPartsViewItemObject__SetItem(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventEquipSkillPartsAddPartsListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4CE87D6 & 1) == 0 )
  {
    sub_1C7BAE8(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
    byte_4CE87D6 = 1;
  }
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C7BD40(itemDraw, v7);
  if ( item )
  {
    naturalAligment = EventEquipSkillPartsAddPartsListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventEquipSkillPartsAddPartsListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventEquipSkillPartsAddPartsListViewItem_TypeInfo )
    {
      itemDraw = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)sub_1C7C0DC(item);
      goto LABEL_9;
    }
  }
  EventEquipSkillPartsAddPartsListViewItemDraw__UpdateUi(
    itemDraw,
    (EventEquipSkillPartsAddPartsListViewItem_o *)item,
    v8);
}