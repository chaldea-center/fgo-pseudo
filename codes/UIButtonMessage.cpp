void UIButtonMessage___ctor(UIButtonMessage_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonMessage__OnClick(UIButtonMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.trigger )
    UIButtonMessage__Send(this, v3);
}


void UIButtonMessage__OnDoubleClick(UIButtonMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.trigger == 5 )
    UIButtonMessage__Send(this, v3);
}


void UIButtonMessage__OnEnable(UIButtonMessage_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w1
  const MethodInfo *v5; // x2

  if ( (byte_4C47558 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47558 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonMessage__OnHover(this, IsHighlighted, v5);
  }
}


void UIButtonMessage__OnHover(UIButtonMessage_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( isOver )
    {
      if ( trigger != 1 )
        return;
LABEL_6:
      UIButtonMessage__Send(this, v5);
      return;
    }
    if ( trigger == 2 )
      goto LABEL_6;
  }
}


void UIButtonMessage__OnPress(UIButtonMessage_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( isPressed )
    {
      if ( trigger != 3 )
        return;
LABEL_6:
      UIButtonMessage__Send(this, v5);
      return;
    }
    if ( trigger == 4 )
      goto LABEL_6;
  }
}


void UIButtonMessage__OnSelect(UIButtonMessage_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0

  if ( (byte_4C47559 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47559 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentScheme == 2 )
LABEL_8:
      UIButtonMessage__OnHover(this, isSelected, v5);
  }
}


void UIButtonMessage__Send(UIButtonMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  UnityEngine_Component_o *ComponentsInChildren_object__51641852; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x20
  int v11; // w23
  int v12; // w24
  UnityEngine_GameObject_o *v13; // x0
  System_String_o *functionName; // x21
  UnityEngine_GameObject_o *v15; // x22
  __int64 v16; // x0
  System_String_o *v17; // x21

  if ( (byte_4C4755A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4755A = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__51641852 = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(target, 0, 0);
    if ( ((unsigned __int8)ComponentsInChildren_object__51641852 & 1) != 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this->fields.target = gameObject;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.target, (int32_t)gameObject, v6, v7);
    }
    v8 = this->fields.target;
    if ( this->fields.includeChildren )
    {
      if ( v8 )
      {
        ComponentsInChildren_object__51641852 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                                             this->fields.target,
                                                                             (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
        if ( ComponentsInChildren_object__51641852 )
        {
          klass = ComponentsInChildren_object__51641852[1].klass;
          v10 = ComponentsInChildren_object__51641852;
          v11 = (_DWORD)klass - 1;
          if ( (int)klass < 1 )
            return;
          v12 = 0;
          while ( 1 )
          {
            ComponentsInChildren_object__51641852 = (UnityEngine_Component_o *)*((_QWORD *)&v10[1].monitor + v12);
            if ( !ComponentsInChildren_object__51641852 )
              break;
            v13 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__51641852, 0);
            functionName = this->fields.functionName;
            v15 = v13;
            ComponentsInChildren_object__51641852 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0);
            if ( !v15 )
              break;
            UnityEngine_GameObject__SendMessage_71247544(
              v15,
              functionName,
              (Il2CppObject *)ComponentsInChildren_object__51641852,
              1,
              0);
            if ( v11 == v12 )
              return;
            if ( (unsigned int)++v12 >= LODWORD(v10[1].klass) )
              sub_1C372BC(v16);
          }
        }
      }
    }
    else
    {
      v17 = this->fields.functionName;
      ComponentsInChildren_object__51641852 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
      if ( v8 )
      {
        UnityEngine_GameObject__SendMessage_71247544(
          v8,
          v17,
          (Il2CppObject *)ComponentsInChildren_object__51641852,
          1,
          0);
        return;
      }
    }
    sub_1C372B4(ComponentsInChildren_object__51641852);
  }
}


void UIButtonMessage__Start(UIButtonMessage_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}