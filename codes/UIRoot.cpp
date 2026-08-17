void UIRoot___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59752B3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIRoot__TypeInfo);
    sub_2213A60(&UIRoot_TypeInfo);
    byte_59752B3 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIRoot__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIRoot___ctor__);
  UIRoot_TypeInfo->static_fields->list = (struct System_Collections_Generic_List_UIRoot__o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UIRoot_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIRoot___ctor(UIRoot_o *this, const MethodInfo *method)
{
  this->fields.fitHeight = 1;
  *(_OWORD *)&this->fields.manualWidth = xmmword_E9CB60;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIRoot__Awake(UIRoot_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
}


void UIRoot__Broadcast(System_String_o *funcName, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  struct System_Collections_Generic_List_UIRoot__o *v4; // x8
  int size; // w23
  int32_t v6; // w20
  UIRoot_c *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Item; // x21

  if ( (byte_59752B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIRoot_TypeInfo);
    byte_59752B1 = 1;
  }
  list = (System_Collections_Generic_List_object__o *)UIRoot_TypeInfo;
  if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, method);
    list = (System_Collections_Generic_List_object__o *)UIRoot_TypeInfo;
  }
  v4 = **(struct System_Collections_Generic_List_UIRoot__o ***)&list[4].fields._size;
  if ( !v4 )
    goto LABEL_18;
  size = v4->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = UIRoot_TypeInfo;
      if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, method);
        v7 = UIRoot_TypeInfo;
      }
      list = (System_Collections_Generic_List_object__o *)v7->static_fields->list;
      if ( !list )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               list,
               v6,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIRoot__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)Item,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !Item )
          break;
        UnityEngine_Component__BroadcastMessage_83423512((UnityEngine_Component_o *)Item, funcName, 1, 0);
      }
      if ( size == ++v6 )
        return;
    }
LABEL_18:
    sub_2213CDC(list, method);
  }
}


void UIRoot__Broadcast_56596120(System_String_o *funcName, Il2CppObject *param, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  struct System_Collections_Generic_List_UIRoot__o *v6; // x8
  int size; // w24
  int32_t v8; // w21
  UIRoot_c *v9; // x0
  __int64 v10; // x1
  Il2CppObject *Item; // x22

  if ( (byte_59752B2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIRoot_TypeInfo);
    sub_2213A60(&StringLiteral_13226/*"SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified."*/);
    byte_59752B2 = 1;
  }
  if ( param )
  {
    list = (System_Collections_Generic_List_object__o *)UIRoot_TypeInfo;
    if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, param);
      list = (System_Collections_Generic_List_object__o *)UIRoot_TypeInfo;
    }
    v6 = **(struct System_Collections_Generic_List_UIRoot__o ***)&list[4].fields._size;
    if ( !v6 )
      goto LABEL_22;
    size = v6->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = UIRoot_TypeInfo;
        if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, param);
          v9 = UIRoot_TypeInfo;
        }
        list = (System_Collections_Generic_List_object__o *)v9->static_fields->list;
        if ( !list )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 list,
                 v8,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIRoot__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)Item,
                                                              0,
                                                              0);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !Item )
            break;
          UnityEngine_Component__BroadcastMessage((UnityEngine_Component_o *)Item, funcName, param, 1, 0);
        }
        if ( size == ++v8 )
          return;
      }
LABEL_22:
      sub_2213CDC(list, param);
    }
  }
  else
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, param);
    UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_13226/*"SendMessage is bugged when you try to pass 'null' in the parameter field. It behaves as if no parameter was specified."*/, 0);
  }
}


float UIRoot__GetPixelSizeAdjustment(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_59752AC & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752AC = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  v4 = NGUITools__FindInParents_object_(go, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
  if ( !v5 )
    return 1.0;
  if ( !v4 )
    sub_2213CDC(v5, v6);
  return UIRoot__get_pixelSizeAdjustment((UIRoot_o *)v4, v6);
}


// local variable allocation has failed, the output may be wrong!
float UIRoot__GetPixelSizeAdjustment_56594508(UIRoot_o *this, int32_t height, const MethodInfo *method)
{
  int32_t v3; // w19
  float result; // s0
  int32_t minimumHeight; // w8

  if ( height <= 2 )
    v3 = 2;
  else
    v3 = height;
  if ( (unsigned int)(this->fields.scalingStyle - 1) <= 1 )
    return (float)UIRoot__get_activeHeight(this, *(const MethodInfo **)&height) / (float)v3;
  minimumHeight = this->fields.minimumHeight;
  if ( v3 < minimumHeight )
    return (float)minimumHeight / (float)v3;
  minimumHeight = this->fields.maximumHeight;
  result = 1.0;
  if ( v3 > minimumHeight )
    return (float)minimumHeight / (float)v3;
  return result;
}


void UIRoot__OnDisable(UIRoot_o *this, const MethodInfo *method)
{
  UIRoot_c *v3; // x0
  System_Collections_Generic_List_object__o *list; // x0

  if ( (byte_59752AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__Remove__);
    sub_2213A60(&UIRoot_TypeInfo);
    byte_59752AE = 1;
  }
  v3 = UIRoot_TypeInfo;
  if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, method);
    v3 = UIRoot_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_UIRoot__Remove__);
}


void UIRoot__OnEnable(UIRoot_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UIRoot_c *v9; // x0
  System_Collections_Generic_List_object__o *list; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  if ( (byte_59752AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIRoot__Add__);
    sub_2213A60(&UIRoot_TypeInfo);
    byte_59752AD = 1;
  }
  v9 = UIRoot_TypeInfo;
  if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, method);
    v9 = UIRoot_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v9->static_fields->list;
  if ( !list
    || (items = list->fields._items,
        v12 = Method_System_Collections_Generic_List_UIRoot__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_2213CDC(v9, method);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v14[4] = (Il2CppClass *)this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 4), (int32_t)this, v2, v3, v4, v5, v6, v7);
  }
}


void UIRoot__Start(UIRoot_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x19
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1

  if ( (byte_59752AF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera___);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15380/*"UIRoot should not be active at the same time as UIOrthoCamera. Disabling UIOrthoCamera."*/);
    byte_59752AF = 1;
  }
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58855044, 0, 0) )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v5);
    UnityEngine_Debug__LogWarning_83209572(
      (Il2CppObject *)StringLiteral_15380/*"UIRoot should not be active at the same time as UIOrthoCamera. Disabling UIOrthoCamera."*/,
      (UnityEngine_Object_o *)ComponentInChildren_object__58855044,
      0);
    if ( !ComponentInChildren_object__58855044 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)ComponentInChildren_object__58855044,
                   0);
    if ( !gameObject )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ComponentInChildren_object__58855044, 0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
      sub_2213CDC(gameObject, v7);
    }
  }
  else
  {
    UIRoot__Update(this, v5);
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
  float v10; // s1
  float v11; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59752B0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752B0 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTrans, 0, 0) )
  {
    activeHeight = UIRoot__get_activeHeight(this, v4);
    if ( activeHeight >= 1 )
    {
      v7 = activeHeight;
      v8 = this->fields.mTrans;
      if ( v8 )
      {
        v9 = 2.0 / (float)v7;
        localScale = UnityEngine_Transform__get_localScale(v8, 0);
        v10 = vabds_f32(localScale.fields.y, v9);
        v11 = vabds_f32(localScale.fields.z, v9);
        if ( vabds_f32(localScale.fields.x, v9) <= COERCE_FLOAT(1) && v10 <= COERCE_FLOAT(1) && v11 <= COERCE_FLOAT(1) )
          return;
        v8 = this->fields.mTrans;
        if ( v8 )
        {
          v15.fields.x = v9;
          v15.fields.y = v9;
          v15.fields.z = v9;
          UnityEngine_Transform__set_localScale(v8, v15, 0);
          return;
        }
      }
      sub_2213CDC(v8, v6);
    }
  }
}


int32_t UIRoot__get_activeHeight(UIRoot_o *this, const MethodInfo *method)
{
  int v3; // w10
  int v4; // w20
  int32_t result; // w0
  UnityEngine_Vector2_o v6; // x1
  float x; // s0
  UnityEngine_Vector2_o v8; // kr00_8
  float minimumHeight; // s8
  UnityEngine_Vector2_o v10; // x1
  UnityEngine_Vector2_o screenSize; // kr08_8
  float v12; // s8
  float manualWidth; // s9
  float v14; // s0
  float v16; // s9
  float v17; // s9
  double v18; // d8
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  float v23; // s9
  double v24; // d8
  double v25; // d0
  double v26; // d0
  double v27; // d1
  double v28; // d1
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_59752AA & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_59752AA = 1;
  }
  if ( this->fields.scalingStyle )
  {
    if ( this->fields.fitHeight )
      v3 = 3;
    else
      v3 = 1;
    if ( this->fields.fitWidth )
      v4 = 2 * !this->fields.fitHeight;
    else
      v4 = v3;
    if ( v4 == 3 )
      return this->fields.manualHeight;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
    screenSize = NGUITools__get_screenSize(0);
    v12 = screenSize.fields.x / screenSize.fields.y;
    result = this->fields.manualHeight;
    manualWidth = (float)this->fields.manualWidth;
    v14 = manualWidth / (float)result;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( v14 >= v12 )
          return result;
      }
      else if ( v4 != 2 )
      {
        return result;
      }
    }
    else if ( v14 <= v12 )
    {
      return result;
    }
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    v23 = manualWidth / v12;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v24 = v23;
    v25 = modf(v23, &iptr);
    if ( v23 >= 0.0 )
    {
      if ( v25 == 0.5 )
      {
        v27 = 1.0;
        v26 = iptr;
LABEL_54:
        v28 = v26 + v27;
        if ( ((__int64)v26 & 1) != 0 )
          v26 = v28;
        goto LABEL_66;
      }
      v26 = floor(v24 + 0.5);
    }
    else
    {
      if ( v25 == -0.5 )
      {
        v26 = iptr;
        v27 = -1.0;
        goto LABEL_54;
      }
      v26 = ceil(v24 + -0.5);
    }
LABEL_66:
    if ( v26 == INFINITY )
      return 0x80000000;
    else
      return (int)v26;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  v8 = NGUITools__get_screenSize(0);
  x = v8.fields.x;
  minimumHeight = (float)this->fields.minimumHeight;
  if ( v8.fields.y >= minimumHeight && (minimumHeight = (float)this->fields.maximumHeight, v8.fields.y <= minimumHeight) )
    minimumHeight = v8.fields.y;
  else
    x = (float)(v8.fields.x / v8.fields.y) * minimumHeight;
  if ( minimumHeight <= x || !this->fields.shrinkPortraitUI )
    v16 = 1.0;
  else
    v16 = v8.fields.x / v8.fields.y;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  v17 = minimumHeight / v16;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
  v18 = v17;
  v19 = modf(v17, &iptr);
  if ( v17 >= 0.0 )
  {
    if ( v19 == 0.5 )
    {
      v21 = 1.0;
      v20 = iptr;
LABEL_39:
      v22 = v20 + v21;
      if ( ((__int64)v20 & 1) != 0 )
        v20 = v22;
      goto LABEL_59;
    }
    v20 = floor(v18 + 0.5);
  }
  else
  {
    if ( v19 == -0.5 )
    {
      v20 = iptr;
      v21 = -1.0;
      goto LABEL_39;
    }
    v20 = ceil(v18 + -0.5);
  }
LABEL_59:
  if ( v20 == INFINITY )
    result = 0x80000000;
  else
    result = (int)v20;
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
  int32_t v2; // w8

  if ( this->fields.fitHeight )
    v2 = 3;
  else
    v2 = 1;
  if ( this->fields.fitWidth )
    return 2 * !this->fields.fitHeight;
  else
    return v2;
}


float UIRoot__get_pixelSizeAdjustment(UIRoot_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o v3; // x1
  float y; // s8
  double v5; // d9
  const MethodInfo *v6; // x2
  double v7; // d0
  double v8; // d0
  double v9; // d1
  double v10; // d1
  int32_t v11; // w1
  double iptr; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59752AB & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_59752AB = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  y = NGUITools__get_screenSize(0).fields.y;
  if ( !byte_596A30A )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A30A = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v5 = y;
  v7 = modf(y, &iptr);
  if ( y >= 0.0 )
  {
    if ( v7 != 0.5 )
    {
      v8 = floor(v5 + 0.5);
      goto LABEL_19;
    }
    v9 = 1.0;
    v8 = iptr;
  }
  else
  {
    if ( v7 != -0.5 )
    {
      v8 = ceil(v5 + -0.5);
      goto LABEL_19;
    }
    v8 = iptr;
    v9 = -1.0;
  }
  v10 = v8 + v9;
  if ( ((__int64)v8 & 1) != 0 )
    v8 = v10;
LABEL_19:
  if ( v8 == INFINITY )
    v11 = 0x80000000;
  else
    v11 = (int)v8;
  if ( v11 == -1 )
    return 1.0;
  else
    return UIRoot__GetPixelSizeAdjustment_56594508(this, v11, v6);
}