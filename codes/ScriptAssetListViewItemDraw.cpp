void __fastcall ScriptAssetListViewItemDraw___ctor(ScriptAssetListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptAssetListViewItemDraw__SetItem(
        ScriptAssetListViewItemDraw_o *this,
        ScriptAssetListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UIWidget_o *baseImageTexture; // x20
  int v12; // s0

  if ( (byte_42B46E2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B46E2 = 1;
  }
  if ( item && mode )
  {
    if ( ScriptAssetListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ScriptAssetListViewItem__get_TitleText(item, v7);
      if ( !titleTextLabel )
        goto LABEL_22;
      UILabel__set_text(titleTextLabel, TitleText, 0LL);
    }
    TitleText = (System_String_o *)this->fields.baseImageTexture;
    if ( !TitleText
      || (TitleText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)TitleText,
                                           0LL)) == 0LL )
    {
LABEL_22:
      sub_B52A5C(TitleText, v7);
    }
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)TitleText,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    TitleText = (System_String_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)TitleText & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_22;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
    }
    baseImageTexture = (UIWidget_o *)this->fields.baseImageTexture;
    if ( mode == 1 )
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
      if ( !baseImageTexture )
        goto LABEL_22;
    }
    else
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      if ( !baseImageTexture )
        goto LABEL_22;
    }
    UIWidget__set_color(baseImageTexture, *(UnityEngine_Color_o *)&v12, 0LL);
  }
}