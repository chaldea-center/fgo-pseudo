void __fastcall EventRecipeListViewObject___ctor(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5501 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5501 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRecipeListViewObject__Awake(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_42E54F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E54F9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  this->fields.itemDraw = (struct EventRecipeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    dispObject,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewItemDraw___);
  sub_B5D560(&this->fields.itemDraw);
}


void __fastcall EventRecipeListViewObject__CallOnMoveEnd(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v3 = onMoveEnd;
  if ( onMoveEnd )
  {
    *p_onMoveEnd = 0LL;
    sub_B5D560(p_onMoveEnd);
    System_Action__Invoke(v3, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall EventRecipeListViewObject__CreateDragObject(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  const MethodInfo *v8; // x3

  if ( (byte_42E54FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, (_DWORD)method, v2, v3);
    byte_42E54FC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  EventRecipeListViewObject__Init_19059644((EventRecipeListViewObject_o *)DragObject, 2, 0LL, 0.0, v8);
  return v7;
}


void __fastcall EventRecipeListViewObject__EventMove(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v11; // x0
  float z; // s10
  TweenPosition_o *v13; // x0
  __int64 v14; // x1
  TweenPosition_o *v15; // x20
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E5500 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6257/*"EventMoveFinish"*/, v5, v6, v7);
    byte_42E5500 = 1;
  }
  TargetPosition = EventRecipeListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v11 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v11 = ListViewObject_TypeInfo;
  }
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  v13 = TweenPosition__Begin(dragObject, v11->static_fields->BASE_MOVE_TIME, v17, 0LL);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  v15 = v13;
  v13->fields.style = 3;
  v13->fields.eventReceiver = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_B5D560(&v15->fields.eventReceiver);
  v15->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6257/*"EventMoveFinish"*/;
  sub_B5D560(&v15->fields.callWhenFinished);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewObject__EventStart(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_o **p_dragObject; // x21
  __int64 v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v14; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v16; // x2
  int v17; // s0

  if ( (byte_42E54FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, initMode, (_DWORD)method, v4);
    sub_B5D5C4(&StringLiteral_6255/*"EventMove"*/, v8, v9, v10);
    byte_42E54FF = 1;
  }
  this->fields.isBusy = 1;
  EventRecipeListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRecipeListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_B5D560(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___)) == 0LL
    || (EventRecipeListViewObject__Init_19059644((EventRecipeListViewObject_o *)dragObject, 2, 0LL, 0.0, v14),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = EventRecipeListViewObject__GetStartPosition(this, initMode, v16),
        !transform) )
  {
    sub_B5D69C(dragObject, v12);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6255/*"EventMove"*/,
    delay,
    0LL);
}


EventRecipeListViewItem_o *__fastcall EventRecipeListViewObject__GetItem(
        EventRecipeListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E54FB & 1) == 0 )
  {
    sub_B5D5C4(&EventRecipeListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E54FB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventRecipeListViewItem_TypeInfo )
    return (EventRecipeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventRecipeListViewObject__GetStartPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B5D69C(0LL, v5);
  if ( initMode == 4 )
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__TransformPoint_35744104(transform, 1000.0, 0.0, 0.0, 0LL);
  else
    *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position(transform, 0LL);
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


int32_t __fastcall EventRecipeListViewObject__GetState(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 7 )
    return 0;
  else
    return dword_329F550[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall EventRecipeListViewObject__GetTargetPosition(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x19
  int v6; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float v12; // s1
  float v13; // s1
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( dragObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
        dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( dragObject )
        {
          *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position(
                                            (UnityEngine_Transform_o *)dragObject,
                                            0LL);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                                    parent,
                                                    *(UnityEngine_Vector3_o *)&v6,
                                                    0LL);
            v11 = v10 + 0.0;
            v13 = v12 + 1000.0;
LABEL_13:
            v9 = v9 + 0.0;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_15:
    sub_B5D69C(dragObject, *(_QWORD *)&initMode);
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_15;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_15;
  v15 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !v15 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                     v15,
                                     *(UnityEngine_Vector3_o *)&v16,
                                     0LL);
  if ( initMode == 6 )
  {
    v13 = v13 + 0.0;
    v11 = v11 + 1000.0;
    goto LABEL_13;
  }
LABEL_16:
  result.fields.z = v9;
  result.fields.y = v13;
  result.fields.x = v11;
  return result;
}


void __fastcall EventRecipeListViewObject__Init(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  EventRecipeListViewObject__Init_19059644(this, initMode, 0LL, 0.0, v3);
}


void __fastcall EventRecipeListViewObject__Init_19059644(
        EventRecipeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w23
  int32_t state; // w24
  ListViewItem_c *klass; // x9
  __int64 v13; // x10
  int32_t v14; // w8
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  int32_t v17; // w0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  int32_t v20; // w8

  if ( (byte_42E54FD & 1) == 0 )
  {
    sub_B5D5C4(&EventRecipeListViewItem_TypeInfo, initMode, (_DWORD)onMoveEnd, method);
    byte_42E54FD = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = initMode;
  if ( !linkItem
    || (klass = linkItem->klass,
        v13 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (v14 = initMode, (EventRecipeListViewItem_c *)klass->_2.typeHierarchy[v13 - 1] != EventRecipeListViewItem_TypeInfo) )
  {
    v14 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventRecipeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B5D560(&this->fields.onMoveEnd);
  v17 = EventRecipeListViewItemDraw__GetDispMode(this->fields.initMode, 0LL);
  v19 = (const MethodInfo *)this->fields.initMode;
  this->fields.dispMode = v17;
  if ( (unsigned int)v19 > 7 )
    v20 = 0;
  else
    v20 = dword_329F550[(_QWORD)v19];
  this->fields.state = v20;
  switch ( initMode )
  {
    case 3:
    case 7:
      goto LABEL_13;
    case 4:
    case 6:
      EventRecipeListViewObject__EventStart(this, (int32_t)v19, delay, v18);
      break;
    default:
      if ( !state || dispMode != v17 )
LABEL_13:
        EventRecipeListViewObject__SetupDisp(this, v19);
      EventRecipeListViewObject__CallOnMoveEnd(this, v19);
      break;
  }
}


void __fastcall EventRecipeListViewObject__OnDestroy(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v11; // x20

  if ( (byte_42E54FA & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E54FA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_dragObject;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v11, 0LL);
    *p_dragObject = 0LL;
    sub_B5D560(p_dragObject);
  }
}


void __fastcall EventRecipeListViewObject__SetItem(
        EventRecipeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall EventRecipeListViewObject__SetupDisp(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  EventRecipeListViewItemDraw_o *v13; // x0

  if ( (byte_42E54FE & 1) == 0 )
  {
    sub_B5D5C4(&EventRecipeListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E54FE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&EventRecipeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (EventRecipeListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == EventRecipeListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    EventRecipeListViewItemDraw__SetItem(v13, (EventRecipeListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
  }
}


void __fastcall EventRecipeListViewObject__add_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventRecipeListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E54F7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E54F7 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventRecipeListViewObject_o *)sub_B5D990(v9);
  EventRecipeListViewObject__remove_onMoveEnd(v12, v13, v14);
}


int32_t __fastcall EventRecipeListViewObject__get_DispMode(EventRecipeListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.dispMode;
}


void __fastcall EventRecipeListViewObject__remove_onMoveEnd(
        EventRecipeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventRecipeListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E54F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E54F8 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v7 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onMoveEnd, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventRecipeListViewObject_o *)sub_B5D990(v9);
  EventRecipeListViewObject__get_DispMode(v12, v13);
}