void GalleryFullScreenListViewObject___ctor(GalleryFullScreenListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B842 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2B842 = 1;
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

  if ( (byte_4D2B837 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
    byte_4D2B837 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewItemDraw___);
  this->fields.itemDraw = (struct GalleryFullScreenListViewItemDraw_o *)Component_object;
  sub_1C93A78(
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

  if ( (byte_4D2B83E & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    byte_4D2B83E = 1;
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

  if ( (byte_4D2B83A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    byte_4D2B83A = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___)) == 0) )
  {
    sub_1C93D2C(DragObject, v4);
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

  if ( (byte_4D2B840 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D2B840 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(v4, 0);
  p_dragObject->klass = 0;
  sub_1C93A78(p_dragObject, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4D2B83F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__);
    sub_1C93AD4(&GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
    byte_4D2B83F = 1;
  }
  v5 = sub_1C93D20(GalleryFullScreenListViewObject___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = setUpEndCallBack;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)setUpEndCallBack, v14, v15, v16, v17, v18, v19);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v6 = this->fields.dragObject;
  if ( !v6 )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v6,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_GalleryFullScreenListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_GalleryFullScreenListViewObject___c__DisplayClass25_0__EventMaximStartViewer_b__0__,
      0);
    if ( Component_object )
    {
      Component_object[11].klass = (Il2CppClass *)v29;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[11], (int32_t)v29, v30, v31, v32, v33, v34, v35);
      return;
    }
LABEL_15:
    sub_1C93D2C(v6, v7);
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
    sub_1C93D2C(dispObject, method);
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
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.m_XMin = this->fields.dragObjectRect.fields.m_XMin;
  result.fields.m_YMin = this->fields.dragObjectRect.fields.m_YMin;
  result.fields.m_Width = this->fields.dragObjectRect.fields.m_Width;
  result.fields.m_Height = this->fields.dragObjectRect.fields.m_Height;
  return result;
}


UnityEngine_Rect_o GalleryFullScreenListViewObject__GetDragObjectRect(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t cgWidth; // w8
  int32_t cgHeight; // w9
  float cgScale; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  cgHeight = this->fields.cgHeight;
  cgWidth = this->fields.cgWidth;
  cgScale = this->fields.cgScale;
  result.fields.m_Width = (float)cgWidth / cgScale;
  result.fields.m_XMin = (float)((float)-cgWidth * 0.5) / cgScale;
  result.fields.m_YMin = (float)((float)-cgHeight * 0.5) / cgScale;
  result.fields.m_Height = (float)cgHeight / cgScale;
  return result;
}


GalleryFullScreenListViewItem_o *GalleryFullScreenListViewObject__GetItem(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2B839 & 1) == 0 )
  {
    sub_1C93AD4(&GalleryFullScreenListViewItem_TypeInfo);
    byte_4D2B839 = 1;
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
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2B83B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C93AD4(&Method_GalleryFullScreenListViewObject_InitDrawCallBack__);
    byte_4D2B83B = 1;
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
    v16 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    if ( !itemDraw )
      sub_1C93D2C(v17, v18);
    GalleryFullScreenListViewItemDraw__Init(itemDraw, v16, v19);
  }
  else
  {
    v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_GalleryFullScreenListViewObject_InitDrawCallBack__, 0);
    GalleryFullScreenListViewObject__SetupDisp(this, v20, v21);
  }
  ActionExtensions__Call(callback, 0);
}


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
  UnityEngine_Vector2_o Size; // kr10_8
  int selectNum_low; // w21
  _BOOL4 v11; // w22
  UnityEngine_Object_o *dragObject; // x20
  _BOOL4 v13; // w0
  UnityEngine_GameObject_o *dispObject; // x20
  int v15; // w21
  UnityEngine_GameObject_o *v16; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *gameObject; // x20
  float *v21; // x8
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  float *p_z; // x8
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  UnityEngine_GameObject_o *v26; // x20
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  UnityEngine_Vector3_o v30; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v32; // 0:kr00_12.12
  __int64 v33; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B83C & 1) == 0 )
  {
    sub_1C93AD4(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B83C = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v30.fields.z = 0.0;
  *(_QWORD *)&v30.fields.x = 0;
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
        GalleryFullScreenListViewObject__GetMaximTransformValues(this, &localScale, &v30, v8),
        Size = FSWindowUtil__GetSize(0),
        (itemDraw = this->fields.itemDraw) == 0) )
  {
    sub_1C93D2C(itemDraw, method);
  }
  v34.fields.z = 1.0;
  v34.fields.y = (float)(this->fields.cgScale * Size.fields.y) / (float)this->fields.cgHeight;
  v34.fields.x = v34.fields.y;
  GalleryFullScreenListViewItemDraw__SetMovieLocalScale(itemDraw, v34, method);
  if ( v6 )
  {
    selectNum_low = LOBYTE(v6[1].fields.selectNum);
    v11 = LODWORD(v6[1].klass) == 1;
  }
  else
  {
    selectNum_low = 0;
    v11 = 0;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Equality(dragObject, 0, 0);
  dispObject = this->fields.dispObject;
  v15 = selectNum_low & (v13 && !v11);
  if ( v11 )
  {
    if ( !byte_4D2A13E )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    GameObjectExtensions__SetLocalScale(dispObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    v16 = this->fields.dispObject;
    if ( byte_4D2A139 )
      goto LABEL_21;
LABEL_20:
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
LABEL_21:
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v35.fields.x = static_fields->zeroVector.fields.x;
    v35.fields.y = static_fields->zeroVector.fields.y;
    goto LABEL_22;
  }
  if ( v15 )
  {
    if ( !byte_4D2A13E )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    v22 = UnityEngine_Vector3_TypeInfo->static_fields;
    v37.fields.x = v22->oneVector.fields.x;
    v37.fields.y = v22->oneVector.fields.y;
    p_z = &v22->oneVector.fields.z;
  }
  else
  {
    v37.fields.x = localScale.fields.x;
    v37.fields.y = localScale.fields.y;
    p_z = &localScale.fields.z;
  }
  v37.fields.z = *p_z;
  GameObjectExtensions__SetLocalScale(dispObject, v37, 0);
  v16 = this->fields.dispObject;
  if ( v15 )
  {
    if ( byte_4D2A139 )
      goto LABEL_21;
    goto LABEL_20;
  }
  *(_QWORD *)&v35.fields.x = *(_QWORD *)&v30.fields.x;
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&v30;
LABEL_22:
  v35.fields.z = static_fields->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v16, v35, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v15 )
  {
    v36.fields.x = localScale.fields.x;
    v36.fields.y = localScale.fields.y;
    v21 = &localScale.fields.z;
  }
  else
  {
    if ( !byte_4D2A13E )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    v25 = UnityEngine_Vector3_TypeInfo->static_fields;
    v36.fields.x = v25->oneVector.fields.x;
    v36.fields.y = v25->oneVector.fields.y;
    v21 = &v25->oneVector.fields.z;
  }
  v36.fields.z = *v21;
  GameObjectExtensions__SetLocalScale(gameObject, v36, 0);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( v15 )
  {
    v33 = *(_QWORD *)&v30.fields.x;
    v27 = (struct UnityEngine_Vector3_StaticFields *)&v30;
  }
  else
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
    v33 = *(_QWORD *)&v27->zeroVector.fields.x;
  }
  *(_QWORD *)&v32.fields.x = v33;
  v32.fields.z = v27->zeroVector.fields.z;
  GameObjectExtensions__SetLocalEulerAngle(v26, v32, 0);
  v29 = GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(this, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v29, 0);
}


void GalleryFullScreenListViewObject__Init_33664584(
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

  if ( (byte_4D2B838 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B838 = 1;
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
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C93D2C(0, enableControlCallBack);
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
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
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
    sub_1C93D2C(0, enableControlCallBack);
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
  sub_1C93A78(
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

  if ( (byte_4D2B83D & 1) == 0 )
  {
    sub_1C93AD4(&GalleryFullScreenListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B83D = 1;
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
      sub_1C93D2C(0, v9);
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
    sub_1C93D2C(0, method);
  GalleryFullScreenListViewItemDraw__StopMovie(itemDraw, method);
}


System_Collections_IEnumerator_o *GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack(
        GalleryFullScreenListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B841 & 1) == 0 )
  {
    sub_1C93AD4(&GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
    byte_4D2B841 = 1;
  }
  v3 = sub_1C93D20(GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
      sub_1C93D2C(this, method);
    setUpCallBack = _4__this->fields.setUpCallBack;
    p_setUpCallBack = (GrandQuestFolderBoardItem_o *)&_4__this->fields.setUpCallBack;
    ActionExtensions__Call(setUpCallBack, 0);
    p_setUpCallBack->klass = 0;
    sub_1C93A78(p_setUpCallBack, 0, v14, v15, v16, v17, v18, v19);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_GalleryFullScreenListViewObject__WaitOneFrameSetUpCallBack_d__32_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  float32x2_t v7; // d2
  int32x2_t v8; // d0
  struct GalleryFullScreenListViewObject_o *v9; // x8
  struct GalleryFullScreenListViewObject_o *v10; // x8
  UnityEngine_Vector3_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-20h] BYREF

  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v11.fields.z = 0.0;
  *(_QWORD *)&v11.fields.x = 0;
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
  v7.n64_u64[0] = vld1_dup_f32(&v6->fields.cgScale).n64_u64[0];
  v8.n64_u64[0] = vrev64_s32(*(int32x2_t *)&v6->fields.cgHeight).n64_u64[0];
  *(float32x2_t *)&v6->fields.dragObjectRect.fields.m_XMin = vdiv_f32(
                                                               vmul_f32(
                                                                 vcvt_f32_s32(vneg_s32(v8)),
                                                                 (float32x2_t)0x3F0000003F000000LL),
                                                               v7);
  *(float32x2_t *)&v6->fields.dragObjectRect.fields.m_Width = vdiv_f32(vcvt_f32_s32(v8), v7);
  this = (GalleryFullScreenListViewObject___c__DisplayClass25_0_o *)v4->fields.__4__this;
  if ( !this
    || (GalleryFullScreenListViewObject__GetMaximTransformValues(
          (GalleryFullScreenListViewObject_o *)this,
          &localScale,
          &v11,
          v5),
        (v9 = v4->fields.__4__this) == 0)
    || (GameObjectExtensions__SetLocalScale(v9->fields.dragObject, localScale, 0), (v10 = v4->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C93D2C(this, method);
  }
  GameObjectExtensions__SetLocalEulerAngle(v10->fields.dragObject, v11, 0);
  ActionExtensions__Call(v4->fields.setUpEndCallBack, 0);
}