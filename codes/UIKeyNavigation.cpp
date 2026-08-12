void UIKeyNavigation___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597500C & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIKeyNavigation___ctor__);
    sub_2213A60(&BetterList_UIKeyNavigation__TypeInfo);
    sub_2213A60(&UIKeyNavigation_TypeInfo);
    byte_597500C = 1;
  }
  v1 = (BetterList_T__o *)sub_2213CCC(BetterList_UIKeyNavigation__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E70130 *)Method_BetterList_UIKeyNavigation___ctor__);
  UIKeyNavigation_TypeInfo->static_fields->list = (struct BetterList_UIKeyNavigation__o *)v1;
  sub_2213A04(
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
  int32_t i; // w22
  BetterList_T__o *list; // x8
  __int64 v15; // x1
  Il2CppObject *Item; // x26
  __int64 v17; // x1
  Il2CppObject *Component_object; // x27
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *v20; // x27
  float v21; // s15
  float v22; // s14
  float v23; // s8
  float v24; // s2
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v29; // s8
  float v31; // s0
  float v32; // s1
  UnityEngine_GameObject_o *v33; // [xsp+0h] [xbp-C0h]
  float v35; // [xsp+Ch] [xbp-B4h]
  UnityEngine_Vector3_o v36; // 0:kr00_12.12
  UnityEngine_Vector3_o Center; // 0:kr14_12.12
  UnityEngine_Vector3_o v38; // 0:kr20_12.12
  UnityEngine_Vector3_o v39; // 0:kr34_12.12
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  z = myDir.fields.z;
  y = myDir.fields.y;
  x = myDir.fields.x;
  if ( (byte_5975008 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIKeyNavigation__get_Item__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIKeyNavigation_TypeInfo);
    byte_5975008 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
LABEL_41:
    sub_2213CDC(transform, v9);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v10 = (UnityEngine_Transform_o *)transform;
  v36 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)transform, v40, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, v11);
  Center = UIKeyNavigation__GetCenter(gameObject, v11);
  v33 = 0;
  v35 = 3.4028e38;
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
             (const MethodInfo_3E6F7E8 *)Method_BetterList_UIKeyNavigation__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    transform = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, (UnityEngine_Object_o *)this, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_41;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Item,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
        if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, v19);
        v38 = UIKeyNavigation__GetCenter(v20, v19);
        if ( !byte_5969AE3 )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_5969AE3 = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
        v21 = v38.fields.y - Center.fields.y;
        v22 = v38.fields.x - Center.fields.x;
        v23 = v38.fields.z - Center.fields.z;
        v24 = sqrtf((float)(v23 * v23) + (float)((float)(v22 * v22) + (float)(v21 * v21)));
        if ( v24 <= 0.00001 )
        {
          if ( !byte_5969AE0 )
          {
            sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          v25 = static_fields->zeroVector.fields.x;
          v26 = static_fields->zeroVector.fields.y;
          v27 = static_fields->zeroVector.fields.z;
        }
        else
        {
          v25 = v22 / v24;
          v26 = v21 / v24;
          v27 = v23 / v24;
        }
        if ( (float)((float)(v36.fields.z * v27) + (float)((float)(v36.fields.x * v25) + (float)(v36.fields.y * v26))) >= 0.707 )
        {
          v41.fields.x = v38.fields.x - Center.fields.x;
          v41.fields.y = v38.fields.y - Center.fields.y;
          v41.fields.z = v38.fields.z - Center.fields.z;
          v39 = UnityEngine_Transform__InverseTransformDirection(v10, v41, 0);
          v31 = v39.fields.x;
          v32 = v39.fields.y;
          if ( horizontal )
            v32 = v39.fields.y + v39.fields.y;
          else
            v31 = v39.fields.x + v39.fields.x;
          v29 = (float)(v39.fields.z * v39.fields.z) + (float)((float)(v31 * v31) + (float)(v32 * v32));
          if ( v29 <= v35 )
          {
            v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            v35 = v29;
          }
        }
      }
    }
  }
  return v33;
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
  unsigned __int64 v13; // d3
  unsigned __int64 v17; // kr30_8
  float position; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o v19; // 0:kr00_12.12
  UnityEngine_Vector3_o v20; // 0:kr20_12.12
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = go;
  if ( (byte_5975009 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    go = (UnityEngine_GameObject_o *)sub_2213A60(&UICamera_TypeInfo);
    byte_5975009 = 1;
  }
  if ( !v2 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            v13 = vmul_f32(
                    vadd_f32(*(float32x2_t *)((char *)&go[1].monitor + 4), *(float32x2_t *)((char *)&go[2].monitor + 4)),
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
        v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)go, 0);
        result.fields.x = v20.fields.x;
        v13 = *(_QWORD *)&v20.fields.y;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_2213CDC(go, method);
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
        sub_2213CE4(go);
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
  v21.fields.y = y;
  v21.fields.z = z;
  v21.fields.x = position;
  v17 = (unsigned __int64)UnityEngine_Camera__WorldToScreenPoint_83198204((UnityEngine_Camera_o *)go, v21, 0);
  LODWORD(result.fields.x) = v17;
  v13 = HIDWORD(v17);
LABEL_29:
  result.fields.z = *((float *)&v13 + 1);
  LODWORD(result.fields.y) = v13;
  return result;
}


UnityEngine_GameObject_o *UIKeyNavigation__GetDown(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onDown; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5975007 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975007 = 1;
  }
  onDown = this->fields.onDown;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56411004(onDown, 0) )
    return this->fields.onDown;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_596C21D )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596C21D = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->downVector, 0, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetLeft(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onLeft; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5975004 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975004 = 1;
  }
  onLeft = this->fields.onLeft;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56411004(onLeft, 0) )
    return this->fields.onLeft;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_596F579 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596F579 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->leftVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetRight(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onRight; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5975005 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975005 = 1;
  }
  onRight = this->fields.onRight;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56411004(onRight, 0) )
    return this->fields.onRight;
  if ( (this->fields.constraint | 2) == 3 )
    return 0;
  if ( !byte_5969AE7 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE7 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->rightVector, 1, v4);
}


UnityEngine_GameObject_o *UIKeyNavigation__GetUp(UIKeyNavigation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *onUp; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5975006 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975006 = 1;
  }
  onUp = this->fields.onUp;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive_56411004(onUp, 0) )
    return this->fields.onUp;
  if ( (this->fields.constraint & 0xFFFFFFFE) == 2 )
    return 0;
  if ( !byte_5969AE8 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE8 = 1;
  }
  return UIKeyNavigation__Get(this, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0, v4);
}


void UIKeyNavigation__OnClick(UIKeyNavigation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *onClick; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19

  if ( (byte_597500B & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_597500B = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    onClick = this->fields.onClick;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
    if ( NGUITools__GetActive_56411004(onClick, 0) )
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

  if ( (byte_5975003 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIKeyNavigation__Remove__);
    sub_2213A60(&UIKeyNavigation_TypeInfo);
    byte_5975003 = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, method);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E6FCC4 *)Method_BetterList_UIKeyNavigation__Remove__);
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

  if ( (byte_5975002 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UIKeyNavigation__Add__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UIKeyNavigation_TypeInfo);
    byte_5975002 = 1;
  }
  v3 = UIKeyNavigation_TypeInfo;
  if ( !*(&UIKeyNavigation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIKeyNavigation_TypeInfo, method);
    v3 = UIKeyNavigation_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_2213CDC(0, method);
  BetterList_object___Add(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E6FA08 *)Method_BetterList_UIKeyNavigation__Add__);
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
    if ( !NGUITools__GetActive_56411004(v10, 0) )
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

  if ( (byte_597500A & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_597500A = 1;
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