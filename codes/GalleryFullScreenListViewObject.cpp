void __fastcall GalleryFullScreenListViewObject___ctor(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B60B0 & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49B60B0 = 1;
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

  if ( (byte_49B60A6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___, method);
    byte_49B60A6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
  this->fields.itemDraw = (struct GalleryFullScreenListViewItemDraw_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
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

  if ( (byte_49B60AC & 1) == 0 )
  {
    sub_1B4CF90(&ManagerConfig_TypeInfo, method);
    byte_49B60AC = 1;
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

  if ( (byte_49B60A9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___, method);
    byte_49B60A9 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___)) == 0LL) )
  {
    sub_1B4D1EC(DragObject, v4);
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

  if ( (byte_49B60AE & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    byte_49B60AE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(v4, 0LL);
  p_dragObject->klass = 0LL;
  sub_1B4CF34(p_dragObject, 0, v6, v7);
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

  if ( (byte_49B60AD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, setUpEndCallBack);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&Method_GalleryFullScreenListViewObject___c__DisplayClass24_0__EventMaximStartViewer_b__0__, v7);
    sub_1B4CF90(&GalleryFullScreenListViewObject___c__DisplayClass24_0_TypeInfo, v8);
    byte_49B60AD = 1;
  }
  v9 = sub_1B4D1DC(GalleryFullScreenListViewObject___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = setUpEndCallBack;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)setUpEndCallBack, v14, v15);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v17, v18, v19);
  v10 = this->fields.dragObject;
  if ( !v10 )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v21 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v9,
      Method_GalleryFullScreenListViewObject___c__DisplayClass24_0__EventMaximStartViewer_b__0__,
      0LL);
    if ( Component_object )
    {
      Component_object[11].klass = (Il2CppClass *)v21;
      sub_1B4CF34((CGThumbnailListItem_o *)&Component_object[11], (int32_t)v21, v22, v23);
      return;
    }
LABEL_15:
    sub_1B4D1EC(v10, v11);
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
    sub_1B4D1EC(dispObject, method);
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

  if ( (byte_49B60A8 & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItem_TypeInfo, method);
    byte_49B60A8 = 1;
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


bool __fastcall GalleryFullScreenListViewObject__GetSetDataWait(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B4D1EC(this, method);
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
  int32_t v7; // w23
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ListViewItem_o *linkItem; // x8
  GalleryFullScreenListViewItem_c *v20; // x9
  __int64 methodPtr_low; // x10
  struct ListViewItem_o *v22; // x11
  int32_t v23; // w1
  CGThumbnailListItem_o *v24; // x24
  CGThumbnailListItem_c *klass; // x8
  int32_t dispMode; // w24
  int32_t state; // w25
  const MethodInfo *v28; // x2
  int32_t v29; // w26
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x2

  v7 = initMode;
  if ( (byte_49B60AA & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_1B4CF90(&GalleryFullScreenListViewItem_TypeInfo, v9);
    sub_1B4CF90(&Method_GalleryFullScreenListViewObject___c__DisplayClass18_0__Init_b__0__, v10);
    sub_1B4CF90(&GalleryFullScreenListViewObject___c__DisplayClass18_0_TypeInfo, v11);
    byte_49B60AA = 1;
  }
  v12 = sub_1B4D1DC(GalleryFullScreenListViewObject___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B4D1EC(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v20 = GalleryFullScreenListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(GalleryFullScreenListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == GalleryFullScreenListViewItem_TypeInfo )
        v22 = this->fields.linkItem;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)(v12 + 24) = v22;
    v24 = (CGThumbnailListItem_o *)(v12 + 24);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v20 )
        v23 = (int)linkItem;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
    *(_QWORD *)(v12 + 24) = 0LL;
    v24 = (CGThumbnailListItem_o *)(v12 + 24);
  }
  sub_1B4CF34(v24, v23, v17, v18);
  klass = v24->klass;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !klass )
    v7 = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v7 != 0, 0LL);
  ((void (__fastcall *)(GalleryFullScreenListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v7 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  switch ( v7 )
  {
    case 0:
      this->fields.dispMode = 0;
      goto LABEL_21;
    case 1:
      v29 = 1;
      goto LABEL_25;
    case 2:
      this->fields.dispMode = 2;
LABEL_21:
      v29 = 1;
      goto LABEL_26;
    case 3:
      v29 = 2;
LABEL_25:
      this->fields.dispMode = v29;
      goto LABEL_26;
    case 4:
      v29 = 2;
      this->fields.dispMode = 2;
      GalleryFullScreenListViewObject__EventMaximStartViewer(this, setUpCallBackAction, v28);
LABEL_26:
      this->fields.state = v29;
      break;
    default:
      break;
  }
  if ( !state || v7 == 4 || dispMode != this->fields.dispMode )
  {
    v30 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v12,
      Method_GalleryFullScreenListViewObject___c__DisplayClass18_0__Init_b__0__,
      0LL);
    GalleryFullScreenListViewObject__SetupDisp(this, v30, v31);
  }
  ActionExtensions__Call(callback, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__Init_31192008(
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

  if ( (byte_49B60A7 & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B60A7 = 1;
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
    sub_1B4CF34(p_dragObject, 0, v8, v9);
  }
}


void __fastcall GalleryFullScreenListViewObject__PlayMovie(
        GalleryFullScreenListViewObject_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0
  System_Collections_IEnumerator_o *v6; // x1

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B4D1EC(0LL, enableControlCallBack);
  v6 = GalleryFullScreenListViewItemDraw__PlayMovieCoroutine(itemDraw, enableControlCallBack, endFullScreenAction, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__SetItem(
        GalleryFullScreenListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
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
    sub_1B4D1EC(0LL, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__SetMovieCallBack(itemDraw, enableControlCallBack, endFullScreenAction, 0LL);
}


void __fastcall GalleryFullScreenListViewObject__SetSetUpCallBackAction(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.setUpCallBack = setUpCallBackAction;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setUpCallBack, (int32_t)setUpCallBackAction, (int32_t)method, v3);
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
  GalleryFullScreenListViewItemDraw_o *v11; // x0

  if ( (byte_49B60AB & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewItem_TypeInfo, callAction);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B60AB = 1;
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
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1B4D1EC(0LL, v10);
    GalleryFullScreenListViewItemDraw__SetItem(
      v11,
      (GalleryFullScreenListViewItem_o *)linkItem,
      this->fields.dispMode,
      callAction,
      0LL);
  }
}


void __fastcall GalleryFullScreenListViewObject__StopMovie(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B4D1EC(0LL, method);
  GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, 0LL);
}


System_Collections_IEnumerator_o *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B60AF & 1) == 0 )
  {
    sub_1B4CF90(&GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_TypeInfo, method);
    byte_49B60AF = 1;
  }
  v3 = sub_1B4D1DC(GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31___ctor(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31__MoveNext(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
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
      sub_1B4D1EC(this, method);
    setUpCallBack = _4__this->fields.setUpCallBack;
    p_setUpCallBack = (CGThumbnailListItem_o *)&_4__this->fields.setUpCallBack;
    ActionExtensions__Call(setUpCallBack, 0LL);
    p_setUpCallBack->klass = 0LL;
    sub_1B4CF34(p_setUpCallBack, 0, v10, v11);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31__System_IDisposable_Dispose(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall GalleryFullScreenListViewObject___c__DisplayClass18_0___ctor(
        GalleryFullScreenListViewObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GalleryFullScreenListViewObject___c__DisplayClass18_0___Init_b__0(
        GalleryFullScreenListViewObject___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  GalleryFullScreenListViewObject___c__DisplayClass18_0_o *v2; // x19
  struct GalleryFullScreenListViewObject_o *_4__this; // x8
  const MethodInfo *v4; // x3
  struct GalleryFullScreenListViewItem_o *item; // x8
  bool v6; // w22
  struct GalleryFullScreenListViewObject_o *v7; // x8
  UnityEngine_Object_o *dragObject; // x20
  struct GalleryFullScreenListViewObject_o *v9; // x8
  UnityEngine_GameObject_o *dispObject; // x20
  char v11; // w21
  struct GalleryFullScreenListViewObject_o *v12; // x8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Vector3_c *v14; // x8
  float v15; // s0
  float v16; // s1
  float *p_z; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int v19; // s2
  struct GalleryFullScreenListViewObject_o *v20; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector3_o *p_zeroVector; // x8
  float z; // s2
  __int64 v25; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  float v28; // s0
  float v29; // s1
  float *v30; // x8
  int v31; // s2
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x20
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  float v35; // s0
  float v36; // s1
  float v37; // s2
  GalleryFullScreenListViewObject_o *v38; // x19
  System_Collections_IEnumerator_o *v39; // x0
  UnityEngine_Vector3_o v40; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_49B60B1 & 1) == 0 )
  {
    this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B60B1 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v40.fields.z = 0.0;
  *(_QWORD *)&v40.fields.x = 0LL;
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)_4__this->fields.itemDraw;
  if ( !this )
    goto LABEL_46;
  GalleryFullScreenListViewItemDraw__SetScale(
    (GalleryFullScreenListViewItemDraw_o *)this,
    &_4__this->fields.cgWidth,
    &_4__this->fields.cgHeight,
    0LL);
  this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  GalleryFullScreenListViewObject__GetMaximTransformValues(
    (GalleryFullScreenListViewObject_o *)this,
    &localScale,
    &v40,
    v4);
  item = v2->fields.item;
  v6 = item && item->fields._CurrentGalleryType_k__BackingField == 1;
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_46;
  dragObject = (UnityEngine_Object_o *)v7->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)UnityEngine_Object__op_Equality(
                                                                      dragObject,
                                                                      0LL,
                                                                      0LL);
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_46;
  dispObject = v9->fields.dispObject;
  v11 = v6 | (unsigned __int8)this ^ 1;
  if ( v6 )
  {
    if ( !byte_49B5366 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
      byte_49B5366 = 1;
    }
    GameObjectExtensions__SetLocalScale(dispObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v12 = v2->fields.__4__this;
    if ( v12 )
    {
      v13 = v12->fields.dispObject;
      if ( !byte_49B5361 )
      {
        sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
        byte_49B5361 = 1;
      }
      v14 = UnityEngine_Vector3_TypeInfo;
LABEL_31:
      p_zeroVector = &v14->static_fields->zeroVector;
      x = p_zeroVector->fields.x;
      y = p_zeroVector->fields.y;
      goto LABEL_32;
    }
LABEL_46:
    sub_1B4D1EC(this, method);
  }
  if ( ((v6 | (unsigned __int8)this ^ 1) & 1) != 0 )
  {
    v15 = localScale.fields.x;
    v16 = localScale.fields.y;
    p_z = &localScale.fields.z;
  }
  else
  {
    if ( !byte_49B5366 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
      byte_49B5366 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->oneVector.fields.x;
    v16 = static_fields->oneVector.fields.y;
    p_z = &static_fields->oneVector.fields.z;
  }
  v19 = *(_DWORD *)p_z;
  GameObjectExtensions__SetLocalScale(dispObject, *(UnityEngine_Vector3_o *)&v15, 0LL);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_46;
  v13 = v20->fields.dispObject;
  if ( (v11 & 1) == 0 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, method);
      byte_49B5361 = 1;
    }
    v14 = UnityEngine_Vector3_TypeInfo;
    goto LABEL_31;
  }
  y = v40.fields.y;
  x = v40.fields.x;
  p_zeroVector = &v40;
LABEL_32:
  z = p_zeroVector->fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
  this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (v11 & 1) != 0 )
  {
    if ( !byte_49B5366 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v25);
      byte_49B5366 = 1;
    }
    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
    v28 = v27->oneVector.fields.x;
    v29 = v27->oneVector.fields.y;
    v30 = &v27->oneVector.fields.z;
  }
  else
  {
    v28 = localScale.fields.x;
    v29 = localScale.fields.y;
    v30 = &localScale.fields.z;
  }
  v31 = *(_DWORD *)v30;
  GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)&v28, 0LL);
  this = (GalleryFullScreenListViewObject___c__DisplayClass18_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_46;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (v11 & 1) != 0 )
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v32);
      byte_49B5361 = 1;
    }
    v34 = UnityEngine_Vector3_TypeInfo->static_fields;
    v35 = v34->zeroVector.fields.x;
    v36 = v34->zeroVector.fields.y;
  }
  else
  {
    v36 = v40.fields.y;
    v35 = v40.fields.x;
    v34 = (struct UnityEngine_Vector3_StaticFields *)&v40;
  }
  v37 = v34->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v33, *(UnityEngine_Vector3_o *)&v35, 0LL);
  v38 = v2->fields.__4__this;
  if ( !v38 )
    goto LABEL_46;
  v39 = GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(v38, method);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)v38, v39, 0LL);
}


void __fastcall GalleryFullScreenListViewObject___c__DisplayClass24_0___ctor(
        GalleryFullScreenListViewObject___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GalleryFullScreenListViewObject___c__DisplayClass24_0___EventMaximStartViewer_b__0(
        GalleryFullScreenListViewObject___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct GalleryFullScreenListViewObject_o *_4__this; // x8
  GalleryFullScreenListViewObject___c__DisplayClass24_0_o *v3; // x19
  const MethodInfo *v4; // x3
  struct GalleryFullScreenListViewObject_o *v5; // x8
  const float *p_cgScale; // x9
  float32x2_t v7; // d2
  int32x2_t v8; // d0
  struct GalleryFullScreenListViewObject_o *v9; // x8
  struct GalleryFullScreenListViewObject_o *v10; // x8
  UnityEngine_Vector3_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-20h] BYREF

  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v11.fields.z = 0.0;
  *(_QWORD *)&v11.fields.x = 0LL;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (GalleryFullScreenListViewObject___c__DisplayClass24_0_o *)_4__this->fields.itemDraw;
  if ( !this )
    goto LABEL_8;
  GalleryFullScreenListViewItemDraw__SetScale(
    (GalleryFullScreenListViewItemDraw_o *)this,
    &_4__this->fields.cgWidth,
    &_4__this->fields.cgHeight,
    0LL);
  v5 = v3->fields.__4__this;
  if ( !v5 )
    goto LABEL_8;
  p_cgScale = &v5->fields.cgScale;
  v7.n64_u64[0] = vld1_dup_f32(p_cgScale).n64_u64[0];
  v8.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v5->fields.cgHeight).n64_u64[0];
  *(float32x2_t *)&v5->fields.dragObjectRect.fields.m_XMin = vdiv_f32(
                                                               vmul_f32(
                                                                 vcvt_f32_s32(vneg_s32(v8)),
                                                                 (float32x2_t)0x3F0000003F000000LL),
                                                               v7);
  *(float32x2_t *)&v5->fields.dragObjectRect.fields.m_Width = vdiv_f32(vcvt_f32_s32(v8), v7);
  this = (GalleryFullScreenListViewObject___c__DisplayClass24_0_o *)v3->fields.__4__this;
  if ( !this
    || (GalleryFullScreenListViewObject__GetMaximTransformValues(
          (GalleryFullScreenListViewObject_o *)this,
          &localScale,
          &v11,
          v4),
        (v9 = v3->fields.__4__this) == 0LL)
    || (GameObjectExtensions__SetLocalScale(v9->fields.dragObject, localScale, 0LL), (v10 = v3->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B4D1EC(this, method);
  }
  GameObjectExtensions__SetLocalEulerAngle(v10->fields.dragObject, v11, 0LL);
  ActionExtensions__Call(v3->fields.setUpEndCallBack, 0LL);
}