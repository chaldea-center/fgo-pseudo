void UIKeyNavigation___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593CD35 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIKeyNavigation___ctor__);
    sub_21FFC50(&BetterList_UIKeyNavigation__TypeInfo);
    sub_21FFC50(&UIKeyNavigation_TypeInfo);
    byte_593CD35 = 1;
  }
  v1 = (BetterList_T__o *)sub_21FFEBC(BetterList_UIKeyNavigation__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E3C988 *)Method_BetterList_UIKeyNavigation___ctor__);
  UIKeyNavigation_TypeInfo->static_fields->list = (struct BetterList_UIKeyNavigation__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UIKeyNavigation_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIKeyNavigation___ctor(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *UIKeyNavigation__Get(
        UIKeyNavigation_o *this,
        UnityEngine_Vector3_o myDir,
        bool horizontal,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  void *transform; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x21
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  float v13; // s12
  float v14; // s13
  int32_t i; // w22
  BetterList_T__o *list; // x8
  __int64 v17; // x1
  Il2CppObject *Item; // x26
  __int64 v19; // x1
  Il2CppObject *Component_object; // x27
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *v22; // x27
  float v23; // s8
  float v24; // s15
  float v25; // s9
  float v26; // s15
  float v27; // s14
  float v28; // s8
  float v29; // s2
  float v30; // s0
  float v31; // s1
  float v32; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v34; // s8
  UnityEngine_GameObject_o *v36; // [xsp+0h] [xbp-C0h]
  float v38; // [xsp+Ch] [xbp-B4h]
  float v39; // [xsp+10h] [xbp-B0h]
  float v40; // [xsp+14h] [xbp-ACh]
  float v41; // [xsp+18h] [xbp-A8h]
  float v42; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  z = myDir.fields.z;
  y = myDir.fields.y;
  x = myDir.fields.x;
  if ( (byte_593CD31 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIKeyNavigation__get_Item__);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIKeyNavigation_TypeInfo);
    byte_593CD31 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_41:
    sub_21FFECC(transform, v9);
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  v10 = (UnityEngine_Transform_o *)transform;
  v44 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)transform, v43, 0);
  v41 = v44.fields.y;
  v42 = v44.fields.x;
  v40 = v44.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, v11);
  Center = UIKeyNavigation__GetCenter(gameObject, v11);
  v39 = Center.fields.x;
  v36 = 0;
  v13 = Center.fields.y;
  v38 = 3.4028e38;
  v14 = Center.fields.z;
  for ( i = 0; ; ++i )
  {
    transform = UIKeyNavigation_TypeInfo;
    if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, v9);
      transform = UIKeyNavigation_TypeInfo;
    }
    list = (BetterList_T__o *)**((_QWORD **)transform + 23);
    if ( !list )
      goto LABEL_41;
    if ( i >= list->fields.size )
      break;
    if ( !*((_DWORD *)transform + 57) )
    {
      j_il2cpp_runtime_class_init_0(transform, v9);
      list = (BetterList_T__o *)UIKeyNavigation_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_41;
    }
    Item = BetterList_object___get_Item(
             list,
             i,
             (const MethodInfo_3E3C040 *)Method_BetterList_UIKeyNavigation__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    transform = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, (UnityEngine_Object_o *)this, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_41;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Item,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)transform & 1) == 0 )
        goto LABEL_22;
      if ( !Component_object )
        goto LABEL_41;
      if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[4].methodPtr)(
              Component_object,
              Component_object->klass->vtable[4].method)
          & 1) != 0 )
      {
LABEL_22:
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
        if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, v21);
        v46 = UIKeyNavigation__GetCenter(v22, v21);
        v23 = v46.fields.x;
        v24 = v46.fields.y;
        v25 = v46.fields.z;
        if ( !byte_5931943 )
        {
          sub_21FFC50(&System_Math_TypeInfo);
          byte_5931943 = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
        v26 = v24 - v13;
        v27 = v23 - v39;
        v28 = v25 - v14;
        v29 = sqrtf((float)(v28 * v28) + (float)((float)(v27 * v27) + (float)(v26 * v26)));
        if ( v29 <= 0.00001 )
        {
          if ( !byte_5931940 )
          {
            sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          v30 = static_fields->zeroVector.fields.x;
          v31 = static_fields->zeroVector.fields.y;
          v32 = static_fields->zeroVector.fields.z;
        }
        else
        {
          v30 = v27 / v29;
          v31 = v26 / v29;
          v32 = v28 / v29;
        }
        if ( (float)((float)(v40 * v32) + (float)((float)(v42 * v30) + (float)(v41 * v31))) >= 0.707 )
        {
          v47.fields.x = v27;
          v47.fields.y = v26;
          v47.fields.z = v25 - v14;
          v48 = UnityEngine_Transform__InverseTransformDirection(v10, v47, 0);
          if ( horizontal )
            v48.fields.y = v48.fields.y + v48.fields.y;
          else
            v48.fields.x = v48.fields.x + v48.fields.x;
          v34 = (float)(v48.fields.z * v48.fields.z)
              + (float)((float)(v48.fields.x * v48.fields.x) + (float)(v48.fields.y * v48.fields.y));
          if ( v34 <= v38 )
          {
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            v38 = v34;
          }
        }
      }
    }
  }
  return v36;
}


UnityEngine_Vector3_o UIKeyNavigation__GetCenter(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x21
  Il2CppObject *Component_object; // x19
  __int64 v4; // x1
  int32_t layer; // w20
  __int64 v6; // x1
  UnityEngine_Object_o *CameraForLayer; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  float y; // s8
  float z; // s9
  unsigned __int64 v12; // d1
  unsigned __int64 y_low; // d3
  unsigned int v14; // s1
  unsigned int v15; // s2
  float v16; // s2
  float v17; // s1
  float position; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = go;
  if ( (byte_593CD32 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)sub_21FFC50(&UICamera_TypeInfo);
    byte_593CD32 = 1;
  }
  if ( !v2 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  layer = UnityEngine_GameObject__get_layer(v2, 0);
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
  CameraForLayer = (UnityEngine_Object_o *)UICamera__FindCameraForLayer(layer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Inequality(CameraForLayer, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)go & 1) != 0 )
    {
      if ( Component_object )
      {
        go = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                                           Component_object,
                                           Component_object->klass->vtable[11].method);
        if ( go )
        {
          if ( LODWORD(go[1].klass) > 2 )
          {
            result.fields.x = (float)(*(float *)&go[1].monitor + *(float *)&go[2].monitor) * 0.5;
            y_low = vmul_f32(
                      vadd_f32(
                        *(float32x2_t *)((char *)&go[1].monitor + 4),
                        *(float32x2_t *)((char *)&go[2].monitor + 4)),
                      (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            goto LABEL_29;
          }
          goto LABEL_31;
        }
      }
    }
    else
    {
      go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
      if ( go )
      {
        result = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
        y_low = __PAIR64__(v15, v14);
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_21FFECC(go, method);
  }
  go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
  if ( !go )
    goto LABEL_30;
  v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
  y = v19.fields.y;
  z = v19.fields.z;
  position = v19.fields.x;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    if ( Component_object )
    {
      go = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                                         Component_object,
                                         Component_object->klass->vtable[11].method);
      if ( go )
      {
        if ( LODWORD(go[1].klass) > 2 )
        {
          v12 = vmul_f32(
                  vadd_f32((float32x2_t)go[1].monitor, (float32x2_t)go[2].monitor),
                  (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          z = (float)(*(float *)&go[1].fields.m_CachedPtr + *(float *)&go[2].fields.m_CachedPtr) * 0.5;
          y = *((float *)&v12 + 1);
          position = *(float *)&v12;
          goto LABEL_17;
        }
LABEL_31:
        sub_21FFED4(go);
      }
    }
    goto LABEL_30;
  }
LABEL_17:
  if ( !CameraForLayer )
    goto LABEL_30;
  go = (UnityEngine_GameObject_o *)UICamera__get_cachedCamera((UICamera_o *)CameraForLayer, 0);
  if ( !go )
    goto LABEL_30;
  v20.fields.y = y;
  v20.fields.z = z;
  v20.fields.x = position;
  result = UnityEngine_Camera__WorldToScreenPoint_82984900((UnityEngine_Camera_o *)go, v20, 0);
  y_low = LODWORD(result.fields.y);
LABEL_29:
  v16 = *((float *)&y_low + 1);
  v17 = *(float *)&y_low;
  result.fields.z = v16;
  result.fields.y = v17;
  return result;
}


UnityEngine_GameObject_o *UIKeyNavigation__GetDown(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onDown; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593CD30 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD30 = 1;
  }
  onDown = this->fields.onDown;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56206348(onDown, 0) )
    return this->fields.onDown;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_5934109 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5934109 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->downVector, 0, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetLeft(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onLeft; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593CD2D & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD2D = 1;
  }
  onLeft = this->fields.onLeft;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56206348(onLeft, 0) )
    return this->fields.onLeft;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_59373E0 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_59373E0 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->leftVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetRight(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onRight; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593CD2E & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD2E = 1;
  }
  onRight = this->fields.onRight;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56206348(onRight, 0) )
    return this->fields.onRight;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_5931947 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931947 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->rightVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetUp(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onUp; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593CD2F & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD2F = 1;
  }
  onUp = this->fields.onUp;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56206348(onUp, 0) )
    return this->fields.onUp;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_5931948 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931948 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0, v4);
}


void UIKeyNavigation__OnClick(UIKeyNavigation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *onClick; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_593CD34 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CD34 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClick = this->fields.onClick;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    if ( NGUITools__GetActive_56206348(onClick, 0) )
    {
      v6 = this->fields.onClick;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      UICamera__set_selectedObject(v6, 0);
    }
  }
}


void UIKeyNavigation__OnDisable(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UIKeyNavigation_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_593CD2C & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIKeyNavigation__Remove__);
    sub_21FFC50(&UIKeyNavigation_TypeInfo);
    byte_593CD2C = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, method);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_21FFECC(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E3C51C *)Method_BetterList_UIKeyNavigation__Remove__);
}


void UIKeyNavigation__OnEnable(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UIKeyNavigation_c *v3; // x0
  BetterList_T__o *list; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *selectedObject; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UICamera_c *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_593CD2B & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIKeyNavigation__Add__);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    sub_21FFC50(&UIKeyNavigation_TypeInfo);
    byte_593CD2B = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, method);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_21FFECC(0, method);
  BetterList_object___Add(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E3C260 *)Method_BetterList_UIKeyNavigation__Add__);
  if ( this->fields.startsSelected )
  {
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
    selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Equality(selectedObject, 0, 0) )
      goto LABEL_18;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
    v10 = UICamera__get_selectedObject(0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    if ( !NGUITools__GetActive_56206348(v10, 0) )
    {
LABEL_18:
      v11 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v11 = UICamera_TypeInfo;
      }
      v11->static_fields->currentScheme = 2;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      UICamera__set_selectedObject(gameObject, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIKeyNavigation__OnKey(UIKeyNavigation_o *this, int32_t key, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *Right; // x20
  UnityEngine_GameObject_o *Up; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_593CD33 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CD33 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, *(_QWORD *)&key);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    Right = 0;
    if ( key <= 273 )
    {
      if ( key != 9 )
      {
        if ( key == 273 )
        {
          Up = UIKeyNavigation__GetUp(this, v5);
          goto LABEL_29;
        }
        goto LABEL_30;
      }
      if ( !UnityEngine_Input__GetKey(304, 0) && !UnityEngine_Input__GetKey(303, 0) )
      {
        Right = (UnityEngine_Object_o *)UIKeyNavigation__GetRight(this, v8);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        if ( UnityEngine_Object__op_Equality(Right, 0, 0) )
          Right = (UnityEngine_Object_o *)UIKeyNavigation__GetDown(this, v14);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        if ( UnityEngine_Object__op_Equality(Right, 0, 0) )
          Right = (UnityEngine_Object_o *)UIKeyNavigation__GetUp(this, v15);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( !UnityEngine_Object__op_Equality(Right, 0, 0) )
          goto LABEL_30;
        goto LABEL_10;
      }
      Right = (UnityEngine_Object_o *)UIKeyNavigation__GetLeft(this, v8);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Equality(Right, 0, 0) )
        Right = (UnityEngine_Object_o *)UIKeyNavigation__GetUp(this, v10);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Equality(Right, 0, 0) )
        Right = (UnityEngine_Object_o *)UIKeyNavigation__GetDown(this, v11);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality(Right, 0, 0) )
        goto LABEL_30;
    }
    else
    {
      if ( key == 274 )
      {
        Up = UIKeyNavigation__GetDown(this, v5);
        goto LABEL_29;
      }
      if ( key != 275 )
      {
        if ( key == 276 )
        {
LABEL_10:
          Up = UIKeyNavigation__GetLeft(this, v5);
LABEL_29:
          Right = (UnityEngine_Object_o *)Up;
        }
LABEL_30:
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        if ( UnityEngine_Object__op_Inequality(Right, 0, 0) )
        {
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
          UICamera__set_selectedObject((UnityEngine_GameObject_o *)Right, 0);
        }
        return;
      }
    }
    Up = UIKeyNavigation__GetRight(this, v5);
    goto LABEL_29;
  }
}