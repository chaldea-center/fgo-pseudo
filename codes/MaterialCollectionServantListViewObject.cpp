void __fastcall MaterialCollectionServantListViewObject___ctor(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCBA8 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FCBA8 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantListViewObject__AttachedIconSetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x2
  MaterialCollectionServantListViewItemDraw_o *v8; // x0

  if ( (byte_40FCBA7 & 1) == 0 )
  {
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCBA7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (MaterialEventLogServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != MaterialEventLogServantListViewItem_TypeInfo )
    {
      goto LABEL_15;
    }
    if ( !LOBYTE(linkItem[1].fields.sortValue2) )
      ListViewObject__SetVisible((ListViewObject_o *)this, this->fields.dispMode != 0, 0LL);
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v8 = this->fields.itemDraw;
      if ( v8 )
      {
        MaterialCollectionServantListViewItemDraw__SetLastTimeIcon(
          v8,
          (MaterialEventLogServantListViewItem_o *)linkItem,
          v7);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall MaterialCollectionServantListViewObject__Awake(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct MaterialCollectionServantListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FCB94 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___, method);
    byte_40FCB94 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct MaterialCollectionServantListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                    dispObject,
                                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewItemDraw___);
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


void __fastcall MaterialCollectionServantListViewObject__ClearNewIcon(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct MaterialCollectionServantListViewItemDraw_o *itemDraw; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (servantFaceIcon = itemDraw->fields.servantFaceIcon) == 0LL )
    sub_B170D4();
  ServantFaceIconComponent__ClearShiningIcon(servantFaceIcon, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall MaterialCollectionServantListViewObject__CreateDragObject(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  MaterialCollectionServantListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB98 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    byte_40FCB98 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (MaterialCollectionServantListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  MaterialCollectionServantListViewObject__SetupDisp(v6, v8);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventEnterMove(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCB9F & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6140, v3);
    byte_40FCB9F = 1;
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
  v14 = v32.fields.y + 1000.0;
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
  v25 = (System_Int32_array **)StringLiteral_6140;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6140;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall MaterialCollectionServantListViewObject__EventEnterMove2(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCBA0 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FCBA0 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventEnterStart(
        MaterialCollectionServantListViewObject_o *this,
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
  MaterialCollectionServantListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB9E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_B16FFC(&StringLiteral_6139, v5);
    byte_40FCB9E = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL )
  {
    sub_B170D4();
  }
  v15 = (MaterialCollectionServantListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6139,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventExitMove(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCBA2 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_6142, v4);
    byte_40FCBA2 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v6);
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
    v16 = v35.fields.x + 1000.0;
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
    v28 = (System_Int32_array **)StringLiteral_6142;
    v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6142;
    sub_B16F98((BattleServantConfConponent_o *)&v20->fields.callWhenFinished, v28, v29, v30, v31, v32, v33, v34);
  }
}


void __fastcall MaterialCollectionServantListViewObject__EventExitMove2(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCBA3 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FCBA3 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventExitStart(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCBA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6141, v6);
    byte_40FCBA1 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    MaterialCollectionServantListViewObject__EventMoveEnd(this, v16);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B170D4();
  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(
    (MaterialCollectionServantListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6141,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventIntoMove(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCB9C & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6152, v3);
    byte_40FCB9C = 1;
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
  v25 = (System_Int32_array **)StringLiteral_6152;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6152;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v25, v26, v27, v28, v29, v30, v31);
}


void __fastcall MaterialCollectionServantListViewObject__EventIntoMove2(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCB9D & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    byte_40FCB9D = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  MaterialCollectionServantListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  MaterialCollectionServantListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__EventIntoStart(
        MaterialCollectionServantListViewObject_o *this,
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
  MaterialCollectionServantListViewObject_o *v16; // x21
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FCB9B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___, method);
    sub_B16FFC(&StringLiteral_6151, v5);
    byte_40FCB9B = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  MaterialCollectionServantListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MaterialCollectionServantListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialCollectionServantListViewObject___)) == 0LL
    || (v16 = (MaterialCollectionServantListViewObject_o *)Component_srcLineSprite,
        zero = UnityEngine_Vector3__get_zero(0LL),
        MaterialCollectionServantListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17),
        !*p_dragObject)
    || (transform = UnityEngine_GameObject__get_transform(*p_dragObject, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__TransformPoint_34933176(v19, 1000.0, 0.0, 0.0, 0LL),
        !transform) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6151,
    delay,
    0LL);
}


void __fastcall MaterialCollectionServantListViewObject__EventMoveEnd(
        MaterialCollectionServantListViewObject_o *this,
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


MaterialCollectionServantListViewItem_o *__fastcall MaterialCollectionServantListViewObject__GetItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40FCB96 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, method);
    byte_40FCB96 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    return (MaterialCollectionServantListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  __int64 v10; // x1
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v14; // x10
  int32_t v15; // w24
  struct ListViewItem_o *v16; // x0
  __int64 v17; // x10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w9
  int32_t v35; // w8
  System_Action_o *klass; // x19

  if ( (byte_40FCB99 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, *(_QWORD *)&initMode);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v10);
    byte_40FCB99 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v14 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
      v15 = initMode;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v15 != 0, 0LL);
  ((void (__fastcall *)(MaterialCollectionServantListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v15 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  v16 = this->fields.linkItem;
  if ( v16 )
  {
    v17 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17
      && (MaterialEventLogServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
    {
      MaterialEventLogServantListViewItem__SetDummy((MaterialEventLogServantListViewItem_o *)v16, 0LL);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v19, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v34 = 1;
  v35 = v15;
  switch ( v15 )
  {
    case 0:
    case 2:
      goto LABEL_20;
    case 1:
      v35 = v15;
      goto LABEL_19;
    case 3:
      v35 = 2;
LABEL_19:
      v34 = v15;
LABEL_20:
      this->fields.dispMode = v35;
      this->fields.state = v34;
      goto LABEL_21;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_25;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventIntoStart(this, delay, v27);
      return;
    case 7:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      MaterialCollectionServantListViewObject__EventExitStart(this, delay, v27);
      return;
    default:
LABEL_21:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_25:
        MaterialCollectionServantListViewObject__SetupDisp(this, v27);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B16F98(p_callbackFunc, 0LL, v28, v29, v30, v31, v32, v33);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall MaterialCollectionServantListViewObject__InitItem(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_30100788(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_30101396(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__Init_30101476(
        MaterialCollectionServantListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  MaterialCollectionServantListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall MaterialCollectionServantListViewObject__OnClickSelect(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v7; // x10
  struct ListViewItem_o *v8; // x8
  __int64 v9; // x11
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FCBA5 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, method);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9938, v5);
    byte_40FCBA5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v7 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
    {
      if ( MaterialCollectionServantListViewItem__get_IsCanNotSelect(
             (MaterialCollectionServantListViewItem_o *)linkItem,
             method) )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      v8 = this->fields.linkItem;
      if ( v8 )
      {
        v9 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v8->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (MaterialEventLogServantListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] == MaterialEventLogServantListViewItem_TypeInfo
          && LOBYTE(v8[1].fields.sortValue2) )
        {
          return;
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( manager )
      {
        UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9938, (Il2CppObject *)this, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall MaterialCollectionServantListViewObject__OnDestroy(
        MaterialCollectionServantListViewObject_o *this,
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

  if ( (byte_40FCB95 & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FCB95 = 1;
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


void __fastcall MaterialCollectionServantListViewObject__OnLongPush(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *manager; // x0

  if ( (byte_40FCBA6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9991, method);
    sub_B16FFC(&StringLiteral_10009, v3);
    byte_40FCBA6 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_40693392(gameObject, (System_String_o *)StringLiteral_10009, 0LL),
          (manager = (UnityEngine_Component_o *)this->fields.manager) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9991, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantListViewObject__SetInput(
        MaterialCollectionServantListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x1
  MaterialCollectionServantListViewItemDraw_o *v11; // x0

  if ( (byte_40FCB97 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, isInput);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCB97 = 1;
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
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v9 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (MaterialCollectionServantListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
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
    MaterialCollectionServantListViewItemDraw__SetInput(v11, (MaterialCollectionServantListViewItem_o *)v10, 0, v7);
  }
}


void __fastcall MaterialCollectionServantListViewObject__SetItem(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCollectionServantListViewObject__SetItem_30108560(
        MaterialCollectionServantListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall MaterialCollectionServantListViewObject__SetupDisp(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  ListViewItem_c *klass; // x9
  unsigned int v7; // w10
  __int64 v8; // x12
  struct ListViewItem_o *v9; // x20
  MaterialEventLogServantListViewItem_o *v10; // x21
  struct ListViewItem_o *v11; // x23
  bool v12; // w1
  __int64 v13; // x12
  UnityEngine_Object_o *itemDraw; // x22
  const MethodInfo *v15; // x3
  MaterialCollectionServantListViewItemDraw_o *v16; // x0
  const MethodInfo *v17; // x1
  MaterialCollectionServantListViewItemDraw_o *v18; // x0

  if ( (byte_40FCB9A & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItem_TypeInfo, method);
    sub_B16FFC(&MaterialEventLogServantListViewItem_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FCB9A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
  {
    v10 = 0LL;
    v11 = 0LL;
    v9 = 0LL;
    v12 = 0;
    goto LABEL_19;
  }
  klass = linkItem->klass;
  v7 = *(&linkItem->klass->_2.bitflags2 + 1);
  v8 = *(&MaterialCollectionServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( v7 >= (unsigned int)v8 )
  {
    if ( (MaterialCollectionServantListViewItem_c *)klass->_2.typeHierarchy[v8 - 1] == MaterialCollectionServantListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v13 = *(&MaterialEventLogServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( v7 >= (unsigned int)v13 )
  {
    if ( (MaterialEventLogServantListViewItem_c *)klass->_2.typeHierarchy[v13 - 1] == MaterialEventLogServantListViewItem_TypeInfo )
      v11 = this->fields.linkItem;
    else
      v11 = 0LL;
    if ( v9 )
      goto LABEL_12;
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  v11 = 0LL;
  if ( !v9 )
    goto LABEL_17;
LABEL_12:
  v12 = this->fields.dispMode != 0;
LABEL_18:
  v10 = (MaterialEventLogServantListViewItem_o *)v11;
LABEL_19:
  ListViewObject__SetVisible((ListViewObject_o *)this, v12, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    if ( v11 )
    {
      if ( v10->fields.isDummy )
      {
LABEL_28:
        MaterialEventLogServantListViewItem__DummyVisible(v10, 0LL);
        return;
      }
      v16 = this->fields.itemDraw;
      if ( v16 )
      {
        MaterialCollectionServantListViewItemDraw__SetItem(
          v16,
          (MaterialCollectionServantListViewItem_o *)v9,
          this->fields.dispMode,
          v15);
        MaterialCollectionServantListViewObject__AttachedIconSetupDisp(this, v17);
        goto LABEL_28;
      }
LABEL_32:
      sub_B170D4();
    }
    v18 = this->fields.itemDraw;
    if ( !v18 )
      goto LABEL_32;
    MaterialCollectionServantListViewItemDraw__SetItem(
      v18,
      (MaterialCollectionServantListViewItem_o *)v9,
      this->fields.dispMode,
      v15);
  }
  else if ( v11 )
  {
    goto LABEL_28;
  }
}


System_String_o *__fastcall MaterialCollectionServantListViewObject__ToString(
        MaterialCollectionServantListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x20
  System_String_o *v6; // x21
  int32_t *v7; // x0
  __int64 v8; // x9
  float z; // w10
  System_String_o *v10; // x0
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  float v13; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCBA4 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80, v3);
    byte_40FCBA4 = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v4 = j_il2cpp_value_box_0(MaterialCollectionServantListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B170D4();
  v5 = v4;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v7 = (int32_t *)j_il2cpp_object_unbox_0(v5);
  v8 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v7;
  v12 = v8;
  v13 = z;
  v10 = UnityEngine_Vector3__ToString(v14, (const MethodInfo *)&v12);
  return System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_80, v10, 0LL);
}


void __fastcall MaterialCollectionServantListViewObject__add_callbackFunc(
        MaterialCollectionServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCB92 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCB92 = 1;
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
  sub_B173C8(v8);
  MaterialCollectionServantListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCollectionServantListViewObject__remove_callbackFunc(
        MaterialCollectionServantListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FCB93 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FCB93 = 1;
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
  sub_B173C8(v8);
  MaterialCollectionServantListViewObject__Awake(v11, v12);
}