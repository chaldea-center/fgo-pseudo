void StaffSelectListViewItemDraw___ctor(StaffSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItemDraw__SetDisp(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffSelectListViewItemDraw_o *v4; // x20
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8
  UIRangeLabel_o *nameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UILabel_o *v8; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v12; // x11
  struct UILabel_o *noSelectLabel; // x11
  float v14; // s0 OVERLAPPED
  float v15; // s3
  float v16; // s1
  float v17; // s2
  __int64 *v18; // x8
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoEntity_o *v20; // x8
  struct StaffPhotoEntity_o *v21; // x8
  UILabel_o *v22; // x21
  System_String_o *Empty; // x1
  __int64 v24; // x1
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C3E662 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_17447/*"btn_bg_20"*/);
    sub_1C37058(&StringLiteral_12299/*"STAFF_NO_SELECT_WARNING"*/);
    this = (StaffSelectListViewItemDraw_o *)sub_1C37058(&StringLiteral_17448/*"btn_bg_21"*/);
    byte_4C3E662 = 1;
  }
  if ( !item )
    goto LABEL_49;
  StaffPhotoEntity_k__BackingField = item->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    goto LABEL_49;
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_49;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoEntity_k__BackingField->fields.staffName, 0, 1, 0, 0, 0);
  nameLabel = v4->fields.nameLabel;
  IsSelected_k__BackingField = item->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields._IsSelected_k__BackingField )
      goto LABEL_8;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_15:
    if ( !byte_4C3D77E )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      byte_4C3D77E = 1;
    }
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    noSelectLabel = this[2].fields.noSelectLabel;
    p_mTrans = (float *)&noSelectLabel->fields.mTrans;
    p_mUpdateFrame = (float *)&noSelectLabel->fields.mTrans + 1;
    p_mChildren = (float *)&noSelectLabel->fields.mChildren;
    v12 = (float *)&noSelectLabel->fields.mChildren + 1;
    if ( nameLabel )
      goto LABEL_20;
LABEL_49:
    sub_1C372B4(this);
  }
LABEL_8:
  if ( !byte_4C3D77F )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D77F = 1;
  }
  this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v8 = this[2].fields.noSelectLabel;
  p_mTrans = (float *)&v8->fields.mChanged;
  p_mUpdateFrame = (float *)&v8->fields.mUpdateFrame;
  p_mChildren = (float *)&v8->fields.mAnchorsCached;
  v12 = (float *)(&v8->fields.mAnchorsCached + 4);
  if ( !nameLabel )
    goto LABEL_49;
LABEL_20:
  v25.fields.a = *v12;
  v25.fields.b = *p_mChildren;
  v25.fields.g = *p_mUpdateFrame;
  v25.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(nameLabel, v25, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  v14 = 0.5;
  if ( !item->fields._IsNotSelect_k__BackingField )
    v14 = 1.0;
  if ( !this )
    goto LABEL_49;
  v15 = 1.0;
  v16 = v14;
  v17 = v14;
  UIRangeLabel__set_color((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)&v14, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.setButtonSprite;
  if ( !this )
    goto LABEL_49;
  if ( item->fields._IsSelected_k__BackingField )
    v18 = &StringLiteral_17448/*"btn_bg_21"*/;
  else
    v18 = &StringLiteral_17447/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v18, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (StaffSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(PhotoCampaignAtlas_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = item->fields._StaffPhotoEntity_k__BackingField;
    if ( !v20 )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)UIAtlas__GetSprite((UIAtlas_o *)this, v20->fields.spriteName, 0);
    if ( this )
    {
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_atlas((UISprite_o *)this, item->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v21 = item->fields._StaffPhotoEntity_k__BackingField;
      if ( !v21 )
        goto LABEL_49;
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, v21->fields.spriteName, 0);
    }
  }
  v22 = v4->fields.noSelectLabel;
  if ( item->fields._IsNotSelect_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"STAFF_NO_SELECT_WARNING"*/, 0);
    Empty = (System_String_o *)this;
    if ( !v22 )
      goto LABEL_49;
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !v22 )
      goto LABEL_49;
  }
  UILabel__set_text(v22, Empty, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !item->fields._IsNotSelect_k__BackingField,
    this->klass[1]._1.namespaze);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  if ( item->fields._IsNotSelect_k__BackingField )
    v24 = 3;
  else
    v24 = 0;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v24,
    1,
    this->klass[1]._1.implementedInterfaces);
}


void StaffSelectListViewItemDraw__SetInput(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v8; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C3E661 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E661 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) && !item->fields._IsNotSelect_k__BackingField )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_1C372B4(Component_object);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    StaffSelectListViewItemDraw__SetDisp(this, item, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void StaffSelectListViewItemDraw__SetItem(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( item )
  {
    if ( mode )
      StaffSelectListViewItemDraw__SetDisp(this, item, *(const MethodInfo **)&mode);
  }
}