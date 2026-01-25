void GalleryFullScreenListViewObject___ctor(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9571 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CE9571 = 1;
  }
  this->fields.cgScale = 1.0;
  *(_QWORD *)&this->fields.cgHeight = 0x40000000240LL;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void GalleryFullScreenListViewObject__Awake(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE9566 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
    byte_4CE9566 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
  this->fields.itemDraw = (struct GalleryFullScreenListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
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
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  float v8; // s0
  float v9; // s1

  if ( (byte_4CE956D & 1) == 0 )
  {
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CE956D = 1;
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
  height = UnityEngine_Screen__get_height(0);
  v8 = (float)height / (float)UnityEngine_Screen__get_width(0);
  if ( v8 <= v5 )
    v9 = v8;
  else
    v9 = v5;
  if ( v8 < v6 )
    return v6;
  else
    return v9;
}


UnityEngine_GameObject_o *GalleryFullScreenListViewObject__CreateDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x4

  if ( (byte_4CE9569 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    byte_4CE9569 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___)) == 0) )
  {
    sub_1C7BD40(DragObject, v4);
  }
  GalleryFullScreenListViewObject__Init((GalleryFullScreenListViewObject_o *)DragObject, 2, 0, 0, v6);
  return v5;
}


void GalleryFullScreenListViewObject__DeleteDragObject(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE956F & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    byte_4CE956F = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(v4, 0);
  p_dragObject->klass = 0;
  sub_1C7BA8C(p_dragObject, 0, v6, v7, v8, v9, v10, v11);
}


void GalleryFullScreenListViewObject__EventMaximStartViewer(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpEndCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *dragObject; // x23
  struct UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *Component_object; // x20
  System_Action_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4CE956E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__);
    sub_1C7BAE8(&GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
    byte_4CE956E = 1;
  }
  v5 = sub_1C7BD34(GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
  GalleryFullScreenListViewObject___c__DisplayClass25_0___ctor(
    (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = setUpEndCallBack;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)setUpEndCallBack, v14, v15, v16, v17, v18, v19);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  v21 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(GalleryFullScreenListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                             this,
                                             this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v21;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v6 = this->fields.dragObject;
  if ( !v6 )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__,
      0);
    if ( Component_object )
    {
      Component_object[11].klass = (Il2CppClass *)v29;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&Component_object[11], (int32_t)v29, v30, v31, v32, v33, v34, v35);
      return;
    }
LABEL_15:
    sub_1C7BD40(v6, v7);
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
    sub_1C7BD40(dispObject, method);
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


GalleryFullScreenListViewItem_o *GalleryFullScreenListViewObject__GetItem(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CE9568 & 1) == 0 )
  {
    sub_1C7BAE8(&GalleryFullScreenListViewItem_TypeInfo);
    byte_4CE9568 = 1;
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
  float v12; // s0

  v7 = GalleryFullScreenListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v8 = (float)this->fields.cgHeight / (float)this->fields.cgWidth;
  Size = FSWindowUtil__GetSize(0);
  x = Size.fields.x;
  v11 = 120;
  if ( v7 < v8 )
  {
    v11 = 116;
    x = Size.fields.y;
  }
  v12 = (float)(this->fields.cgScale * x) / (float)*(int *)((char *)&this->klass + v11);
  localScale->fields.z = 1.0;
  localScale->fields.x = v12;
  localScale->fields.y = v12;
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
    sub_1C7BD40(this, method);
  return itemDraw->fields.setDataWait;
}


void GalleryFullScreenListViewObject__Init(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callback,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t dispMode; // w23
  int32_t state; // w24
  const MethodInfo *v13; // x2
  int32_t v14; // w25
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4CE956A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_GalleryFullScreenListViewObject_InitDrawCallBack__);
    byte_4CE956A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != GalleryFullScreenListViewItem_TypeInfo )
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
  switch ( initMode )
  {
    case 0:
      this->fields.dispMode = 0;
      goto LABEL_12;
    case 1:
      v14 = 1;
      goto LABEL_14;
    case 2:
      this->fields.dispMode = 2;
LABEL_12:
      v14 = 1;
      goto LABEL_16;
    case 3:
      v14 = 2;
LABEL_14:
      this->fields.dispMode = v14;
      goto LABEL_16;
    case 4:
      v14 = 2;
      this->fields.dispMode = 2;
      GalleryFullScreenListViewObject__EventMaximStartViewer(this, setUpCallBackAction, v13);
LABEL_16:
      this->fields.state = v14;
      break;
    default:
      break;
  }
  if ( state && initMode != 4 && dispMode == this->fields.dispMode )
  {
    itemDraw = this->fields.itemDraw;
    v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    if ( !itemDraw )
      sub_1C7BD40(v17, v18);
    GalleryFullScreenListViewItemDraw__Init(itemDraw, v16, v19);
  }
  else
  {
    v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    GalleryFullScreenListViewObject__SetupDisp(this, v20, v21);
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
  _BOOL4 IsMovie; // w0
  int selectNum_low; // w23
  int v12; // w21
  UnityEngine_Object_o *dragObject; // x20
  _BOOL4 v14; // w0
  UnityEngine_GameObject_o *dispObject; // x20
  int v16; // w22
  UnityEngine_GameObject_o *v17; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v19; // kr10_8 OVERLAPPED
  float z; // s2
  UnityEngine_GameObject_o *gameObject; // x20
  float v22; // s0 OVERLAPPED
  float v23; // s1
  float *v24; // x8
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float *p_z; // x8
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  int v30; // s2
  UnityEngine_GameObject_o *v31; // x20
  __int64 v32; // kr08_8 OVERLAPPED
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  float v34; // s2
  const MethodInfo *v35; // x1
  System_Collections_IEnumerator_o *v36; // x0
  int v37; // s2
  UnityEngine_Vector3_o v38; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE956B & 1) == 0 )
  {
    sub_1C7BAE8(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE956B = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v38.fields.z = 0.0;
  *(_QWORD *)&v38.fields.x = 0;
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = GalleryFullScreenListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (GalleryFullScreenListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == GalleryFullScreenListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
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
        GalleryFullScreenListViewObject__GetMaximTransformValues(this, &localScale, &v38, v8),
        Size = FSWindowUtil__GetSize(0),
        (itemDraw = this->fields.itemDraw) == 0) )
  {
    sub_1C7BD40(itemDraw, method);
  }
  v40.fields.z = 1.0;
  v40.fields.y = (float)(this->fields.cgScale * Size.fields.y) / (float)this->fields.cgHeight;
  v40.fields.x = v40.fields.y;
  GalleryFullScreenListViewItemDraw__SetMovieLocalScale(itemDraw, v40, method);
  if ( v6 )
  {
    IsMovie = GalleryType__IsMovie((int32_t)v6[1].klass, 0);
    selectNum_low = LOBYTE(v6[1].fields.selectNum);
    v12 = IsMovie;
  }
  else
  {
    selectNum_low = 0;
    v12 = 0;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality(dragObject, 0, 0);
  dispObject = this->fields.dispObject;
  v16 = v14 & ~v12 & selectNum_low & 1;
  if ( (v12 & 1) != 0 )
  {
    if ( !byte_4CE7E5E )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    GameObjectExtensions__SetLocalScale(dispObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v17 = this->fields.dispObject;
    if ( byte_4CE7E59 )
      goto LABEL_21;
LABEL_20:
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
LABEL_21:
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v19 = *(_QWORD *)&static_fields->zeroVector.fields.x;
    goto LABEL_22;
  }
  if ( v16 )
  {
    if ( !byte_4CE7E5E )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    v25 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v25->oneVector.fields.x;
    y = v25->oneVector.fields.y;
    p_z = &v25->oneVector.fields.z;
  }
  else
  {
    x = localScale.fields.x;
    y = localScale.fields.y;
    p_z = &localScale.fields.z;
  }
  v37 = *(_DWORD *)p_z;
  GameObjectExtensions__SetLocalScale(dispObject, *(UnityEngine_Vector3_o *)&x, 0);
  v17 = this->fields.dispObject;
  if ( v16 )
  {
    if ( byte_4CE7E59 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v19 = *(_QWORD *)&v38.fields.x;
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&v38;
LABEL_22:
  z = static_fields->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v17, *(UnityEngine_Vector3_o *)&v19, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v16 )
  {
    v22 = localScale.fields.x;
    v23 = localScale.fields.y;
    v24 = &localScale.fields.z;
  }
  else
  {
    if ( !byte_4CE7E5E )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    v29 = UnityEngine_Vector3_TypeInfo->static_fields;
    v22 = v29->oneVector.fields.x;
    v23 = v29->oneVector.fields.y;
    v24 = &v29->oneVector.fields.z;
  }
  v30 = *(_DWORD *)v24;
  GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)&v22, 0);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v16 )
  {
    v32 = *(_QWORD *)&v38.fields.x;
    v33 = (struct UnityEngine_Vector3_StaticFields *)&v38;
  }
  else
  {
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    v33 = UnityEngine_Vector3_TypeInfo->static_fields;
    v32 = *(_QWORD *)&v33->zeroVector.fields.x;
  }
  v34 = v33->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v31, *(UnityEngine_Vector3_o *)&v32, 0);
  v36 = GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(this, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v36, 0);
}


void GalleryFullScreenListViewObject__Init_33564200(
        GalleryFullScreenListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  GalleryFullScreenListViewObject__Init(this, initMode, 0, 0, v3);
}


void GalleryFullScreenListViewObject__OnDestroy(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CE9567 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9567 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C7BA8C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C7BD40(0, enableControlCallBack);
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
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
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
    sub_1C7BD40(0, enableControlCallBack);
  GalleryFullScreenListViewItemDraw__SetMovieCallBack(itemDraw, enableControlCallBack, endFullScreenAction, method);
}


void GalleryFullScreenListViewObject__SetSetUpCallBackAction(
        GalleryFullScreenListViewObject_o *this,
        System_Action_o *setUpCallBackAction,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.setUpCallBack = setUpCallBackAction;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.setUpCallBack,
    (int32_t)setUpCallBackAction,
    (int32_t)method,
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
  UnityEngine_Object_o *itemDraw; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  GalleryFullScreenListViewItemDraw_o *v11; // x0

  if ( (byte_4CE956C & 1) == 0 )
  {
    sub_1C7BAE8(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE956C = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1C7BD40(0, v9);
    GalleryFullScreenListViewItemDraw__SetItem(
      v11,
      (GalleryFullScreenListViewItem_o *)linkItem,
      this->fields.dispMode,
      callAction,
      v10);
  }
}


void GalleryFullScreenListViewObject__StopMovie(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  GalleryFullScreenListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C7BD40(0, method);
  GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, method);
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE9570 & 1) == 0 )
  {
    sub_1C7BAE8(&GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
    byte_4CE9570 = 1;
  }
  v3 = sub_1C7BD34(GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
  GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32___ctor(
    (GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct GalleryFullScreenListViewObject_o *_4__this; // x20
  GrandQuestFolderBoardItem_o *p_setUpCallBack; // x20
  System_Action_o *setUpCallBack; // t1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C7BD40(this, method);
    setUpCallBack = _4__this->fields.setUpCallBack;
    p_setUpCallBack = (GrandQuestFolderBoardItem_o *)&_4__this->fields.setUpCallBack;
    ActionExtensions__Call(setUpCallBack, 0);
    p_setUpCallBack->klass = 0;
    sub_1C7BA8C(p_setUpCallBack, 0, v14, v15, v16, v17, v18, v19);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  struct GalleryFullScreenListViewObject_o *_4__this; // x8
  GalleryFullScreenListViewObject___c__DisplayClass25_0_o *v3; // x19
  UnityEngine_Rect_o *v4; // x20
  struct GalleryFullScreenListViewObject_o *v5; // x8
  struct GalleryFullScreenListViewObject_o *v6; // x8
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-30h] BYREF

  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)_4__this->fields.itemDraw;
  if ( !this )
    goto LABEL_8;
  GalleryFullScreenListViewItemDraw__SetScale(
    (GalleryFullScreenListViewItemDraw_o *)this,
    &_4__this->fields.cgWidth,
    &_4__this->fields.cgHeight,
    0);
  v4 = (UnityEngine_Rect_o *)v3->fields.__4__this;
  if ( !v4
    || (v4[10] = GalleryFullScreenListViewObject__GetDragObjectRect(v3->fields.__4__this, 0),
        (this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)v3->fields.__4__this) == 0)
    || (GalleryFullScreenListViewObject__GetMaximTransformValues(
          (GalleryFullScreenListViewObject_o *)this,
          &localScale,
          &v7,
          0),
        (v5 = v3->fields.__4__this) == 0)
    || (GameObjectExtensions__SetLocalScale(v5->fields.dragObject, localScale, 0), (v6 = v3->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C7BD40(this, method);
  }
  GameObjectExtensions__SetLocalEulerAngle(v6->fields.dragObject, v7, 0);
  ActionExtensions__Call(v3->fields.setUpEndCallBack, 0);
}