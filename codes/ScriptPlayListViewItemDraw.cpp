void __fastcall ScriptPlayListViewItemDraw___ctor(ScriptPlayListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptPlayListViewItemDraw__SetItem(
        ScriptPlayListViewItemDraw_o *this,
        ScriptPlayListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  Il2CppObject *Component_object; // x21
  float v11; // s0
  float v12; // s3
  float v13; // s1
  float v14; // s2

  if ( (byte_4BD9CD0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9CD0 = 1;
  }
  if ( item && mode )
  {
    if ( ScriptPlayListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ScriptPlayListViewItem__get_TitleText(item, v7);
      if ( !titleTextLabel )
        goto LABEL_20;
      UILabel__set_text(titleTextLabel, TitleText, 0LL);
    }
    TitleText = (System_String_o *)this->fields.baseImageTexture;
    if ( TitleText )
    {
      TitleText = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TitleText, 0LL);
      if ( TitleText )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)TitleText,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        TitleText = (System_String_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
        if ( ((unsigned __int8)TitleText & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
        }
        TitleText = (System_String_o *)this->fields.baseImageTexture;
        v11 = 1.0;
        if ( mode == 1 )
          v11 = 0.5;
        if ( TitleText )
        {
          v12 = 1.0;
          v13 = v11;
          v14 = v11;
          UIWidget__set_color((UIWidget_o *)TitleText, *(UnityEngine_Color_o *)&v11, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_1C22094(TitleText, v7);
  }
}