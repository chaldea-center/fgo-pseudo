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
    sub_B7076C(0LL, method);
  ShiningIconComponent__Clear(newImgSprite, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItemDraw_o *v4; // x19
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  struct HeelPortraitEntity_o **p_Entity_k__BackingField; // x22
  int32_t imageId; // w21
  System_String_o *v8; // x21
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4353472 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&StringLiteral_21864/*"portrait_unknown"*/);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_B70694(&StringLiteral_19622/*"icon_common_new01"*/);
    byte_4353472 = 1;
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
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_42444396(imageId, 0LL);
    v8 = (System_String_o *)this;
  }
  else
  {
    p_Entity_k__BackingField = &item->fields._Entity_k__BackingField;
    v8 = (System_String_o *)StringLiteral_21864/*"portrait_unknown"*/;
  }
  if ( !*p_Entity_k__BackingField )
LABEL_23:
    sub_B7076C(this, item);
  eventId = (*p_Entity_k__BackingField)->fields.eventId;
  heelPortraitSprite = v4->fields.heelPortraitSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31552376(eventId, heelPortraitSprite, v8, 0LL);
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
  ShiningIconComponent__Set_33848396((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_19622/*"icon_common_new01"*/, 0LL);
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_23;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_23;
  v11.fields.x = v4->fields.ICON_SCALE;
  v11.fields.y = v11.fields.x;
  v11.fields.z = v11.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v11, 0LL);
}