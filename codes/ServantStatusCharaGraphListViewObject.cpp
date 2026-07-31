void ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8

  if ( (byte_593414A & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_593414A = 1;
  }
  static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CARD_HEIGHT = xmmword_E94640;
  static_fields->MAXIM_OUT_SPEED = 0.2;
}


void ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934149 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5934149 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantStatusCharaGraphListViewObject__Awake(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_5934133 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
    byte_5934133 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusCharaGraphListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


float ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(
        ServantStatusCharaGraphListViewObject_o *this,
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

  if ( (byte_593413B & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_593413B = 1;
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


void ServantStatusCharaGraphListViewObject__ChangeDisplay(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  bool IsExpandImage; // w8
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x0

  if ( (byte_5934146 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934146 = 1;
  }
  if ( item )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
    if ( v6 )
    {
      if ( item->fields.itemDataType == 1 )
      {
        IsExpandImage = ServantStatusCharaGraphListViewObject__IsExpandImage(
                          (ServantStatusCharaGraphListViewObject_o *)v6,
                          item,
                          v8);
        v12 = this->fields.itemDraw;
        if ( IsExpandImage )
        {
          if ( v12 )
          {
            ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(v12, item, v10);
            return;
          }
LABEL_15:
          sub_21FFECC(v12, v7);
        }
        if ( !v12 )
          goto LABEL_15;
      }
      else
      {
        v12 = this->fields.itemDraw;
        if ( !v12 )
          goto LABEL_15;
      }
      ServantStatusCharaGraphListViewItemDraw__SetItem(v12, item, this->fields.dispMode, v9);
    }
  }
}


bool ServantStatusCharaGraphListViewObject__CheckViewerObject(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  return (unsigned int)(mode - 7) < 3;
}


UnityEngine_GameObject_o *ServantStatusCharaGraphListViewObject__CreateDragObject(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_5934136 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_5934136 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0) )
  {
    sub_21FFECC(DragObject, v4);
  }
  ServantStatusCharaGraphListViewObject__Init_41305568((ServantStatusCharaGraphListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewObject_c *v4; // x0

  if ( (byte_593413C & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_21FFC50(&StringLiteral_6486/*"EventMoveEnd"*/);
    byte_593413C = 1;
  }
  v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6486/*"EventMoveEnd"*/,
    v4->static_fields->MAXIM_IN_SPEED,
    0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x1
  const MethodInfo *v5; // x2

  if ( (byte_5934141 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_5934141 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_21FFECC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_41320944(
    this,
    (ServantStatusCharaGraphListViewObject_o *)Component_object,
    v5);
}


// attributes: thunk
void ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_41320944(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *v4; // x19
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dispObject; // x21
  __int64 v9; // x2
  ServantStatusCharaGraphListViewItemDraw_o *v10; // x20
  ServantStatusCharaGraphListViewObject_c *v11; // x0

  v4 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_5934142 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_21FFC50(&StringLiteral_6467/*"EventFadeoutFrameMove2"*/);
    byte_5934142 = 1;
  }
  if ( !target )
    goto LABEL_21;
  itemDraw = (UnityEngine_Object_o *)target->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    dispObject = (UnityEngine_Object_o *)target->fields.dispObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
      goto LABEL_12;
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.dispObject;
    if ( !this )
      goto LABEL_21;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    {
LABEL_12:
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
      v10 = target->fields.itemDraw;
      if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, target, v9);
      if ( v10 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v10,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_18;
      }
LABEL_21:
      sub_21FFECC(this, target);
    }
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.itemDraw;
    if ( !this )
      goto LABEL_21;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      (const MethodInfo *)target);
  }
LABEL_18:
  v11 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, v6, v7);
    v11 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6467/*"EventFadeoutFrameMove2"*/, v11->static_fields->MAXIM_IN_SPEED, 0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_5934140 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6466/*"EventFadeoutFrameMove"*/);
    byte_5934140 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6466/*"EventFadeoutFrameMove"*/,
    delay,
    0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_41320944(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  int v6; // w8
  __int64 naturalAligment; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *v11; // x20
  unsigned __int64 v12; // d0 OVERLAPPED
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v14; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  int v18; // s1
  float MAXIM_IN_SPEED; // s11
  float v20; // s5
  float v21; // s6
  float w; // s7
  float v23; // s4
  TweenPosition_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  UnityEngine_Vector3_o v38; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_593413E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_21FFC50(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_21FFC50(&StringLiteral_6483/*"EventMaximMove2"*/);
    byte_593413E = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v6 = *(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1);
  v38.fields.z = 0.0;
  *(_QWORD *)&v38.fields.x = 0;
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_13;
  naturalAligment = ServantStatusCharaGraphListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_13;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
    goto LABEL_13;
  ServantStatusCharaGraphListViewManager__DragBackFadeout(
    (ServantStatusCharaGraphListViewManager_o *)manager,
    *(float *)(dragObject[7].fields.m_CachedPtr + 12),
    method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(
                                  (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                  v9);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v38, v10);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v11 = this->fields.dragObject;
  v12 = vmul_f32(*(float32x2_t *)&v38.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v14 = v38.fields.z * 0.017453;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  v18 = HIDWORD(v12);
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v41 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v12, 0);
  v20 = v41.fields.y;
  v21 = v41.fields.z;
  w = v41.fields.w;
  v41.fields.y = v41.fields.x;
  v41.fields.z = v20;
  v41.fields.w = v21;
  v23 = w;
  TweenRotation__Begin(v11, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v41.fields.y, 0);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v24 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v40,
          0);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v24 )
LABEL_13:
    sub_21FFECC(dragObject, method);
  v24->fields.eventReceiver = dragObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v24->fields.eventReceiver,
    (int32_t)dragObject,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = StringLiteral_6483/*"EventMaximMove2"*/;
  v24->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6483/*"EventMaximMove2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->fields.callWhenFinished, v31, v32, v33, v34, v35, v36, v37);
}


void ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_playScriptButton; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_593413F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_11105/*"PlayScriptButton"*/);
    sub_21FFC50(&StringLiteral_6486/*"EventMoveEnd"*/);
    byte_593413F = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6486/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0);
  v5 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_11105/*"PlayScriptButton"*/, 0);
  this->fields.playScriptButton = v5;
  p_playScriptButton = &this->fields.playScriptButton;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_playScriptButton, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v15 = (UnityEngine_Object_o *)*p_playScriptButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    if ( !*p_playScriptButton )
      sub_21FFECC(0, v16);
    UnityEngine_GameObject__SetActive(*p_playScriptButton, 0, 0);
  }
}


void ServantStatusCharaGraphListViewObject__EventMaximStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x2

  if ( (byte_593413D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_21FFC50(&StringLiteral_6482/*"EventMaximMove"*/);
    byte_593413D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0 )
  {
    sub_21FFECC(dragObject, v13);
  }
  ServantStatusCharaGraphListViewObject__Init_41305568((ServantStatusCharaGraphListViewObject_o *)dragObject, 2, v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6482/*"EventMaximMove"*/,
    delay,
    0);
}


void ServantStatusCharaGraphListViewObject__EventMaximStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-20h] BYREF

  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0;
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(this, method);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v7, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale(gameObject, localScale, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalEulerAngle(v5, v7, 0);
  ServantStatusCharaGraphListViewObject__EventMaximMove2(this, v6);
}


void ServantStatusCharaGraphListViewObject__EventMoveEnd(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._BoardType_k__BackingField) = 0;
  *(&p_callbackFunc[-1].fields._BoardType_k__BackingField + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__EventUsuallyMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 naturalAligment; // x10
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Object_o *monitor; // x21
  __int64 v10; // x2
  ServantStatusCharaGraphListViewItemDraw_o *v11; // x20
  ServantStatusCharaGraphListViewObject_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v18; // s4
  UnityEngine_Transform_o *parent; // x20
  float v20; // s4
  float v21; // s5
  float v22; // s3
  TweenPosition_o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  MissionNaviTransitionBoardItem_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v40; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v51; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_5934144 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_21FFC50(&StringLiteral_6531/*"EventUsuallyMove2"*/);
    byte_5934144 = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_30;
  naturalAligment = ServantStatusCharaGraphListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_30;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
    goto LABEL_30;
  ServantStatusCharaGraphListViewManager__DragBackFadein(
    (ServantStatusCharaGraphListViewManager_o *)manager,
    *(float *)(dragObject[7].fields.m_CachedPtr + 12),
    method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_30;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             dragObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_30;
  v8 = dragObject;
  monitor = (UnityEngine_Object_o *)dragObject[5].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
    v11 = (ServantStatusCharaGraphListViewItemDraw_o *)v8[5].monitor;
    if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v10);
    if ( !v11 )
      goto LABEL_30;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v11,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v10);
    v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  v48.fields.x = 0.0;
  v48.fields.y = 0.0;
  v48.fields.z = 0.0;
  MAXIM_OUT_SPEED = v12->static_fields->MAXIM_OUT_SPEED;
  v52 = UnityEngine_Quaternion__Internal_FromEulerRad(v48, 0);
  y = v52.fields.y;
  z = v52.fields.z;
  w = v52.fields.w;
  v52.fields.y = v52.fields.x;
  v52.fields.z = y;
  v52.fields.w = z;
  v18 = w;
  TweenRotation__Begin(v13, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v52.fields.y, 0);
  v51.fields.x = 1.0;
  v51.fields.y = 1.0;
  v51.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v51,
    0);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_30;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_30;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_30;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent )
    goto LABEL_30;
  v50 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v20 = v50.fields.y;
  v21 = v50.fields.z;
  v50.fields.y = v50.fields.x;
  v50.fields.z = v20;
  v22 = v21;
  v23 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v50.fields.y,
          0);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v23 )
    goto LABEL_30;
  v23->fields.eventReceiver = dragObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v23->fields.eventReceiver,
    (int32_t)dragObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = StringLiteral_6531/*"EventUsuallyMove2"*/;
  v23->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6531/*"EventUsuallyMove2"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (MissionNaviTransitionBoardItem_o *)&this->fields.playScriptButton;
  v40 = (UnityEngine_Object_o *)playScriptButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
  {
    dragObject = (UnityEngine_GameObject_o *)p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive(dragObject, 1, 0);
      p_playScriptButton->klass = 0;
      sub_21FFBF4(p_playScriptButton, 0, v42, v43, v44, v45, v46, v47);
      return;
    }
LABEL_30:
    sub_21FFECC(dragObject, method);
  }
}


void ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1

  if ( (byte_5934145 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewManager_TypeInfo);
    byte_5934145 = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (naturalAligment = ServantStatusCharaGraphListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_21FFECC(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6, v7);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dragObject, 0, v9, v10, v11, v12, v13, v14);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v15);
}


void ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_5934143 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6530/*"EventUsuallyMove"*/);
    byte_5934143 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6530/*"EventUsuallyMove"*/,
    delay,
    0);
}


UnityEngine_GameObject_o *ServantStatusCharaGraphListViewObject__GetDragObject(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dragObject;
}


UnityEngine_Rect_o ServantStatusCharaGraphListViewObject__GetDragObjectRange(
        ServantStatusCharaGraphListViewObject_o *this,
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


UnityEngine_Rect_o ServantStatusCharaGraphListViewObject__GetDragObjectRect(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusCharaGraphListViewObject_c *v3; // x0
  float *p_CARD_HEIGHT; // x8
  float v5; // s3
  float v6; // s4
  float v7; // s2
  float v8; // s0
  float v9; // s1
  float v10; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934139 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_5934139 = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  p_CARD_HEIGHT = &v3->static_fields->CARD_HEIGHT;
  v5 = p_CARD_HEIGHT[1];
  v6 = p_CARD_HEIGHT[2];
  v7 = *p_CARD_HEIGHT / v6;
  v8 = (float)(*p_CARD_HEIGHT * -0.5) / v6;
  v9 = (float)(v5 * -0.5) / v6;
  v10 = v5 / v6;
  result.fields.m_Height = v10;
  result.fields.m_Width = v7;
  result.fields.m_YMin = v9;
  result.fields.m_XMin = v8;
  return result;
}


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewObject__GetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5934135 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_5934135 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ServantStatusCharaGraphListViewObject__GetMaximTransformValues(
        ServantStatusCharaGraphListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  float v8; // s0
  ServantStatusCharaGraphListViewObject_c *v9; // x0
  float v10; // s8
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8
  int v12; // w9
  ManagerConfig_c *v13; // x0
  float DEFAULT_SCALE; // s8
  int *p_WIDTH; // x9
  ManagerConfig_c *v16; // x0
  int v17; // s0
  float CARD_HEIGHT; // s1
  float v19; // s0

  if ( (byte_593413A & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_21FFC50(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_593413A = 1;
  }
  v8 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v9 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v10 = v8;
  if ( !*(&ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, v6, v7);
    v9 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  static_fields = v9->static_fields;
  v12 = *(&v9->_2.cctor_finished + 1);
  if ( v10 >= (float)(static_fields->CARD_HEIGHT / static_fields->CARD_WIDTH) )
  {
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(v9, v6, v7);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    v16 = ManagerConfig_TypeInfo;
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v6, v7);
      v16 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    static_fields = (struct ServantStatusCharaGraphListViewObject_StaticFields *)((char *)static_fields + 4);
    p_WIDTH = &v16->static_fields->WIDTH;
  }
  else
  {
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(v9, v6, v7);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    v13 = ManagerConfig_TypeInfo;
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v6, v7);
      v13 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    p_WIDTH = &v13->static_fields->HEIGHT;
  }
  v17 = *p_WIDTH;
  CARD_HEIGHT = static_fields->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  v19 = (float)(DEFAULT_SCALE * (float)v17) / CARD_HEIGHT;
  localScale->fields.x = v19;
  localScale->fields.y = v19;
  *(_QWORD *)&localEulerAngle->fields.x = 0;
  localEulerAngle->fields.z = 90.0;
}


void ServantStatusCharaGraphListViewObject__Init(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int32_t v13; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  const MethodInfo *v25; // x1
  MethodInfo *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w9
  int32_t v33; // w8
  MissionNaviTransitionBoardItem_c *v34; // x19

  if ( (byte_5934137 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_5934137 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusCharaGraphListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  if ( (unsigned int)(v13 - 7) >= 3 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_21FFECC(transform, v23);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  }
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( v13 > 5 )
  {
    if ( v13 > 8 )
    {
      switch ( v13 )
      {
        case 9:
          this->fields.dispMode = 2;
          ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_41320944(this, this, v26);
          break;
        case 10:
          this->fields.dispMode = 2;
          ServantStatusCharaGraphListViewObject__EventExViewer(this, v25);
          break;
        case 11:
          ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v26);
          if ( state )
            goto LABEL_40;
LABEL_41:
          ServantStatusCharaGraphListViewObject__SetupDisp(this, v13 == 8, v26);
LABEL_42:
          v34 = p_callbackFunc->klass;
          if ( p_callbackFunc->klass )
          {
            p_callbackFunc->klass = 0;
            sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)v26, v27, v28, v29, v30, v31);
            ((void (__fastcall *)(Il2CppClass *, _QWORD))v34->_1.namespaze)(
              v34->_1.element_class,
              *(_QWORD *)&v34->_1.byval_arg.bits);
          }
          return;
        default:
          goto LABEL_35;
      }
      this->fields.state = 3;
      return;
    }
    if ( (unsigned int)(v13 - 7) >= 2 )
    {
      if ( v13 == 6 )
      {
        this->fields.state = 2;
        ServantStatusCharaGraphListViewObject__EventUsuallyStart(this, delay, v25);
        return;
      }
LABEL_35:
      if ( !state )
        goto LABEL_41;
LABEL_40:
      if ( dispMode == this->fields.dispMode )
        goto LABEL_42;
      goto LABEL_41;
    }
    this->fields.dispMode = 2;
    ServantStatusCharaGraphListViewObject__EventMaximStartViewer(this, v25);
    v33 = 3;
LABEL_39:
    this->fields.state = v33;
    if ( state )
      goto LABEL_40;
    goto LABEL_41;
  }
  if ( v13 <= 2 )
  {
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
          goto LABEL_35;
        v32 = 1;
        goto LABEL_34;
      }
      v33 = 1;
      this->fields.dispMode = 1;
    }
    else
    {
      v33 = 1;
      this->fields.dispMode = 0;
    }
    goto LABEL_39;
  }
  if ( v13 == 3 )
  {
    v32 = 3;
LABEL_34:
    this->fields.dispMode = 2;
    this->fields.state = v32;
    goto LABEL_35;
  }
  this->fields.dispMode = 2;
  this->fields.state = 2;
  if ( v13 == 4 )
    ServantStatusCharaGraphListViewObject__EventMaximStart(this, delay, v25);
  else
    ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(this, delay, v25);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__Init_41305568(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__Init_41306344(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__Init_41308236(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


bool ServantStatusCharaGraphListViewObject__IsExpandImage(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ServantEntity_o *ServantEntity; // x0
  ServantEntity_o *v5; // x20
  int32_t v6; // w1

  if ( !item || (this = (ServantStatusCharaGraphListViewObject_o *)item->fields.mainInfo) == 0 )
    sub_21FFECC(this, item);
  ServantEntity = ServantStatusListViewItem__GetServantEntity((ServantStatusListViewItem_o *)this, 0, 0);
  if ( ServantEntity )
  {
    v5 = ServantEntity;
    v6 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(item->fields.limitCountStage, 0);
    LOBYTE(ServantEntity) = ServantEntity__IsAdditionExpandImage(v5, v6, 0);
  }
  return (char)ServantEntity;
}


void ServantStatusCharaGraphListViewObject__OnDestroy(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_5934134 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934134 = 1;
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
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3

  IsExpandImage = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                                 this,
                                                                 item,
                                                                 method);
  if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
  {
    if ( item )
    {
      IsExpandImage = this->fields.itemDraw;
      item->fields.itemDataType = 1;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(IsExpandImage, item, v7);
        return;
      }
    }
LABEL_8:
    sub_21FFECC(IsExpandImage, v6);
  }
  if ( !item )
    goto LABEL_8;
  IsExpandImage = this->fields.itemDraw;
  item->fields.itemDataType = 0;
  if ( !IsExpandImage )
    goto LABEL_8;
  ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, item, this->fields.dispMode, v8);
}


void ServantStatusCharaGraphListViewObject__SetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
}


void ServantStatusCharaGraphListViewObject__SetItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusCharaGraphListViewObject_o *v5; // x19
  struct ListViewItem_o *linkItem; // x8
  ServantStatusCharaGraphListViewItem_c *v7; // x1
  __int64 naturalAligment; // x10
  ServantStatusCharaGraphListViewItem_o *v9; // x20
  __int64 v10; // x10
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  ServantStatusCharaGraphListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  v5 = this;
  if ( (byte_5934148 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_21FFC50(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_5934148 = 1;
  }
  linkItem = v5->fields.linkItem;
  v7 = ServantStatusCharaGraphListViewItem_TypeInfo;
  if ( dispType == 1 )
  {
    if ( linkItem
      && (naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
        v9 = (ServantStatusCharaGraphListViewItem_o *)v5->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                        this,
                                                        v9,
                                                        method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v9 )
      {
        this = (ServantStatusCharaGraphListViewObject_o *)v5->fields.itemDraw;
        v9->fields.itemDataType = 1;
        if ( this )
        {
          ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
            (ServantStatusCharaGraphListViewItemDraw_o *)this,
            v9,
            v11);
          return;
        }
      }
LABEL_21:
      sub_21FFECC(this, v7);
    }
    if ( !v9 )
      goto LABEL_21;
    this = (ServantStatusCharaGraphListViewObject_o *)v5->fields.itemDraw;
    v9->fields.itemDataType = 0;
    if ( !this )
      goto LABEL_21;
    ServantStatusCharaGraphListViewItemDraw__SetItem(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      v9,
      v5->fields.dispMode,
      v12);
  }
  else
  {
    if ( !linkItem )
      goto LABEL_21;
    v10 = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v10
      && (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      HIDWORD(linkItem[1].monitor) = 0;
      ServantStatusCharaGraphListViewObject__SetupDisp(v5, 0, method);
    }
    else
    {
      v13 = (ServantStatusCharaGraphListViewManager_o *)sub_220024C(
                                                          v5->fields.linkItem,
                                                          ServantStatusCharaGraphListViewItem_TypeInfo,
                                                          method,
                                                          v3);
      ServantStatusCharaGraphListViewManager__DragBackOff(v13, v14);
    }
  }
}


void ServantStatusCharaGraphListViewObject__SetupDisp(
        ServantStatusCharaGraphListViewObject_o *this,
        bool hideFrame,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  bool v7; // w1
  int v8; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  bool IsExpandImage; // w8

  if ( (byte_5934138 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_5934138 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v7 = 0;
    v8 = 1;
    goto LABEL_8;
  }
  v8 = 0;
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( v8 )
      goto LABEL_23;
    if ( linkItem->fields.itemDataType == 1 )
    {
      IsExpandImage = ServantStatusCharaGraphListViewObject__IsExpandImage(
                        (ServantStatusCharaGraphListViewObject_o *)v12,
                        linkItem,
                        v14);
      v12 = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        if ( !v12 )
          goto LABEL_23;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(v12, linkItem, v16);
        if ( !hideFrame )
          return;
        goto LABEL_20;
      }
    }
    else
    {
      v12 = this->fields.itemDraw;
    }
    if ( !v12 )
      goto LABEL_23;
    ServantStatusCharaGraphListViewItemDraw__SetItem(v12, linkItem, this->fields.dispMode, v15);
    if ( hideFrame )
    {
LABEL_20:
      v12 = this->fields.itemDraw;
      if ( v12 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(v12, v13);
        return;
      }
LABEL_23:
      sub_21FFECC(v12, v13);
    }
  }
}


System_String_o *ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_5934147 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_5934147 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_240362C(&v11, 0, 0, 0);
  return System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
}


void ServantStatusCharaGraphListViewObject__add_callbackFunc(
        ServantStatusCharaGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusCharaGraphListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934131 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934131 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantStatusCharaGraphListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusCharaGraphListViewObject__remove_callbackFunc(v13, v14, v15);
}


void ServantStatusCharaGraphListViewObject__remove_callbackFunc(
        ServantStatusCharaGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusCharaGraphListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5934132 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934132 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantStatusCharaGraphListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusCharaGraphListViewObject__GetDragObject(v13, v14);
}