void BaseMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4CAFF9F & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    byte_4CAFF9F = 1;
  }
  *BaseMenu_TypeInfo->static_fields = (struct BaseMenu_StaticFields)xmmword_CEC8D0;
}


void BaseMenu___ctor(BaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BaseMenu__Close(BaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x20
  float x; // s8
  float y; // s9
  BaseMenu_c *v13; // x0
  float z; // s10
  TweenPosition_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CAFF9E & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_5975/*"EndCloseBaseDialog"*/);
    byte_4CAFF9E = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C6B9AC(&this->fields.baseCallbackFunc, callback);
  *(_WORD *)&this->fields.isOpen = 0;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v9 = (UnityEngine_Transform_o *)transform;
      position = UnityEngine_Transform__get_position(this->fields.closeTransform, 0);
      if ( !v9 )
        goto LABEL_24;
      v19 = UnityEngine_Transform__InverseTransformPoint(v9, position, 0);
      v10 = this->fields.baseWindow;
      x = v19.fields.x;
      y = v19.fields.y;
      v13 = BaseMenu_TypeInfo;
      z = v19.fields.z;
      if ( !BaseMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
        v13 = BaseMenu_TypeInfo;
      }
      v20.fields.x = x;
      v20.fields.y = y;
      v20.fields.z = z;
      v15 = TweenPosition__Begin(v10, v13->static_fields->CLOSE_MOVE_TIME, v20, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( v15 )
        {
          v15->fields.method = 3;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v15->fields.eventReceiver = gameObject;
          sub_1C6B9AC(&v15->fields.eventReceiver, gameObject);
          v17 = StringLiteral_5975/*"EndCloseBaseDialog"*/;
          v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5975/*"EndCloseBaseDialog"*/;
          sub_1C6B9AC(&v15->fields.callWhenFinished, v17);
          return;
        }
LABEL_24:
        sub_1C6BC60(transform, v6);
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
  BaseMenu__EndCloseBaseDialog(this, v6);
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
    sub_1C6B9AC(p_baseCallbackFunc, 0);
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
    sub_1C6B9AC(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BaseMenu__Init(BaseMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *closeTransform; // x20
  UnityEngine_Transform_o *v8; // x8
  UnityEngine_Transform_o *v9; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CAFF9C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CAFF9C = 1;
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  *(_WORD *)&this->fields.isOpen = 0;
  this->fields.isSelected = 0;
  v6 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    closeTransform = (UnityEngine_Object_o *)this->fields.closeTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeTransform, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
        v8 = this->fields.closeTransform;
        if ( v8 )
        {
          v9 = (UnityEngine_Transform_o *)transform;
          position = UnityEngine_Transform__get_position(v8, 0);
          if ( v9 )
          {
            UnityEngine_Transform__set_position(v9, position, 0);
            return;
          }
        }
      }
LABEL_22:
      sub_1C6BC60(transform, v4);
    }
  }
}


void BaseMenu__Open(BaseMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Object_o *closeTransform; // x20
  char v9; // w21
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x20
  BaseMenu_c *v12; // x0
  struct UnityEngine_Vector3_o *p_basePosition; // x21
  float *p_y; // x23
  float *p_z; // x24
  TweenPosition_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CAFF9D & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6008/*"EndOpenBaseDialog"*/);
    byte_4CAFF9D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.baseCallbackFunc = callback;
  sub_1C6B9AC(&this->fields.baseCallbackFunc, callback);
  *(_WORD *)&this->fields.isOpen = 1;
  this->fields.isSelected = 0;
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(closeTransform, 0, 0);
    if ( !this->fields.baseWindow )
LABEL_31:
      sub_1C6BC60(gameObject, v6);
    v9 = (char)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.baseWindow, 0);
    v10 = (UnityEngine_Transform_o *)gameObject;
    if ( (v9 & 1) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeTransform;
      if ( !gameObject )
        goto LABEL_31;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
      if ( !v10 )
        goto LABEL_31;
      UnityEngine_Transform__set_position(v10, position, 0);
      v11 = this->fields.baseWindow;
      v12 = BaseMenu_TypeInfo;
      if ( !BaseMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
        v12 = BaseMenu_TypeInfo;
      }
      p_basePosition = &this->fields.basePosition;
      p_y = &this->fields.basePosition.fields.y;
      p_z = &this->fields.basePosition.fields.z;
      v16 = TweenPosition__Begin(v11, v12->static_fields->OPEN_MOVE_TIME, this->fields.basePosition, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( v16 )
        {
          v16->fields.method = 3;
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v16->fields.eventReceiver = v17;
          sub_1C6B9AC(&v16->fields.eventReceiver, v17);
          v18 = StringLiteral_6008/*"EndOpenBaseDialog"*/;
          v16->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6008/*"EndOpenBaseDialog"*/;
          sub_1C6B9AC(&v16->fields.callWhenFinished, v18);
          return;
        }
        goto LABEL_31;
      }
      gameObject = this->fields.baseWindow;
      if ( !gameObject )
        goto LABEL_31;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_31;
      v10 = (UnityEngine_Transform_o *)gameObject;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_31;
      p_z = &this->fields.basePosition.fields.z;
      p_basePosition = &this->fields.basePosition;
      p_y = &this->fields.basePosition.fields.y;
    }
    v20.fields.z = *p_z;
    v20.fields.y = *p_y;
    v20.fields.x = p_basePosition->fields.x;
    UnityEngine_Transform__set_localPosition(v10, v20, 0);
  }
  BaseMenu__EndOpenBaseDialog(this, v6);
}


bool BaseMenu__get_IsBusy(BaseMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


bool BaseMenu__get_IsOpen(BaseMenu_o *this, const MethodInfo *method)
{
  return this->fields.isOpen;
}