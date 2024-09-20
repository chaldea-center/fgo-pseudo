void __fastcall OrganizationTopListViewItemDraw___ctor(
        OrganizationTopListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  OrganizationTopListViewItemDraw_o **v6; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  OrganizationTopListViewItemDraw_o *v9; // x22
  OrganizationTopListViewItemDraw_o *v10; // x1
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *v12; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_4A56E25 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20443/*"img_shop_0"*/);
    this = (OrganizationTopListViewItemDraw_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56E25 = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_23;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    {
      v9 = v6[6];
      imageName = (System_String_o *)StringLiteral_20443/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(
                                                    item,
                                                    (const MethodInfo *)item);
      if ( !v9 )
        goto LABEL_23;
      v10 = this;
      this = v9;
    }
    else
    {
      this = v6[6];
      if ( !this )
        goto LABEL_23;
      v10 = (OrganizationTopListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v10, 0LL);
    v11 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      this = v6[5];
      if ( !this )
        goto LABEL_23;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0LL);
    }
    this = v6[4];
    if ( !this )
LABEL_23:
      sub_1B8880C(this, item);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0LL);
    v12 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      this = v6[5];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        return;
      }
      goto LABEL_23;
    }
  }
}