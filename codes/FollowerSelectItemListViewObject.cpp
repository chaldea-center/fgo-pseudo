void __fastcall FollowerSelectItemListViewObject___ctor(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AA86 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418AA86 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewObject__Awake(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct FollowerSelectItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418AA66 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___, method);
    byte_418AA66 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct FollowerSelectItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__ChangeDisplaySkill(
        FollowerSelectItemListViewObject_o *this,
        int32_t displaySkill,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v10; // x11
  struct ListViewItem_o *v11; // x2
  FollowerSelectItemListViewItemDraw_o *v12; // x0

  if ( (byte_418AA84 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&displaySkill);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418AA84 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v10 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_B2C434(0LL, v7);
    FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
      v12,
      displaySkill,
      (FollowerSelectItemListViewItem_o *)v11,
      v8);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall FollowerSelectItemListViewObject__CreateDragObject(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  FollowerSelectItemListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA6C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    byte_418AA6C = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  v6 = (FollowerSelectItemListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
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
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418AA73 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6158/*"EventEnterMove2"*/, v3);
    byte_418AA73 = 1;
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
  v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = this->fields.dragObject;
  v10 = ListViewObject_TypeInfo;
  v11 = v29.fields.x + 0.0;
  v12 = v29.fields.y + 1100.0;
  v13 = v29.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v10 = ListViewObject_TypeInfo;
  }
  v30.fields.x = v11;
  v30.fields.y = v12;
  v30.fields.z = v13;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v10->static_fields->BASE_MOVE_TIME, v30, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B2C434(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3], gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6158/*"EventEnterMove2"*/;
  v14[3].monitor = (void *)StringLiteral_6158/*"EventEnterMove2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3].monitor, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall FollowerSelectItemListViewObject__EventEnterMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_418AA74 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_418AA74 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FollowerSelectItemListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA72 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B2C35C(&StringLiteral_6157/*"EventEnterMove"*/, v5);
    byte_418AA72 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL )
  {
    sub_B2C434(dragObject, v13);
  }
  v15 = (FollowerSelectItemListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6157/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventExitMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x20
  ListViewObject_c *v13; // x0
  float v14; // s8
  float v15; // s10
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418AA76 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_6160/*"EventExitMove2"*/, v4);
    byte_418AA76 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v6);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_17;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    v13 = ListViewObject_TypeInfo;
    v14 = v32.fields.x + 1100.0;
    v15 = v32.fields.y + 0.0;
    v16 = v32.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v13 = ListViewObject_TypeInfo;
    }
    v33.fields.x = v14;
    v33.fields.y = v15;
    v33.fields.z = v16;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v13->static_fields->BASE_MOVE_TIME, v33, 0LL);
    if ( !transform )
LABEL_17:
      sub_B2C434(transform, v6);
    v17 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B2C2F8((BattleServantConfConponent_o *)&v17[3], gameObject, v19, v20, v21, v22, v23, v24);
    v25 = (System_Int32_array **)StringLiteral_6160/*"EventExitMove2"*/;
    v17[3].monitor = (void *)StringLiteral_6160/*"EventExitMove2"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&v17[3].monitor, v25, v26, v27, v28, v29, v30, v31);
  }
}


void __fastcall FollowerSelectItemListViewObject__EventExitMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_418AA77 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_418AA77 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventExitStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA75 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_6159/*"EventExitMove"*/, v6);
    byte_418AA75 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v14);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B2C434(dragObject, v14);
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(
    (FollowerSelectItemListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6159/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoMove(
        FollowerSelectItemListViewObject_o *this,
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
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418AA70 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6170/*"EventIntoMove2"*/, v3);
    byte_418AA70 = 1;
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
  v29 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL);
  v9 = this->fields.dragObject;
  x = v29.fields.x;
  y = v29.fields.y;
  v12 = ListViewObject_TypeInfo;
  z = v29.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v12 = ListViewObject_TypeInfo;
  }
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v9, v12->static_fields->BASE_MOVE_TIME, v30, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B2C434(dragObject, method);
  v14 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3], gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6170/*"EventIntoMove2"*/;
  v14[3].monitor = (void *)StringLiteral_6170/*"EventIntoMove2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14[3].monitor, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall FollowerSelectItemListViewObject__EventIntoMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_418AA71 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    byte_418AA71 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FollowerSelectItemListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  int v19; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA6F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B2C35C(&StringLiteral_6169/*"EventIntoMove"*/, v5);
    byte_418AA6F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( !dragObject
    || (v16 = (FollowerSelectItemListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        FollowerSelectItemListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__TransformPoint_35438660(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1100.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B2C434(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6169/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall FollowerSelectItemListViewObject__EventMoveEnd(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isOpenAfter = 0;
  p_callbackFunc[-1].fields.adjustHeight = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418AA69 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    byte_418AA69 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    return (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init(
        FollowerSelectItemListViewObject_o *this,
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
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w8
  System_Action_o *klass; // x19

  if ( (byte_418AA6D & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_418AA6D = 1;
  }
  if ( initMode == 5 )
  {
    FollowerSelectItemListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    if ( linkItem
      && (v13 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v14 = initMode;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B2C434(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    switch ( v14 )
    {
      case 0:
      case 1:
      case 2:
        this->fields.dispMode = v14;
        this->fields.state = 1;
        goto LABEL_15;
      case 3:
        v31 = 3;
        goto LABEL_20;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        FollowerSelectItemListViewObject__EventIntoStart(this, delay, v24);
        return;
      case 6:
        v31 = 4;
LABEL_20:
        this->fields.dispMode = v31;
        this->fields.state = v31;
        goto LABEL_21;
      default:
LABEL_15:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_22;
LABEL_21:
        FollowerSelectItemListViewObject__SetupDisp(this, v24);
LABEL_22:
        klass = (System_Action_o *)p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_B2C2F8(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
          System_Action__Invoke(klass, 0LL);
        }
        break;
    }
  }
}


void __fastcall FollowerSelectItemListViewObject__InitItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30677524(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30680016(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Init_30680580(
        FollowerSelectItemListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v9);
}


void __fastcall FollowerSelectItemListViewObject__OnClickSelect(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418AA78 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9970/*"OnClickSelectListView"*/, method);
    byte_418AA78 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B2C434(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9970/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418AA83 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9976/*"OnClickSupportListView"*/, method);
    byte_418AA83 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B2C434(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9976/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnDestroy(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_418AA68 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418AA68 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPush(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_418AA79 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10023/*"OnLongPushListView"*/, method);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v3);
    byte_418AA79 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_40660564(gameObject, (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B2C434(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10023/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA7E & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v3);
    sub_B2C35C(&StringLiteral_10018/*"OnLongPushAppendSkill1ListView"*/, v4);
    byte_418AA7E = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10018/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA7F & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10019/*"OnLongPushAppendSkill2ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA7F = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10019/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA80 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10020/*"OnLongPushAppendSkill3ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA80 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10020/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA81 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v3);
    sub_B2C35C(&StringLiteral_10021/*"OnLongPushAppendSkill4ListView"*/, v4);
    byte_418AA81 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10021/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA82 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10022/*"OnLongPushAppendSkill5ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA82 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10022/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_418AA7A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10024/*"OnLongPushServantEquip"*/, method);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v3);
    byte_418AA7A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_40660564(gameObject, (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B2C434(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10024/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA7B & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10025/*"OnLongPushSkill1ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA7B = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10025/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA7C & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10026/*"OnLongPushSkill2ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA7C = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10026/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v6; // x10

  if ( (byte_418AA7D & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10027/*"OnLongPushSkill3ListView"*/, v3);
    sub_B2C35C(&StringLiteral_10041/*"OnPressCancel"*/, v4);
    byte_418AA7D = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      linkItem = (FollowerSelectItemListViewItem_o *)FollowerSelectItemListViewItem__get_ServantLeader(linkItem, method);
      if ( linkItem )
      {
        if ( ServantLeaderInfo__IsHideSupport((ServantLeaderInfo_o *)linkItem, 0LL) )
          return;
        linkItem = (FollowerSelectItemListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( linkItem )
        {
          UnityEngine_GameObject__SendMessage_40660564(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10041/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10027/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B2C434(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418AA85 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10103/*"OpenSupportClassBoard"*/, method);
    byte_418AA85 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B2C434(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10103/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__SetInput(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v7; // x1
  const MethodInfo *v8; // x4
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_418AA6A & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418AA6A = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B2C434(0LL, v7);
    FollowerSelectItemListViewItemDraw__SetInput(v9, v7, isInput, 0, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__SetInputTutorial(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v7; // x1
  const MethodInfo *v8; // x4
  FollowerSelectItemListViewItemDraw_o *v9; // x0

  if ( (byte_418AA6B & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418AA6B = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B2C434(0LL, v7);
    FollowerSelectItemListViewItemDraw__SetInput(v9, v7, isInput, 0, v8);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetItem_30688864(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetupDisp(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewManager_c *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x4
  int32_t *manager; // x0
  __int64 v13; // x9
  int32_t *p_dispMode; // x21

  if ( (byte_418AA6E & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418AA6E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      v7 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v7 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = (int32_t *)this->fields.manager;
    if ( manager )
    {
      v9 = FollowerSelectItemListViewManager_TypeInfo;
      v13 = *(&FollowerSelectItemListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) >= (unsigned int)v13
        && *(FollowerSelectItemListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v13 - 8) == FollowerSelectItemListViewManager_TypeInfo )
      {
        if ( this->fields.itemDraw )
        {
          p_dispMode = &this->fields.dispMode;
          FollowerSelectItemListViewItemDraw__SetItem(
            this->fields.itemDraw,
            (FollowerSelectItemListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[111],
            v11);
          goto LABEL_18;
        }
      }
      else
      {
        sub_B2C728(manager);
      }
    }
    sub_B2C434(manager, v9);
  }
  p_dispMode = &this->fields.dispMode;
LABEL_18:
  if ( *p_dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v10);
  else
    ((void (__fastcall *)(FollowerSelectItemListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      *p_dispMode == 3,
      this->klass->vtable._10_Invalidation.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__Start(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct ListViewManager_o *v6; // x8
  int32_t v7; // w20
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418AA67 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AA67 = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
    if ( v4 )
    {
      v6 = this->fields.manager;
      if ( !v6 )
        sub_B2C434(v4, v5);
      if ( v6->fields.isInput )
        v7 = 3;
      else
        v7 = 2;
    }
    else
    {
      v7 = 2;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    FollowerSelectItemListViewObject__Init(this, v7, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v8);
  }
}


void __fastcall FollowerSelectItemListViewObject__add_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418AA64 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AA64 = 1;
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
  sub_B2C728(v8);
  FollowerSelectItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FollowerSelectItemListViewObject__remove_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FollowerSelectItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418AA65 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418AA65 = 1;
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
  sub_B2C728(v8);
  FollowerSelectItemListViewObject__Awake(v11, v12);
}