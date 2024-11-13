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
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21
  float v14; // s0
  float v15; // s3
  float v16; // s1
  float v17; // s2

  if ( (byte_4B13926 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B13926 = 1;
  }
  if ( item && mode )
  {
    if ( ScriptAssetListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ScriptAssetListViewItem__get_TitleText(item, v9);
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
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
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
        v14 = 1.0;
        if ( mode == 1 )
          v14 = 0.5;
        if ( TitleText )
        {
          v15 = 1.0;
          v16 = v14;
          v17 = v14;
          UIWidget__set_color((UIWidget_o *)TitleText, *(UnityEngine_Color_o *)&v14, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(TitleText, v9);
  }
}