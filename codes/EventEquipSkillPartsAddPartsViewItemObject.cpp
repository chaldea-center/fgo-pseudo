void EventEquipSkillPartsAddPartsViewItemObject___ctor(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A576 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A576 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventEquipSkillPartsAddPartsViewItemObject__Awake(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A574 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___);
    byte_596A574 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___);
  this->fields.itemDraw = (struct EventEquipSkillPartsAddPartsListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventEquipSkillPartsAddPartsViewItemObject__SetItem(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  EventEquipSkillPartsAddPartsListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_596A575 & 1) == 0 )
  {
    sub_2213A60(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo);
    byte_596A575 = 1;
  }
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_2213CDC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = EventEquipSkillPartsAddPartsListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventEquipSkillPartsAddPartsListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventEquipSkillPartsAddPartsListViewItem_TypeInfo )
    {
      itemDraw = (EventEquipSkillPartsAddPartsListViewItemDraw_o *)sub_221405C(
                                                                     item,
                                                                     EventEquipSkillPartsAddPartsListViewItem_TypeInfo,
                                                                     v8,
                                                                     v9);
      goto LABEL_9;
    }
  }
  EventEquipSkillPartsAddPartsListViewItemDraw__UpdateUi(
    itemDraw,
    (EventEquipSkillPartsAddPartsListViewItem_o *)item,
    v8);
}