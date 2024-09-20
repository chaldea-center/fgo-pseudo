void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8

  if ( (byte_4A56D11 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4A56D11 = 1;
  }
  static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CARD_HEIGHT = xmmword_BB5360;
  static_fields->MAXIM_OUT_SPEED = 0.2;
}


void __fastcall ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56D10 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A56D10 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__Awake(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A56CF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
    byte_4A56CF9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusCharaGraphListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
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
  float v8; // s0
  float v9; // s1

  if ( (byte_4A56D01 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A56D01 = 1;
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

  if ( (byte_4A56D0C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56D0C = 1;
  }
  if ( item )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_17:
          sub_1B8880C(IsExpandImage, v7);
        }
        if ( !v12 )
          goto LABEL_17;
        dispMode = this->fields.dispMode;
        IsExpandImage = this->fields.itemDraw;
      }
      else
      {
        IsExpandImage = this->fields.itemDraw;
        if ( !IsExpandImage )
          goto LABEL_17;
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
  return (unsigned int)(mode - 7) < 3;
}


UnityEngine_GameObject_o *__fastcall ServantStatusCharaGraphListViewObject__CreateDragObject(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A56CFC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_4A56CFC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  ServantStatusCharaGraphListViewObject__Init_31657072((ServantStatusCharaGraphListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_c *v3; // x0

  if ( (byte_4A56D02 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_6194/*"EventMoveEnd"*/);
    byte_4A56D02 = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6194/*"EventMoveEnd"*/,
    v3->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A56D07 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_4A56D07 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_1B8880C(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_31674904(
    this,
    (ServantStatusCharaGraphListViewObject_o *)Component_object,
    v5);
}


// attributes: thunk
void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_31674904(
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
  if ( (byte_4A56D08 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1B885B0(&StringLiteral_6179/*"EventFadeoutFrameMove2"*/);
    byte_4A56D08 = 1;
  }
  if ( !target )
    goto LABEL_21;
  itemDraw = (UnityEngine_Object_o *)target->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_Object_o *)target->fields.dispObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
      goto LABEL_12;
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.dispObject;
    if ( !this )
      goto LABEL_21;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
LABEL_12:
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
      v7 = target->fields.itemDraw;
      if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      if ( v7 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v7,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_18;
      }
LABEL_21:
      sub_1B8880C(this, target);
    }
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.itemDraw;
    if ( !this )
      goto LABEL_21;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      (const MethodInfo *)target);
  }
LABEL_18:
  v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6179/*"EventFadeoutFrameMove2"*/, v8->static_fields->MAXIM_IN_SPEED, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A56D06 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6178/*"EventFadeoutFrameMove"*/);
    byte_4A56D06 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6178/*"EventFadeoutFrameMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_31674904(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *v9; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float MAXIM_IN_SPEED; // s11
  float v15; // s5
  float v16; // s6
  float w; // s7
  float v18; // s4
  TweenPosition_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Vector3_o v25; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4A56D04 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1B885B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_6191/*"EventMaximMove2"*/);
    byte_4A56D04 = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v25.fields.z = 0.0;
  *(_QWORD *)&v25.fields.x = 0LL;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_13;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_13;
  if ( (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
    goto LABEL_13;
  ServantStatusCharaGraphListViewManager__DragBackFadeout(
    (ServantStatusCharaGraphListViewManager_o *)manager,
    *(float *)(*(_QWORD *)&dragObject[7].fields.m_CachedPtr + 12LL),
    method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(
                                  (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                  v7);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v25, v8);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  v9 = this->fields.dragObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v27.fields.x = v25.fields.x * 0.017453;
  v27.fields.y = v25.fields.y * 0.017453;
  v27.fields.z = v25.fields.z * 0.017453;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v29 = UnityEngine_Quaternion__Internal_FromEulerRad(v27, 0LL);
  v15 = v29.fields.y;
  v16 = v29.fields.z;
  w = v29.fields.w;
  v29.fields.y = v29.fields.x;
  v29.fields.z = v15;
  v29.fields.w = v16;
  v18 = w;
  TweenRotation__Begin(v9, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v29.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v19 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v28,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v19 )
LABEL_13:
    sub_1B8880C(dragObject, method);
  v19->fields.eventReceiver = dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.eventReceiver, (int32_t)dragObject, v20, v21);
  v22 = StringLiteral_6191/*"EventMaximMove2"*/;
  v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6191/*"EventMaximMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.callWhenFinished, v22, v23, v24);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v4; // x0
  struct UnityEngine_GameObject_o **p_playScriptButton; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1

  if ( (byte_4A56D05 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_10666/*"PlayScriptButton"*/);
    sub_1B885B0(&StringLiteral_6194/*"EventMoveEnd"*/);
    byte_4A56D05 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6194/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0LL);
  v4 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10666/*"PlayScriptButton"*/, 0LL);
  this->fields.playScriptButton = v4;
  p_playScriptButton = &this->fields.playScriptButton;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_playScriptButton, (int32_t)v4, v6, v7);
  v8 = (UnityEngine_Object_o *)*p_playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    if ( !*p_playScriptButton )
      sub_1B8880C(0LL, v9);
    UnityEngine_GameObject__SetActive(*p_playScriptButton, 0, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4A56D03 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1B885B0(&StringLiteral_6190/*"EventMaximMove"*/);
    byte_4A56D03 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_1B8880C(dragObject, v9);
  }
  ServantStatusCharaGraphListViewObject__Init_31657072((ServantStatusCharaGraphListViewObject_o *)dragObject, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6190/*"EventMaximMove"*/,
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
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  void *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  ListViewManager_c *klass; // x9
  __int64 methodPtr_low; // x10
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
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  ServantStatusBattleListViewItem_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v33; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4A56D0A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1B885B0(&StringLiteral_6239/*"EventUsuallyMove2"*/);
    byte_4A56D0A = 1;
  }
  dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  if ( !manager )
    goto LABEL_33;
  klass = manager->klass;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantStatusCharaGraphListViewManager_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    goto LABEL_33;
  }
  v7 = *(float *)(*((_QWORD *)dragObject + 23) + 12LL);
  v8 = (ServantStatusCharaGraphListViewManager_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
     ? (ServantStatusCharaGraphListViewManager_o *)manager
     : 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v8, v7, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_33;
  dragObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)dragObject,
                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_33;
  v9 = dragObject;
  v10 = (UnityEngine_Object_o *)*((_QWORD *)dragObject + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
    v11 = (ServantStatusCharaGraphListViewItemDraw_o *)*((_QWORD *)v9 + 16);
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    if ( !v11 )
      goto LABEL_33;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v11,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v13 = this->fields.dragObject;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v12 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  v37.fields.z = 0.0;
  MAXIM_OUT_SPEED = v12->static_fields->MAXIM_OUT_SPEED;
  v40 = UnityEngine_Quaternion__Internal_FromEulerRad(v37, 0LL);
  y = v40.fields.y;
  z = v40.fields.z;
  w = v40.fields.w;
  v40.fields.y = v40.fields.x;
  v40.fields.z = y;
  v40.fields.w = z;
  v18 = w;
  TweenRotation__Begin(v13, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v40.fields.y, 0LL);
  v39.fields.x = 1.0;
  v39.fields.y = 1.0;
  v39.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v39,
    0LL);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_33;
  dragObject = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_33;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_33;
  v38 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v20, 0LL);
  v23 = v38.fields.y;
  v24 = v38.fields.z;
  v38.fields.y = v38.fields.x;
  v38.fields.z = v23;
  v25 = v24;
  v26 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v38.fields.y,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_33;
  v26->fields.eventReceiver = (struct UnityEngine_GameObject_o *)dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.eventReceiver, (int32_t)dragObject, v27, v28);
  v29 = StringLiteral_6239/*"EventUsuallyMove2"*/;
  v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6239/*"EventUsuallyMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v26->fields.callWhenFinished, v29, v30, v31);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (ServantStatusBattleListViewItem_o *)&this->fields.playScriptButton;
  v33 = (UnityEngine_Object_o *)playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    dragObject = p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragObject, 1, 0LL);
      p_playScriptButton->klass = 0LL;
      sub_1B88554(p_playScriptButton, 0, v35, v36);
      return;
    }
LABEL_33:
    sub_1B8880C(dragObject, method);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1

  if ( (byte_4A56D0B & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    byte_4A56D0B = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_1B8880C(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v7, v8);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v9);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4A56D09 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6238/*"EventUsuallyMove"*/);
    byte_4A56D09 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6238/*"EventUsuallyMove"*/,
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
  ServantStatusCharaGraphListViewObject_c *v2; // x0
  float *p_CARD_HEIGHT; // x8
  float v4; // s3
  float v5; // s4
  float v6; // s2
  float v7; // s0
  float v8; // s1
  float v9; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A56CFF & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4A56CFF = 1;
  }
  v2 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v2 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  p_CARD_HEIGHT = &v2->static_fields->CARD_HEIGHT;
  v4 = p_CARD_HEIGHT[1];
  v5 = p_CARD_HEIGHT[2];
  v6 = *p_CARD_HEIGHT / v5;
  v7 = (float)(*p_CARD_HEIGHT * -0.5) / v5;
  v8 = (float)(v4 * -0.5) / v5;
  v9 = v4 / v5;
  result.fields.m_Height = v9;
  result.fields.m_Width = v6;
  result.fields.m_YMin = v8;
  result.fields.m_XMin = v7;
  return result;
}


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewObject__GetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A56CFB & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4A56CFB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    return (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ServantStatusCharaGraphListViewObject__GetMaximTransformValues(
        ServantStatusCharaGraphListViewObject_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  float v6; // s0
  ServantStatusCharaGraphListViewObject_c *v7; // x0
  float v8; // s8
  uint32_t cctor_finished; // w8
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x9
  float CARD_HEIGHT; // s10
  float CARD_WIDTH; // s11
  ManagerConfig_c *v13; // x0
  float DEFAULT_SCALE; // s9
  float v15; // s10
  struct ManagerConfig_StaticFields *v16; // x8
  int *p_WIDTH; // x8
  struct ServantStatusCharaGraphListViewObject_StaticFields *p_CARD_WIDTH; // x9
  float v19; // s0

  if ( (byte_4A56D00 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1B885B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4A56D00 = 1;
  }
  v6 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v7 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v8 = v6;
  cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v7 = ServantStatusCharaGraphListViewObject_TypeInfo;
    cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  }
  static_fields = v7->static_fields;
  CARD_HEIGHT = static_fields->CARD_HEIGHT;
  CARD_WIDTH = static_fields->CARD_WIDTH;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v13 = ManagerConfig_TypeInfo;
  DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
  v15 = CARD_HEIGHT / CARD_WIDTH;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
  }
  v16 = v13->static_fields;
  if ( v8 >= v15 )
  {
    p_WIDTH = &v16->WIDTH;
    p_CARD_WIDTH = (struct ServantStatusCharaGraphListViewObject_StaticFields *)&ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_WIDTH;
  }
  else
  {
    p_WIDTH = &v16->HEIGHT;
    p_CARD_WIDTH = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v19 = (float)(DEFAULT_SCALE * (float)*p_WIDTH) / p_CARD_WIDTH->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  localScale->fields.x = v19;
  localScale->fields.y = v19;
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w3
  int32_t v23; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A56CFD & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4A56CFD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  if ( (unsigned int)(v12 - 7) >= 3 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B8880C(transform, v18);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  }
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v15, v16);
  switch ( v12 )
  {
    case 0:
      this->fields.dispMode = 0;
      goto LABEL_18;
    case 1:
      v23 = 1;
      this->fields.dispMode = 1;
      goto LABEL_21;
    case 2:
      this->fields.dispMode = 2;
LABEL_18:
      v23 = 1;
      goto LABEL_21;
    case 3:
      this->fields.dispMode = 2;
      goto LABEL_20;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventMaximStart(this, delay, v20);
      return;
    case 5:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(this, delay, v20);
      return;
    case 6:
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventUsuallyStart(this, delay, v20);
      return;
    case 7:
    case 8:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventMaximStartViewer(this, v20);
LABEL_20:
      v23 = 3;
LABEL_21:
      this->fields.state = v23;
      goto LABEL_22;
    case 9:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_31674904(this, this, v21);
      goto LABEL_32;
    case 10:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventExViewer(this, v20);
LABEL_32:
      this->fields.state = 3;
      break;
    default:
LABEL_22:
      if ( !state || dispMode != this->fields.dispMode )
        ServantStatusCharaGraphListViewObject__SetupDisp(this, v12 == 8, v21);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B88554(p_callbackFunc, 0, (int32_t)v21, v22);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_31657072(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_31658384(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_31658484(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


bool __fastcall ServantStatusCharaGraphListViewObject__IsExpandImage(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  char IsAdditionExpandImage; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56D0F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56D0F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0LL)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL),
        !v6) )
  {
    sub_1B8880C(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    v6,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A56CFA & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CFA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
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
    sub_1B8880C(IsExpandImage, v6);
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
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__SetItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_o *v4; // x19
  ServantStatusCharaGraphListViewItem_o *linkItem; // x20
  ServantStatusCharaGraphListViewItem_c *v6; // x1
  __int64 methodPtr_low; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x9
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4A56D0E & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1B885B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4A56D0E = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem;
  v6 = ServantStatusCharaGraphListViewItem_TypeInfo;
  if ( dispType == 1 )
  {
    if ( !linkItem
      || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                          this,
                                                          0LL,
                                                          method);
      goto LABEL_17;
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
LABEL_17:
      sub_1B8880C(this, v6);
    }
    linkItem->fields.itemDataType = 0;
    this = (ServantStatusCharaGraphListViewObject_o *)v4->fields.itemDraw;
    if ( !this )
      goto LABEL_17;
    ServantStatusCharaGraphListViewItemDraw__SetItem(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      linkItem,
      v4->fields.dispMode,
      v9);
  }
  else
  {
    if ( !linkItem )
      goto LABEL_17;
    v10 = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10
      && (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      linkItem->fields.itemDataType = 0;
      ServantStatusCharaGraphListViewObject__SetupDisp(v4, 0, method);
    }
    else
    {
      v11 = (ServantStatusCharaGraphListViewManager_o *)sub_1B88ACC(v4->fields.linkItem);
      ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(v11, v12, v13);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__SetupDisp(
        ServantStatusCharaGraphListViewObject_o *this,
        bool hideFrame,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v14; // x8
  int32_t dispMode; // w2

  if ( (byte_4A56CFE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4A56CFE = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsExpandImage = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                                        itemDraw,
                                                                        0LL,
                                                                        0LL);
  if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
  {
    if ( !linkItem )
      goto LABEL_25;
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
          goto LABEL_25;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(this->fields.itemDraw, linkItem, v13);
        if ( !hideFrame )
          return;
        goto LABEL_22;
      }
      if ( !v14 )
        goto LABEL_25;
      dispMode = this->fields.dispMode;
      IsExpandImage = this->fields.itemDraw;
    }
    else
    {
      IsExpandImage = this->fields.itemDraw;
      if ( !IsExpandImage )
        goto LABEL_25;
      dispMode = this->fields.dispMode;
    }
    ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, linkItem, dispMode, v12);
    if ( hideFrame )
    {
LABEL_22:
      IsExpandImage = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(IsExpandImage, v10);
        return;
      }
LABEL_25:
      sub_1B8880C(IsExpandImage, v10);
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4A56D0D & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A56D0D = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DC2B8C(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
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

  if ( (byte_4A56CF7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56CF7 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A56CF8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56CF8 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1B88ACC(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}