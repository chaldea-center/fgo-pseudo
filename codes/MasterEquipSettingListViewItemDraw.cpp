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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x2
  UIRangeLabel_o *equipShortNameLabel; // x21
  _BOOL4 IsSelected_k__BackingField; // w23
  struct UISprite_o *v12; // x11
  float *p_mTrans; // x8
  float *p_mUpdateFrame; // x9
  float *p_mChildren; // x10
  float *v16; // x11
  struct UISprite_o *equipSetButtonSprite; // x11
  __int64 *v18; // x8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B11B8C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, method);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v5, v6);
    this = (MasterEquipSettingListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v7, v8);
    byte_4B11B8C = 1;
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
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  if ( !IsSelected_k__BackingField )
  {
LABEL_14:
    if ( !byte_4B11133 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, item, v9);
      byte_4B11133 = 1;
    }
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
    }
    equipSetButtonSprite = this[2].fields.equipSetButtonSprite;
    p_mTrans = (float *)&equipSetButtonSprite->fields.mTrans;
    p_mUpdateFrame = (float *)&equipSetButtonSprite->fields.mTrans + 1;
    p_mChildren = (float *)&equipSetButtonSprite->fields.mChildren;
    v16 = (float *)&equipSetButtonSprite->fields.mChildren + 1;
    if ( equipShortNameLabel )
      goto LABEL_19;
LABEL_24:
    sub_1BCAA3C(this, item);
  }
LABEL_7:
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, v9);
    byte_4B11134 = 1;
  }
  this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (MasterEquipSettingListViewItemDraw_o *)LocalizationManager_TypeInfo;
  }
  v12 = this[2].fields.equipSetButtonSprite;
  p_mTrans = (float *)&v12->fields.mChanged;
  p_mUpdateFrame = (float *)&v12->fields.mUpdateFrame;
  p_mChildren = (float *)&v12->fields.mAnchorsCached;
  v16 = (float *)(&v12->fields.mAnchorsCached + 4);
  if ( !equipShortNameLabel )
    goto LABEL_24;
LABEL_19:
  v19.fields.a = *v16;
  v19.fields.b = *p_mChildren;
  v19.fields.g = *p_mUpdateFrame;
  v19.fields.r = *p_mTrans;
  UIRangeLabel__set_effectColor(equipShortNameLabel, v19, 0LL);
  this = (MasterEquipSettingListViewItemDraw_o *)v4->fields.equipSetButtonSprite;
  if ( !this )
    goto LABEL_24;
  if ( item->fields._IsSelected_k__BackingField )
    v18 = &StringLiteral_17653/*"btn_bg_21"*/;
  else
    v18 = &StringLiteral_17652/*"btn_bg_20"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipSettingListViewItemDraw__SetInput(
        MasterEquipSettingListViewItemDraw_o *this,
        MasterEquipSettingListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B11B8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B11B8B = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_14;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      MasterEquipSettingListViewItemDraw__SetButton(this, item, v12);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Component_object, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B11B8A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    byte_4B11B8A = 1;
  }
  if ( item && mode )
  {
    EquipTexture_k__BackingField = (UnityEngine_Object_o *)item->fields._EquipTexture_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(EquipTexture_k__BackingField, 0LL, 0LL) )
    {
      masterEquipIconSprite = this->fields.masterEquipIconSprite;
      if ( !masterEquipIconSprite )
        sub_1BCAA3C(0LL, v8);
      ((void (__fastcall *)(struct UITexture_o *, struct UnityEngine_Texture2D_o *, Il2CppMethodPointer))masterEquipIconSprite->klass->vtable._27_set_mainTexture.method)(
        masterEquipIconSprite,
        item->fields._EquipTexture_k__BackingField,
        masterEquipIconSprite->klass->vtable._28_get_shader.methodPtr);
    }
    MasterEquipSettingListViewItemDraw__SetButton(this, item, v9);
  }
}