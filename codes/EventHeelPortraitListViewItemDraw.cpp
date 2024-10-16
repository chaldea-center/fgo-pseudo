void __fastcall EventHeelPortraitListViewItemDraw___ctor(
        EventHeelPortraitListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.ICON_SCALE = 0.75;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__Awake(
        EventHeelPortraitListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventHeelPortraitListViewItemDraw__ClearNewImgSprite(
        EventHeelPortraitListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ShiningIconComponent_o *newImgSprite; // x0

  newImgSprite = this->fields.newImgSprite;
  if ( !newImgSprite )
    sub_1BAB678(0LL, method);
  ShiningIconComponent__Clear(newImgSprite, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  int32_t imageId; // w21
  EventHeelPortraitListViewItemDraw_o *v10; // x21
  struct HeelPortraitEntity_o *v11; // x8
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4AB9D10 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, item);
    sub_1BAB41C(&System_Convert_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_22609/*"portrait_unknown"*/, v6);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_20160/*"icon_common_new01"*/, v7);
    byte_4AB9D10 = 1;
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
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_62713708(imageId, 0LL);
    v10 = this;
  }
  else
  {
    v10 = (EventHeelPortraitListViewItemDraw_o *)StringLiteral_22609/*"portrait_unknown"*/;
  }
  v11 = item->fields._Entity_k__BackingField;
  if ( !v11 )
LABEL_21:
    sub_1BAB678(this, item);
  eventId = v11->fields.eventId;
  heelPortraitSprite = v4->fields.heelPortraitSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_38244724(eventId, heelPortraitSprite, (System_String_o *)v10, 0LL);
  if ( !item->fields._isHavePortrait_k__BackingField || item->fields._isDispDetailDialog_k__BackingField )
  {
    this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
    if ( this )
    {
      ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
      return;
    }
    goto LABEL_21;
  }
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_21;
  ShiningIconComponent__Set_38614940((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_20160/*"icon_common_new01"*/, 0LL);
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_21;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_21;
  v14.fields.x = v4->fields.ICON_SCALE;
  v14.fields.y = v14.fields.x;
  v14.fields.z = v14.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v14, 0LL);
}