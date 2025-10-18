void OrganizationTopListViewItemDraw___ctor(OrganizationTopListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  OrganizationTopListViewItemDraw_o **v6; // x19
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  const MethodInfo *v9; // x1
  OrganizationTopListViewItemDraw_o *v10; // x22
  OrganizationTopListViewItemDraw_o *v11; // x1
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *v13; // x20

  v6 = (OrganizationTopListViewItemDraw_o **)this;
  if ( (byte_4C3E74A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20553/*"img_shop_0"*/);
    this = (OrganizationTopListViewItemDraw_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E74A = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_23;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0) )
    {
      v10 = v6[6];
      imageName = (System_String_o *)StringLiteral_20553/*"img_shop_0"*/;
      this = (OrganizationTopListViewItemDraw_o *)OrganizationTopListViewItem__get_InfoText(item, v9);
      if ( !v10 )
        goto LABEL_23;
      v11 = this;
      this = v10;
    }
    else
    {
      this = v6[6];
      if ( !this )
        goto LABEL_23;
      v11 = (OrganizationTopListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v11, 0);
    v12 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      this = v6[5];
      if ( !this )
        goto LABEL_23;
      UIButton__set_normalSprite((UIButton_o *)this, imageName, 0);
    }
    this = v6[4];
    if ( !this )
LABEL_23:
      sub_1C372B4(this);
    UISprite__set_spriteName((UISprite_o *)this, imageName, 0);
    v13 = (UnityEngine_Object_o *)v6[5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      this = v6[5];
      if ( this )
      {
        ((void (__fastcall *)(OrganizationTopListViewItemDraw_o *, _QWORD, __int64, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          0,
          1,
          this->klass[1]._1.implementedInterfaces);
        return;
      }
      goto LABEL_23;
    }
  }
}