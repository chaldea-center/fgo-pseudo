void StaffCostumeSelectListViewItemDraw___ctor(StaffCostumeSelectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void StaffCostumeSelectListViewItemDraw__SetDisp(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        const MethodInfo *method)
{
  StaffCostumeSelectListViewItemDraw_o **v4; // x19
  struct StaffPhotoCostumeEntity_o *StaffPhotoCostumeEntity_k__BackingField; // x8
  UIRangeLabel_o *v6; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v8; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v12; // x11
  struct UISprite_o *iconSprite; // x11
  __int64 *v14; // x8
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoCostumeEntity_o *v16; // x8
  struct StaffPhotoCostumeEntity_o *v17; // x8
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = (StaffCostumeSelectListViewItemDraw_o **)this;
  if ( (byte_4CE9C01 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17535/*"btn_bg_20"*/);
    this = (StaffCostumeSelectListViewItemDraw_o *)sub_1C7BAE8(&StringLiteral_17536/*"btn_bg_21"*/);
    byte_4CE9C01 = 1;
  }
  if ( !item )
    goto LABEL_35;
  StaffPhotoCostumeEntity_k__BackingField = item->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    goto LABEL_35;
  this = v4[4];
  if ( !this )
    goto LABEL_35;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoCostumeEntity_k__BackingField->fields.costumeName, 0, 1, 0, 0, 0);
  v6 = (UIRangeLabel_o *)v4[4];
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
    if ( !byte_4CE8D0B )
    {
      sub_1C7BAE8(&LocalizationManager_TypeInfo);
      byte_4CE8D0B = 1;
    }
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    iconSprite = this[2].fields.iconSprite;
    p_mTrans = (float *)&iconSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&iconSprite->fields.mTrans + 1;
    p_mChildren = (float *)&iconSprite->fields.mChildren;
    v12 = (float *)&iconSprite->fields.mChildren + 1;
    if ( v6 )
      goto LABEL_20;
LABEL_35:
    sub_1C7BD40(this, item);
  }
LABEL_8:
  if ( !byte_4CE8D0C )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CE8D0C = 1;
  }
  this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v8 = this[2].fields.iconSprite;
  p_mTrans = (float *)&v8->fields.mChanged;
  p_mUpdateFrame = (float *)&v8->fields.mUpdateFrame;
  p_mChildren = (float *)&v8->fields.mAnchorsCached;
  v12 = (float *)(&v8->fields.mAnchorsCached + 4);
  if ( !v6 )
    goto LABEL_35;
LABEL_20:
  v18.fields.a = *v12;
  v18.fields.b = *p_mChildren;
  v18.fields.g = *p_mUpdateFrame;
  v18.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(v6, v18, 0);
  this = v4[6];
  if ( !this )
    goto LABEL_35;
  if ( item->fields._IsSelected_k__BackingField )
    v14 = &StringLiteral_17536/*"btn_bg_21"*/;
  else
    v14 = &StringLiteral_17535/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v14, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (StaffCostumeSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   PhotoCampaignAtlas_k__BackingField,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
    if ( !v16 )
      goto LABEL_35;
    this = (StaffCostumeSelectListViewItemDraw_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_35;
    if ( UIAtlas__GetSprite((UIAtlas_o *)this, v16->fields.spriteName, 0) )
    {
      this = v4[7];
      if ( !this )
        goto LABEL_35;
      UISprite__set_atlas((UISprite_o *)this, item->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v17 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
      if ( !v17 )
        goto LABEL_35;
      this = v4[7];
      if ( !this )
        goto LABEL_35;
      UISprite__set_spriteName((UISprite_o *)this, v17->fields.spriteName, 0);
    }
  }
}


void StaffCostumeSelectListViewItemDraw__SetInput(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4CE9C00 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9C00 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_1C7BD40(Component_object, v8);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    StaffCostumeSelectListViewItemDraw__SetDisp(this, item, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void StaffCostumeSelectListViewItemDraw__SetItem(
        StaffCostumeSelectListViewItemDraw_o *this,
        StaffCostumeSelectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( item )
  {
    if ( mode )
      StaffCostumeSelectListViewItemDraw__SetDisp(this, item, *(const MethodInfo **)&mode);
  }
}