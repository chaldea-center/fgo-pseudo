void __fastcall EventEquipSkillPartsAddPartsViewItemObject___ctor(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B06292 & 1) == 0 )
  {
    sub_1BC3008(&ListViewObject_TypeInfo, method);
    byte_4B06292 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventEquipSkillPartsAddPartsViewItemObject__Awake(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B06290 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___, method);
    byte_4B06290 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BC3264(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EventEquipSkillPartsAddPartsListViewItemDraw___);
  this->fields.itemDraw = (struct EventEquipSkillPartsAddPartsListViewItemDraw_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall EventEquipSkillPartsAddPartsViewItemObject__SetItem(
        EventEquipSkillPartsAddPartsViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventEquipSkillPartsAddPartsListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4B06291 & 1) == 0 )
  {
    sub_1BC3008(&EventEquipSkillPartsAddPartsListViewItem_TypeInfo, item);
    byte_4B06291 = 1;
  }
  ListViewObject__SetItem_42800124((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1BC3264(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(EventEquipSkillPartsAddPartsListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventEquipSkillPartsAddPartsListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventEquipSkillPartsAddPartsListViewItem_TypeInfo )
    {
      sub_1BC3524(item);
      goto LABEL_9;
    }
  }
  EventEquipSkillPartsAddPartsListViewItemDraw__UpdateUi(
    itemDraw,
    (EventEquipSkillPartsAddPartsListViewItem_o *)item,
    v8);
}