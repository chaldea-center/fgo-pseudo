void UIKeyNavigation___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBA9A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_UIKeyNavigation___ctor__);
    sub_1C6BA08(&BetterList_UIKeyNavigation__TypeInfo);
    sub_1C6BA08(&UIKeyNavigation_TypeInfo);
    byte_4CBA9A4 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C6BC54(BetterList_UIKeyNavigation__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3372068 *)Method_BetterList_UIKeyNavigation___ctor__);
  UIKeyNavigation_TypeInfo->static_fields->list = (struct BetterList_UIKeyNavigation__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)UIKeyNavigation_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  int32_t v15; // w22
  BetterList_T__o *list; // x8
  Il2CppObject *Item; // x26
  Il2CppObject *Component_object; // x27
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *v20; // x27
  float v21; // s8
  float v22; // s15
  float v23; // s9
  float v24; // s15
  float v25; // s14
  float v26; // s8
  float v27; // s2
  float v28; // s0
  float v29; // s1
  float v30; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v32; // s8
  UnityEngine_GameObject_o *v34; // [xsp+0h] [xbp-C0h]
  float v36; // [xsp+Ch] [xbp-B4h]
  float v37; // [xsp+10h] [xbp-B0h]
  float v38; // [xsp+14h] [xbp-ACh]
  float v39; // [xsp+18h] [xbp-A8h]
  float v40; // [xsp+1Ch] [xbp-A4h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  z = myDir.fields.z;
  y = myDir.fields.y;
  x = myDir.fields.x;
  if ( (byte_4CBA9A0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_UIKeyNavigation__get_Item__);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIKeyNavigation_TypeInfo);
    byte_4CBA9A0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_41:
    sub_1C6BC60(transform, v9);
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  v10 = (UnityEngine_Transform_o *)transform;
  v42 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)transform, v41, 0);
  v39 = v42.fields.y;
  v40 = v42.fields.x;
  v38 = v42.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
  Center = UIKeyNavigation__GetCenter(gameObject, v11);
  v37 = Center.fields.x;
  v34 = 0;
  v13 = Center.fields.y;
  v14 = Center.fields.z;
  v15 = 0;
  v36 = 3.4028e38;
  while ( 1 )
  {
    transform = UIKeyNavigation_TypeInfo;
    if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
      transform = UIKeyNavigation_TypeInfo;
    }
    list = (BetterList_T__o *)**((_QWORD **)transform + 23);
    if ( !list )
      goto LABEL_41;
    if ( v15 >= list->fields.size )
      return v34;
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      list = (BetterList_T__o *)UIKeyNavigation_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_41;
    }
    Item = BetterList_object___get_Item(
             list,
             v15,
             (const MethodInfo_3371714 *)Method_BetterList_UIKeyNavigation__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, (UnityEngine_Object_o *)this, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_41;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Item,
                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
        if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
        v44 = UIKeyNavigation__GetCenter(v20, v19);
        v21 = v44.fields.x;
        v22 = v44.fields.y;
        v23 = v44.fields.z;
        if ( !byte_4CAFC0C )
        {
          sub_1C6BA08(&System_Math_TypeInfo);
          byte_4CAFC0C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v24 = v22 - v13;
        v25 = v21 - v37;
        v26 = v23 - v14;
        v27 = sqrtf((float)(v26 * v26) + (float)((float)(v25 * v25) + (float)(v24 * v24)));
        if ( v27 <= 0.00001 )
        {
          if ( !byte_4CAFC09 )
          {
            sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC09 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          v28 = static_fields->zeroVector.fields.x;
          v29 = static_fields->zeroVector.fields.y;
          v30 = static_fields->zeroVector.fields.z;
        }
        else
        {
          v28 = v25 / v27;
          v29 = v24 / v27;
          v30 = v26 / v27;
        }
        if ( (float)((float)(v38 * v30) + (float)((float)(v40 * v28) + (float)(v39 * v29))) >= 0.707 )
        {
          v45.fields.x = v25;
          v45.fields.y = v24;
          v45.fields.z = v23 - v14;
          v46 = UnityEngine_Transform__InverseTransformDirection(v10, v45, 0);
          if ( horizontal )
            v46.fields.y = v46.fields.y + v46.fields.y;
          else
            v46.fields.x = v46.fields.x + v46.fields.x;
          v32 = (float)(v46.fields.z * v46.fields.z)
              + (float)((float)(v46.fields.x * v46.fields.x) + (float)(v46.fields.y * v46.fields.y));
          if ( v32 <= v36 )
          {
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            v36 = v32;
          }
        }
      }
    }
    ++v15;
  }
}


UnityEngine_Vector3_o UIKeyNavigation__GetCenter(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x21
  Il2CppObject *Component_object; // x19
  int32_t layer; // w20
  UnityEngine_Object_o *CameraForLayer; // x20
  float y; // s8
  float z; // s9
  unsigned __int64 v8; // d1
  float v9; // s2
  float position; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = go;
  if ( (byte_4CBA9A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CBA9A1 = 1;
  }
  if ( !v2 )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  layer = UnityEngine_GameObject__get_layer(v2, 0);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  CameraForLayer = (UnityEngine_Object_o *)UICamera__FindCameraForLayer(layer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(CameraForLayer, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            result.fields.y = (float)(*((float *)&go[1].monitor + 1) + *((float *)&go[2].monitor + 1)) * 0.5;
            v9 = (float)(*(float *)&go[1].fields.m_CachedPtr + *(float *)&go[2].fields.m_CachedPtr) * 0.5;
            goto LABEL_31;
          }
          goto LABEL_30;
        }
      }
    }
    else
    {
      go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
      if ( go )
      {
        result = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
        goto LABEL_31;
      }
    }
LABEL_29:
    sub_1C6BC60(go, method);
  }
  go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
  if ( !go )
    goto LABEL_29;
  v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
  y = v11.fields.y;
  z = v11.fields.z;
  position = v11.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v8 = vmul_f32(
                 vadd_f32((float32x2_t)go[1].monitor, (float32x2_t)go[2].monitor),
                 (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
          z = (float)(*(float *)&go[1].fields.m_CachedPtr + *(float *)&go[2].fields.m_CachedPtr) * 0.5;
          y = *((float *)&v8 + 1);
          position = *(float *)&v8;
          goto LABEL_17;
        }
LABEL_30:
        sub_1C6BC68(go);
      }
    }
    goto LABEL_29;
  }
LABEL_17:
  if ( !CameraForLayer )
    goto LABEL_29;
  go = (UnityEngine_GameObject_o *)UICamera__get_cachedCamera((UICamera_o *)CameraForLayer, 0);
  if ( !go )
    goto LABEL_29;
  v12.fields.x = position;
  v12.fields.y = y;
  v12.fields.z = z;
  result = UnityEngine_Camera__WorldToScreenPoint_71464248((UnityEngine_Camera_o *)go, v12, 0);
  v9 = 0.0;
LABEL_31:
  result.fields.z = v9;
  return result;
}


UnityEngine_GameObject_o *UIKeyNavigation__GetDown(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onDown; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CBA99F & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA99F = 1;
  }
  onDown = this->fields.onDown;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_49647220(onDown, 0) )
    return this->fields.onDown;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_4CB1FCD )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB1FCD = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->downVector, 0, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetLeft(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onLeft; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CBA99C & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA99C = 1;
  }
  onLeft = this->fields.onLeft;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_49647220(onLeft, 0) )
    return this->fields.onLeft;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_4CB5088 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CB5088 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->leftVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetRight(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onRight; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CBA99D & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA99D = 1;
  }
  onRight = this->fields.onRight;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_49647220(onRight, 0) )
    return this->fields.onRight;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_4CAFC10 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC10 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->rightVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetUp(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onUp; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CBA99E & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CBA99E = 1;
  }
  onUp = this->fields.onUp;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_49647220(onUp, 0) )
    return this->fields.onUp;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_4CAFC11 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC11 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0, v4);
}


void UIKeyNavigation__OnClick(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onClick; // x20
  UnityEngine_GameObject_o *v4; // x19

  if ( (byte_4CBA9A3 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CBA9A3 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClick = this->fields.onClick;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49647220(onClick, 0) )
    {
      v4 = this->fields.onClick;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      UICamera__set_selectedObject(v4, 0);
    }
  }
}


void UIKeyNavigation__OnDisable(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UIKeyNavigation_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4CBA99B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_UIKeyNavigation__Remove__);
    sub_1C6BA08(&UIKeyNavigation_TypeInfo);
    byte_4CBA99B = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C6BC60(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3371BF4 *)Method_BetterList_UIKeyNavigation__Remove__);
}


void UIKeyNavigation__OnEnable(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UIKeyNavigation_c *v3; // x0
  BetterList_T__o *list; // x0
  UnityEngine_Object_o *selectedObject; // x20
  UnityEngine_GameObject_o *v6; // x20
  UICamera_c *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CBA99A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BetterList_UIKeyNavigation__Add__);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    sub_1C6BA08(&UIKeyNavigation_TypeInfo);
    byte_4CBA99A = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C6BC60(0, method);
  BetterList_object___Add(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_337193C *)Method_BetterList_UIKeyNavigation__Add__);
  if ( this->fields.startsSelected )
  {
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(selectedObject, 0, 0) )
      goto LABEL_18;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera__get_selectedObject(0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( !NGUITools__GetActive_49647220(v6, 0) )
    {
LABEL_18:
      v7 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v7 = UICamera_TypeInfo;
      }
      v7->static_fields->currentScheme = 2;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      UICamera__set_selectedObject(gameObject, 0);
    }
  }
}


void UIKeyNavigation__OnKey(UIKeyNavigation_o *this, int32_t key, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *Up; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Left; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4CBA9A2 & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CBA9A2 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    switch ( key )
    {
      case 273:
        Up = UIKeyNavigation__GetUp(this, v5);
        goto LABEL_37;
      case 274:
        Up = UIKeyNavigation__GetDown(this, v5);
        goto LABEL_37;
      case 275:
        goto LABEL_22;
      case 276:
        goto LABEL_36;
      default:
        if ( key != 9 )
        {
          Left = 0;
          goto LABEL_38;
        }
        if ( UnityEngine_Input__GetKey(304, 0) || UnityEngine_Input__GetKey(303, 0) )
        {
          Left = (UnityEngine_Object_o *)UIKeyNavigation__GetLeft(this, v7);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
            Left = (UnityEngine_Object_o *)UIKeyNavigation__GetUp(this, v9);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
            Left = (UnityEngine_Object_o *)UIKeyNavigation__GetDown(this, v10);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
          {
LABEL_22:
            Up = UIKeyNavigation__GetRight(this, v5);
LABEL_37:
            Left = (UnityEngine_Object_o *)Up;
          }
        }
        else
        {
          Left = (UnityEngine_Object_o *)UIKeyNavigation__GetRight(this, v7);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
            Left = (UnityEngine_Object_o *)UIKeyNavigation__GetDown(this, v11);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
            Left = (UnityEngine_Object_o *)UIKeyNavigation__GetUp(this, v12);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(Left, 0, 0) )
          {
LABEL_36:
            Up = UIKeyNavigation__GetLeft(this, v5);
            goto LABEL_37;
          }
        }
LABEL_38:
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(Left, 0, 0) )
        {
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          UICamera__set_selectedObject((UnityEngine_GameObject_o *)Left, 0);
        }
        break;
    }
  }
}