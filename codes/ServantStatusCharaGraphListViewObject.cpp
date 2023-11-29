void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusCharaGraphListViewObject_c *v2; // x8

  if ( (byte_40F8763 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v1);
    byte_40F8763 = 1;
  }
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_HEIGHT = 509.0;
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_WIDTH = 871.0;
  v2 = ServantStatusCharaGraphListViewObject_TypeInfo;
  ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->DEFAULT_SCALE = 1.5438;
  v2->static_fields->MAXIM_IN_SPEED = 0.2;
  v2->static_fields->MAXIM_OUT_SPEED = 0.2;
}


void __fastcall ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8762 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F8762 = 1;
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
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantStatusCharaGraphListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F874B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___, method);
    byte_40F874B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
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

  if ( (byte_40F8753 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F8753 = 1;
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
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  bool IsExpandImage; // w0
  const MethodInfo *v10; // x2
  ServantStatusCharaGraphListViewItemDraw_o *v11; // x8
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x0
  int32_t dispMode; // w2

  if ( (byte_40F875E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40F875E = 1;
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
        IsExpandImage = ServantStatusCharaGraphListViewObject__IsExpandImage(
                          (ServantStatusCharaGraphListViewObject_o *)v6,
                          item,
                          v7);
        v11 = this->fields.itemDraw;
        if ( IsExpandImage )
        {
          if ( v11 )
          {
            ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(v11, item, v10);
            return;
          }
LABEL_18:
          sub_B170D4();
        }
        if ( !v11 )
          goto LABEL_18;
        dispMode = this->fields.dispMode;
        v12 = this->fields.itemDraw;
      }
      else
      {
        v12 = this->fields.itemDraw;
        if ( !v12 )
          goto LABEL_18;
        dispMode = this->fields.dispMode;
      }
      ServantStatusCharaGraphListViewItemDraw__SetItem(v12, item, dispMode, v8);
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
  UnityEngine_GameObject_o *v4; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusCharaGraphListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F874E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_40F874E = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     DragObject,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v4;
}


void __fastcall ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusCharaGraphListViewObject_c *v4; // x0

  if ( (byte_40F8754 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6159, v3);
    byte_40F8754 = 1;
  }
  v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6159,
    v4->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x1
  const MethodInfo *v5; // x2

  if ( (byte_40F8759 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_40F8759 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_B170D4();
  Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dragObject,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_22383240(this, Component_srcLineSprite, v5);
}


// attributes: thunk
void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_22383240(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21
  UnityEngine_Object_o *dispObject; // x21
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  ServantStatusCharaGraphListViewItemDraw_o *v11; // x20
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x0
  ServantStatusCharaGraphListViewObject_c *v13; // x0

  if ( (byte_40F875A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, target);
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6144, v6);
    byte_40F875A = 1;
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
    v10 = target->fields.dispObject;
    if ( !v10 )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeSelf(v10, 0LL) )
    {
      v12 = target->fields.itemDraw;
      if ( v12 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(v12, v9);
        goto LABEL_21;
      }
    }
    else
    {
LABEL_14:
      v11 = target->fields.itemDraw;
      if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      }
      if ( v11 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v11,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v9);
        goto LABEL_21;
      }
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_21:
  v13 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v13 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6144,
    v13->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F8758 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6143, method);
    byte_40F8758 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6143,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_22383240(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusCharaGraphListViewObject_c *v6; // x0
  struct ListViewManager_o *manager; // x20
  __int64 v8; // x10
  UnityEngine_GameObject_o *dragObject; // x0
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v15; // x20
  float z; // s11
  float MAXIM_IN_SPEED; // s10
  float v18; // s5
  float v19; // s6
  float w; // s7
  float v21; // s4
  TweenPosition_o *v22; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o v38; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40F8756 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_6156, v5);
    byte_40F8756 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v38.fields.z = 0.0;
  *(_QWORD *)&v38.fields.x = 0LL;
  v6 = ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v6 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_12;
  v8 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    goto LABEL_12;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
    goto LABEL_12;
  ServantStatusCharaGraphListViewManager__DragBackFadeout(
    (ServantStatusCharaGraphListViewManager_o *)manager,
    v6->static_fields->MAXIM_IN_SPEED,
    method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dragObject,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(Component_srcLineSprite, v11);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v38, v12);
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v15 = this->fields.dragObject;
  z = zero.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v42 = UnityEngine_Quaternion__Euler_34841604(v38, 0LL);
  v18 = v42.fields.y;
  v19 = v42.fields.z;
  w = v42.fields.w;
  v42.fields.y = v42.fields.x;
  v42.fields.z = v18;
  v42.fields.w = v19;
  v21 = w;
  TweenRotation__Begin(v15, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v42.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  v22 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v41,
          0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v22 )
LABEL_12:
    sub_B170D4();
  v22->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  p_eventReceiver = &v22->fields.eventReceiver;
  sub_B16F98((BattleServantConfConponent_o *)p_eventReceiver, gameObject, v24, v25, v26, v27, v28, v29);
  v31 = (System_Int32_array **)StringLiteral_6156;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6156;
  sub_B16F98((BattleServantConfConponent_o *)(p_eventReceiver + 1), v31, v32, v33, v34, v35, v36, v37);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o **p_playScriptButton; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *playScriptButton; // x19

  if ( (byte_40F8757 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10657, v3);
    sub_B16FFC(&StringLiteral_6159, v4);
    byte_40F8757 = 1;
  }
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6159,
    1.0 / (float)targetFrameRate,
    0LL);
  v6 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10657, 0LL);
  p_playScriptButton = &this->fields.playScriptButton;
  this->fields.playScriptButton = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playScriptButton,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  playScriptButton = (UnityEngine_Object_o *)this->fields.playScriptButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playScriptButton, 0LL, 0LL) )
  {
    if ( !*p_playScriptButton )
      sub_B170D4();
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
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  ServantStatusCharaGraphListViewObject_o *v16; // x20
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8755 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B16FFC(&StringLiteral_6155, v6);
    byte_40F8755 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
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
  if ( !dragObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    dragObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_B170D4();
  }
  v16 = (ServantStatusCharaGraphListViewObject_o *)Component_srcLineSprite;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6155,
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
    sub_B16F98(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewManager_o *manager; // x20
  ServantStatusCharaGraphListViewObject_c *v8; // x0
  __int64 v9; // x10
  __int64 v10; // x10
  float MAXIM_IN_SPEED; // s0
  ServantStatusCharaGraphListViewManager_o *v12; // x0
  UnityEngine_GameObject_o *dragObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_o *v15; // x20
  UnityEngine_Object_o *mMapCtrl_SpotRoadInfo; // x21
  const MethodInfo *v17; // x1
  ServantStatusCharaGraphListViewItemDraw_o *v18; // x20
  ServantStatusCharaGraphListViewObject_c *v19; // x0
  UnityEngine_GameObject_o *v20; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v25; // s4
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UnityEngine_Transform_o *v29; // x0
  int v30; // s0
  float v33; // s4
  float v34; // s5
  float v35; // s3
  TweenPosition_o *v36; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_GameObject_o **p_playScriptButton; // x19
  UnityEngine_Object_o *v53; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v62; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40F875C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_TypeInfo, v4);
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6194, v6);
    byte_40F875C = 1;
  }
  manager = this->fields.manager;
  v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_40;
  v9 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    goto LABEL_40;
  }
  v10 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  MAXIM_IN_SPEED = v8->static_fields->MAXIM_IN_SPEED;
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
    v12 = (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
        ? (ServantStatusCharaGraphListViewManager_o *)manager
        : 0LL;
  else
    v12 = 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v12, MAXIM_IN_SPEED, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_40;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              dragObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_40;
  v15 = Component_srcLineSprite;
  mMapCtrl_SpotRoadInfo = (UnityEngine_Object_o *)Component_srcLineSprite->fields.mMapCtrl_SpotRoadInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mMapCtrl_SpotRoadInfo, 0LL, 0LL) )
  {
    v18 = (ServantStatusCharaGraphListViewItemDraw_o *)v15->fields.mMapCtrl_SpotRoadInfo;
    if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    }
    if ( !v18 )
      goto LABEL_40;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v18,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      v17);
  }
  v19 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v20 = this->fields.dragObject;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v19 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  MAXIM_OUT_SPEED = v19->static_fields->MAXIM_OUT_SPEED;
  v63 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
  y = v63.fields.y;
  z = v63.fields.z;
  w = v63.fields.w;
  v63.fields.y = v63.fields.x;
  v63.fields.z = y;
  v63.fields.w = z;
  v25 = w;
  TweenRotation__Begin(v20, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v63.fields.y, 0LL);
  v62.fields.x = 1.0;
  v62.fields.y = 1.0;
  v62.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v62,
    0LL);
  v26 = this->fields.dragObject;
  if ( !v26 )
    goto LABEL_40;
  transform = UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !transform )
    goto LABEL_40;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v29 )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position(v29, 0LL);
  if ( !parent )
    goto LABEL_40;
  v61 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = v61.fields.y;
  v34 = v61.fields.z;
  v61.fields.y = v61.fields.x;
  v61.fields.z = v33;
  v35 = v34;
  v36 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v61.fields.y,
          0LL);
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_40;
  v36->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  p_eventReceiver = &v36->fields.eventReceiver;
  sub_B16F98((BattleServantConfConponent_o *)p_eventReceiver, gameObject, v38, v39, v40, v41, v42, v43);
  v45 = (System_Int32_array **)StringLiteral_6194;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6194;
  sub_B16F98((BattleServantConfConponent_o *)(p_eventReceiver + 1), v45, v46, v47, v48, v49, v50, v51);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = &this->fields.playScriptButton;
  v53 = (UnityEngine_Object_o *)playScriptButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    if ( *p_playScriptButton )
    {
      UnityEngine_GameObject__SetActive(*p_playScriptButton, 1, 0LL);
      *p_playScriptButton = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_playScriptButton, 0LL, v55, v56, v57, v58, v59, v60);
      return;
    }
LABEL_40:
    sub_B170D4();
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x0
  __int64 v5; // x10
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_40F875D & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    byte_40F875D = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (v5 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_B170D4();
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v6);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v14);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F875B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6193, method);
    byte_40F875B = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6193,
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

  if ( (byte_40F8751 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    byte_40F8751 = 1;
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

  if ( (byte_40F874D & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, method);
    byte_40F874D = 1;
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
  __int64 v6; // x1
  float v7; // s8
  ServantStatusCharaGraphListViewObject_c *v8; // x0
  __int16 v9; // w8
  int v10; // w9
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8
  float DEFAULT_SCALE; // s8
  ManagerConfig_c *v13; // x0
  int *p_WIDTH; // x9
  ManagerConfig_c *v15; // x0
  float v16; // s0

  if ( (byte_40F8752 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, localScale);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B16FFC(&ServantStatusCharaGraphListViewObject_TypeInfo, v6);
    byte_40F8752 = 1;
  }
  v7 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v9 = WORD1(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v9 & 0x400) != 0 )
  {
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
      v9 = WORD1(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v10 = v9 & 0x400;
  }
  else
  {
    v10 = 0;
  }
  static_fields = v8->static_fields;
  if ( v7 >= (float)(static_fields->CARD_HEIGHT / static_fields->CARD_WIDTH) )
  {
    if ( v10 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    v15 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v15 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    static_fields = (struct ServantStatusCharaGraphListViewObject_StaticFields *)((char *)static_fields + 4);
    p_WIDTH = &v15->static_fields->WIDTH;
  }
  else
  {
    if ( v10 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
    v13 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v13 = ManagerConfig_TypeInfo;
      static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
    }
    p_WIDTH = &v13->static_fields->HEIGHT;
  }
  v16 = (float)(DEFAULT_SCALE * (float)*p_WIDTH) / static_fields->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  localScale->fields.x = v16;
  localScale->fields.y = v16;
  *(_QWORD *)&localEulerAngle->fields.x = 0LL;
  localEulerAngle->fields.z = 90.0;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Transform_o *v32; // x0

  if ( (byte_40F874F & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40F874F = 1;
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
    sub_B16F98(
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
      sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)v23, v24, v25, v26, v27, v28);
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
            (v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
      {
        sub_B170D4();
      }
      UnityEngine_Transform__set_localScale(v32, this->fields.baseScale, 0LL);
    }
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B16F98(
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
        ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_22383240(this, this, v23);
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_22365384(
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_22366640(
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_22366720(
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
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  ServantStatusListViewItem_o *mainInfo; // x0
  int32_t SvtId; // w0
  char IsAdditionExpandImage; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8761 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8761 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
        (mainInfo = item->fields.mainInfo) == 0LL)
    || (SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL), !v8) )
  {
    sub_B170D4();
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v8,
    &entity,
    SvtId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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

  if ( (byte_40F874C & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F874C = 1;
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


void __fastcall ServantStatusCharaGraphListViewObject__SetDragObjectItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  bool IsExpandImage; // w0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  ServantStatusCharaGraphListViewItemDraw_o *itemDraw; // x0
  ServantStatusCharaGraphListViewItemDraw_o *v9; // x0

  IsExpandImage = ServantStatusCharaGraphListViewObject__IsExpandImage(this, item, method);
  if ( !item )
    goto LABEL_7;
  if ( IsExpandImage )
  {
    item->fields.itemDataType = 1;
    itemDraw = this->fields.itemDraw;
    if ( itemDraw )
    {
      ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(itemDraw, item, v6);
      return;
    }
LABEL_7:
    sub_B170D4();
  }
  item->fields.itemDataType = 0;
  v9 = this->fields.itemDraw;
  if ( !v9 )
    goto LABEL_7;
  ServantStatusCharaGraphListViewItemDraw__SetItem(v9, item, this->fields.dispMode, v7);
}


void __fastcall ServantStatusCharaGraphListViewObject__SetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__SetItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_o *v4; // x19
  ServantStatusCharaGraphListViewItem_o *linkItem; // x20
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  ServantStatusCharaGraphListViewItemDraw_o *itemDraw; // x0
  __int64 v10; // x9
  __int64 v11; // x9
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x0

  v4 = this;
  if ( (byte_40F8760 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B16FFC(
                                                        &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                        *(_QWORD *)&dispType);
    byte_40F8760 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem;
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
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B173C8(v4->fields.linkItem);
LABEL_19:
    ServantStatusCharaGraphListViewObject__IsExpandImage(this, 0LL, method);
    goto LABEL_20;
  }
  if ( !linkItem )
    goto LABEL_19;
  v6 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( ServantStatusCharaGraphListViewObject__IsExpandImage(
         this,
         (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem,
         method) )
  {
    linkItem->fields.itemDataType = 1;
    itemDraw = v4->fields.itemDraw;
    if ( itemDraw )
    {
      ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(itemDraw, linkItem, v7);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  linkItem->fields.itemDataType = 0;
  v12 = v4->fields.itemDraw;
  if ( !v12 )
    goto LABEL_20;
  ServantStatusCharaGraphListViewItemDraw__SetItem(v12, linkItem, v4->fields.dispMode, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__SetupDisp(
        ServantStatusCharaGraphListViewObject_o *this,
        bool hideFrame,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 v7; // x10
  bool v8; // w1
  UnityEngine_Object_o *itemDraw; // x22
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  bool IsExpandImage; // w0
  const MethodInfo *v14; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v15; // x8
  const MethodInfo *v16; // x1
  ServantStatusCharaGraphListViewItemDraw_o *v17; // x0
  int32_t dispMode; // w2
  ServantStatusCharaGraphListViewItemDraw_o *v19; // x0

  if ( (byte_40F8750 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, hideFrame);
    sub_B16FFC(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_40F8750 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  v7 = *(&ServantStatusCharaGraphListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v10 )
  {
    if ( !linkItem )
      goto LABEL_26;
    if ( linkItem->fields.itemDataType == 1 )
    {
      IsExpandImage = ServantStatusCharaGraphListViewObject__IsExpandImage(
                        (ServantStatusCharaGraphListViewObject_o *)v10,
                        linkItem,
                        v11);
      v15 = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        if ( !v15 )
          goto LABEL_26;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(this->fields.itemDraw, linkItem, v14);
        if ( !hideFrame )
          return;
        goto LABEL_23;
      }
      if ( !v15 )
        goto LABEL_26;
      dispMode = this->fields.dispMode;
      v17 = this->fields.itemDraw;
    }
    else
    {
      v17 = this->fields.itemDraw;
      if ( !v17 )
        goto LABEL_26;
      dispMode = this->fields.dispMode;
    }
    ServantStatusCharaGraphListViewItemDraw__SetItem(v17, linkItem, dispMode, v12);
    if ( hideFrame )
    {
LABEL_23:
      v19 = this->fields.itemDraw;
      if ( v19 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(v19, v16);
        return;
      }
LABEL_26:
      sub_B170D4();
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
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

  if ( (byte_40F875F & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80, v3);
    byte_40F875F = 1;
  }
  v13 = 0.0;
  v12 = 0LL;
  v4 = j_il2cpp_value_box_0(ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
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

  if ( (byte_40F8749 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F8749 = 1;
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
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B173C8(v8);
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

  if ( (byte_40F874A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F874A = 1;
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
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B173C8(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}