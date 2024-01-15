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
    sub_B170D4();
  ShiningIconComponent__Clear(newImgSprite, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  struct HeelPortraitEntity_o **p_Entity_k__BackingField; // x22
  int32_t imageId; // w21
  System_String_o *v11; // x21
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  ShiningIconComponent_o *newImgSprite; // x0
  ShiningIconComponent_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB6A6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&System_Convert_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_21417/*"portrait_unknown"*/, v6);
    sub_B16FFC(&StringLiteral_19246/*"icon_common_new01"*/, v7);
    byte_40FB6A6 = 1;
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
    v11 = System_Convert__ToString_41756656(imageId, 0LL);
  }
  else
  {
    p_Entity_k__BackingField = &item->fields._Entity_k__BackingField;
    v11 = (System_String_o *)StringLiteral_21417/*"portrait_unknown"*/;
  }
  if ( !*p_Entity_k__BackingField )
LABEL_23:
    sub_B170D4();
  eventId = (*p_Entity_k__BackingField)->fields.eventId;
  heelPortraitSprite = this->fields.heelPortraitSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, heelPortraitSprite, v11, 0LL);
  if ( !item->fields._isHavePortrait_k__BackingField || item->fields._isDispDetailDialog_k__BackingField )
  {
    newImgSprite = this->fields.newImgSprite;
    if ( newImgSprite )
    {
      ShiningIconComponent__Clear(newImgSprite, 0LL);
      return;
    }
    goto LABEL_23;
  }
  v15 = this->fields.newImgSprite;
  if ( !v15 )
    goto LABEL_23;
  ShiningIconComponent__Set_33652672(v15, (System_String_o *)StringLiteral_19246/*"icon_common_new01"*/, 0LL);
  v16 = (UnityEngine_Component_o *)this->fields.newImgSprite;
  if ( !v16 )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform(v16, 0LL);
  if ( !transform )
    goto LABEL_23;
  v18.fields.x = this->fields.ICON_SCALE;
  v18.fields.y = v18.fields.x;
  v18.fields.z = v18.fields.x;
  UnityEngine_Transform__set_localScale(transform, v18, 0LL);
}