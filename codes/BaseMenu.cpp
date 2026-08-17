void BaseMenu___cctor(const MethodInfo *method)
{
  if ( (byte_5969E68 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_5969E68 = 1;
  }
  *BaseMenu_TypeInfo->static_fields = (struct BaseMenu_StaticFields)xmmword_E9CFE0;
}


void BaseMenu___ctor(BaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BaseMenu__Close(BaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v19; // x20
  BaseMenu_c *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  TweenPosition_o *v23; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5969E67 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6240/*"EndCloseBaseDialog"*/);
    byte_5969E67 = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_2213A04(&this->fields.baseCallbackFunc, callback);
  v7 = UnityEngine_Object_TypeInfo;
  *(_WORD *)&this->fields.isOpen = 0;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( !transform )
        goto LABEL_24;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_24;
      transform = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !this->fields.closeTransform )
        goto LABEL_24;
      v13 = (UnityEngine_Transform_o *)transform;
      position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
      if ( !v13 )
        goto LABEL_24;
      v27 = UnityEngine_Transform__InverseTransformPoint(v13, position, 0);
      x = v27.fields.x;
      y = v27.fields.y;
      z = v27.fields.z;
      v19 = this->fields.baseWindow;
      v20 = BaseMenu_TypeInfo;
      if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v14, v15);
        v20 = BaseMenu_TypeInfo;
      }
      v28.fields.x = x;
      v28.fields.y = y;
      v28.fields.z = z;
      v23 = TweenPosition__Begin(v19, v20->static_fields->CLOSE_MOVE_TIME, v28, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v23 )
        {
          v23->fields.method = 3;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v23->fields.eventReceiver = gameObject;
          sub_2213A04(&v23->fields.eventReceiver, gameObject);
          v25 = StringLiteral_6240/*"EndCloseBaseDialog"*/;
          v23->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6240/*"EndCloseBaseDialog"*/;
          sub_2213A04(&v23->fields.callWhenFinished, v25);
          return;
        }
LABEL_24:
        sub_2213CDC(transform, v9);
      }
      transform = this->fields.baseWindow;
      if ( !transform )
        goto LABEL_24;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( !transform )
        goto LABEL_24;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.basePosition, 0);
    }
  }
  BaseMenu__EndCloseBaseDialog(this, v9);
}


void BaseMenu__EndCloseBaseDialog(BaseMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  BaseMenu__Init(this, method);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v4 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_2213A04(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void BaseMenu__EndOpenBaseDialog(BaseMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v3 = baseCallbackFunc;
  *((_BYTE *)p_baseCallbackFunc - 7) = 1;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_2213A04(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BaseMenu__Init(BaseMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_c *v9; // x0
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v14; // x8
  UnityEngine_Transform_o *v15; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5969E65 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E65 = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) && !this->fields.isBasePosition )
  {
    transform = this->fields.baseWindow;
    this->fields.isBasePosition = 1;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_22;
    this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(transform, 0, 0);
  v9 = UnityEngine_Object_TypeInfo;
  *(_WORD *)&this->fields.isOpen = 0;
  v10 = (UnityEngine_Object_o *)this->fields.baseWindow;
  this->fields.isSelected = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v7, v8);
  if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        v14 = this->fields.closeTransform;
        if ( v14 )
        {
          v15 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(v14, 0);
          if ( v15 )
          {
            UnityEngine_Transform__set_position(v15, position, 0);
            return;
          }
        }
      }
LABEL_22:
      sub_2213CDC(transform, v5);
    }
  }
}


void BaseMenu__Open(BaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_c *v9; // x0
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *closeTransform; // x20
  bool v13; // w8
  UnityEngine_Transform_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x20
  BaseMenu_c *v18; // x0
  struct UnityEngine_Vector3_o *p_basePosition; // x21
  float *p_y; // x23
  float *p_z; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  TweenPosition_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5969E66 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6272/*"EndOpenBaseDialog"*/);
    byte_5969E66 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.baseCallbackFunc = callback;
  sub_2213A04(&this->fields.baseCallbackFunc, callback);
  v9 = UnityEngine_Object_TypeInfo;
  *(_WORD *)&this->fields.isOpen = 1;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  this->fields.isSelected = 0;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, v7, v8);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    if ( !this->fields.isBasePosition )
    {
      gameObject = this->fields.baseWindow;
      this->fields.isBasePosition = 1;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
      this->fields.basePosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    }
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v11);
    v13 = UnityEngine_Object__op_Inequality(closeTransform, 0, 0);
    gameObject = this->fields.baseWindow;
    if ( v13 )
    {
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !this->fields.closeTransform )
        goto LABEL_31;
      v14 = (UnityEngine_Transform_o *)gameObject;
      position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
      if ( !v14 )
        goto LABEL_31;
      UnityEngine_Transform__set_position(v14, position, 0);
      v17 = this->fields.baseWindow;
      v18 = BaseMenu_TypeInfo;
      if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v15, v16);
        v18 = BaseMenu_TypeInfo;
      }
      p_basePosition = &this->fields.basePosition;
      p_y = &this->fields.basePosition.fields.y;
      p_z = &this->fields.basePosition.fields.z;
      v24 = TweenPosition__Begin(v17, v18->static_fields->OPEN_MOVE_TIME, this->fields.basePosition, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v24 )
        {
          v24->fields.method = 3;
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v24->fields.eventReceiver = v25;
          sub_2213A04(&v24->fields.eventReceiver, v25);
          v26 = StringLiteral_6272/*"EndOpenBaseDialog"*/;
          v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6272/*"EndOpenBaseDialog"*/;
          sub_2213A04(&v24->fields.callWhenFinished, v26);
          return;
        }
LABEL_31:
        sub_2213CDC(gameObject, v6);
      }
      gameObject = this->fields.baseWindow;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
      p_z = &this->fields.basePosition.fields.z;
      p_basePosition = &this->fields.basePosition;
      p_y = &this->fields.basePosition.fields.y;
    }
    v28.fields.z = *p_z;
    v28.fields.y = *p_y;
    v28.fields.x = p_basePosition->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0);
  }
  BaseMenu__EndOpenBaseDialog(this, v6);
}


bool BaseMenu__get_IsBusy(BaseMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool BaseMenu__get_IsOpen(BaseMenu_o *this, const MethodInfo *method)
{
  return this->fields.isOpen;
}