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
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *monitor; // x1
  System_String_o *v14; // x20
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4D35377 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C93AD4(&Localization_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35377 = 1;
  }
  p_key = &this->fields.key;
  if ( System_String__IsNullOrEmpty(this->fields.key, 0) )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( v5 )
    {
      if ( !Component_object )
        sub_1C93D2C(v5, v6);
      monitor = (System_String_o *)Component_object[17].monitor;
      *p_key = monitor;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.key, (int32_t)monitor, v7, v8, v9, v10, v11, v12);
    }
  }
  if ( !System_String__IsNullOrEmpty(*p_key, 0) )
  {
    v14 = *p_key;
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v15 = Localization__Get(v14, 0);
    UILocalize__set_value(this, v15, v16);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Object_o *v20; // x21
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Object_o *v23; // x23

  if ( (byte_4D35376 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIButton___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIInput___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UILabel_TypeInfo);
    sub_1C93AD4(&UISprite_TypeInfo);
    byte_4D35376 = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
        v16 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                        gameObject,
                                        (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIInput___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Inequality(v16, 0, 0);
        if ( !v13 )
        {
LABEL_47:
          UILabel__set_text(v10, value, v17);
          return;
        }
        if ( v16 )
        {
          monitor = (UnityEngine_Object_o *)v16[1].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, v9, 0) )
          {
            UIInput__set_defaultText((UIInput_o *)v16, value, v17);
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
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v20 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                        v19,
                                        (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIButton___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Inequality(v20, 0, 0);
        if ( v13 )
        {
          if ( !v20 )
            goto LABEL_48;
          v22 = (UnityEngine_Object_o *)v20[1].monitor;
          v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v22, v23, 0) )
            UIButton__set_normalSprite((UIButton_o *)v20, value, 0);
        }
        UISprite__set_spriteName((UISprite_o *)v11, value, v21);
        ((void (__fastcall *)(UnityEngine_Object_o *, void *))v11->klass[2]._1.parent)(
          v11,
          v11->klass[2]._1.generic_class);
        return;
      }
    }
LABEL_48:
    sub_1C93D2C(v13, v14);
  }
}