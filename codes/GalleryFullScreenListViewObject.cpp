void __fastcall GalleryFullScreenListViewObject___ctor(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B175E0 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B175E0 = 1;
  }
  this->fields.cgScale = 1.0;
  *(_QWORD *)&this->fields.cgHeight = 0x40000000240LL;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__Awake(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B175D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___, method);
    byte_4B175D5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCB254(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
  this->fields.itemDraw = (struct GalleryFullScreenListViewItemDraw_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


float __fastcall GalleryFullScreenListViewObject__CalcGameScreenAspectRatio(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  float v8; // s0
  float v9; // s1

  if ( (byte_4B175DC & 1) == 0 )
  {
    sub_1BCAFF8(&ManagerConfig_TypeInfo, method);
    byte_4B175DC = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v2->static_fields;
  v4 = (float)static_fields[22];
  v5 = v4 / (float)static_fields[20];
  v6 = v4 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  v8 = (float)height / (float)UnityEngine_Screen__get_width(0LL);
  if ( v8 <= v5 )
    v9 = v8;
  else
    v9 = v5;
  if ( v8 < v6 )
    return v6;
  else
    return v9;
}


UnityEngine_GameObject_o *__fastcall GalleryFullScreenListViewObject__CreateDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x4

  if ( (byte_4B175D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___, method);
    byte_4B175D8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___)) == 0LL) )
  {
    sub_1BCB254(DragObject, v4);
  }
  GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)DragObject, 2, 0LL, 0LL, v6);
  return v5;
}


void __fastcall GalleryFullScreenListViewObject__DeleteDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B175DE & 1) == 0 )
  {
    sub_1BCAFF8(&NGUITools_TypeInfo, method);
    byte_4B175DE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(v4, 0LL);
  p_dragObject->klass = 0LL;
  sub_1BCAF9C(p_dragObject, 0, v6, v7);
}


void __fastcall GalleryFullScreenListViewObject__EventMaximStartViewer(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpEndCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *dragObject; // x23
  struct UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Component_object; // x20
  System_Action_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B175DD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, setUpEndCallBack);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__, v7);
    sub_1BCAFF8(&GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo, v8);
    byte_4B175DD = 1;
  }
  v9 = sub_1BCB244(GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = setUpEndCallBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)setUpEndCallBack, v14, v15);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
    return;
  }
  v17 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v17, v18, v19);
  v10 = this->fields.dragObject;
  if ( !v10 )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v9,
      Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__,
      0LL);
    if ( Component_object )
    {
      Component_object[11].klass = (Il2CppClass *)v21;
      sub_1BCAF9C((CGThumbnailListItem_o *)&Component_object[11], (int32_t)v21, v22, v23);
      return;
    }
LABEL_15:
    sub_1BCB254(v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall GalleryFullScreenListViewObject__GetDispObjScale(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dispObject, 0LL)) == 0LL )
  {
    sub_1BCB254(dispObject, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dispObject, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


UnityEngine_GameObject_o *__fastcall GalleryFullScreenListViewObject__GetDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dragObject;
}


UnityEngine_Rect_o __fastcall GalleryFullScreenListViewObject__GetDragObjectRange(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s0
  float m_YMin; // s1
  float m_Width; // s2
  float m_Height; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.dragObjectRect.fields.m_XMin;
  m_YMin = this->fields.dragObjectRect.fields.m_YMin;
  m_Width = this->fields.dragObjectRect.fields.m_Width;
  m_Height = this->fields.dragObjectRect.fields.m_Height;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = m_YMin;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Rect_o __fastcall GalleryFullScreenListViewObject__GetDragObjectRect(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t cgWidth; // w8
  int32_t cgHeight; // w9
  float cgScale; // s3
  float v5; // s2
  float v6; // s0
  float v7; // s1
  float v8; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  cgHeight = this->fields.cgHeight;
  cgWidth = this->fields.cgWidth;
  cgScale = this->fields.cgScale;
  v5 = (float)cgWidth / cgScale;
  v6 = (float)((float)-cgWidth * 0.5) / cgScale;
  v7 = (float)((float)-cgHeight * 0.5) / cgScale;
  v8 = (float)cgHeight / cgScale;
  result.fields.m_Height = v8;
  result.fields.m_Width = v5;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


GalleryFullScreenListViewItem_o *__fastcall GalleryFullScreenListViewObject__GetItem(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B175D7 & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItem_TypeInfo, method);
    byte_4B175D7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewItem_TypeInfo )
    return (GalleryFullScreenListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall GalleryFullScreenListViewObject__GetMaximTransformValues(
        GalleryFullScreenListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  float v7; // s8
  float v8; // s9
  float x; // s0
  UnityEngine_Vector2_o Size; // kr00_8
  __int64 v11; // x8
  float v12; // s0

  v7 = GalleryFullScreenListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v8 = (float)this->fields.cgHeight / (float)this->fields.cgWidth;
  Size = FSWindowUtil__GetSize(0LL);
  x = Size.fields.x;
  v11 = 120LL;
  if ( v7 < v8 )
    v11 = 116LL;
  if ( v7 < v8 )
    x = Size.fields.y;
  v12 = (float)(this->fields.cgScale * x) / (float)*(int *)((char *)&this->klass + v11);
  localScale->fields.z = 1.0;
  localScale->fields.x = v12;
  localScale->fields.y = v12;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 0.0;
}


void __fastcall GalleryFullScreenListViewObject__GetMovieScale(
        GalleryFullScreenListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        const MethodInfo *method)
{
  float y; // s1
  float cgScale; // s0
  int32_t cgHeight; // s2
  float v8; // s0

  y = FSWindowUtil__GetSize(0LL).fields.y;
  cgScale = this->fields.cgScale;
  cgHeight = this->fields.cgHeight;
  localScale->fields.z = 1.0;
  v8 = (float)(cgScale * y) / (float)cgHeight;
  localScale->fields.x = v8;
  localScale->fields.y = v8;
}


bool __fastcall GalleryFullScreenListViewObject__GetSetDataWait(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCB254(this, method);
  return itemDraw->fields.setDataWait;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewObject__Init(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callback,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t dispMode; // w23
  int32_t state; // w24
  const MethodInfo *v15; // x2
  int32_t v16; // w25
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2

  v7 = initMode;
  if ( (byte_4B175D9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1BCAFF8(&GalleryFullScreenListViewItem_TypeInfo, v9);
    sub_1BCAFF8(&Method_GalleryFullScreenListViewObject_InitDrawCallBack__, v10);
    byte_4B175D9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != GalleryFullScreenListViewItem_TypeInfo )
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(GalleryFullScreenListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  switch ( v7 )
  {
    case 0:
      this->fields.dispMode = 0;
      goto LABEL_12;
    case 1:
      v16 = 1;
      goto LABEL_14;
    case 2:
      this->fields.dispMode = 2;
LABEL_12:
      v16 = 1;
      goto LABEL_16;
    case 3:
      v16 = 2;
LABEL_14:
      this->fields.dispMode = v16;
      goto LABEL_16;
    case 4:
      v16 = 2;
      this->fields.dispMode = 2;
      GalleryFullScreenListViewObject__EventMaximStartViewer(this, setUpCallBackAction, v15);
LABEL_16:
      this->fields.state = v16;
      break;
    default:
      break;
  }
  if ( state && v7 != 4 && dispMode == this->fields.dispMode )
  {
    itemDraw = this->fields.itemDraw;
    v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0LL);
    if ( !itemDraw )
      sub_1BCB254(v19, v20);
    GalleryFullScreenListViewItemDraw__Init(itemDraw, v18, v21);
  }
  else
  {
    v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0LL);
    GalleryFullScreenListViewObject__SetupDisp(this, v22, v23);
  }
  ActionExtensions__Call(callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewObject__InitDrawCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v7; // x20
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0
  const MethodInfo *v9; // x3
  UnityEngine_Vector2_o Size; // kr00_8
  bool v11; // w22
  UnityEngine_Object_o *dragObject; // x20
  bool v13; // w0
  __int64 v14; // x1
  UnityEngine_GameObject_o *dispObject; // x20
  bool v16; // w21
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s0
  float y; // s1
  float *p_z; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int v25; // s2
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x20
  float v28; // s0
  float v29; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  float v33; // s0
  float v34; // s1
  float *v35; // x8
  int v36; // s2
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x20
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  float v40; // s0
  float v41; // s1
  float v42; // s2
  const MethodInfo *v43; // x1
  System_Collections_IEnumerator_o *v44; // x0
  UnityEngine_Vector3_o v45; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B175DA & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItem_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B175DA = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v45.fields.z = 0.0;
  *(_QWORD *)&v45.fields.x = 0LL;
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewItem_TypeInfo )
      v7 = this->fields.linkItem;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw
    || (GalleryFullScreenListViewItemDraw__SetScale(itemDraw, &this->fields.cgWidth, &this->fields.cgHeight, v2),
        GalleryFullScreenListViewObject__GetMaximTransformValues(this, &localScale, &v45, v9),
        Size = FSWindowUtil__GetSize(0LL),
        (itemDraw = this->fields.itemDraw) == 0LL) )
  {
    sub_1BCB254(itemDraw, method);
  }
  v47.fields.z = 1.0;
  v47.fields.y = (float)(this->fields.cgScale * Size.fields.y) / (float)this->fields.cgHeight;
  v47.fields.x = v47.fields.y;
  GalleryFullScreenListViewItemDraw__SetMovieLocalScale(itemDraw, v47, method);
  if ( v7 )
    v11 = LODWORD(v7[1].klass) == 1;
  else
    v11 = 0;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL);
  dispObject = this->fields.dispObject;
  v16 = v11 || !v13;
  if ( v11 )
  {
    if ( !byte_4B16196 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v14);
      byte_4B16196 = 1;
    }
    GameObjectExtensions__SetLocalScale(dispObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v18 = this->fields.dispObject;
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_4B16191 = 1;
    }
    GameObjectExtensions__SetLocalEulerAngle(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  }
  else
  {
    if ( v11 || !v13 )
    {
      x = localScale.fields.x;
      y = localScale.fields.y;
      p_z = &localScale.fields.z;
    }
    else
    {
      if ( !byte_4B16196 )
      {
        sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v14);
        byte_4B16196 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      p_z = &static_fields->oneVector.fields.z;
    }
    v25 = *(_DWORD *)p_z;
    GameObjectExtensions__SetLocalScale(dispObject, *(UnityEngine_Vector3_o *)&x, 0LL);
    v27 = this->fields.dispObject;
    if ( v16 )
    {
      v29 = v45.fields.y;
      v28 = v45.fields.x;
      v30 = (struct UnityEngine_Vector3_StaticFields *)&v45;
    }
    else
    {
      if ( !byte_4B16191 )
      {
        sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v26);
        byte_4B16191 = 1;
      }
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      v28 = v30->zeroVector.fields.x;
      v29 = v30->zeroVector.fields.y;
    }
    z = v30->zeroVector.fields.z;
    GameObjectExtensions__SetLocalEulerAngle(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v16 )
    {
      v33 = localScale.fields.x;
      v34 = localScale.fields.y;
      v35 = &localScale.fields.z;
      goto LABEL_37;
    }
  }
  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_4B16196 = 1;
  }
  v32 = UnityEngine_Vector3_TypeInfo->static_fields;
  v33 = v32->oneVector.fields.x;
  v34 = v32->oneVector.fields.y;
  v35 = &v32->oneVector.fields.z;
LABEL_37:
  v36 = *(_DWORD *)v35;
  GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)&v33, 0LL);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v16 )
  {
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v37);
      byte_4B16191 = 1;
    }
    v39 = UnityEngine_Vector3_TypeInfo->static_fields;
    v40 = v39->zeroVector.fields.x;
    v41 = v39->zeroVector.fields.y;
  }
  else
  {
    v41 = v45.fields.y;
    v40 = v45.fields.x;
    v39 = (struct UnityEngine_Vector3_StaticFields *)&v45;
  }
  v42 = v39->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v38, *(UnityEngine_Vector3_o *)&v40, 0LL);
  v44 = GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(this, v43);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__Init_32430440(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewObject__Init(this, initMode, 0LL, 0LL, v3);
}


void __fastcall GalleryFullScreenListViewObject__OnDestroy(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B175D6 & 1) == 0 )
  {
    sub_1BCAFF8(&NGUITools_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B175D6 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCAF9C(p_dragObject, 0, v8, v9);
  }
}


void __fastcall GalleryFullScreenListViewObject__OutOfLoadRange(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


void __fastcall GalleryFullScreenListViewObject__PlayMovie(
        GalleryFullScreenListViewObject_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCB254(0LL, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
    itemDraw,
    enableControlCallBack,
    endFullScreenAction,
    method);
}


void __fastcall GalleryFullScreenListViewObject__SetItem(
        GalleryFullScreenListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_42963052((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__SetMovieCallBack(
        GalleryFullScreenListViewObject_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCB254(0LL, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__SetMovieCallBack(itemDraw, enableControlCallBack, endFullScreenAction, method);
}


void __fastcall GalleryFullScreenListViewObject__SetSetUpCallBackAction(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.setUpCallBack = setUpCallBackAction;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.setUpCallBack, (int32_t)setUpCallBackAction, (int32_t)method, v3);
}


void __fastcall GalleryFullScreenListViewObject__SetupDisp(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  bool v8; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  GalleryFullScreenListViewItemDraw_o *v12; // x0

  if ( (byte_4B175DB & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewItem_TypeInfo, callAction);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B175DB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != GalleryFullScreenListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCB254(0LL, v10);
    GalleryFullScreenListViewItemDraw__SetItem(
      v12,
      (GalleryFullScreenListViewItem_o *)linkItem,
      this->fields.dispMode,
      callAction,
      v11);
  }
}


void __fastcall GalleryFullScreenListViewObject__StopMovie(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCB254(0LL, method);
  GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, method);
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B175DF & 1) == 0 )
  {
    sub_1BCAFF8(&GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo, method);
    byte_4B175DF = 1;
  }
  v3 = sub_1BCB244(GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32___ctor(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__MoveNext(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct GalleryFullScreenListViewObject_o *_4__this; // x20
  CGThumbnailListItem_o *p_setUpCallBack; // x20
  System_Action_o *setUpCallBack; // t1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCB254(this, method);
    setUpCallBack = _4__this->fields.setUpCallBack;
    p_setUpCallBack = (CGThumbnailListItem_o *)&_4__this->fields.setUpCallBack;
    ActionExtensions__Call(setUpCallBack, 0LL);
    p_setUpCallBack->klass = 0LL;
    sub_1BCAF9C(p_setUpCallBack, 0, v10, v11);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_IDisposable_Dispose(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewObject___c__DisplayClass25_0___ctor(
        GalleryFullScreenListViewObject___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewObject___c__DisplayClass25_0___EventMaximStartViewer_b__0(
        GalleryFullScreenListViewObject___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct GalleryFullScreenListViewObject_o *_4__this; // x8
  GalleryFullScreenListViewObject___c__DisplayClass25_0_o *v4; // x19
  const MethodInfo *v5; // x3
  struct GalleryFullScreenListViewObject_o *v6; // x8
  const float *p_cgScale; // x9
  float32x2_t v8; // d2
  int32x2_t v9; // d0
  struct GalleryFullScreenListViewObject_o *v10; // x8
  struct GalleryFullScreenListViewObject_o *v11; // x8
  UnityEngine_Vector3_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-20h] BYREF

  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v12.fields.z = 0.0;
  *(_QWORD *)&v12.fields.x = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v4 = this;
  this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)_4__this->fields.itemDraw;
  if ( !this )
    goto LABEL_8;
  GalleryFullScreenListViewItemDraw__SetScale(
    (GalleryFullScreenListViewItemDraw_o *)this,
    &_4__this->fields.cgWidth,
    &_4__this->fields.cgHeight,
    v2);
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_8;
  p_cgScale = &v6->fields.cgScale;
  v8.n64_u64[0] = vld1_dup_f32(p_cgScale).n64_u64[0];
  v9.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v6->fields.cgHeight).n64_u64[0];
  *(float32x2_t *)&v6->fields.dragObjectRect.fields.m_XMin = vdiv_f32(
                                                               vmul_f32(
                                                                 vcvt_f32_s32(vneg_s32(v9)),
                                                                 (float32x2_t)0x3F0000003F000000LL),
                                                               v8);
  *(float32x2_t *)&v6->fields.dragObjectRect.fields.m_Width = vdiv_f32(vcvt_f32_s32(v9), v8);
  this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)v4->fields.__4__this;
  if ( !this
    || (GalleryFullScreenListViewObject__GetMaximTransformValues(
          (GalleryFullScreenListViewObject_o *)this,
          &localScale,
          &v12,
          v5),
        (v10 = v4->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SetLocalScale(v10->fields.dragObject, localScale, 0LL), (v11 = v4->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1BCB254(this, method);
  }
  GameObjectExtensions__SetLocalEulerAngle(v11->fields.dragObject, v12, 0LL);
  ActionExtensions__Call(v4->fields.setUpEndCallBack, 0LL);
}