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
  __int64 v7; // x1
  __int64 v8; // x1
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  OrganizationTopListViewItemDraw_o *v11; // x22
  System_String_o *v12; // x1
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *v14; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_418519B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    sub_B2C35C(&StringLiteral_19606/*"img_shop_0"*/, v7);
    this = (OrganizationTopListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418519B = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_25;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    {
      v11 = v6[5];
      imageName = (System_String_o *)StringLiteral_19606/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(
                                                    item,
                                                    (const MethodInfo *)item);
      if ( !v11 )
        goto LABEL_25;
      v12 = (System_String_o *)this;
      this = v11;
    }
    else
    {
      this = v6[5];
      if ( !this )
        goto LABEL_25;
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, v12, 0LL);
    v13 = (UnityEngine_Object_o *)v6[4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      this = v6[4];
      if ( !this )
        goto LABEL_25;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0LL);
    }
    this = v6[3];
    if ( !this )
LABEL_25:
      sub_B2C434(this, item);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0LL);
    v14 = (UnityEngine_Object_o *)v6[4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      this = v6[4];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
          this,
          0LL,
          1LL,
          this->klass[1]._1.interfaceOffsets);
        return;
      }
      goto LABEL_25;
    }
  }
}