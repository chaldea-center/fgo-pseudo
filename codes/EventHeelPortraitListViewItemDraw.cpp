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
    sub_1BCAA3C(0LL, method);
  ShiningIconComponent__Clear(newImgSprite, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  int32_t imageId; // w21
  EventHeelPortraitListViewItemDraw_o *v13; // x21
  struct HeelPortraitEntity_o *v14; // x8
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1A2C4 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&System_Convert_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22813/*"portrait_unknown"*/, v7, v8);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20338/*"icon_common_new01"*/, v9, v10);
    byte_4B1A2C4 = 1;
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
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, item);
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_63067128(imageId, 0LL);
    v13 = this;
  }
  else
  {
    v13 = (EventHeelPortraitListViewItemDraw_o *)StringLiteral_22813/*"portrait_unknown"*/;
  }
  v14 = item->fields._Entity_k__BackingField;
  if ( !v14 )
LABEL_21:
    sub_1BCAA3C(this, item);
  eventId = v14->fields.eventId;
  heelPortraitSprite = v4->fields.heelPortraitSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
  AtlasManager__SetEventUI_38574572(eventId, heelPortraitSprite, (System_String_o *)v13, 0LL);
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
  ShiningIconComponent__Set_38945564((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_20338/*"icon_common_new01"*/, 0LL);
  this = (EventHeelPortraitListViewItemDraw_o *)v4->fields.newImgSprite;
  if ( !this )
    goto LABEL_21;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_21;
  v17.fields.x = v4->fields.ICON_SCALE;
  v17.fields.y = v17.fields.x;
  v17.fields.z = v17.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v17, 0LL);
}