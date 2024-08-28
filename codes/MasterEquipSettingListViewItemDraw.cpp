void __fastcall MasterEquipSettingListViewItemDraw___ctor(
        MasterEquipSettingListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterEquipSettingListViewItemDraw__SetButton(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        const MethodInfo *method)
{
  MasterEquipSettingListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  UIRangeLabel_o *equipShortNameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v9; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v13; // x11
  struct UISprite_o *equipSetButtonSprite; // x11
  __int64 *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A046D3 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, item);
    sub_1B686D4(&StringLiteral_17414/*"btn_bg_20"*/, v5);
    this = (MasterEquipSettingListViewItemDraw_o *)sub_1B686D4(&StringLiteral_17415/*"btn_bg_21"*/, v6);
    byte_4A046D3 = 1;
  }
  if ( !item )
    goto LABEL_24;
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipShortNameLabel;
  if ( !this )
    goto LABEL_24;
  UIRangeLabel__Set((UIRangeLabel_o *)this, item->fields._ShortName_k__BackingField, 0LL, 1, 0, 0LL);
  equipShortNameLabel = v4->fields.equipShortNameLabel;
  IsSelected_k__BackingField = item->fields._IsSelected_k__BackingField;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( item->fields._IsSelected_k__BackingField )
      goto LABEL_7;
    goto LABEL_14;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !IsSelected_k__BackingField )
  {
LABEL_14:
    if ( !byte_4A03F8B )
    {
      sub_1B686D4(&LocalizationManager_TypeInfo, item);
      byte_4A03F8B = 1;
    }
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    equipSetButtonSprite = this[2].fields.equipSetButtonSprite;
    p_mTrans = (float *)&equipSetButtonSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&equipSetButtonSprite->fields.mTrans + 1;
    p_mChildren = (float *)&equipSetButtonSprite->fields.mChildren;
    v13 = (float *)&equipSetButtonSprite->fields.mChildren + 1;
    if ( equipShortNameLabel )
      goto LABEL_19;
LABEL_24:
    sub_1B68930(this, item);
  }
LABEL_7:
  if ( !byte_4A03F8C )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, item);
    byte_4A03F8C = 1;
  }
  this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v9 = this[2].fields.equipSetButtonSprite;
  p_mTrans = (float *)&v9->fields.mChanged;
  p_mUpdateFrame = (float *)&v9->fields.mUpdateFrame;
  p_mChildren = (float *)&v9->fields.mAnchorsCached;
  v13 = (float *)(&v9->fields.mAnchorsCached + 4);
  if ( !equipShortNameLabel )
    goto LABEL_24;
LABEL_19:
  v16.fields.a = *v13;
  v16.fields.b = *p_mChildren;
  v16.fields.g = *p_mUpdateFrame;
  v16.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(equipShortNameLabel, v16, 0LL);
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v15 = &StringLiteral_17415/*"btn_bg_21"*/;
  else
    v15 = &StringLiteral_17414/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0LL);
}


void __fastcall MasterEquipSettingListViewItemDraw__SetInput(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4A046D2 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A046D2 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_14;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_14;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_14;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    Component_object = (UnityEngine_Component_o *)this->fields.masterEquipIconSprite;
    if ( Component_object )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, struct UnityEngine_Texture2D_o *, const char *))Component_object->klass[2]._1.gc_desc)(
        Component_object,
        item->fields._EquipTexture_k__BackingField,
        Component_object->klass[2]._1.name);
      MasterEquipSettingListViewItemDraw__SetButton(this, item, v11);
      return;
    }
LABEL_14:
    sub_1B68930(Component_object, v9);
  }
}


void __fastcall MasterEquipSettingListViewItemDraw__SetItem(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *EquipTexture_k__BackingField; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct UITexture_o *masterEquipIconSprite; // x0

  if ( (byte_4A046D1 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, item);
    byte_4A046D1 = 1;
  }
  if ( item && mode )
  {
    EquipTexture_k__BackingField = (UnityEngine_Object_o *)item->fields._EquipTexture_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(EquipTexture_k__BackingField, 0LL, 0LL) )
    {
      masterEquipIconSprite = this->fields.masterEquipIconSprite;
      if ( !masterEquipIconSprite )
        sub_1B68930(0LL, v8);
      ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, Il2CppMethodPointer))masterEquipIconSprite->klass->vtable._27_set_mainTexture.method)(
        masterEquipIconSprite,
        item->fields._EquipTexture_k__BackingField,
        masterEquipIconSprite->klass->vtable._28_get_shader.methodPtr);
    }
    MasterEquipSettingListViewItemDraw__SetButton(this, item, v9);
  }
}