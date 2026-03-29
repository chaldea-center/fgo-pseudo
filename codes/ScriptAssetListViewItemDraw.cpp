void ScriptAssetListViewItemDraw___ctor(ScriptAssetListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptAssetListViewItemDraw__SetItem(
        ScriptAssetListViewItemDraw_o *this,
        ScriptAssetListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2DF20 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DF20 = 1;
  }
  if ( item && mode )
  {
    if ( ScriptAssetListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ScriptAssetListViewItem__get_TitleText(item, v7);
      if ( !titleTextLabel )
        goto LABEL_20;
      UILabel__set_text(titleTextLabel, TitleText, 0);
    }
    TitleText = (System_String_o *)this->fields.baseImageTexture;
    if ( TitleText )
    {
      TitleText = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TitleText, 0);
      if ( TitleText )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)TitleText,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        TitleText = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)TitleText & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
        TitleText = (System_String_o *)this->fields.baseImageTexture;
        v11.fields.r = 1.0;
        if ( mode == 1 )
          v11.fields.r = 0.5;
        if ( TitleText )
        {
          v11.fields.a = 1.0;
          v11.fields.g = v11.fields.r;
          v11.fields.b = v11.fields.r;
          UIWidget__set_color((UIWidget_o *)TitleText, v11, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C93D2C(TitleText, v7);
  }
}