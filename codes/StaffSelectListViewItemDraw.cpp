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
  __int64 v6; // x2
  UIRangeLabel_o *nameLabel; // x21
  int v8; // w8
  float *v9; // x11
  float *v10; // x8
  float *v11; // x9
  float *v12; // x10
  float *v13; // x11
  float *v14; // x11
  __int64 *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  __int64 v20; // x2
  struct StaffPhotoEntity_o *v21; // x8
  struct StaffPhotoEntity_o *v22; // x8
  UILabel_o *noSelectLabel; // x21
  __int64 v24; // x1
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_596BC74 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_12820/*"STAFF_NO_SELECT_WARNING"*/);
    this = (StaffSelectListViewItemDraw_o *)sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596BC74 = 1;
  }
  if ( !v3 )
    goto LABEL_50;
  StaffPhotoEntity_k__BackingField = v3->fields._StaffPhotoEntity_k__BackingField;
  if ( !StaffPhotoEntity_k__BackingField )
    goto LABEL_50;
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_50;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoEntity_k__BackingField->fields.staffName, 0, 1, 0, 0, 0);
  nameLabel = v4->fields.nameLabel;
  v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !v3->fields._IsSelected_k__BackingField )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    if ( !byte_596ABD5 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596ABD5 = 1;
    }
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
      this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    v14 = (float *)*((_QWORD *)this + 23);
    v10 = v14 + 20;
    v11 = v14 + 21;
    v12 = v14 + 22;
    v13 = v14 + 23;
    if ( nameLabel )
      goto LABEL_22;
LABEL_50:
    sub_2213CDC(this, item);
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD6 = 1;
  }
  this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v9 = (float *)*((_QWORD *)this + 23);
  v10 = v9 + 24;
  v11 = v9 + 25;
  v12 = v9 + 26;
  v13 = v9 + 27;
  if ( !nameLabel )
    goto LABEL_50;
LABEL_22:
  v25.fields.a = *v13;
  v25.fields.b = *v12;
  v25.fields.g = *v11;
  v25.fields.r = *v10;
  UIRangeLabel__set_effectColor(nameLabel, v25, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.nameLabel;
  if ( !this )
    goto LABEL_50;
  v26.fields.r = 0.5;
  v26.fields.a = 1.0;
  if ( !v3->fields._IsNotSelect_k__BackingField )
    v26.fields.r = 1.0;
  v26.fields.g = v26.fields.r;
  v26.fields.b = v26.fields.r;
  UIRangeLabel__set_color((UIRangeLabel_o *)this, v26, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.setButtonSprite;
  if ( !this )
    goto LABEL_50;
  v16 = &StringLiteral_18209/*"btn_bg_20"*/;
  if ( v3->fields._IsSelected_k__BackingField )
    v16 = &StringLiteral_18211/*"btn_bg_21"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v16, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  this = (StaffSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(PhotoCampaignAtlas_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = v3->fields._StaffPhotoEntity_k__BackingField;
    if ( !v21 )
      goto LABEL_50;
    this = (StaffSelectListViewItemDraw_o *)v3->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_50;
    this = (StaffSelectListViewItemDraw_o *)UIAtlas__GetSprite((UIAtlas_o *)this, v21->fields.spriteName, 0);
    if ( this )
    {
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_50;
      UISprite__set_atlas((UISprite_o *)this, v3->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v22 = v3->fields._StaffPhotoEntity_k__BackingField;
      if ( !v22 )
        goto LABEL_50;
      this = (StaffSelectListViewItemDraw_o *)v4->fields.iconSprite;
      if ( !this )
        goto LABEL_50;
      UISprite__set_spriteName((UISprite_o *)this, v22->fields.spriteName, 0);
    }
  }
  noSelectLabel = v4->fields.noSelectLabel;
  if ( v3->fields._IsNotSelect_k__BackingField )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v20);
    this = (StaffSelectListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12820/*"STAFF_NO_SELECT_WARNING"*/, 0);
    item = (StaffSelectListViewItem_o *)this;
    if ( !noSelectLabel )
      goto LABEL_50;
  }
  else
  {
    item = **(StaffSelectListViewItem_o ***)(qword_5984390 + 184);
    if ( !noSelectLabel )
      goto LABEL_50;
  }
  UILabel__set_text(noSelectLabel, (System_String_o *)item, 0);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_50;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, bool, const char *))this->klass[1]._1.name)(
    this,
    !v3->fields._IsNotSelect_k__BackingField,
    this->klass[1]._1.namespaze);
  this = (StaffSelectListViewItemDraw_o *)v4->fields.baseButton;
  if ( !this )
    goto LABEL_50;
  if ( v3->fields._IsNotSelect_k__BackingField )
    v24 = 3;
  else
    v24 = 0;
  ((void (__fastcall *)(StaffSelectListViewItemDraw_o *, __int64, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    v24,
    1,
    this->klass[1]._1.implementedInterfaces);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596BC73 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC73 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) && !item->fields._IsNotSelect_k__BackingField )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_2213CDC(Component_object, v8);
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