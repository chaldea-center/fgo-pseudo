void UIKeyNavigation___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D350D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIKeyNavigation___ctor__);
    sub_1C93AD4(&BetterList_UIKeyNavigation__TypeInfo);
    sub_1C93AD4(&UIKeyNavigation_TypeInfo);
    byte_4D350D1 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C93D20(BetterList_UIKeyNavigation__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_33DC638 *)Method_BetterList_UIKeyNavigation___ctor__);
  UIKeyNavigation_TypeInfo->static_fields->list = (struct BetterList_UIKeyNavigation__o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UIKeyNavigation_TypeInfo->static_fields,
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
  int32_t v13; // w22
  BetterList_T__o *list; // x8
  Il2CppObject *Item; // x26
  Il2CppObject *Component_object; // x27
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *v18; // x27
  float v19; // s15
  float v20; // s14
  float v21; // s8
  float v22; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s8
  float v29; // s0
  float v30; // s1
  UnityEngine_GameObject_o *v31; // [xsp+0h] [xbp-C0h]
  float v33; // [xsp+Ch] [xbp-B4h]
  UnityEngine_Vector3_o v34; // 0:kr00_12.12
  UnityEngine_Vector3_o Center; // 0:kr14_12.12
  UnityEngine_Vector3_o v36; // 0:kr20_12.12
  UnityEngine_Vector3_o v37; // 0:kr34_12.12
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  z = myDir.fields.z;
  y = myDir.fields.y;
  x = myDir.fields.x;
  if ( (byte_4D350CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIKeyNavigation__get_Item__);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIKeyNavigation_TypeInfo);
    byte_4D350CD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_41:
    sub_1C93D2C(transform, v9);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v10 = (UnityEngine_Transform_o *)transform;
  v34 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)transform, v38, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
  Center = UIKeyNavigation__GetCenter(gameObject, v11);
  v31 = 0;
  v13 = 0;
  v33 = 3.4028e38;
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
    if ( v13 >= list->fields.size )
      return v31;
    if ( !*((_DWORD *)transform + 56) )
    {
      j_il2cpp_runtime_class_init_0(transform);
      list = (BetterList_T__o *)UIKeyNavigation_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_41;
    }
    Item = BetterList_object___get_Item(
             list,
             v13,
             (const MethodInfo_33DBCE4 *)Method_BetterList_UIKeyNavigation__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, (UnityEngine_Object_o *)this, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_41;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Item,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIButton___);
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
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
        if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
        v36 = UIKeyNavigation__GetCenter(v18, v17);
        if ( !byte_4D2A13C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A13C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v19 = v36.fields.y - Center.fields.y;
        v20 = v36.fields.x - Center.fields.x;
        v21 = v36.fields.z - Center.fields.z;
        v22 = sqrtf((float)(v21 * v21) + (float)((float)(v20 * v20) + (float)(v19 * v19)));
        if ( v22 <= 0.00001 )
        {
          if ( !byte_4D2A139 )
          {
            sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          v23 = static_fields->zeroVector.fields.x;
          v24 = static_fields->zeroVector.fields.y;
          v25 = static_fields->zeroVector.fields.z;
        }
        else
        {
          v23 = v20 / v22;
          v24 = v19 / v22;
          v25 = v21 / v22;
        }
        if ( (float)((float)(v34.fields.z * v25) + (float)((float)(v34.fields.x * v23) + (float)(v34.fields.y * v24))) >= 0.707 )
        {
          v39.fields.x = v36.fields.x - Center.fields.x;
          v39.fields.y = v36.fields.y - Center.fields.y;
          v39.fields.z = v36.fields.z - Center.fields.z;
          v37 = UnityEngine_Transform__InverseTransformDirection(v10, v39, 0);
          v29 = v37.fields.x;
          v30 = v37.fields.y;
          if ( horizontal )
            v30 = v37.fields.y + v37.fields.y;
          else
            v29 = v37.fields.x + v37.fields.x;
          v27 = (float)(v37.fields.z * v37.fields.z) + (float)((float)(v29 * v29) + (float)(v30 * v30));
          if ( v27 <= v33 )
          {
            v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            v33 = v27;
          }
        }
      }
    }
    ++v13;
  }
}


UnityEngine_Vector3_o UIKeyNavigation__GetCenter(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x21
  Il2CppObject *Component_object; // x19
  int32_t layer; // w20
  UICamera_o *CameraForLayer; // x20
  float y; // s8
  float z; // s9
  unsigned __int64 v8; // d1
  unsigned __int64 v12; // kr30_8
  float position; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o v14; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:kr20_12.12
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = go;
  if ( (byte_4D350CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D350CE = 1;
  }
  if ( !v2 )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  layer = UnityEngine_GameObject__get_layer(v2, 0);
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  CameraForLayer = UICamera__FindCameraForLayer(layer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)CameraForLayer, 0, 0) )
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
    if ( !go )
      goto LABEL_29;
    v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
    y = v14.fields.y;
    z = v14.fields.z;
    position = v14.fields.x;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)go & 1) == 0 )
      goto LABEL_17;
    if ( !Component_object )
      goto LABEL_29;
    go = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                                       Component_object,
                                       Component_object->klass->vtable[11].method);
    if ( !go )
      goto LABEL_29;
    if ( LODWORD(go[1].klass) > 2 )
    {
      v8 = vmul_f32(vadd_f32((float32x2_t)go[1].monitor, (float32x2_t)go[2].monitor), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
      z = (float)(*(float *)&go[1].fields.m_CachedPtr + *(float *)&go[2].fields.m_CachedPtr) * 0.5;
      y = *((float *)&v8 + 1);
      position = *(float *)&v8;
LABEL_17:
      if ( CameraForLayer )
      {
        go = (UnityEngine_GameObject_o *)UICamera__get_cachedCamera(CameraForLayer, 0);
        if ( go )
        {
          v16.fields.x = position;
          v16.fields.y = y;
          v16.fields.z = z;
          v12 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_71924480((UnityEngine_Camera_o *)go, v16, 0);
          result.fields.y = *((float *)&v12 + 1);
          LODWORD(result.fields.x) = v12;
          result.fields.z = 0.0;
          return result;
        }
      }
LABEL_29:
      sub_1C93D2C(go, method);
    }
LABEL_30:
    sub_1C93D34(go);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  go = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)go & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    go = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[11].methodPtr)(
                                       Component_object,
                                       Component_object->klass->vtable[11].method);
    if ( !go )
      goto LABEL_29;
    if ( LODWORD(go[1].klass) <= 2 )
      goto LABEL_30;
    result.fields.x = (float)(*(float *)&go[1].monitor + *(float *)&go[2].monitor) * 0.5;
    result.fields.y = (float)(*((float *)&go[1].monitor + 1) + *((float *)&go[2].monitor + 1)) * 0.5;
    result.fields.z = (float)(*(float *)&go[1].fields.m_CachedPtr + *(float *)&go[2].fields.m_CachedPtr) * 0.5;
  }
  else
  {
    go = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v2, 0);
    if ( !go )
      goto LABEL_29;
    v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
    result.fields.x = v15.fields.x;
    result.fields.y = v15.fields.y;
    result.fields.z = v15.fields.z;
  }
  return result;
}


UnityEngine_GameObject_o *UIKeyNavigation__GetDown(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onDown; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D350CC & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D350CC = 1;
  }
  onDown = this->fields.onDown;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_50071416(onDown, 0) )
    return this->fields.onDown;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_4D2C578 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2C578 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->downVector, 0, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetLeft(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onLeft; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D350C9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D350C9 = 1;
  }
  onLeft = this->fields.onLeft;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_50071416(onLeft, 0) )
    return this->fields.onLeft;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_4D2F7B8 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2F7B8 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->leftVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetRight(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onRight; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D350CA & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D350CA = 1;
  }
  onRight = this->fields.onRight;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_50071416(onRight, 0) )
    return this->fields.onRight;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_4D2A140 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A140 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->rightVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetUp(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onUp; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D350CB & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D350CB = 1;
  }
  onUp = this->fields.onUp;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive_50071416(onUp, 0) )
    return this->fields.onUp;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_4D2A141 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A141 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0, v4);
}


void UIKeyNavigation__OnClick(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onClick; // x20
  UnityEngine_GameObject_o *v4; // x19

  if ( (byte_4D350D0 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D350D0 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClick = this->fields.onClick;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(onClick, 0) )
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

  if ( (byte_4D350C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIKeyNavigation__Remove__);
    sub_1C93AD4(&UIKeyNavigation_TypeInfo);
    byte_4D350C8 = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_33DC1C4 *)Method_BetterList_UIKeyNavigation__Remove__);
}


void UIKeyNavigation__OnEnable(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UIKeyNavigation_c *v3; // x0
  BetterList_T__o *list; // x0
  UnityEngine_Object_o *selectedObject; // x20
  UnityEngine_GameObject_o *v6; // x20
  UICamera_c *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4D350C7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIKeyNavigation__Add__);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&UIKeyNavigation_TypeInfo);
    byte_4D350C7 = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !UIKeyNavigation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Add(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_33DBF0C *)Method_BetterList_UIKeyNavigation__Add__);
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
    if ( !NGUITools__GetActive_50071416(v6, 0) )
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

  if ( (byte_4D350CF & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D350CF = 1;
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