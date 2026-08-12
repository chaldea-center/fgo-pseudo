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
  __int64 v4; // x1
  UnityEngine_Object_o *Component_object; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *monitor; // x1
  __int64 v15; // x1
  System_String_o *v16; // x20
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_59752A8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&Localization_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752A8 = 1;
  }
  p_key = &this->fields.key;
  if ( System_String__IsNullOrEmpty(this->fields.key, 0) )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( v6 )
    {
      if ( !Component_object )
        sub_2213CDC(v6, v7);
      monitor = (System_String_o *)Component_object[17].monitor;
      *p_key = monitor;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.key, (int32_t)monitor, v8, v9, v10, v11, v12, v13);
    }
  }
  if ( !System_String__IsNullOrEmpty(*p_key, 0) )
  {
    v16 = *p_key;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v15);
    v17 = Localization__Get(v16, 0);
    UILocalize__set_value(this, v17, v18);
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
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x11
  UnityEngine_Object_o *v12; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x21
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *v26; // x22
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x23

  if ( (byte_59752A7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIButton___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIInput___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UILabel_TypeInfo);
    sub_2213A60(&UISprite_TypeInfo);
    byte_59752A7 = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( Component_object )
    {
      klass = Component_object->klass;
      naturalAligment = Component_object->klass->_2.naturalAligment;
      v9 = UILabel_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v9 )
      {
        if ( (UILabel_c *)klass->_2.typeHierarchy[v9 - 1] == UILabel_TypeInfo )
          v10 = (UnityEngine_Object_o *)Component_object;
        else
          v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      v11 = UISprite_TypeInfo->_2.naturalAligment;
      if ( naturalAligment >= (unsigned int)v11 )
      {
        if ( (UISprite_c *)klass->_2.typeHierarchy[v11 - 1] == UISprite_TypeInfo )
          v12 = (UnityEngine_Object_o *)Component_object;
        else
          v12 = 0;
LABEL_17:
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        v13 = UnityEngine_Object__op_Inequality(v10, 0, 0);
        if ( v13 )
        {
          if ( v10 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v15);
            v18 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                            gameObject,
                                            (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIInput___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
            v13 = UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( !v13 )
            {
LABEL_46:
              UILabel__set_text((UILabel_o *)v10, value, v19);
              return;
            }
            if ( v18 )
            {
              monitor = (UnityEngine_Object_o *)v18[1].monitor;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
              if ( UnityEngine_Object__op_Equality(monitor, v10, 0) )
              {
                UIInput__set_defaultText((UIInput_o *)v18, value, v19);
                return;
              }
              goto LABEL_46;
            }
          }
        }
        else
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
          v13 = UnityEngine_Object__op_Inequality(v12, 0, 0);
          if ( !v13 )
            return;
          if ( v12 )
          {
            v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v21);
            v24 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                            v22,
                                            (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIButton___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
            v13 = UnityEngine_Object__op_Inequality(v24, 0, 0);
            if ( v13 )
            {
              if ( !v24 )
                goto LABEL_47;
              v26 = (UnityEngine_Object_o *)v24[1].monitor;
              v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
              if ( UnityEngine_Object__op_Equality(v26, v28, 0) )
                UIButton__set_normalSprite((UIButton_o *)v24, value, 0);
            }
            UISprite__set_spriteName((UISprite_o *)v12, value, v25);
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))v12->klass[2]._1.parent)(
              v12,
              v12->klass[2]._1.generic_class);
            return;
          }
        }
LABEL_47:
        sub_2213CDC(v13, v14);
      }
    }
    else
    {
      v10 = 0;
    }
    v12 = 0;
    goto LABEL_17;
  }
}