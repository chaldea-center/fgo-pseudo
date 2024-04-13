void __fastcall FollowerSelectItemListViewObject___ctor(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBC2A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC2A = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct FollowerSelectItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBC0A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBC0A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct FollowerSelectItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall FollowerSelectItemListViewObject__ChangeDisplaySkill(
        FollowerSelectItemListViewObject_o *this,
        int32_t displaySkill,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v13; // x11
  struct ListViewItem_o *v14; // x2
  FollowerSelectItemListViewItemDraw_o *v15; // x0

  if ( (byte_42EBC28 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, displaySkill, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBC28 = 1;
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
      && (v13 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v14 = this->fields.linkItem;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    v15 = this->fields.itemDraw;
    if ( !v15 )
      sub_B5D69C(0LL, v10);
    FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
      v15,
      displaySkill,
      (FollowerSelectItemListViewItem_o *)v14,
      v11);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall FollowerSelectItemListViewObject__CreateDragObject(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  FollowerSelectItemListViewObject_o *v8; // x20
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBC10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, (_DWORD)method, v2, v3);
    byte_42EBC10 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (FollowerSelectItemListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v8, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  ListViewObject_c *v14; // x0
  float v15; // s10
  float v16; // s9
  float v17; // s8
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBC17 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6237/*"EventEnterMove2"*/, v5, v6, v7);
    byte_42EBC17 = 1;
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  v14 = ListViewObject_TypeInfo;
  v15 = v33.fields.x + 0.0;
  v16 = v33.fields.y + 1100.0;
  v17 = v33.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v14 = ListViewObject_TypeInfo;
  }
  v34.fields.x = v15;
  v34.fields.y = v16;
  v34.fields.z = v17;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v14->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_6237/*"EventEnterMove2"*/;
  v18[3].monitor = (void *)StringLiteral_6237/*"EventEnterMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall FollowerSelectItemListViewObject__EventEnterMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42EBC18 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC18 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FollowerSelectItemListViewObject_o *v19; // x20
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBC16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6236/*"EventEnterMove"*/, v7, v8, v9);
    byte_42EBC16 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL )
  {
    sub_B5D69C(dragObject, v17);
  }
  v19 = (FollowerSelectItemListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v19, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6236/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventExitMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x20
  ListViewObject_c *v19; // x0
  float v20; // s8
  float v21; // s10
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBC1A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6239/*"EventExitMove2"*/, v8, v9, v10);
    byte_42EBC1A = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v12);
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
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v38 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v15, 0LL);
    v18 = this->fields.dragObject;
    v19 = ListViewObject_TypeInfo;
    v20 = v38.fields.x + 1100.0;
    v21 = v38.fields.y + 0.0;
    v22 = v38.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v19 = ListViewObject_TypeInfo;
    }
    v39.fields.x = v20;
    v39.fields.y = v21;
    v39.fields.z = v22;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v19->static_fields->BASE_MOVE_TIME, v39, 0LL);
    if ( !transform )
LABEL_17:
      sub_B5D69C(transform, v12);
    v23 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_6239/*"EventExitMove2"*/;
    v23[3].monitor = (void *)StringLiteral_6239/*"EventExitMove2"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
  }
}


void __fastcall FollowerSelectItemListViewObject__EventExitMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42EBC1B & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC1B = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventExitStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBC19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6238/*"EventExitMove"*/, v10, v11, v12);
    byte_42EBC19 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v20);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B5D69C(dragObject, v20);
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(
    (FollowerSelectItemListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v23);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6238/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBC14 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6249/*"EventIntoMove2"*/, v5, v6, v7);
    byte_42EBC14 = 1;
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  x = v33.fields.x;
  y = v33.fields.y;
  v16 = ListViewObject_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v16 = ListViewObject_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_6249/*"EventIntoMove2"*/;
  v18[3].monitor = (void *)StringLiteral_6249/*"EventIntoMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall FollowerSelectItemListViewObject__EventIntoMove2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42EBC15 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC15 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  FollowerSelectItemListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventIntoStart(
        FollowerSelectItemListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  FollowerSelectItemListViewObject_o *v20; // x21
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBC13 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6248/*"EventIntoMove"*/, v7, v8, v9);
    byte_42EBC13 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( !dragObject
    || (v20 = (FollowerSelectItemListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        FollowerSelectItemListViewObject__Init(v20, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v21),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1100.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B5D69C(dragObject, v18);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6248/*"EventIntoMove"*/,
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EBC0D & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC0D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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

  if ( (byte_42EBC11 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EBC11 = 1;
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
      sub_B5D69C(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B5D560(
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
          sub_B5D560(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
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
void __fastcall FollowerSelectItemListViewObject__Init_31098592(
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
void __fastcall FollowerSelectItemListViewObject__Init_31101084(
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
void __fastcall FollowerSelectItemListViewObject__Init_31101648(
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBC1C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, (_DWORD)method, v2, v3);
    byte_42EBC1C = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10076/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBC27 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10082/*"OnClickSupportListView"*/, (_DWORD)method, v2, v3);
    byte_42EBC27 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10082/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnDestroy(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EBC0C & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EBC0C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPush(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBC1D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBC1D = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC22 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10124/*"OnLongPushAppendSkill1ListView"*/, v8, v9, v10);
    byte_42EBC22 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10124/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC23 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10125/*"OnLongPushAppendSkill2ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC23 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10125/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC24 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10126/*"OnLongPushAppendSkill3ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC24 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10126/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC25 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10127/*"OnLongPushAppendSkill4ListView"*/, v8, v9, v10);
    byte_42EBC25 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10127/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC26 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10128/*"OnLongPushAppendSkill5ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC26 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10128/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_42EBC1E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10130/*"OnLongPushServantEquip"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v5, v6, v7);
    byte_42EBC1E = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_B5D69C(gameObject, v9);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10130/*"OnLongPushServantEquip"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC1F & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10131/*"OnLongPushSkill1ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC1F = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10131/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC20 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10132/*"OnLongPushSkill2ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC20 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10132/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewItem_o *linkItem; // x0
  __int64 v12; // x10

  if ( (byte_42EBC21 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10133/*"OnLongPushSkill3ListView"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10147/*"OnPressCancel"*/, v8, v9, v10);
    byte_42EBC21 = 1;
  }
  linkItem = (FollowerSelectItemListViewItem_o *)this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
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
          UnityEngine_GameObject__SendMessage_41595196(
            (UnityEngine_GameObject_o *)linkItem,
            (System_String_o *)StringLiteral_10147/*"OnPressCancel"*/,
            0LL);
          linkItem = (FollowerSelectItemListViewItem_o *)this->fields.manager;
          if ( linkItem )
          {
            UnityEngine_Component__SendMessage(
              (UnityEngine_Component_o *)linkItem,
              (System_String_o *)StringLiteral_10133/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(linkItem, method);
  }
}


void __fastcall FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42EBC29 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10209/*"OpenSupportClassBoard"*/, (_DWORD)method, v2, v3);
    byte_42EBC29 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10209/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetInput(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v10; // x1
  const MethodInfo *v11; // x4
  FollowerSelectItemListViewItemDraw_o *v12; // x0

  if ( (byte_42EBC0E & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBC0E = 1;
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
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_B5D69C(0LL, v10);
    FollowerSelectItemListViewItemDraw__SetInput(v12, v10, isInput, 0, v11);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetInputTutorial(
        FollowerSelectItemListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewItem_o *v10; // x1
  const MethodInfo *v11; // x4
  FollowerSelectItemListViewItemDraw_o *v12; // x0

  if ( (byte_42EBC0F & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EBC0F = 1;
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
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_B5D69C(0LL, v10);
    FollowerSelectItemListViewItemDraw__SetInput(v12, v10, isInput, 0, v11);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetItem_31110468(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v12; // x10
  bool v13; // w1
  UnityEngine_Object_o *itemDraw; // x21
  FollowerSelectItemListViewManager_c *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x4
  int32_t *manager; // x0
  __int64 v19; // x9
  int32_t *p_dispMode; // x21

  if ( (byte_42EBC12 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EBC12 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      v13 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v13 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v13, 0LL);
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
      v15 = FollowerSelectItemListViewManager_TypeInfo;
      v19 = *(&FollowerSelectItemListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) >= (unsigned int)v19
        && *(FollowerSelectItemListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v19 - 8) == FollowerSelectItemListViewManager_TypeInfo )
      {
        if ( this->fields.itemDraw )
        {
          p_dispMode = &this->fields.dispMode;
          FollowerSelectItemListViewItemDraw__SetItem(
            this->fields.itemDraw,
            (FollowerSelectItemListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[111],
            v17);
          goto LABEL_18;
        }
      }
      else
      {
        sub_B5D990(manager);
      }
    }
    sub_B5D69C(manager, v15);
  }
  p_dispMode = &this->fields.dispMode;
LABEL_18:
  if ( *p_dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v16);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *manager; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct ListViewManager_o *v8; // x8
  int32_t v9; // w20
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBC0B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC0B = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality(manager, 0LL, 0LL);
    if ( v6 )
    {
      v8 = this->fields.manager;
      if ( !v8 )
        sub_B5D69C(v6, v7);
      if ( v8->fields.isInput )
        v9 = 3;
      else
        v9 = 2;
    }
    else
    {
      v9 = 2;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    FollowerSelectItemListViewObject__Init(this, v9, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v10);
  }
}


void __fastcall FollowerSelectItemListViewObject__add_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FollowerSelectItemListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EBC08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBC08 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FollowerSelectItemListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall FollowerSelectItemListViewObject__remove_callbackFunc(
        FollowerSelectItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  FollowerSelectItemListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EBC09 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBC09 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  FollowerSelectItemListViewObject__Awake(v12, v13);
}