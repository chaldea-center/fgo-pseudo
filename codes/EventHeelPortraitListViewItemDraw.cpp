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
    sub_B2C434(0LL, method);
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
  struct HeelPortraitEntity_o **p_Entity_k__BackingField; // x22
  int32_t imageId; // w21
  System_String_o *v11; // x21
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_41890E2 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&System_Convert_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_21509/*"portrait_unknown"*/, v6);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_B2C35C(&StringLiteral_19320/*"icon_common_new01"*/, v7);
    byte_41890E2 = 1;
  }
  if ( !item )
    goto LABEL_23;
  if ( item->fields._isHavePortrait_k__BackingField )
  {
    p_Entity_k__BackingField = &item->fields._Entity_k__BackingField;
    Entity_k__BackingField = item->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      goto LABEL_23;
    imageId = Entity_k__BackingField->fields.imageId;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_42142208(imageId, 0LL);
    v11 = (System_String_o *)this;
  }
  else
  {
    p_Entity_k__BackingField = &item->fields._Entity_k__BackingField;
    v11 = (System_String_o *)StringLiteral_21509/*"portrait_unknown"*/;
  }
  if ( !*p_Entity_k__BackingField )
LABEL_23:
    sub_B2C434(this, item);
  eventId = (*p_Entity_k__BackingField)->fields.eventId;
  heelPortraitSprite = v4->fields.heelPortraitSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, heelPortraitSprite, v11, 0LL);
  if ( !item->fields._isHavePortrait_k__BackingField || item->fields._isDispDetailDialog_k__BackingField )
  {
    this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
    if ( this )
    {
      ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
      return;
    }
    goto LABEL_23;
  }
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_23;
  ShiningIconComponent__Set_32979924((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_19320/*"icon_common_new01"*/, 0LL);
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_23;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_23;
  v14.fields.x = v4->fields.ICON_SCALE;
  v14.fields.y = v14.fields.x;
  v14.fields.z = v14.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v14, 0LL);
}