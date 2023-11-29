void __fastcall ShopEventListViewObject___ctor(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40FF89D & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FF89D = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ShopEventListViewObject__Awake(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct ShopEventListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FF893 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___, method);
    byte_40FF893 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct ShopEventListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    dispObject,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ShopEventListViewObject__CallOnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onMoveEnd; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (BattleServantConfConponent_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_B16F98(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall ShopEventListViewObject__CreateDragObject(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  ShopEventListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v6; // x3

  if ( (byte_40FF896 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method);
    byte_40FF896 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = (ShopEventListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  DragObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  ShopEventListViewObject__Init(Component_srcLineSprite, 2, 0LL, 0.0, v6);
  return v4;
}


void __fastcall ShopEventListViewObject__EventMove(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v8; // x0
  float z; // s10
  TweenPosition_o *v10; // x0
  TweenPosition_o *v11; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o TargetPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FF89A & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6160, v4);
    byte_40FF89A = 1;
  }
  TargetPosition = ShopEventListViewObject__GetTargetPosition(this, this->fields.initMode, v2);
  dragObject = this->fields.dragObject;
  x = TargetPosition.fields.x;
  y = TargetPosition.fields.y;
  v8 = ListViewObject_TypeInfo;
  z = TargetPosition.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v8 = ListViewObject_TypeInfo;
  }
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v10 = TweenPosition__Begin(dragObject, v8->static_fields->BASE_MOVE_TIME, v27, 0LL);
  if ( !v10 )
    sub_B170D4();
  v11 = v10;
  v10->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.eventReceiver, gameObject, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_6160;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6160;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall ShopEventListViewObject__EventMoveFinish(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  int32_t initMode; // w8
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_40FF89B & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FF89B = 1;
  }
  initMode = this->fields.initMode;
  if ( initMode == 7 || initMode == 4 )
  {
    ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
    this->fields.dispMode = 2;
    ShopEventListViewObject__SetupDisp(this, v4);
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewObject__EventStart(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o **p_dragObject; // x21
  struct UnityEngine_GameObject_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ShopEventListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v19; // x2
  int v20; // s0

  if ( (byte_40FF899 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, *(_QWORD *)&initMode);
    sub_B16FFC(&StringLiteral_6158, v7);
    byte_40FF899 = 1;
  }
  this->fields.isBusy = 1;
  ShopEventListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  if ( initMode != 8 )
  {
    p_dragObject = &this->fields.dragObject;
    v9 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ShopEventListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                              this,
                                              this->klass->vtable._9_SetInput.methodPtr);
    this->fields.dragObject = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dragObject,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    if ( !this->fields.dragObject
      || (Component_srcLineSprite = (ShopEventListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   this->fields.dragObject,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___)) == 0LL
      || (ShopEventListViewObject__Init(Component_srcLineSprite, 2, 0LL, 0.0, v17), !*p_dragObject)
      || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
          *(UnityEngine_Vector3_o *)&v20 = ShopEventListViewObject__GetStartPosition(this, initMode, v19),
          !transform) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6158,
      delay,
      0LL);
  }
}


int32_t __fastcall ShopEventListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 5 )
    return 0;
  else
    return dword_31575E0[initMode - 1];
}


ShopEventListViewItem_o *__fastcall ShopEventListViewObject__GetItem(
        ShopEventListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FF895 & 1) == 0 )
  {
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, method);
    byte_40FF895 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ShopEventListViewItem_TypeInfo )
    return (ShopEventListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopEventListViewObject__GetStartPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  int v5; // s0
  int v6; // s1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( initMode == 4 )
  {
    if ( transform )
    {
      v5 = 1148846080;
      v6 = 0;
      goto LABEL_7;
    }
LABEL_9:
    sub_B170D4();
  }
  if ( !transform )
    goto LABEL_9;
  if ( initMode != 7 )
  {
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position(transform, 0LL);
    goto ShopEventListViewObject$$GetStartPosition;
  }
  v6 = 1148846080;
  v5 = 0;
LABEL_7:
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__TransformPoint_34933176(
                                    transform,
                                    *(float *)&v5,
                                    *(float *)&v6,
                                    0.0,
                                    0LL);
ShopEventListViewObject$$GetStartPosition:
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


int32_t __fastcall ShopEventListViewObject__GetState(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode > 8 )
    return 0;
  else
    return dword_3157600[initMode];
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ShopEventListViewObject__GetTargetPosition(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x19
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  float v11; // s2
  float v12; // s0
  float v13; // s0
  float v14; // s1
  float v15; // s1
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x0
  int v21; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( initMode == 5 )
  {
    dragObject = this->fields.dragObject;
    if ( dragObject )
    {
      transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
      if ( transform )
      {
        parent = UnityEngine_Transform__get_parent(transform, 0LL);
        v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( v7 )
        {
          *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
          if ( parent )
          {
            *(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__InverseTransformPoint(
                                                     parent,
                                                     *(UnityEngine_Vector3_o *)&v8,
                                                     0LL);
            v13 = v12 + 0.0;
            v15 = v14 + 1000.0;
LABEL_13:
            v11 = v11 + 0.0;
            goto LABEL_16;
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  v16 = this->fields.dragObject;
  if ( !v16 )
    goto LABEL_15;
  v18 = UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !v18 )
    goto LABEL_15;
  v19 = UnityEngine_Transform__get_parent(v18, 0LL);
  v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(v20, 0LL);
  if ( !v19 )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__InverseTransformPoint(
                                     v19,
                                     *(UnityEngine_Vector3_o *)&v21,
                                     0LL);
  if ( initMode == 6 )
  {
    v15 = v15 + 0.0;
    v13 = v13 + 1000.0;
    goto LABEL_13;
  }
LABEL_16:
  result.fields.z = v11;
  result.fields.y = v15;
  result.fields.x = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewObject__Init(
        ShopEventListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        float delay,
        const MethodInfo *method)
{
  int32_t v7; // w21
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  int32_t v24; // w9

  v7 = initMode;
  if ( (byte_40FF897 & 1) == 0 )
  {
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FF897 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  this->fields.initMode = v7;
  if ( !linkItem
    || (v12 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] != ShopEventListViewItem_TypeInfo )
  {
    v7 = 0;
    this->fields.initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(ShopEventListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    this->fields.initMode == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v14, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v22 = (const MethodInfo *)(unsigned int)this->fields.initMode;
  if ( (_DWORD)v22 == 3 )
  {
    v23 = 3;
LABEL_14:
    this->fields.dispMode = (int)v22;
    this->fields.state = v23;
    if ( !state )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (_DWORD)v22 == 2 || (_DWORD)v22 == 1 )
  {
    v23 = 1;
    goto LABEL_14;
  }
  this->fields.dispMode = 0;
  if ( (unsigned int)((_DWORD)v22 - 4) >= 4 )
  {
    v24 = 1;
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 != 8 )
        v24 = 0;
    }
    this->fields.state = v24;
    if ( (unsigned int)((_DWORD)v22 - 4) > 4 )
    {
      v22 = 0LL;
      if ( !state )
        goto LABEL_16;
LABEL_15:
      if ( dispMode == (_DWORD)v22 )
      {
LABEL_17:
        ShopEventListViewObject__CallOnMoveEnd(this, v22);
        return;
      }
LABEL_16:
      ShopEventListViewObject__SetupDisp(this, v22);
      goto LABEL_17;
    }
  }
  else
  {
    this->fields.state = 2;
  }
  ShopEventListViewObject__EventStart(this, (int32_t)v22, delay, v21);
}


void __fastcall ShopEventListViewObject__OnClickEvent(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FF89C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9929, method);
    byte_40FF89C = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9929, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall ShopEventListViewObject__OnDestroy(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FF894 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF894 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ShopEventListViewObject__OnMoveEnd(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
  this->fields.state = 1;
  ShopEventListViewObject__CallOnMoveEnd(this, method);
}


void __fastcall ShopEventListViewObject__SetItem(
        ShopEventListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ShopEventListViewObject__SetupDisp(ShopEventListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  ShopEventListViewItemDraw_o *v9; // x0

  if ( (byte_40FF898 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, v3);
    byte_40FF898 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ShopEventListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B170D4();
    ShopEventListViewItemDraw__SetItem(v9, (ShopEventListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void __fastcall ShopEventListViewObject__add_onMoveEnd(
        ShopEventListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopEventListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FF891 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FF891 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ShopEventListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall ShopEventListViewObject__remove_onMoveEnd(
        ShopEventListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ShopEventListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FF892 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FF892 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ShopEventListViewObject__Awake(v11, v12);
}