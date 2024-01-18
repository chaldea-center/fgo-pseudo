void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantStatusCharaGraphListViewObject_c *v2; // x8

  if ( (byte_4185FE8 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, v1);
    byte_4185FE8 = 1;
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
  if ( (byte_4185FE7 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4185FE7 = 1;
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

  if ( (byte_4185FD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___, method);
    byte_4185FD0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
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

  if ( (byte_4185FD8 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_4185FD8 = 1;
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

  if ( (byte_4185FE3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4185FE3 = 1;
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
          sub_B2C434(IsExpandImage, v7);
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

  if ( (byte_4185FD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_4185FD3 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
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
  __int64 v3; // x1
  ServantStatusCharaGraphListViewObject_c *v4; // x0

  if ( (byte_4185FD9 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6177/*"EventMoveEnd"*/, v3);
    byte_4185FD9 = 1;
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
    (System_String_o *)StringLiteral_6177/*"EventMoveEnd"*/,
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

  if ( (byte_4185FDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_4185FDE = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_B2C434(0LL, method);
  Component_srcLineSprite = (ServantStatusCharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         dragObject,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21755524(this, Component_srcLineSprite, v5);
}


// attributes: thunk
void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21755524(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21
  UnityEngine_Object_o *dispObject; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v9; // x20
  ServantStatusCharaGraphListViewObject_c *v10; // x0

  v4 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_4185FDF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, target);
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B2C35C(&StringLiteral_6162/*"EventFadeoutFrameMove2"*/, v6);
    byte_4185FDF = 1;
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
      v9 = target->fields.itemDraw;
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
      if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      }
      if ( v9 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v9,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_21;
      }
    }
LABEL_25:
    sub_B2C434(this, target);
  }
LABEL_21:
  v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6162/*"EventFadeoutFrameMove2"*/, v10->static_fields->MAXIM_IN_SPEED, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185FDD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6161/*"EventFadeoutFrameMove"*/, method);
    byte_4185FDD = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6161/*"EventFadeoutFrameMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21755524(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 v8; // x10
  ServantStatusCharaGraphListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *v14; // x20
  float z; // s11
  float MAXIM_IN_SPEED; // s10
  float v17; // s5
  float v18; // s6
  float w; // s7
  float v20; // s4
  TweenPosition_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Vector3_o v36; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4185FDB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B2C35C(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_6174/*"EventMaximMove2"*/, v5);
    byte_4185FDB = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v36.fields.z = 0.0;
  *(_QWORD *)&v36.fields.x = 0LL;
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
  v8 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    goto LABEL_12;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
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
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(Component_srcLineSprite, v10);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v36, v11);
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  v14 = this->fields.dragObject;
  z = zero.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v40 = UnityEngine_Quaternion__Euler_35347036(v36, 0LL);
  v17 = v40.fields.y;
  v18 = v40.fields.z;
  w = v40.fields.w;
  v40.fields.y = v40.fields.x;
  v40.fields.z = v17;
  v40.fields.w = v18;
  v20 = w;
  TweenRotation__Begin(v14, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v40.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  v21 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v39,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
LABEL_12:
    sub_B2C434(dragObject, method);
  v21->fields.eventReceiver = dragObject;
  p_eventReceiver = &v21->fields.eventReceiver;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_eventReceiver,
    (System_Int32_array **)dragObject,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v29 = (System_Int32_array **)StringLiteral_6174/*"EventMaximMove2"*/;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6174/*"EventMaximMove2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_eventReceiver + 1), v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v15; // x1

  if ( (byte_4185FDC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10691/*"PlayScriptButton"*/, v3);
    sub_B2C35C(&StringLiteral_6177/*"EventMoveEnd"*/, v4);
    byte_4185FDC = 1;
  }
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6177/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0LL);
  v6 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10691/*"PlayScriptButton"*/, 0LL);
  p_playScriptButton = &this->fields.playScriptButton;
  this->fields.playScriptButton = v6;
  sub_B2C2F8(
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
      sub_B2C434(0LL, v15);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  ServantStatusCharaGraphListViewObject_o *v16; // x20
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185FDA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B2C35C(&StringLiteral_6173/*"EventMaximMove"*/, v6);
    byte_4185FDA = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_B2C2F8(
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
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_B2C434(dragObject, v14);
  }
  v16 = (ServantStatusCharaGraphListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusCharaGraphListViewObject__Init(v16, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6173/*"EventMaximMove"*/,
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  void *dragObject; // x0
  __int64 v9; // x10
  __int64 v10; // x10
  float v11; // s0
  ServantStatusCharaGraphListViewManager_o *v12; // x0
  void *v13; // x20
  UnityEngine_Object_o *v14; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v15; // x20
  ServantStatusCharaGraphListViewObject_c *v16; // x0
  UnityEngine_GameObject_o *v17; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v22; // s4
  UnityEngine_Transform_o *parent; // x20
  int v24; // s0
  float v27; // s4
  float v28; // s5
  float v29; // s3
  TweenPosition_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x20
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BattleServantConfConponent_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v46; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v55; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4185FE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&ServantStatusCharaGraphListViewManager_TypeInfo, v4);
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_6212/*"EventUsuallyMove2"*/, v6);
    byte_4185FE1 = 1;
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
  v9 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    goto LABEL_40;
  }
  v10 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1);
  v11 = *(float *)(*((_QWORD *)dragObject + 23) + 12LL);
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
    v12 = (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
        ? (ServantStatusCharaGraphListViewManager_o *)manager
        : 0LL;
  else
    v12 = 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v12, v11, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_40;
  dragObject = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 (UnityEngine_GameObject_o *)dragObject,
                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_40;
  v13 = dragObject;
  v14 = (UnityEngine_Object_o *)*((_QWORD *)dragObject + 15);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
    v15 = (ServantStatusCharaGraphListViewItemDraw_o *)*((_QWORD *)v13 + 15);
    if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    }
    if ( !v15 )
      goto LABEL_40;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v15,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v16 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v17 = this->fields.dragObject;
  if ( (BYTE3(ServantStatusCharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v16 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  MAXIM_OUT_SPEED = v16->static_fields->MAXIM_OUT_SPEED;
  v56 = UnityEngine_Quaternion__Euler(0.0, 0.0, 0.0, 0LL);
  y = v56.fields.y;
  z = v56.fields.z;
  w = v56.fields.w;
  v56.fields.y = v56.fields.x;
  v56.fields.z = y;
  v56.fields.w = z;
  v22 = w;
  TweenRotation__Begin(v17, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v56.fields.y, 0LL);
  v55.fields.x = 1.0;
  v55.fields.y = 1.0;
  v55.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v55,
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
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_40;
  v54 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v24, 0LL);
  v27 = v54.fields.y;
  v28 = v54.fields.z;
  v54.fields.y = v54.fields.x;
  v54.fields.z = v27;
  v29 = v28;
  v30 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v54.fields.y,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_40;
  v30->fields.eventReceiver = (struct UnityEngine_GameObject_o *)dragObject;
  p_eventReceiver = &v30->fields.eventReceiver;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_eventReceiver,
    (System_Int32_array **)dragObject,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v38 = (System_Int32_array **)StringLiteral_6212/*"EventUsuallyMove2"*/;
  p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_6212/*"EventUsuallyMove2"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_eventReceiver + 1), v38, v39, v40, v41, v42, v43, v44);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (BattleServantConfConponent_o *)&this->fields.playScriptButton;
  v46 = (UnityEngine_Object_o *)playScriptButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
  {
    dragObject = p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragObject, 1, 0LL);
      p_playScriptButton->klass = 0LL;
      sub_B2C2F8(p_playScriptButton, 0LL, v48, v49, v50, v51, v52, v53);
      return;
    }
LABEL_40:
    sub_B2C434(dragObject, method);
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

  if ( (byte_4185FE2 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    byte_4185FE2 = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (v5 = *(&ServantStatusCharaGraphListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_B2C434(manager, method);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v14);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4185FE0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6211/*"EventUsuallyMove"*/, method);
    byte_4185FE0 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6211/*"EventUsuallyMove"*/,
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

  if ( (byte_4185FD6 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    byte_4185FD6 = 1;
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

  if ( (byte_4185FD2 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewItem_TypeInfo, method);
    byte_4185FD2 = 1;
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

  if ( (byte_4185FD7 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, localScale);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B2C35C(&ServantStatusCharaGraphListViewObject_TypeInfo, v6);
    byte_4185FD7 = 1;
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
  __int64 v32; // x1

  if ( (byte_4185FD4 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4185FD4 = 1;
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
    sub_B2C2F8(
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
      sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)v23, v24, v25, v26, v27, v28);
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
        sub_B2C434(transform, v32);
      }
      UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    }
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B2C2F8(
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
        ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_21755524(this, this, v23);
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_21737636(
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_21738892(
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_21738972(
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  char IsAdditionExpandImage; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185FE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185FE6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0LL)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL),
        !v8) )
  {
    sub_B2C434(Instance, v7);
  }
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v8,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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

  if ( (byte_4185FD1 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185FD1 = 1;
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
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B2C434(IsExpandImage, v6);
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
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4185FE5 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B2C35C(
                                                        &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                        *(_QWORD *)&dispType);
    byte_4185FE5 = 1;
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
    this = (ServantStatusCharaGraphListViewObject_o *)sub_B2C728(v4->fields.linkItem);
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
    sub_B2C434(this, v6);
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
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v15; // x8
  int32_t dispMode; // w2

  if ( (byte_4185FD5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, hideFrame);
    sub_B2C35C(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_4185FD5 = 1;
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
                                                                            v12);
      v15 = this->fields.itemDraw;
      if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
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
      IsExpandImage = this->fields.itemDraw;
    }
    else
    {
      IsExpandImage = this->fields.itemDraw;
      if ( !IsExpandImage )
        goto LABEL_26;
      dispMode = this->fields.dispMode;
    }
    ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, linkItem, dispMode, v13);
    if ( hideFrame )
    {
LABEL_23:
      IsExpandImage = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(IsExpandImage, v11);
        return;
      }
LABEL_26:
      sub_B2C434(IsExpandImage, v11);
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_4185FE4 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_4185FE4 = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
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

  if ( (byte_4185FCE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185FCE = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B2C728(v8);
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

  if ( (byte_4185FCF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185FCF = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_B2C728(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}