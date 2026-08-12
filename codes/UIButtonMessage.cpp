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
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5974F94 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F94 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonMessage__OnHover(this, IsHighlighted, v6);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_5974F95 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F95 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      UIButtonMessage__OnHover(this, isSelected, v6);
  }
}


void UIButtonMessage__Send(UIButtonMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x21
  UnityEngine_Component_o *ComponentsInChildren_object__59472212; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Component_c *klass; // x23
  UnityEngine_Component_o *v16; // x20
  __int64 v17; // x24
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *functionName; // x21
  UnityEngine_GameObject_o *v20; // x22
  System_String_o *v21; // x21

  if ( (byte_5974F96 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F96 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
  {
    target = (UnityEngine_Object_o *)this->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    ComponentsInChildren_object__59472212 = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(target, 0, 0);
    if ( ((unsigned __int8)ComponentsInChildren_object__59472212 & 1) != 0 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this->fields.target = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.target,
        (int32_t)gameObject,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    v14 = this->fields.target;
    if ( this->fields.includeChildren )
    {
      if ( !v14 )
        goto LABEL_20;
      ComponentsInChildren_object__59472212 = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                           this->fields.target,
                                                                           (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform___);
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_20;
      klass = ComponentsInChildren_object__59472212[1].klass;
      v16 = ComponentsInChildren_object__59472212;
      if ( (int)klass >= 1 )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v17 >= LODWORD(v16[1].klass) )
            sub_2213CE4(ComponentsInChildren_object__59472212);
          ComponentsInChildren_object__59472212 = (UnityEngine_Component_o *)*((_QWORD *)&v16[1].monitor + v17);
          if ( !ComponentsInChildren_object__59472212 )
            break;
          v18 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__59472212, 0);
          functionName = this->fields.functionName;
          v20 = v18;
          ComponentsInChildren_object__59472212 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0);
          if ( !v20 )
            break;
          UnityEngine_GameObject__SendMessage_83433568(
            v20,
            functionName,
            (Il2CppObject *)ComponentsInChildren_object__59472212,
            1,
            0);
          if ( (_DWORD)klass == (_DWORD)++v17 )
            return;
        }
LABEL_20:
        sub_2213CDC(ComponentsInChildren_object__59472212, v6);
      }
    }
    else
    {
      v21 = this->fields.functionName;
      ComponentsInChildren_object__59472212 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
      if ( !v14 )
        goto LABEL_20;
      UnityEngine_GameObject__SendMessage_83433568(
        v14,
        v21,
        (Il2CppObject *)ComponentsInChildren_object__59472212,
        1,
        0);
    }
  }
}


void UIButtonMessage__Start(UIButtonMessage_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
}