void __fastcall OrganizationTopListViewObject___ctor(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_41851BD & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_41851BD = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewObject__Awake(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct OrganizationTopListViewItemDraw_o *Component_srcLineSprite; // x0

  if ( (byte_41851AD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewItemDraw___, method);
    byte_41851AD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct OrganizationTopListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          dispObject,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(&this->fields.itemDraw, Component_srcLineSprite);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall OrganizationTopListViewObject__CreateDragObject(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  OrganizationTopListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41851B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, method);
    byte_41851B0 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  v6 = (OrganizationTopListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  OrganizationTopListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventEnterMove(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  UnityEngine_GameObject_o *v9; // x20
  ListViewObject_c *v10; // x0
  float v11; // s10
  float v12; // s9
  float v13; // s8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_41851B7 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6158/*"EventEnterMove2"*/, v3);
    byte_41851B7 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v17 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = this->fields.dragObject;
  v10 = ListViewObject_TypeInfo;
  v11 = v17.fields.x + 0.0;
  v12 = v17.fields.y + 800.0;
  v13 = v17.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v10 = ListViewObject_TypeInfo;
  }
  v18.fields.x = v11;
  v18.fields.y = v12;
  v18.fields.z = v13;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v10->static_fields->BASE_MOVE_TIME, v18, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B2C434(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8(&v14[3], gameObject);
  v16 = StringLiteral_6158/*"EventEnterMove2"*/;
  v14[3].monitor = (void *)StringLiteral_6158/*"EventEnterMove2"*/;
  sub_B2C2F8(&v14[3].monitor, v16);
}


void __fastcall OrganizationTopListViewObject__EventEnterMove2(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_41851B8 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_41851B8 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8(&this->fields.dragObject, 0LL);
  OrganizationTopListViewObject__EventMoveEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventEnterStart(
        OrganizationTopListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  OrganizationTopListViewObject_o *v9; // x20
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41851B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, method);
    sub_B2C35C(&StringLiteral_6157/*"EventEnterMove"*/, v5);
    byte_41851B6 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_B2C2F8(&this->fields.dragObject, v6);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___)) == 0LL )
  {
    sub_B2C434(dragObject, v7);
  }
  v9 = (OrganizationTopListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  OrganizationTopListViewObject__Init(v9, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6157/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventIntoMove(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v12; // x0
  float z; // s10
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_41851B4 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6170/*"EventIntoMove2"*/, v3);
    byte_41851B4 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v17 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = this->fields.dragObject;
  x = v17.fields.x;
  y = v17.fields.y;
  v12 = ListViewObject_TypeInfo;
  z = v17.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v12 = ListViewObject_TypeInfo;
  }
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v12->static_fields->BASE_MOVE_TIME, v18, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B2C434(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8(&v14[3], gameObject);
  v16 = StringLiteral_6170/*"EventIntoMove2"*/;
  v14[3].monitor = (void *)StringLiteral_6170/*"EventIntoMove2"*/;
  sub_B2C2F8(&v14[3].monitor, v16);
}


void __fastcall OrganizationTopListViewObject__EventIntoMove2(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_41851B5 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_41851B5 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  OrganizationTopListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8(&this->fields.dragObject, 0LL);
  OrganizationTopListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventIntoStart(
        OrganizationTopListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  OrganizationTopListViewObject_o *v10; // x21
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41851B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, method);
    sub_B2C35C(&StringLiteral_6169/*"EventIntoMove"*/, v5);
    byte_41851B3 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v6;
  sub_B2C2F8(&this->fields.dragObject, v6);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
  if ( !dragObject
    || (v10 = (OrganizationTopListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        OrganizationTopListViewObject__Init(v10, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v11),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_35438660(
                                           (UnityEngine_Transform_o *)dragObject,
                                           500.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B2C434(dragObject, v8);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6169/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall OrganizationTopListViewObject__EventMoveEnd(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  *((_DWORD *)p_callbackFunc - 1) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    System_Action__Invoke(v3, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventRetryMove(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  UnityEngine_GameObject_o *v9; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v12; // x0
  float z; // s10
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_41851BA & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6189/*"EventRetryMove2"*/, v3);
    byte_41851BA = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v17 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = this->fields.dragObject;
  x = v17.fields.x;
  y = v17.fields.y;
  v12 = ListViewObject_TypeInfo;
  z = v17.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v12 = ListViewObject_TypeInfo;
  }
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v12->static_fields->BASE_MOVE_TIME, v18, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B2C434(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8(&v14[3], gameObject);
  v16 = StringLiteral_6189/*"EventRetryMove2"*/;
  v14[3].monitor = (void *)StringLiteral_6189/*"EventRetryMove2"*/;
  sub_B2C2F8(&v14[3].monitor, v16);
}


void __fastcall OrganizationTopListViewObject__EventRetryMove2(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_41851BB & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_41851BB = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  OrganizationTopListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8(&this->fields.dragObject, 0LL);
  OrganizationTopListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__EventRetryStart(
        OrganizationTopListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  OrganizationTopListViewObject_o *v10; // x21
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41851B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, method);
    sub_B2C35C(&StringLiteral_6188/*"EventRetryMove"*/, v5);
    byte_41851B9 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  OrganizationTopListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(OrganizationTopListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v6;
  sub_B2C2F8(&this->fields.dragObject, v6);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
  if ( !dragObject
    || (v10 = (OrganizationTopListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        OrganizationTopListViewObject__Init(v10, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v11),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_35438660(
                                           (UnityEngine_Transform_o *)dragObject,
                                           0.0,
                                           800.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B2C434(dragObject, v8);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6188/*"EventRetryMove"*/,
    delay,
    0LL);
}


OrganizationTopListViewItem_o *__fastcall OrganizationTopListViewObject__GetItem(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_41851AF & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewItem_TypeInfo, method);
    byte_41851AF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&OrganizationTopListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (OrganizationTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == OrganizationTopListViewItem_TypeInfo )
    return (OrganizationTopListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__Init(
        OrganizationTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v13; // x10
  int32_t v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  System_Action_o *v20; // x19

  if ( (byte_41851B1 & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_41851B1 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v13 = *(&OrganizationTopListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (OrganizationTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == OrganizationTopListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(OrganizationTopListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_B2C2F8(&this->fields.callbackFunc, callbackFunc);
  v19 = 1;
  switch ( v14 )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_13;
    case 4:
      v19 = 3;
      v14 = 2;
LABEL_13:
      this->fields.dispMode = v14;
      this->fields.state = v19;
      goto LABEL_14;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      OrganizationTopListViewObject__EventIntoStart(this, delay, v18);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      OrganizationTopListViewObject__EventEnterStart(this, delay, v18);
      return;
    case 8:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      OrganizationTopListViewObject__EventRetryStart(this, delay, v18);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        OrganizationTopListViewObject__SetupDisp(this, v18);
      v20 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0LL;
        sub_B2C2F8(p_callbackFunc, 0LL);
        System_Action__Invoke(v20, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__Init_20154600(
        OrganizationTopListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  OrganizationTopListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__Init_20155984(
        OrganizationTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  OrganizationTopListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__Init_20156560(
        OrganizationTopListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  OrganizationTopListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall OrganizationTopListViewObject__OnDestroy(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_41851AE & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41851AE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_B2C2F8(p_dragObject, 0LL);
  }
}


void __fastcall OrganizationTopListViewObject__SetItem(
        OrganizationTopListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall OrganizationTopListViewObject__SetupDisp(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  OrganizationTopListViewItemDraw_o *v10; // x0

  if ( (byte_41851B2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&OrganizationTopListViewItem_TypeInfo, v3);
    byte_41851B2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&OrganizationTopListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (OrganizationTopListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == OrganizationTopListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    OrganizationTopListViewItemDraw__SetItem(v10, (OrganizationTopListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewObject__Start(OrganizationTopListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    OrganizationTopListViewObject__Init(this, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall OrganizationTopListViewObject__ToString(
        OrganizationTopListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41851BC & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_41851BC = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(OrganizationTopListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
}


void __fastcall OrganizationTopListViewObject__add_callbackFunc(
        OrganizationTopListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_41851AB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41851AB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewObject_o *)sub_B2C728(v8);
  OrganizationTopListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall OrganizationTopListViewObject__remove_callbackFunc(
        OrganizationTopListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OrganizationTopListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_41851AC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41851AC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OrganizationTopListViewObject_o *)sub_B2C728(v8);
  OrganizationTopListViewObject__Awake(v11, v12);
}