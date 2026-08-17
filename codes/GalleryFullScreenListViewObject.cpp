void GalleryFullScreenListViewObject___ctor(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewObject_c *v4; // x0

  if ( (byte_596B55F & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596B55F = 1;
  }
  v4 = ListViewObject_TypeInfo;
  this->fields.cgScale = 1.0;
  *(_QWORD *)&this->fields.cgHeight = 0x40000000240LL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void GalleryFullScreenListViewObject__Awake(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596B554 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
    byte_596B554 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
  this->fields.itemDraw = (struct GalleryFullScreenListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


float GalleryFullScreenListViewObject__CalcGameScreenAspectRatio(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  int *static_fields; // x8
  float v5; // s0
  float v6; // s8
  float v7; // s9
  int32_t height; // w19
  float v9; // s0
  float v10; // s1

  if ( (byte_596B55B & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596B55B = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v3->static_fields;
  v5 = (float)static_fields[22];
  v6 = v5 / (float)static_fields[20];
  v7 = v5 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0);
  v9 = (float)height / (float)UnityEngine_Screen__get_width(0);
  if ( v9 <= v6 )
    v10 = v9;
  else
    v10 = v6;
  if ( v9 >= v7 )
    return v10;
  else
    return v7;
}


UnityEngine_GameObject_o *GalleryFullScreenListViewObject__CreateDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x4

  if ( (byte_596B557 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    byte_596B557 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)DragObject, 2, 0, 0, v6);
  return v5;
}


void GalleryFullScreenListViewObject__DeleteDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596B55D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596B55D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method, v2);
  NGUITools__Destroy(v5, 0);
  p_dragObject->klass = 0;
  sub_2213A04(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
}


void GalleryFullScreenListViewObject__EventMaximStartViewer(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpEndCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *dragObject; // x23
  struct UnityEngine_GameObject_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Component_object; // x20
  System_Action_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596B55C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__);
    sub_2213A60(&GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
    byte_596B55C = 1;
  }
  v5 = sub_2213CCC(GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = setUpEndCallBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)setUpEndCallBack, v14, v15, v16, v17, v18, v19);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  v23 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                             this,
                                             this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v6 = this->fields.dragObject;
  if ( !v6 )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v5,
      Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__,
      0);
    if ( Component_object )
    {
      Component_object[11].klass = (Il2CppClass *)v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[11], (int32_t)v33, v34, v35, v36, v37, v38, v39);
      return;
    }
LABEL_15:
    sub_2213CDC(v6, v7);
  }
}


UnityEngine_Vector3_o GalleryFullScreenListViewObject__GetDispObjScale(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dispObject, 0)) == 0 )
  {
    sub_2213CDC(dispObject, method);
  }
  return UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)dispObject, 0);
}


UnityEngine_GameObject_o *GalleryFullScreenListViewObject__GetDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dragObject;
}


UnityEngine_Rect_o GalleryFullScreenListViewObject__GetDragObjectRange(
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


UnityEngine_Rect_o GalleryFullScreenListViewObject__GetDragObjectRect(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  int32x2_t v2; // d2
  float *p_cgScale; // x8
  float32x2_t v4; // d3
  unsigned __int64 v5; // d1
  unsigned __int64 v6; // d3
  float v7; // s0
  float v8; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2.n64_u64[0] = *(unsigned __int64 *)&this->fields.cgHeight;
  p_cgScale = &this->fields.cgScale;
  v4.n64_u64[0] = vld1_dup_f32(p_cgScale).n64_u64[0];
  v5 = vdiv_f32(vmul_f32(vcvt_f32_s32(vneg_s32(v2)), (float32x2_t)0x3F0000003F000000LL), v4).n64_u64[0];
  v6 = vdiv_f32(vcvt_f32_s32(v2), v4).n64_u64[0];
  v7 = *((float *)&v5 + 1);
  v8 = *((float *)&v6 + 1);
  result.fields.m_Height = *(float *)&v6;
  result.fields.m_YMin = *(float *)&v5;
  result.fields.m_Width = v8;
  result.fields.m_XMin = v7;
  return result;
}


GalleryFullScreenListViewItem_o *GalleryFullScreenListViewObject__GetItem(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596B556 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    byte_596B556 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewItem_TypeInfo )
    return (GalleryFullScreenListViewItem_o *)this->fields.linkItem;
  return 0;
}


void GalleryFullScreenListViewObject__GetMaximTransformValues(
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
  float cgScale; // s1
  int v13; // s2
  float v14; // s0

  v7 = GalleryFullScreenListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v8 = (float)this->fields.cgHeight / (float)this->fields.cgWidth;
  Size = FSWindowUtil__GetSize(0);
  x = Size.fields.x;
  v11 = 120;
  if ( v7 < v8 )
  {
    x = Size.fields.y;
    v11 = 116;
  }
  cgScale = this->fields.cgScale;
  v13 = *(_DWORD *)((char *)&this->klass + v11);
  localScale->fields.z = 1.0;
  v14 = (float)(x * cgScale) / (float)v13;
  localScale->fields.x = v14;
  localScale->fields.y = v14;
  *(_QWORD *)&localEulerAngle->fields.x = 0;
  localEulerAngle->fields.z = 0.0;
}


void GalleryFullScreenListViewObject__GetMovieScale(
        GalleryFullScreenListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        const MethodInfo *method)
{
  float y; // s1
  float cgScale; // s0
  int32_t cgHeight; // s2
  float v8; // s0

  y = FSWindowUtil__GetSize(0).fields.y;
  cgScale = this->fields.cgScale;
  cgHeight = this->fields.cgHeight;
  localScale->fields.z = 1.0;
  v8 = (float)(cgScale * y) / (float)cgHeight;
  localScale->fields.x = v8;
  localScale->fields.y = v8;
}


bool GalleryFullScreenListViewObject__GetSetDataWait(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  struct GalleryFullScreenListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(this, method);
  return itemDraw->fields.setDataWait;
}


void GalleryFullScreenListViewObject__Init(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callback,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t dispMode; // w23
  int32_t state; // w24
  const MethodInfo *v14; // x2
  int32_t v15; // w25
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_596B558 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    sub_2213A60(&Method_GalleryFullScreenListViewObject_InitDrawCallBack__);
    byte_596B558 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (GalleryFullScreenListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
      initMode = 0;
  }
  else
  {
    initMode = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(GalleryFullScreenListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  if ( initMode <= 1 )
  {
    if ( !initMode )
    {
      this->fields.dispMode = 0;
      v15 = 1;
      goto LABEL_20;
    }
    if ( initMode != 1 )
      goto LABEL_21;
    v15 = 1;
LABEL_18:
    this->fields.dispMode = v15;
    goto LABEL_20;
  }
  switch ( initMode )
  {
    case 2:
      v15 = 1;
      this->fields.dispMode = 2;
      goto LABEL_20;
    case 3:
      v15 = 2;
      goto LABEL_18;
    case 4:
      v15 = 2;
      this->fields.dispMode = 2;
      GalleryFullScreenListViewObject__EventMaximStartViewer(this, setUpCallBackAction, v14);
LABEL_20:
      this->fields.state = v15;
      break;
  }
LABEL_21:
  if ( state && initMode != 4 && dispMode == this->fields.dispMode )
  {
    itemDraw = this->fields.itemDraw;
    v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    if ( !itemDraw )
      sub_2213CDC(v18, v19);
    GalleryFullScreenListViewItemDraw__Init(itemDraw, v17, v20);
  }
  else
  {
    v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    GalleryFullScreenListViewObject__SetupDisp(this, v21, v22);
  }
  ActionExtensions__Call(callback, 0);
}


// local variable allocation has failed, the output may be wrong!
void GalleryFullScreenListViewObject__InitDrawCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v6; // x20
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0
  const MethodInfo *v8; // x3
  UnityEngine_Vector2_o Size; // kr00_8
  __int64 v10; // x1
  __int64 v11; // x2
  bool v12; // w23
  bool v13; // w22
  UnityEngine_Object_o *dragObject; // x20
  bool v15; // w0
  UnityEngine_GameObject_o *dispObject; // x20
  bool v17; // w22
  UnityEngine_GameObject_o *v18; // x20
  float y; // s1 OVERLAPPED
  UnityEngine_Vector3_o *p_localScale; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  int v23; // s2
  float x; // s0
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *v27; // x9
  float v28; // s1 OVERLAPPED
  UnityEngine_Vector3_o *p_oneVector; // x8
  float *v30; // x9
  int v31; // s2
  float v32; // s0
  UnityEngine_GameObject_o *v33; // x20
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  const MethodInfo *v35; // x1
  System_Collections_IEnumerator_o *v36; // x0
  UnityEngine_Vector3_o v37; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B559 & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B559 = 1;
  }
  linkItem = this->fields.linkItem;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v37.fields.z = 0.0;
  *(_QWORD *)&v37.fields.x = 0;
  if ( linkItem
    && (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewItem_TypeInfo )
      v6 = linkItem;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw
    || (GalleryFullScreenListViewItemDraw__SetScale(itemDraw, &this->fields.cgWidth, &this->fields.cgHeight, v2),
        GalleryFullScreenListViewObject__GetMaximTransformValues(this, &localScale, &v37, v8),
        Size = FSWindowUtil__GetSize(0),
        (itemDraw = this->fields.itemDraw) == 0) )
  {
    sub_2213CDC(itemDraw, method);
  }
  v39.fields.z = 1.0;
  v39.fields.y = (float)(Size.fields.y * this->fields.cgScale) / (float)this->fields.cgHeight;
  v39.fields.x = v39.fields.y;
  GalleryFullScreenListViewItemDraw__SetMovieLocalScale(itemDraw, v39, method);
  if ( v6 )
  {
    v12 = LODWORD(v6[1].klass) == 1;
    v13 = LOBYTE(v6[1].fields.selectNum) == 0;
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v15 = UnityEngine_Object__op_Equality(dragObject, 0, 0);
  dispObject = this->fields.dispObject;
  v17 = v13 || v12 || !v15;
  if ( v12 )
  {
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    GameObjectExtensions__SetLocalScale(dispObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v18 = this->fields.dispObject;
  }
  else
  {
    if ( v17 )
    {
      y = localScale.fields.y;
      p_localScale = &localScale;
      p_z = &localScale.fields.z;
    }
    else
    {
      if ( !byte_5969AE5 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      p_localScale = &static_fields->oneVector;
      p_z = &static_fields->oneVector.fields.z;
    }
    v23 = *(_DWORD *)p_z;
    x = p_localScale->fields.x;
    GameObjectExtensions__SetLocalScale(dispObject, *(UnityEngine_Vector3_o *)(&y - 1), 0);
    v18 = this->fields.dispObject;
    if ( v17 )
    {
      v25 = (struct UnityEngine_Vector3_StaticFields *)&v37;
      goto LABEL_30;
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v25 = UnityEngine_Vector3_TypeInfo->static_fields;
LABEL_30:
  GameObjectExtensions__SetLocalEulerAngle(v18, v25->zeroVector, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v17 )
  {
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
    v28 = v27->oneVector.fields.y;
    p_oneVector = &v27->oneVector;
    v30 = &v27->oneVector.fields.z;
  }
  else
  {
    v28 = localScale.fields.y;
    p_oneVector = &localScale;
    v30 = &localScale.fields.z;
  }
  v31 = *(_DWORD *)v30;
  v32 = p_oneVector->fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)(&v28 - 1), 0);
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v17 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    v34 = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  else
  {
    v34 = (struct UnityEngine_Vector3_StaticFields *)&v37;
  }
  GameObjectExtensions__SetLocalEulerAngle(v33, v34->zeroVector, 0);
  v36 = GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(this, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v36, 0);
}


void GalleryFullScreenListViewObject__Init_39857860(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewObject__Init(this, initMode, 0, 0, v3);
}


void GalleryFullScreenListViewObject__OnDestroy(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596B555 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B555 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void GalleryFullScreenListViewObject__OutOfLoadRange(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


void GalleryFullScreenListViewObject__PlayMovie(
        GalleryFullScreenListViewObject_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__StartPlayMovieCoroutine(
    itemDraw,
    enableControlCallBack,
    endFullScreenAction,
    method);
}


void GalleryFullScreenListViewObject__SetItem(
        GalleryFullScreenListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void GalleryFullScreenListViewObject__SetMovieCallBack(
        GalleryFullScreenListViewObject_o *this,
        System_Action_bool__o *enableControlCallBack,
        System_Action_o *endFullScreenAction,
        const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__SetMovieCallBack(itemDraw, enableControlCallBack, endFullScreenAction, method);
}


void GalleryFullScreenListViewObject__SetSetUpCallBackAction(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.setUpCallBack = setUpCallBackAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setUpCallBack,
    (int32_t)setUpCallBackAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GalleryFullScreenListViewObject__SetupDisp(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  GalleryFullScreenListViewItemDraw_o *v13; // x0

  if ( (byte_596B55A & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B55A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_2213CDC(0, v11);
    GalleryFullScreenListViewItemDraw__SetItem(
      v13,
      (GalleryFullScreenListViewItem_o *)linkItem,
      this->fields.dispMode,
      callAction,
      v12);
  }
}


void GalleryFullScreenListViewObject__StopMovie(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
  GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, method);
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B55E & 1) == 0 )
  {
    sub_2213A60(&GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
    byte_596B55E = 1;
  }
  v3 = sub_2213CCC(GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32___ctor(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__MoveNext(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w21
  struct GalleryFullScreenListViewObject_o *_4__this; // x20
  MissionNaviTransitionBoardItem_o *p_setUpCallBack; // x20
  System_Action_o *setUpCallBack; // t1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !_4__this )
        sub_2213CDC(this, method);
      setUpCallBack = _4__this->fields.setUpCallBack;
      p_setUpCallBack = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.setUpCallBack;
      ActionExtensions__Call(setUpCallBack, 0);
      p_setUpCallBack->klass = 0;
      sub_2213A04(p_setUpCallBack, 0, v12, v13, v14, v15, v16, v17);
    }
  }
  else
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_IEnumerator_Reset(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_Collections_IEnumerator_get_Current(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32__System_IDisposable_Dispose(
        GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *this,
        const MethodInfo *method)
{
  ;
}


void GalleryFullScreenListViewObject___c__DisplayClass25_0___ctor(
        GalleryFullScreenListViewObject___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GalleryFullScreenListViewObject___c__DisplayClass25_0___EventMaximStartViewer_b__0(
        GalleryFullScreenListViewObject___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct GalleryFullScreenListViewObject_o *_4__this; // x8
  GalleryFullScreenListViewObject___c__DisplayClass25_0_o *v4; // x19
  const MethodInfo *v5; // x3
  struct GalleryFullScreenListViewObject_o *v6; // x8
  int32x2_t v7; // d0
  const float *p_cgScale; // x9
  float32x4_t v9; // q1
  float32x4_t v10; // q0
  struct GalleryFullScreenListViewObject_o *v11; // x8
  struct GalleryFullScreenListViewObject_o *v12; // x8
  UnityEngine_Vector3_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-20h] BYREF

  _4__this = this->fields.__4__this;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v13.fields.z = 0.0;
  *(_QWORD *)&v13.fields.x = 0;
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
  v7.n64_u64[0] = *(unsigned __int64 *)&v6->fields.cgHeight;
  p_cgScale = &v6->fields.cgScale;
  v9.n128_u64[0] = vrev64_s32(vmul_f32(vcvt_f32_s32(vneg_s32(v7)), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  *(int32x2_t *)&v9.n128_i8[8] = vrev64_s32(vcvt_f32_s32(v7));
  v10 = vld1q_dup_f32(p_cgScale);
  v6->fields.dragObjectRect = (struct UnityEngine_Rect_o)vdivq_f32(v9, v10);
  this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)v4->fields.__4__this;
  if ( !this
    || (GalleryFullScreenListViewObject__GetMaximTransformValues(
          (GalleryFullScreenListViewObject_o *)this,
          &localScale,
          &v13,
          v5),
        (v11 = v4->fields.__4__this) == 0)
    || (GameObjectExtensions__SetLocalScale(v11->fields.dragObject, localScale, 0), (v12 = v4->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_2213CDC(this, method);
  }
  GameObjectExtensions__SetLocalEulerAngle(v12->fields.dragObject, v13, 0);
  ActionExtensions__Call(v4->fields.setUpEndCallBack, 0);
}