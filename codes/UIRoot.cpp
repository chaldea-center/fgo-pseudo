void UIRoot___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF2F92 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIRoot__TypeInfo);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    byte_4CF2F92 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIRoot__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIRoot___ctor__);
  UIRoot_TypeInfo->static_fields->list = (struct System_Collections_Generic_List_UIRoot__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)UIRoot_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIRoot___ctor(UIRoot_o *this, const MethodInfo *method)
{
  this->fields.fitHeight = 1;
  *(_OWORD *)&this->fields.manualWidth = xmmword_CF5E90;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRoot__Awake(UIRoot_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}


void UIRoot__Broadcast(System_String_o *funcName, const MethodInfo *method)
{
  UIRoot_c *v3; // x0
  struct System_Collections_Generic_List_UIRoot__o *list; // x8
  int size; // w8
  int v6; // w23
  int32_t i; // w20
  Il2CppObject *Item; // x21

  if ( (byte_4CF2F90 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    byte_4CF2F90 = 1;
  }
  v3 = UIRoot_TypeInfo;
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
    v3 = UIRoot_TypeInfo;
  }
  list = v3->static_fields->list;
  if ( !list )
    goto LABEL_19;
  size = list->fields._size;
  v6 = size - 1;
  if ( size >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UIRoot_TypeInfo;
      }
      v3 = (UIRoot_c *)v3->static_fields->list;
      if ( !v3 )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v3,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UIRoot__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = (UIRoot_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)v3 & 1) != 0 )
      {
        if ( !Item )
          break;
        UnityEngine_Component__BroadcastMessage_71841528((UnityEngine_Component_o *)Item, funcName, 1, 0);
      }
      if ( v6 == i )
        return;
      v3 = UIRoot_TypeInfo;
    }
LABEL_19:
    sub_1C7BD40(v3, method);
  }
}


void UIRoot__Broadcast_50053036(System_String_o *funcName, Il2CppObject *param, const MethodInfo *method)
{
  UIRoot_c *v5; // x0
  struct System_Collections_Generic_List_UIRoot__o *list; // x8
  int size; // w8
  int v8; // w24
  int32_t i; // w21
  Il2CppObject *Item; // x22

  if ( (byte_4CF2F91 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12745/*"SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified."*/);
    byte_4CF2F91 = 1;
  }
  if ( param )
  {
    v5 = UIRoot_TypeInfo;
    if ( !UIRoot_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
      v5 = UIRoot_TypeInfo;
    }
    list = v5->static_fields->list;
    if ( !list )
      goto LABEL_23;
    size = list->fields._size;
    v8 = size - 1;
    if ( size >= 1 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = UIRoot_TypeInfo;
        }
        v5 = (UIRoot_c *)v5->static_fields->list;
        if ( !v5 )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)v5,
                 i,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_UIRoot__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v5 = (UIRoot_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
        if ( ((unsigned __int8)v5 & 1) != 0 )
        {
          if ( !Item )
            break;
          UnityEngine_Component__BroadcastMessage((UnityEngine_Component_o *)Item, funcName, param, 1, 0);
        }
        if ( v8 == i )
          return;
        v5 = UIRoot_TypeInfo;
      }
LABEL_23:
      sub_1C7BD40(v5, param);
    }
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_12745/*"SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified."*/, 0);
  }
}


float UIRoot__GetPixelSizeAdjustment(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CF2F8B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2F8B = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v3 = NGUITools__FindInParents_object_(go, (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIRoot___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v3, 0, 0);
  if ( !v4 )
    return 1.0;
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  return UIRoot__get_pixelSizeAdjustment((UIRoot_o *)v3, v5);
}


// local variable allocation has failed, the output may be wrong!
float UIRoot__GetPixelSizeAdjustment_50051408(UIRoot_o *this, int32_t height, const MethodInfo *method)
{
  int32_t v3; // w19
  float activeHeight; // s0
  int32_t minimumHeight; // w8
  float result; // s0

  if ( height <= 2 )
    v3 = 2;
  else
    v3 = height;
  if ( (unsigned int)(this->fields.scalingStyle - 1) <= 1 )
  {
    activeHeight = (float)UIRoot__get_activeHeight(this, *(const MethodInfo **)&height);
    return activeHeight / (float)v3;
  }
  minimumHeight = this->fields.minimumHeight;
  if ( v3 < minimumHeight || (minimumHeight = this->fields.maximumHeight, result = 1.0, v3 > minimumHeight) )
  {
    activeHeight = (float)minimumHeight;
    return activeHeight / (float)v3;
  }
  return result;
}


void UIRoot__OnDisable(UIRoot_o *this, const MethodInfo *method)
{
  UIRoot_c *v3; // x0
  System_Collections_Generic_List_object__o *list; // x0

  if ( (byte_4CF2F8D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__Remove__);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    byte_4CF2F8D = 1;
  }
  v3 = UIRoot_TypeInfo;
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
    v3 = UIRoot_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v3->static_fields->list;
  if ( !list )
    sub_1C7BD40(0, method);
  System_Collections_Generic_List_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_UIRoot__Remove__);
}


void UIRoot__OnEnable(UIRoot_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UIRoot_c *v9; // x0
  System_Collections_Generic_List_object__o *list; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4CF2F8C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIRoot__Add__);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    byte_4CF2F8C = 1;
  }
  v9 = UIRoot_TypeInfo;
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
    v9 = UIRoot_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v9->static_fields->list;
  if ( !list
    || (items = list->fields._items,
        v12 = Method_System_Collections_Generic_List_UIRoot__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1C7BD40(list, method);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v14[4] = (Il2CppClass *)this;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)this, v2, v3, v4, v5, v6, v7);
  }
}


void UIRoot__Start(UIRoot_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__51801640; // x19
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CF2F8E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera___);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_14844/*"UIRoot should not be active at the same time as UIOrthoCamera. Disabling UIOrthoCamera."*/);
    byte_4CF2F8E = 1;
  }
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__51801640, 0, 0) )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning_71683224(
      (Il2CppObject *)StringLiteral_14844/*"UIRoot should not be active at the same time as UIOrthoCamera. Disabling UIOrthoCamera."*/,
      (UnityEngine_Object_o *)ComponentInChildren_object__51801640,
      0);
    if ( !ComponentInChildren_object__51801640 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)ComponentInChildren_object__51801640,
                   0);
    if ( !gameObject )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ComponentInChildren_object__51801640, 0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Camera__set_orthographicSize((UnityEngine_Camera_o *)Component_object, 1.0, 0);
        return;
      }
LABEL_17:
      sub_1C7BD40(gameObject, v6);
    }
  }
  else
  {
    UIRoot__Update(this, v4);
  }
}


void UIRoot__Update(UIRoot_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x20
  const MethodInfo *v4; // x1
  int32_t activeHeight; // w0
  __int64 v6; // x1
  int v7; // w8
  UnityEngine_Transform_o *v8; // x0
  float v9; // s8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF2F8F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2F8F = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTrans, 0, 0) )
  {
    activeHeight = UIRoot__get_activeHeight(this, v4);
    if ( activeHeight >= 1 )
    {
      v7 = activeHeight;
      v8 = this->fields.mTrans;
      if ( !v8 )
        goto LABEL_14;
      v9 = 2.0 / (float)v7;
      localScale = UnityEngine_Transform__get_localScale(v8, 0);
      if ( vabds_f32(localScale.fields.x, v9) > COERCE_FLOAT(1)
        || vabds_f32(localScale.fields.y, v9) > COERCE_FLOAT(1)
        || vabds_f32(localScale.fields.z, v9) > COERCE_FLOAT(1) )
      {
        v8 = this->fields.mTrans;
        if ( v8 )
        {
          v11.fields.x = v9;
          v11.fields.y = v9;
          v11.fields.z = v9;
          UnityEngine_Transform__set_localScale(v8, v11, 0);
          return;
        }
LABEL_14:
        sub_1C7BD40(v8, v6);
      }
    }
  }
}


int32_t UIRoot__get_activeHeight(UIRoot_o *this, const MethodInfo *method)
{
  int v3; // w20
  UnityEngine_Vector2_o screenSize; // kr00_8
  int32_t result; // w0
  float v6; // s8
  float manualWidth; // s9
  float v8; // s0
  float x; // s0
  UnityEngine_Vector2_o v10; // kr08_8
  float minimumHeight; // s3
  float v12; // s2
  float v13; // s9
  double v14; // d8
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  float v20; // s9
  double v21; // d8
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4CF2F89 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2F89 = 1;
  }
  if ( this->fields.scalingStyle )
  {
    if ( this->fields.fitWidth )
    {
      v3 = 2 * !this->fields.fitHeight;
    }
    else
    {
      if ( this->fields.fitHeight )
        return this->fields.manualHeight;
      v3 = 1;
    }
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    screenSize = NGUITools__get_screenSize(0);
    result = this->fields.manualHeight;
    v6 = screenSize.fields.x / screenSize.fields.y;
    manualWidth = (float)this->fields.manualWidth;
    v8 = manualWidth / (float)result;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( v8 >= v6 )
          return result;
      }
      else if ( v3 != 2 )
      {
        return result;
      }
    }
    else if ( v8 <= v6 )
    {
      return result;
    }
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
    }
    v13 = manualWidth / v6;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = v13;
    v15 = modf(v13, &iptr);
    if ( v13 >= 0.0 )
    {
      if ( v15 == 0.5 )
      {
        v16 = iptr;
        v17 = 1.0;
LABEL_31:
        v18 = v16 + v17;
        if ( ((__int64)v16 & 1) != 0 )
          v16 = v18;
        goto LABEL_63;
      }
      v16 = floor(v14 + 0.5);
    }
    else
    {
      if ( v15 == -0.5 )
      {
        v16 = iptr;
        v17 = -1.0;
        goto LABEL_31;
      }
      v16 = ceil(v14 + -0.5);
    }
LABEL_63:
    if ( v16 == INFINITY )
      return 0x80000000;
    else
      return (int)v16;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v10 = NGUITools__get_screenSize(0);
  x = v10.fields.x;
  minimumHeight = (float)this->fields.minimumHeight;
  v12 = v10.fields.x / v10.fields.y;
  if ( v10.fields.y >= minimumHeight
    && (minimumHeight = (float)this->fields.maximumHeight, v10.fields.y <= minimumHeight) )
  {
    minimumHeight = v10.fields.y;
  }
  else
  {
    x = v12 * minimumHeight;
  }
  if ( !this->fields.shrinkPortraitUI || minimumHeight <= x )
    v20 = minimumHeight;
  else
    v20 = minimumHeight / v12;
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = v20;
  v22 = modf(v20, &iptr);
  if ( v20 >= 0.0 )
  {
    if ( v22 == 0.5 )
    {
      v23 = iptr;
      v24 = 1.0;
LABEL_50:
      v25 = v23 + v24;
      if ( ((__int64)v23 & 1) != 0 )
        v23 = v25;
      goto LABEL_56;
    }
    v23 = floor(v21 + 0.5);
  }
  else
  {
    if ( v22 == -0.5 )
    {
      v23 = iptr;
      v24 = -1.0;
      goto LABEL_50;
    }
    v23 = ceil(v21 + -0.5);
  }
LABEL_56:
  if ( v23 == INFINITY )
    result = 0x80000000;
  else
    result = (int)v23;
  if ( this->fields.adjustByDPI )
    return NGUIMath__AdjustByDPI((float)result, 0);
  return result;
}


int32_t UIRoot__get_activeScaling(UIRoot_o *this, const MethodInfo *method)
{
  if ( this->fields.scalingStyle == 2 )
    return 1;
  else
    return this->fields.scalingStyle;
}


int32_t UIRoot__get_constraint(UIRoot_o *this, const MethodInfo *method)
{
  if ( this->fields.fitWidth )
    return 2 * !this->fields.fitHeight;
  if ( this->fields.fitHeight )
    return 3;
  return 1;
}


float UIRoot__get_pixelSizeAdjustment(UIRoot_o *this, const MethodInfo *method)
{
  float y; // s8
  double v4; // d9
  const MethodInfo *v5; // x2
  double v6; // d0
  double v7; // d0
  double v8; // d1
  double v9; // d1
  int32_t v10; // w1
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF2F8A & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CF2F8A = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  y = NGUITools__get_screenSize(0).fields.y;
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = y;
  v6 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v6 != 0.5 )
    {
      v7 = floor(v4 + 0.5);
      goto LABEL_19;
    }
    v7 = iptr;
    v8 = 1.0;
  }
  else
  {
    if ( v6 != -0.5 )
    {
      v7 = ceil(v4 + -0.5);
      goto LABEL_19;
    }
    v7 = iptr;
    v8 = -1.0;
  }
  v9 = v7 + v8;
  if ( ((__int64)v7 & 1) != 0 )
    v7 = v9;
LABEL_19:
  if ( v7 == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)v7;
  if ( v10 == -1 )
    return 1.0;
  else
    return UIRoot__GetPixelSizeAdjustment_50051408(this, v10, v5);
}