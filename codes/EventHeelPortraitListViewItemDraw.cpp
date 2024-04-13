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
    sub_B5D69C(0LL, method);
  ShiningIconComponent__Clear(newImgSprite, 0LL);
}


void __fastcall EventHeelPortraitListViewItemDraw__SetItem(
        EventHeelPortraitListViewItemDraw_o *this,
        EventHeelPortraitListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventHeelPortraitListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  struct HeelPortraitEntity_o **p_Entity_k__BackingField; // x22
  int32_t imageId; // w21
  System_String_o *v18; // x21
  int32_t eventId; // w22
  UISprite_o *heelPortraitSprite; // x23
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E9F7B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21798/*"portrait_unknown"*/, v9, v10, v11);
    this = (EventHeelPortraitListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19564/*"icon_common_new01"*/, v12, v13, v14);
    byte_42E9F7B = 1;
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
    this = (EventHeelPortraitListViewItemDraw_o *)System_Convert__ToString_42796160(imageId, 0LL);
    v18 = (System_String_o *)this;
  }
  else
  {
    p_Entity_k__BackingField = &item->fields._Entity_k__BackingField;
    v18 = (System_String_o *)StringLiteral_21798/*"portrait_unknown"*/;
  }
  if ( !*p_Entity_k__BackingField )
LABEL_23:
    sub_B5D69C(this, item);
  eventId = (*p_Entity_k__BackingField)->fields.eventId;
  heelPortraitSprite = v5->fields.heelPortraitSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, heelPortraitSprite, v18, 0LL);
  if ( !item->fields._isHavePortrait_k__BackingField || item->fields._isDispDetailDialog_k__BackingField )
  {
    this = (EventHeelPortraitListViewItemDraw_o *)v5->fields.newImgSprite;
    if ( this )
    {
      ShiningIconComponent__Clear((ShiningIconComponent_o *)this, 0LL);
      return;
    }
    goto LABEL_23;
  }
  this = (EventHeelPortraitListViewItemDraw_o *)v5->fields.newImgSprite;
  if ( !this )
    goto LABEL_23;
  ShiningIconComponent__Set_33897352((ShiningIconComponent_o *)this, (System_String_o *)StringLiteral_19564/*"icon_common_new01"*/, 0LL);
  this = (EventHeelPortraitListViewItemDraw_o *)v5->fields.newImgSprite;
  if ( !this )
    goto LABEL_23;
  this = (EventHeelPortraitListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
  if ( !this )
    goto LABEL_23;
  v21.fields.x = v5->fields.ICON_SCALE;
  v21.fields.y = v21.fields.x;
  v21.fields.z = v21.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v21, 0LL);
}