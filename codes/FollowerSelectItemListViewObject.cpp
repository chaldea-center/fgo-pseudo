void __fastcall FollowerSelectItemListViewObject___ctor(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA747 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FA747 = 1;
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
  UnityEngine_GameObject_o *dispObject; // x0
  struct FollowerSelectItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA727 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___, method);
    byte_40FA727 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct FollowerSelectItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewItemDraw___);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__ChangeDisplaySkill(
        FollowerSelectItemListViewObject_o *this,
        int32_t displaySkill,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x2
  FollowerSelectItemListViewItemDraw_o *v11; // x0

  if ( (byte_40FA745 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&displaySkill);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA745 = 1;
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
      && (v9 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == FollowerSelectItemListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_B170D4();
    FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
      v11,
      displaySkill,
      (FollowerSelectItemListViewItem_o *)v10,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall FollowerSelectItemListViewObject__CreateDragObject(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  FollowerSelectItemListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA72D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    byte_40FA72D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (FollowerSelectItemListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewObject__EventEnterMove(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x20
  ListViewObject_c *v12; // x0
  float v13; // s10
  float v14; // s9
  float v15; // s8
  TweenPosition_o *v16; // x0
  TweenPosition_o *v17; // x20
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

  if ( (byte_40FA734 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6140/*"EventEnterMove2"*/, v3);
    byte_40FA734 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
  if ( !parent )
    goto LABEL_12;
  v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = this->fields.dragObject;
  v12 = ListViewObject_TypeInfo;
  v13 = v32.fields.x + 0.0;
  v14 = v32.fields.y + 1100.0;
  v15 = v32.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v12 = ListViewObject_TypeInfo;
  }
  v33.fields.x = v13;
  v33.fields.y = v14;
  v33.fields.z = v15;
  v16 = TweenPosition__Begin(v11, v12->static_fields->BASE_MOVE_TIME, v33, 0LL);
  if ( !v16 )
LABEL_12:
    sub_B170D4();
  v17 = v16;
  v16->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.eventReceiver, gameObject, v19, v20, v21, v22, v23, v24);
  v25 = (System_Int32_array **)StringLiteral_6140/*"EventEnterMove2"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6140/*"EventEnterMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_40FA735 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FA735 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  FollowerSelectItemListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA733 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B16FFC(&StringLiteral_6139/*"EventEnterMove"*/, v5);
    byte_40FA733 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_B16F98(
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
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL )
  {
    sub_B170D4();
  }
  v15 = (FollowerSelectItemListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  FollowerSelectItemListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6139/*"EventEnterMove"*/,
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
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v10; // x0
  int v11; // s0
  UnityEngine_GameObject_o *v14; // x20
  ListViewObject_c *v15; // x0
  float v16; // s8
  float v17; // s10
  float v18; // s9
  TweenPosition_o *v19; // x0
  TweenPosition_o *v20; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FA737 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_6142/*"EventExitMove2"*/, v4);
    byte_40FA737 = 1;
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
    v7 = this->fields.dragObject;
    if ( !v7 )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v10 )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(v10, 0LL);
    if ( !parent )
      goto LABEL_17;
    v35 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v11, 0LL);
    v14 = this->fields.dragObject;
    v15 = ListViewObject_TypeInfo;
    v16 = v35.fields.x + 1100.0;
    v17 = v35.fields.y + 0.0;
    v18 = v35.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v15 = ListViewObject_TypeInfo;
    }
    v36.fields.x = v16;
    v36.fields.y = v17;
    v36.fields.z = v18;
    v19 = TweenPosition__Begin(v14, v15->static_fields->BASE_MOVE_TIME, v36, 0LL);
    if ( !v19 )
LABEL_17:
      sub_B170D4();
    v20 = v19;
    v19->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.eventReceiver, gameObject, v22, v23, v24, v25, v26, v27);
    v28 = (System_Int32_array **)StringLiteral_6142/*"EventExitMove2"*/;
    v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6142/*"EventExitMove2"*/;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.callWhenFinished, v28, v29, v30, v31, v32, v33, v34);
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

  if ( (byte_40FA738 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FA738 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA736 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6141/*"EventExitMove"*/, v6);
    byte_40FA736 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  FollowerSelectItemListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(FollowerSelectItemListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B16F98(
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
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    FollowerSelectItemListViewObject__EventMoveEnd(this, v16);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B170D4();
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
    (System_String_o *)StringLiteral_6141/*"EventExitMove"*/,
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v7; // x0
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v14; // x0
  float z; // s10
  TweenPosition_o *v16; // x0
  TweenPosition_o *v17; // x20
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

  if ( (byte_40FA731 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6152/*"EventIntoMove2"*/, v3);
    byte_40FA731 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(v7, 0LL);
  if ( !parent )
    goto LABEL_12;
  v32 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = this->fields.dragObject;
  x = v32.fields.x;
  y = v32.fields.y;
  v14 = ListViewObject_TypeInfo;
  z = v32.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v14 = ListViewObject_TypeInfo;
  }
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v16 = TweenPosition__Begin(v11, v14->static_fields->BASE_MOVE_TIME, v33, 0LL);
  if ( !v16 )
LABEL_12:
    sub_B170D4();
  v17 = v16;
  v16->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.eventReceiver, gameObject, v19, v20, v21, v22, v23, v24);
  v25 = (System_Int32_array **)StringLiteral_6152/*"EventIntoMove2"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6152/*"EventIntoMove2"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_40FA732 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FA732 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  FollowerSelectItemListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  FollowerSelectItemListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA730 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___, method);
    sub_B16FFC(&StringLiteral_6151/*"EventIntoMove"*/, v5);
    byte_40FA730 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_FollowerSelectItemListViewObject___)) == 0LL
    || (v16 = (FollowerSelectItemListViewObject_o *)Component_srcLineSprite,
        zero = UnityEngine_Vector3__get_zero(0LL),
        FollowerSelectItemListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
        !*p_dragObject)
    || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_34933176(v19, 1100.0, 0.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6151/*"EventIntoMove"*/,
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


FollowerSelectItemListViewItem_o *__fastcall FollowerSelectItemListViewObject__GetItem(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FA72A & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    byte_40FA72A = 1;
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
  UnityEngine_Transform_o *v16; // x0
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

  if ( (byte_40FA72E & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40FA72E = 1;
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
          (v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v16, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B16F98(
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
          sub_B16F98(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
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
void __fastcall FollowerSelectItemListViewObject__Init_26088308(
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
void __fastcall FollowerSelectItemListViewObject__Init_26090808(
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
void __fastcall FollowerSelectItemListViewObject__Init_26091372(
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

  if ( (byte_40FA739 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9938/*"OnClickSelectListView"*/, method);
    byte_40FA739 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9938/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnClickSupport(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA744 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9944/*"OnClickSupportListView"*/, method);
    byte_40FA744 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9944/*"OnClickSupportListView"*/, (Il2CppObject *)this, 0LL);
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

  if ( (byte_40FA729 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA729 = 1;
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
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPush(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9991/*"OnLongPushListView"*/, method);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v3);
    byte_40FA73A = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL),
          (manager = (UnityEngine_Component_o *)this->fields.manager) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9991/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73F & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v3);
    sub_B16FFC(&StringLiteral_9986/*"OnLongPushAppendSkill1ListView"*/, v4);
    byte_40FA73F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9986/*"OnLongPushAppendSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA740 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9987/*"OnLongPushAppendSkill2ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA740 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9987/*"OnLongPushAppendSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA741 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9988/*"OnLongPushAppendSkill3ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA741 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9988/*"OnLongPushAppendSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill4(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA742 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v3);
    sub_B16FFC(&StringLiteral_9989/*"OnLongPushAppendSkill4ListView"*/, v4);
    byte_40FA742 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9989/*"OnLongPushAppendSkill4ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushAppendSkill5(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA743 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9990/*"OnLongPushAppendSkill5ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA743 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9990/*"OnLongPushAppendSkill5ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushEquip(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9992/*"OnLongPushServantEquip"*/, method);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v3);
    byte_40FA73B = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL),
          (manager = (UnityEngine_Component_o *)this->fields.manager) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9992/*"OnLongPushServantEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill1(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73C & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9993/*"OnLongPushSkill1ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA73C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9993/*"OnLongPushSkill1ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill2(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73D & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9994/*"OnLongPushSkill2ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA73D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9994/*"OnLongPushSkill2ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OnLongPushSkill3(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x10
  ServantLeaderInfo_o *ServantLeader; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA73E & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9995/*"OnLongPushSkill3ListView"*/, v3);
    sub_B16FFC(&StringLiteral_10009/*"OnPressCancel"*/, v4);
    byte_40FA73E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = *(&FollowerSelectItemListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6
      && (FollowerSelectItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == FollowerSelectItemListViewItem_TypeInfo )
    {
      ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(
                        (FollowerSelectItemListViewItem_o *)linkItem,
                        0LL);
      if ( ServantLeader )
      {
        if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0LL) )
          return;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009/*"OnPressCancel"*/, 0LL);
          manager = (UnityEngine_Component_o *)this->fields.manager;
          if ( manager )
          {
            UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9995/*"OnLongPushSkill3ListView"*/,
              (Il2CppObject *)this,
              0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FollowerSelectItemListViewObject__OpenSupportClassBoardBuff(
        FollowerSelectItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FA746 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10071/*"OpenSupportClassBoard"*/, method);
    byte_40FA746 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B170D4();
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10071/*"OpenSupportClassBoard"*/, (Il2CppObject *)this, 0LL);
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

  if ( (byte_40FA72B & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA72B = 1;
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
      sub_B170D4();
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

  if ( (byte_40FA72C & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, isInput);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA72C = 1;
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
      sub_B170D4();
    FollowerSelectItemListViewItemDraw__SetInput(v9, v7, isInput, 0, v8);
  }
}


void __fastcall FollowerSelectItemListViewObject__SetItem(
        FollowerSelectItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerSelectItemListViewObject__SetItem_26099668(
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
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  int32_t *manager; // x0
  __int64 v12; // x9
  int32_t *p_dispMode; // x21

  if ( (byte_40FA72F & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItem_TypeInfo, method);
    sub_B16FFC(&FollowerSelectItemListViewManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA72F = 1;
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
      v12 = *(&FollowerSelectItemListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) >= (unsigned int)v12
        && *(FollowerSelectItemListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v12 - 8) == FollowerSelectItemListViewManager_TypeInfo )
      {
        if ( this->fields.itemDraw )
        {
          p_dispMode = &this->fields.dispMode;
          FollowerSelectItemListViewItemDraw__SetItem(
            this->fields.itemDraw,
            (FollowerSelectItemListViewItem_o *)linkItem,
            this->fields.dispMode,
            manager[111],
            v10);
          goto LABEL_18;
        }
      }
      else
      {
        sub_B173C8(manager);
      }
    }
    sub_B170D4();
  }
  p_dispMode = &this->fields.dispMode;
LABEL_18:
  if ( *p_dispMode == 4 )
    FollowerSelectItemListViewObject__SetInputTutorial(this, 1, v9);
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
  struct ListViewManager_o *v4; // x8
  int32_t v5; // w20
  const MethodInfo *v6; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA728 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA728 = 1;
  }
  if ( !this->fields.state )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(manager, 0LL, 0LL) )
    {
      v4 = this->fields.manager;
      if ( !v4 )
        sub_B170D4();
      if ( v4->fields.isInput )
        v5 = 3;
      else
        v5 = 2;
    }
    else
    {
      v5 = 2;
    }
    zero = UnityEngine_Vector3__get_zero(0LL);
    FollowerSelectItemListViewObject__Init(this, v5, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v6);
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

  if ( (byte_40FA725 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FA725 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewObject_o *)sub_B173C8(v8);
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

  if ( (byte_40FA726 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FA726 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FollowerSelectItemListViewObject_o *)sub_B173C8(v8);
  FollowerSelectItemListViewObject__Awake(v11, v12);
}