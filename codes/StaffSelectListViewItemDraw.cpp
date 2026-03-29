void StaffSelectListViewItemDraw___ctor(StaffSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StaffSelectListViewItemDraw__SetDisp(
        StaffSelectListViewItemDraw_o *this,
        StaffSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffSelectListViewItem_o *v3; // x19
  StaffSelectListViewItemDraw_o *v4; // x20
  struct StaffPhotoEntity_o *StaffPhotoEntity_k__BackingField; // x8
  UIRangeLabel_o *nameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  float *v8; // x11
  float *v9; // x8
  float *v10; // x9
  float *v11; // x10
  float *v12; // x11
  float *v13; // x11
  __int64 *v14; // x8
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoEntity_o *v16; // x8
  struct StaffPhotoEntity_o *v17; // x8
  UILabel_o *noSelectLabel; // x21
  __int64 v19; // x1
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4D2BF02 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_17578/*"btn_bg_20"*/);
    sub_1C93AD4(&StringLiteral_12391/*"STAFF_NO_SELECT_WARNING"*/);
    this = (StaffSelectListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_17579/*"btn_bg_21"*/);
    byte_4D2BF02 = 1;
  }
  if ( !v3 )
    goto LABEL_49;
  StaffPhotoEntity_k__BackingField = v3->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    goto LABEL_49;
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_49;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoEntity_k__BackingField->fields.staffName, 0, 1, 0, 0, 0);
  nameLabel = v4->fields.nameLabel;
  IsSelected_k__BackingField = v3->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v3->fields._IsSelected_k__BackingField )
      goto LABEL_8;
    goto LABEL_15;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_15:
    if ( !byte_4D2AFDF )
    {
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      byte_4D2AFDF = 1;
    }
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v13 = (float *)*((_QWORD *)this + 23);
    v9 = v13 + 20;
    v10 = v13 + 21;
    v11 = v13 + 22;
    v12 = v13 + 23;
    if ( nameLabel )
      goto LABEL_20;
LABEL_49:
    sub_1C93D2C(this, item);
  }
LABEL_8:
  if ( !byte_4D2AFE0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFE0 = 1;
  }
  this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v8 = (float *)*((_QWORD *)this + 23);
  v9 = v8 + 24;
  v10 = v8 + 25;
  v11 = v8 + 26;
  v12 = v8 + 27;
  if ( !nameLabel )
    goto LABEL_49;
LABEL_20:
  v20.fields.a = *v12;
  v20.fields.b = *v11;
  v20.fields.g = *v10;
  v20.fields.r = *v9;
  UIRangeLabel__set_effectColor(nameLabel, v20, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  v21.fields.r = 0.5;
  if ( !v3->fields._IsNotSelect_k__BackingField )
    v21.fields.r = 1.0;
  if ( !this )
    goto LABEL_49;
  v21.fields.a = 1.0;
  v21.fields.g = v21.fields.r;
  v21.fields.b = v21.fields.r;
  UIRangeLabel__set_color((UIRangeLabel_o *)this, v21, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.setButtonSprite;
  if ( !this )
    goto LABEL_49;
  if ( v3->fields._IsSelected_k__BackingField )
    v14 = &StringLiteral_17579/*"btn_bg_21"*/;
  else
    v14 = &StringLiteral_17578/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v14, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (StaffSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(PhotoCampaignAtlas_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = v3->fields._StaffPhotoEntity_k__BackingField;
    if ( !v16 )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_49;
    this = (StaffSelectListViewItemDraw_o *)UIAtlas__GetSprite((UIAtlas_o *)this, v16->fields.spriteName, 0);
    if ( this )
    {
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_atlas((UISprite_o *)this, v3->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v17 = v3->fields._StaffPhotoEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_49;
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, v17->fields.spriteName, 0);
    }
  }
  noSelectLabel = v4->fields.noSelectLabel;
  if ( v3->fields._IsNotSelect_k__BackingField )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12391/*"STAFF_NO_SELECT_WARNING"*/, 0);
    item = (StaffSelectListViewItem_o *)this;
    if ( !noSelectLabel )
      goto LABEL_49;
  }
  else
  {
    item = (StaffSelectListViewItem_o *)string_TypeInfo->static_fields->Empty;
    if ( !noSelectLabel )
      goto LABEL_49;
  }
  UILabel__set_text(noSelectLabel, (System_String_o *)item, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v3->fields._IsNotSelect_k__BackingField,
    this->klass[1]._1.namespaze);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_49;
  if ( v3->fields._IsNotSelect_k__BackingField )
    v19 = 3;
  else
    v19 = 0;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v19,
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4D2BF01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BF01 = 1;
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
                                                            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_1C93D2C(Component_object, v8);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    StaffSelectListViewItemDraw__SetDisp(this, item, v9);
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