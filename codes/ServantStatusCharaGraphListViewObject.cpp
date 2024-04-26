void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_c *v1; // x8

  if ( (byte_434FF4A & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_434FF4A = 1;
  }
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_HEIGHT = 509.0;
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_WIDTH = 871.0;
  v1 = ServantStatusCharaGraphListViewObject_TypeInfo;
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->DEFAULT_SCALE = 1.5438;
  v1->static_fields->MAXIM_IN_SPEED = 0.2;
  v1->static_fields->MAXIM_OUT_SPEED = 0.2;
}


void __fastcall ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_434FF49 & 1) == 0 )
  {
    sub_B70694(&ListViewObject_TypeInfo);
    byte_434FF49 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__Awake(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantStatusCharaGraphListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_434FF32 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
    byte_434FF32 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7076C(0LL, v3);
  Component_srcLineSprite = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


float __fastcall ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  int32_t width; // w0

  if ( (byte_434FF3A & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_434FF3A = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v2->static_fields;
  v4 = (float)static_fields[22];
  v5 = v4 / (float)static_fields[20];
  v6 = v4 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  width = UnityEngine_Screen__get_width(0LL);
  return UnityEngine_Mathf__Clamp((float)height / (float)width, v6, v5, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__ChangeDisplay(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v11; // x2
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x8
  int32_t dispMode; // w2

  if ( (byte_434FF45 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF45 = 1;
  }
  if ( item )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
    if ( v6 )
    {
      if ( item->fields.itemDataType == 1 )
      {
        IsExpandImage = (ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                                       (ServantStatusCharaGraphListViewObject_o *)v6,
                                                                       item,
                                                                       v8);
        v12 = this->fields.itemDraw;
        if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
        {
          if ( v12 )
          {
            ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(v12, item, v11);
            return;
          }
LABEL_18:
          sub_B7076C(IsExpandImage, v7);
        }
        if ( !v12 )
          goto LABEL_18;
        dispMode = this->fields.dispMode;
        IsExpandImage = this->fields.itemDraw;
      }
      else
      {
        IsExpandImage = this->fields.itemDraw;
        if ( !IsExpandImage )
          goto LABEL_18;
        dispMode = this->fields.dispMode;
      }
      ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, item, dispMode, v9);
    }
  }
}


bool __fastcall ServantStatusCharaGraphListViewObject__CheckViewerObject(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 7 || (mode | 1) == 9;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantStatusCharaGraphListViewObject__CreateDragObject(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  ServantStatusCharaGraphListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF35 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_434FF35 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_B7076C(DragObject, v4);
  }
  v6 = (ServantStatusCharaGraphListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


void __fastcall ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_c *v3; // x0

  if ( (byte_434FF3B & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_B70694(&StringLiteral_6269/*"EventMoveEnd"*/);
    byte_434FF3B = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6269/*"EventMoveEnd"*/,
    v3->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x1
  const MethodInfo *v5; // x2

  if ( (byte_434FF40 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_434FF40 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_B7076C(0LL, method);
  Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dragObject,
                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21917232(this, Component_srcLineSprite, v5);
}


// attributes: thunk
void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21917232(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *v4; // x19
  UnityEngine_Object_o *itemDraw; // x21
  UnityEngine_Object_o *dispObject; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v7; // x20
  ServantStatusCharaGraphListViewObject_c *v8; // x0

  v4 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_434FF41 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B70694(&StringLiteral_6254/*"EventFadeoutFrameMove2"*/);
    byte_434FF41 = 1;
  }
  if ( !target )
    goto LABEL_25;
  itemDraw = (UnityEngine_Object_o *)target->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_Object_o *)target->fields.dispObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
      goto LABEL_14;
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.dispObject;
    if ( !this )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (ServantStatusCharaGraphListViewObject_o *)target->fields.itemDraw;
      if ( this )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
          (ServantStatusCharaGraphListViewItemDraw_o *)this,
          (const MethodInfo *)target);
        goto LABEL_21;
      }
    }
    else
    {
LABEL_14:
      v7 = target->fields.itemDraw;
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      }
      if ( v7 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v7,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_21;
      }
    }
LABEL_25:
    sub_B7076C(this, target);
  }
LABEL_21:
  v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6254/*"EventFadeoutFrameMove2"*/, v8->static_fields->MAXIM_IN_SPEED, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_434FF3F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6253/*"EventFadeoutFrameMove"*/);
    byte_434FF3F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6253/*"EventFadeoutFrameMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21917232(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 v5; // x10
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v11; // x20
  float z; // s11
  float MAXIM_IN_SPEED; // s10
  float v14; // s5
  float v15; // s6
  float w; // s7
  float v17; // s4
  TweenPosition_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_434FF3D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_B70694(&StringLiteral_6266/*"EventMaximMove2"*/);
    byte_434FF3D = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v33.fields.z = 0.0;
  *(_QWORD *)&v33.fields.x = 0LL;
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_12;
  v5 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    goto LABEL_12;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
    goto LABEL_12;
  ServantStatusCharaGraphListViewManager__DragBackFadeout(
    (ServantStatusCharaGraphListViewManager_o *)manager,
    *(float *)(*(_QWORD *)&dragObject[7].fields.m_CachedPtr + 12LL),
    method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dragObject,
                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(Component_srcLineSprite, v7);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v33, v8);
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v11 = this->fields.dragObject;
  z = zero.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v37 = UnityEngine_Quaternion__Euler_36099348(v33, 0LL);
  v14 = v37.fields.y;
  v15 = v37.fields.z;
  w = v37.fields.w;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v14;
  v37.fields.w = v15;
  v17 = w;
  TweenRotation__Begin(v11, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v37.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v18 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v36,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v18 )
LABEL_12:
    sub_B7076C(dragObject, method);
  v18->fields.eventReceiver = dragObject;
  p_eventReceiver = &v18->fields.eventReceiver;
  sub_B70630(
    (BattleServantConfConponent_o *)p_eventReceiver,
    (System_Int32_array **)dragObject,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v26 = (System_Int32_array **)StringLiteral_6266/*"EventMaximMove2"*/;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6266/*"EventMaximMove2"*/;
  sub_B70630((BattleServantConfConponent_o *)(p_eventReceiver + 1), v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v4; // x0
  UnityEngine_GameObject_o **p_playScriptButton; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *playScriptButton; // x19
  __int64 v13; // x1

  if ( (byte_434FF3E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_10838/*"PlayScriptButton"*/);
    sub_B70694(&StringLiteral_6269/*"EventMoveEnd"*/);
    byte_434FF3E = 1;
  }
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6269/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0LL);
  v4 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10838/*"PlayScriptButton"*/, 0LL);
  p_playScriptButton = &this->fields.playScriptButton;
  this->fields.playScriptButton = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.playScriptButton,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  playScriptButton = (UnityEngine_Object_o *)this->fields.playScriptButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playScriptButton, 0LL, 0LL) )
  {
    if ( !*p_playScriptButton )
      sub_B7076C(0LL, v13);
    UnityEngine_GameObject__SetActive(*p_playScriptButton, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  ServantStatusCharaGraphListViewObject_o *v15; // x20
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_434FF3C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&StringLiteral_6265/*"EventMaximMove"*/);
    byte_434FF3C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_B70630(
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
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_B7076C(dragObject, v13);
  }
  v15 = (ServantStatusCharaGraphListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v15, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6265/*"EventMaximMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximStartViewer(
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
  *(_QWORD *)&localScale.fields.x = 0LL;
  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0LL;
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(this, method);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v7, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale(gameObject, localScale, 0LL);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalEulerAngle(v5, v7, 0LL);
  ServantStatusCharaGraphListViewObject__EventMaximMove2(this, v6);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMoveEnd(
        ServantStatusCharaGraphListViewObject_o *this,
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
    sub_B70630(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x20
  void *dragObject; // x0
  __int64 v5; // x10
  __int64 v6; // x10
  float v7; // s0
  ServantStatusCharaGraphListViewManager_o *v8; // x0
  void *v9; // x20
  UnityEngine_Object_o *v10; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v11; // x20
  ServantStatusCharaGraphListViewObject_c *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v18; // s4
  UnityEngine_Transform_o *parent; // x20
  int v20; // s0
  float v23; // s4
  float v24; // s5
  float v25; // s3
  TweenPosition_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v42; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v51; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_434FF43 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_B70694(&StringLiteral_6304/*"EventUsuallyMove2"*/);
    byte_434FF43 = 1;
  }
  manager = this->fields.manager;
  dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_40;
  v5 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    goto LABEL_40;
  }
  v6 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  v7 = *(float *)(*((_QWORD *)dragObject + 23) + 12LL);
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    v8 = (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
       ? (ServantStatusCharaGraphListViewManager_o *)manager
       : 0LL;
  else
    v8 = 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v8, v7, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_40;
  dragObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 (UnityEngine_GameObject_o *)dragObject,
                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_40;
  v9 = dragObject;
  v10 = (UnityEngine_Object_o *)*((_QWORD *)dragObject + 15);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
    v11 = (ServantStatusCharaGraphListViewItemDraw_o *)*((_QWORD *)v9 + 15);
    if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    }
    if ( !v11 )
      goto LABEL_40;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v11,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  MAXIM_OUT_SPEED = v12->static_fields->MAXIM_OUT_SPEED;
  v52 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
  y = v52.fields.y;
  z = v52.fields.z;
  w = v52.fields.w;
  v52.fields.y = v52.fields.x;
  v52.fields.z = y;
  v52.fields.w = z;
  v18 = w;
  TweenRotation__Begin(v13, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v52.fields.y, 0LL);
  v51.fields.x = 1.0;
  v51.fields.y = 1.0;
  v51.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v51,
    0LL);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_40;
  dragObject = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_40;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_40;
  v50 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v23 = v50.fields.y;
  v24 = v50.fields.z;
  v50.fields.y = v50.fields.x;
  v50.fields.z = v23;
  v25 = v24;
  v26 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v50.fields.y,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_40;
  v26->fields.eventReceiver = (struct UnityEngine_GameObject_o *)dragObject;
  p_eventReceiver = &v26->fields.eventReceiver;
  sub_B70630(
    (BattleServantConfConponent_o *)p_eventReceiver,
    (System_Int32_array **)dragObject,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v34 = (System_Int32_array **)StringLiteral_6304/*"EventUsuallyMove2"*/;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6304/*"EventUsuallyMove2"*/;
  sub_B70630((BattleServantConfConponent_o *)(p_eventReceiver + 1), v34, v35, v36, v37, v38, v39, v40);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (BattleServantConfConponent_o *)&this->fields.playScriptButton;
  v42 = (UnityEngine_Object_o *)playScriptButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    dragObject = p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragObject, 1, 0LL);
      p_playScriptButton->klass = 0LL;
      sub_B70630(p_playScriptButton, 0LL, v44, v45, v46, v47, v48, v49);
      return;
    }
LABEL_40:
    sub_B7076C(dragObject, method);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 v4; // x10
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_434FF44 & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewManager_TypeInfo);
    byte_434FF44 = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (v4 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v4)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_B7076C(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v13);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_434FF42 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6303/*"EventUsuallyMove"*/);
    byte_434FF42 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6303/*"EventUsuallyMove"*/,
    delay,
    0LL);
}


UnityEngine_GameObject_o *__fastcall ServantStatusCharaGraphListViewObject__GetDragObject(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.dragObject;
}


UnityEngine_Rect_o __fastcall ServantStatusCharaGraphListViewObject__GetDragObjectRange(
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


UnityEngine_Rect_o __fastcall ServantStatusCharaGraphListViewObject__GetDragObjectRect(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  float v2; // s7
  ServantStatusCharaGraphListViewObject_c *v3; // x0
  float *p_CARD_HEIGHT; // x8
  float v5; // s3
  float v6; // s4
  float v7; // s1
  float v8; // s5
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  __int64 v13; // [xsp+0h] [xbp-20h] BYREF
  __int64 v14; // [xsp+8h] [xbp-18h]
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434FF38 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_434FF38 = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  p_CARD_HEIGHT = &v3->static_fields->CARD_HEIGHT;
  v6 = p_CARD_HEIGHT[1];
  v5 = p_CARD_HEIGHT[2];
  v7 = *p_CARD_HEIGHT;
  v13 = 0LL;
  v14 = 0LL;
  v8 = v7 * -0.5;
  v15.fields.m_Width = v7 / v5;
  v15.fields.m_XMin = (float)(v7 * -0.5) / v5;
  v15.fields.m_YMin = (float)(v6 * -0.5) / v5;
  v15.fields.m_Height = v6 / v5;
  UnityEngine_Rect___ctor(v15, v6, v8, v6 * -0.5, v2, (const MethodInfo *)&v13);
  v10 = *((float *)&v13 + 1);
  v9 = *(float *)&v13;
  v12 = *((float *)&v14 + 1);
  v11 = *(float *)&v14;
  result.fields.m_Height = v12;
  result.fields.m_Width = v11;
  result.fields.m_YMin = v10;
  result.fields.m_XMin = v9;
  return result;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewObject__GetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_434FF34 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF34 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ServantStatusCharaGraphListViewObject__GetMaximTransformValues(
        ServantStatusCharaGraphListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  float v6; // s8
  ServantStatusCharaGraphListViewObject_c *v7; // x0
  __int16 v8; // w8
  int v9; // w9
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8
  float DEFAULT_SCALE; // s8
  ManagerConfig_c *v12; // x0
  int *p_WIDTH; // x9
  ManagerConfig_c *v14; // x0
  float v15; // s0

  if ( (byte_434FF39 & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B70694(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_434FF39 = 1;
  }
  v6 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v7 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v8 = WORD1(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v8 & 0x400) != 0 )
  {
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      v7 = ServantStatusCharaGraphListViewObject_TypeInfo;
      v8 = WORD1(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v9 = v8 & 0x400;
  }
  else
  {
    v9 = 0;
  }
  static_fields = v7->static_fields;
  if ( v6 >= (float)(static_fields->CARD_HEIGHT / static_fields->CARD_WIDTH) )
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    v14 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v14 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    static_fields = (struct ServantStatusCharaGraphListViewObject_StaticFields *)((char *)static_fields + 4);
    p_WIDTH = &v14->static_fields->WIDTH;
  }
  else
  {
    if ( v9 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    v12 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v12 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    p_WIDTH = &v12->static_fields->HEIGHT;
  }
  v15 = (float)(DEFAULT_SCALE * (float)*p_WIDTH) / static_fields->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  localScale->fields.x = v15;
  localScale->fields.y = v15;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 90.0;
}


void __fastcall ServantStatusCharaGraphListViewObject__Init(
        ServantStatusCharaGraphListViewObject_o *this,
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x21
  const MethodInfo *v22; // x1
  MethodInfo *v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w8
  System_Action_o *klass; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v32; // x1

  if ( (byte_434FF36 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF36 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v13 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  if ( v14 == 7 )
  {
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
LABEL_11:
    this->fields.dispMode = 2;
    ServantStatusCharaGraphListViewObject__EventMaximStartViewer(this, v22);
LABEL_12:
    v29 = 3;
LABEL_13:
    this->fields.state = v29;
LABEL_14:
    if ( !state || dispMode != this->fields.dispMode )
      ServantStatusCharaGraphListViewObject__SetupDisp(this, v14 == 8, v23);
    klass = (System_Action_o *)p_callbackFunc->klass;
    if ( p_callbackFunc->klass )
    {
      p_callbackFunc->klass = 0LL;
      sub_B70630(p_callbackFunc, 0LL, (System_String_array **)v23, v24, v25, v26, v27, v28);
      System_Action__Invoke(klass, 0LL);
    }
  }
  else
  {
    if ( (v14 | 1) != 9 )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform
        || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
            (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
      {
        sub_B7076C(transform, v32);
      }
      UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    }
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    switch ( v14 )
    {
      case 0:
        this->fields.dispMode = 0;
        goto LABEL_30;
      case 1:
        v29 = 1;
        this->fields.dispMode = 1;
        goto LABEL_13;
      case 2:
        this->fields.dispMode = 2;
LABEL_30:
        v29 = 1;
        goto LABEL_13;
      case 3:
        this->fields.dispMode = 2;
        goto LABEL_12;
      case 4:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        ServantStatusCharaGraphListViewObject__EventMaximStart(this, delay, v22);
        return;
      case 5:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(this, delay, v22);
        return;
      case 6:
        this->fields.state = 2;
        ServantStatusCharaGraphListViewObject__EventUsuallyStart(this, delay, v22);
        return;
      case 8:
        goto LABEL_11;
      case 9:
        this->fields.dispMode = 2;
        ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21917232(this, this, v23);
        goto LABEL_34;
      case 10:
        this->fields.dispMode = 2;
        ServantStatusCharaGraphListViewObject__EventExViewer(this, v22);
LABEL_34:
        this->fields.state = 3;
        break;
      default:
        goto LABEL_14;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_21899528(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_21900784(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_21900864(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


bool __fastcall ServantStatusCharaGraphListViewObject__IsExpandImage(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x20
  char IsAdditionExpandImage; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434FF48 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434FF48 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0LL)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL),
        !v6) )
  {
    sub_B7076C(Instance, v5);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v6,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  IsAdditionExpandImage = (char)entity;
  if ( entity )
    IsAdditionExpandImage = ServantEntity__IsAdditionExpandImage(
                              (ServantEntity_o *)entity,
                              item->fields.imageLimitCount,
                              0LL);
  return IsAdditionExpandImage & 1;
}


void __fastcall ServantStatusCharaGraphListViewObject__OnDestroy(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_434FF33 & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FF33 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B70630(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
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
  if ( !item )
    goto LABEL_7;
  if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
  {
    item->fields.itemDataType = 1;
    IsExpandImage = this->fields.itemDraw;
    if ( IsExpandImage )
    {
      ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(IsExpandImage, item, v7);
      return;
    }
LABEL_7:
    sub_B7076C(IsExpandImage, v6);
  }
  item->fields.itemDataType = 0;
  IsExpandImage = this->fields.itemDraw;
  if ( !IsExpandImage )
    goto LABEL_7;
  ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, item, this->fields.dispMode, v8);
}


void __fastcall ServantStatusCharaGraphListViewObject__SetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33972948((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__SetItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_o *v4; // x19
  ServantStatusCharaGraphListViewItem_o *linkItem; // x20
  ServantStatusCharaGraphListViewItem_c *v6; // x1
  __int64 v7; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x9
  __int64 v11; // x9

  v4 = this;
  if ( (byte_434FF47 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF47 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem;
  v6 = ServantStatusCharaGraphListViewItem_TypeInfo;
  if ( dispType != 1 )
  {
    if ( !linkItem )
      goto LABEL_20;
    v10 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      v11 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
      {
        linkItem->fields.itemDataType = 0;
        ServantStatusCharaGraphListViewObject__SetupDisp(v4, 0, method);
        return;
      }
    }
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B70A60(v4->fields.linkItem);
LABEL_19:
    this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                        this,
                                                        0LL,
                                                        method);
    goto LABEL_20;
  }
  if ( !linkItem )
    goto LABEL_19;
  v7 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( ServantStatusCharaGraphListViewObject__IsExpandImage(
         this,
         (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem,
         method) )
  {
    linkItem->fields.itemDataType = 1;
    this = (ServantStatusCharaGraphListViewObject_o *)v4->fields.itemDraw;
    if ( this )
    {
      ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(
        (ServantStatusCharaGraphListViewItemDraw_o *)this,
        linkItem,
        v8);
      return;
    }
LABEL_20:
    sub_B7076C(this, v6);
  }
  linkItem->fields.itemDataType = 0;
  this = (ServantStatusCharaGraphListViewObject_o *)v4->fields.itemDraw;
  if ( !this )
    goto LABEL_20;
  ServantStatusCharaGraphListViewItemDraw__SetItem(
    (ServantStatusCharaGraphListViewItemDraw_o *)this,
    linkItem,
    v4->fields.dispMode,
    v9);
}


void __fastcall ServantStatusCharaGraphListViewObject__SetupDisp(
        ServantStatusCharaGraphListViewObject_o *this,
        bool hideFrame,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 v6; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v14; // x8
  int32_t dispMode; // w2

  if ( (byte_434FF37 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_434FF37 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  v6 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  IsExpandImage = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                                        itemDraw,
                                                                        0LL,
                                                                        0LL);
  if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_26;
    if ( linkItem->fields.itemDataType == 1 )
    {
      IsExpandImage = (struct ServantStatusCharaGraphListViewItemDraw_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                                            (ServantStatusCharaGraphListViewObject_o *)IsExpandImage,
                                                                            linkItem,
                                                                            v11);
      v14 = this->fields.itemDraw;
      if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_26;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(this->fields.itemDraw, linkItem, v13);
        if ( !hideFrame )
          return;
        goto LABEL_23;
      }
      if ( !v14 )
        goto LABEL_26;
      dispMode = this->fields.dispMode;
      IsExpandImage = this->fields.itemDraw;
    }
    else
    {
      IsExpandImage = this->fields.itemDraw;
      if ( !IsExpandImage )
        goto LABEL_26;
      dispMode = this->fields.dispMode;
    }
    ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, linkItem, dispMode, v12);
    if ( hideFrame )
    {
LABEL_23:
      IsExpandImage = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(IsExpandImage, v10);
        return;
      }
LABEL_26:
      sub_B7076C(IsExpandImage, v10);
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434FF46 & 1) == 0 )
  {
    sub_B70694(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    byte_434FF46 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode, v2);
  if ( !v4 )
    sub_B7076C(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44760452(v7, (System_String_o *)StringLiteral_82/*" "*/, v11, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__add_callbackFunc(
        ServantStatusCharaGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_434FF30 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FF30 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B70A60(v8);
  ServantStatusCharaGraphListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantStatusCharaGraphListViewObject__remove_callbackFunc(
        ServantStatusCharaGraphListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_434FF31 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_434FF31 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B70A60(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}