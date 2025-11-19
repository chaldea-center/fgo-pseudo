void EventHeelPortraitListViewItemDraw___ctor(EventHeelPortraitListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.ICON_SCALE = 0.75;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventHeelPortraitListViewItemDraw__Awake(EventHeelPortraitListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void EventHeelPortraitListViewItemDraw__ClearNewImgSprite(
        EventHeelPortraitListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ShiningIconComponent_o *newImgSprite; // x0

  newImgSprite = this->fields.newImgSprite;
  if ( !newImgSprite )
    sub_1C6BC60(0, method);
  ShiningIconComponent__Clear(newImgSprite, 0);
}


void EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItemDraw_o *v4; // x19
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  int32_t imageId; // w21
  EventHeelPortraitListViewItemDraw_o *v7; // x21
  struct HeelPortraitEntity_o *v8; // x8
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB07F8 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&StringLiteral_22827/*"portrait_unknown"*/);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_20238/*"icon_common_new01"*/);
    byte_4CB07F8 = 1;
  }
  if ( !item )
    goto LABEL_21;
  if ( item->fields._isHavePortrait_k__BackingField )
  {
    Entity_k__BackingField = item->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      goto LABEL_21;
    imageId = Entity_k__BackingField->fields.imageId;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_65060756(imageId, 0);
    v7 = this;
  }
  else
  {
    v7 = (EventHeelPortraitListViewItemDraw_o *)StringLiteral_22827/*"portrait_unknown"*/;
  }
  v8 = item->fields._Entity_k__BackingField;
  if ( !v8 )
LABEL_21:
    sub_1C6BC60(this, item);
  eventId = v8->fields.eventId;
  heelPortraitSprite = v4->fields.heelPortraitSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40837804(eventId, heelPortraitSprite, (System_String_o *)v7, 0);
  if ( !item->fields._isHavePortrait_k__BackingField || item->fields._isDispDetailDialog_k__BackingField )
  {
    this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
    if ( this )
    {
      ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0);
      return;
    }
    goto LABEL_21;
  }
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_21;
  ShiningIconComponent__Set_41250876((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_20238/*"icon_common_new01"*/, 0);
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_21;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_21;
  v11.fields.x = v4->fields.ICON_SCALE;
  v11.fields.y = v11.fields.x;
  v11.fields.z = v11.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v11, 0);
}