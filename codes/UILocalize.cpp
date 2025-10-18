void UILocalize___ctor(UILocalize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UILocalize__OnEnable(UILocalize_o *this, const MethodInfo *method)
{
  if ( this->fields.mStarted )
    UILocalize__OnLocalize(this, method);
}


void UILocalize__OnLocalize(UILocalize_o *this, const MethodInfo *method)
{
  System_String_o **p_key; // x20
  UnityEngine_Object_o *Component_object; // x21
  _BOOL8 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *monitor; // x1
  System_String_o *v9; // x20
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4C47876 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47876 = 1;
  }
  p_key = &this->fields.key;
  if ( System_String__IsNullOrEmpty(this->fields.key, 0) )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( v5 )
    {
      if ( !Component_object )
        sub_1C372B4(v5);
      monitor = (System_String_o *)Component_object[17].monitor;
      *p_key = monitor;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.key, (int32_t)monitor, v6, v7);
    }
  }
  if ( !System_String__IsNullOrEmpty(*p_key, 0) )
  {
    v9 = *p_key;
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v10 = Localization__Get(v9, 0);
    UILocalize__set_value(this, v10, v11);
  }
}


void UILocalize__Start(UILocalize_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
  UILocalize__OnLocalize(this, method);
}


void UILocalize__set_value(UILocalize_o *this, System_String_o *value, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppClass *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v8; // x11
  UnityEngine_Object_o *v9; // x21
  UILabel_o *v10; // x22
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x11
  _BOOL8 v13; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *v15; // x20
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Object_o *v22; // x23

  if ( (byte_4C47875 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_NGUITools_FindInParents_UIButton___);
    sub_1C37058(&Method_NGUITools_FindInParents_UIInput___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UILabel_TypeInfo);
    sub_1C37058(&UISprite_TypeInfo);
    byte_4C47875 = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( Component_object )
    {
      klass = Component_object->klass;
      naturalAligment = Component_object->klass->_2.naturalAligment;
      v8 = UILabel_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v8 )
      {
        if ( (UILabel_c *)klass->_2.typeHierarchy[v8 - 1] == UILabel_TypeInfo )
          v9 = (UnityEngine_Object_o *)Component_object;
        else
          v9 = 0;
      }
      else
      {
        v9 = 0;
      }
      v12 = UISprite_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v12 )
      {
        if ( (UISprite_c *)klass->_2.typeHierarchy[v12 - 1] == UISprite_TypeInfo )
          v11 = (UnityEngine_Object_o *)Component_object;
        else
          v11 = 0;
      }
      else
      {
        v11 = 0;
      }
      v10 = (UILabel_o *)v9;
    }
    else
    {
      v10 = 0;
      v9 = 0;
      v11 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( v13 )
    {
      if ( v9 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v15 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                        gameObject,
                                        (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIInput___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Inequality(v15, 0, 0);
        if ( !v13 )
        {
LABEL_47:
          UILabel__set_text(v10, value, v16);
          return;
        }
        if ( v15 )
        {
          monitor = (UnityEngine_Object_o *)v15[1].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, v9, 0) )
          {
            UIInput__set_defaultText((UIInput_o *)v15, value, v16);
            return;
          }
          goto LABEL_47;
        }
      }
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( !v13 )
        return;
      if ( v11 )
      {
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v19 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                        v18,
                                        (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIButton___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Inequality(v19, 0, 0);
        if ( v13 )
        {
          if ( !v19 )
            goto LABEL_48;
          v21 = (UnityEngine_Object_o *)v19[1].monitor;
          v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v21, v22, 0) )
            UIButton__set_normalSprite((UIButton_o *)v19, value, 0);
        }
        UISprite__set_spriteName((UISprite_o *)v11, value, v20);
        ((void (__fastcall *)(UnityEngine_Object_o *, void *))v11->klass[2]._1.parent)(
          v11,
          v11->klass[2]._1.generic_class);
        return;
      }
    }
LABEL_48:
    sub_1C372B4(v13);
  }
}