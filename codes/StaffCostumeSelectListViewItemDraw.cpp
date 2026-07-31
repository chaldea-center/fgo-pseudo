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
  __int64 v6; // x2
  UIRangeLabel_o *v7; // x21
  int v8; // w8
  struct UISprite_o *v9; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v13; // x11
  struct UISprite_o *iconSprite; // x11
  __int64 *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *PhotoCampaignAtlas_k__BackingField; // x21
  struct StaffPhotoCostumeEntity_o *v19; // x8
  struct StaffPhotoCostumeEntity_o *v20; // x8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = (StaffCostumeSelectListViewItemDraw_o **)this;
  if ( (byte_5933B48 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    this = (StaffCostumeSelectListViewItemDraw_o *)sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_5933B48 = 1;
  }
  if ( !item )
    goto LABEL_36;
  StaffPhotoCostumeEntity_k__BackingField = item->fields._StaffPhotoCostumeEntity_k__BackingField;
  if ( !StaffPhotoCostumeEntity_k__BackingField )
    goto LABEL_36;
  this = v4[4];
  if ( !this )
    goto LABEL_36;
  UIRangeLabel__Set((UIRangeLabel_o *)this, StaffPhotoCostumeEntity_k__BackingField->fields.costumeName, 0, 1, 0, 0, 0);
  v7 = (UIRangeLabel_o *)v4[4];
  v8 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !item->fields._IsSelected_k__BackingField )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    if ( !byte_5932AD3 )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_5932AD3 = 1;
    }
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
      this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    iconSprite = this[2].fields.iconSprite;
    p_mTrans = (float *)&iconSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&iconSprite->fields.mTrans + 1;
    p_mChildren = (float *)&iconSprite->fields.mChildren;
    v13 = (float *)&iconSprite->fields.mChildren + 1;
    if ( v7 )
      goto LABEL_22;
LABEL_36:
    sub_21FFECC(this, item);
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD4 = 1;
  }
  this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v6);
    this = (StaffCostumeSelectListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v9 = this[2].fields.iconSprite;
  p_mTrans = (float *)&v9->fields.mChanged;
  p_mUpdateFrame = (float *)&v9->fields.mUpdateFrame;
  p_mChildren = (float *)&v9->fields.mAnchorsCached;
  v13 = (float *)(&v9->fields.mAnchorsCached + 4);
  if ( !v7 )
    goto LABEL_36;
LABEL_22:
  v21.fields.a = *v13;
  v21.fields.b = *p_mChildren;
  v21.fields.g = *p_mUpdateFrame;
  v21.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(v7, v21, 0);
  this = v4[6];
  if ( !this )
    goto LABEL_36;
  v15 = &StringLiteral_18171/*"btn_bg_20"*/;
  if ( item->fields._IsSelected_k__BackingField )
    v15 = &StringLiteral_18173/*"btn_bg_21"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0);
  PhotoCampaignAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  this = (StaffCostumeSelectListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   PhotoCampaignAtlas_k__BackingField,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
    if ( !v19 )
      goto LABEL_36;
    this = (StaffCostumeSelectListViewItemDraw_o *)item->fields._PhotoCampaignAtlas_k__BackingField;
    if ( !this )
      goto LABEL_36;
    if ( UIAtlas__GetSprite((UIAtlas_o *)this, v19->fields.spriteName, 0) )
    {
      this = v4[7];
      if ( !this )
        goto LABEL_36;
      UISprite__set_atlas((UISprite_o *)this, item->fields._PhotoCampaignAtlas_k__BackingField, 0);
      v20 = item->fields._StaffPhotoCostumeEntity_k__BackingField;
      if ( !v20 )
        goto LABEL_36;
      this = v4[7];
      if ( !this )
        goto LABEL_36;
      UISprite__set_spriteName((UISprite_o *)this, v20->fields.spriteName, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5933B47 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933B47 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_21FFECC(Component_object, v8);
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