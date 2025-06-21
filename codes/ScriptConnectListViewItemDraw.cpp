void __fastcall ScriptConnectListViewItemDraw___ctor(ScriptConnectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectListViewItemDraw__SetItem(
        ScriptConnectListViewItemDraw_o *this,
        ScriptConnectListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  Il2CppObject *Component_object; // x21
  float v12; // s0
  float v13; // s3
  float v14; // s1
  float v15; // s2

  if ( (byte_4B19B2A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B19B2A = 1;
  }
  if ( item && mode )
  {
    if ( ScriptConnectListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ScriptConnectListViewItem__get_TitleText(item, v8);
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
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v12 = 1.0;
        if ( mode == 1 )
          v12 = 0.5;
        if ( TitleText )
        {
          v13 = 1.0;
          v14 = v12;
          v15 = v12;
          UIWidget__set_color((UIWidget_o *)TitleText, *(UnityEngine_Color_o *)&v12, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_1BCB254(TitleText, v8);
  }
}