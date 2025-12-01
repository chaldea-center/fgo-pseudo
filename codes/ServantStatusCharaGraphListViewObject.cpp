void ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8

  if ( (byte_4CC2EF4 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4CC2EF4 = 1;
  }
  static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CARD_HEIGHT = xmmword_CEFCD0;
  static_fields->MAXIM_OUT_SPEED = 0.2;
}


void ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC2EF3 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC2EF3 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantStatusCharaGraphListViewObject__Awake(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4CC2EDC & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
    byte_4CC2EDC = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusCharaGraphListViewItemDraw_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
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
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  float v8; // s0
  float v9; // s1

  if ( (byte_4CC2EE4 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC2EE4 = 1;
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
  ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v11; // x2
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x8
  int32_t dispMode; // w2

  if ( (byte_4CC2EEF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2EEF = 1;
  }
  if ( item )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
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
          sub_1C71608(IsExpandImage, v7);
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

  if ( (byte_4CC2EDF & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_4CC2EDF = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0) )
  {
    sub_1C71608(DragObject, v4);
  }
  ServantStatusCharaGraphListViewObject__Init_34600060((ServantStatusCharaGraphListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_c *v3; // x0

  if ( (byte_4CC2EE5 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6226/*"EventMoveEnd"*/);
    byte_4CC2EE5 = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6226/*"EventMoveEnd"*/,
    v3->static_fields->MAXIM_IN_SPEED,
    0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CC2EEA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    byte_4CC2EEA = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_1C71608(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_34618208(
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


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_34618208(
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
  if ( (byte_4CC2EEB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1C713B0(&StringLiteral_6211/*"EventFadeoutFrameMove2"*/);
    byte_4CC2EEB = 1;
  }
  if ( !target )
    goto LABEL_21;
  itemDraw = (UnityEngine_Object_o *)target->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    dispObject = (UnityEngine_Object_o *)target->fields.dispObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
      goto LABEL_12;
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.dispObject;
    if ( !this )
      goto LABEL_21;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
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
      sub_1C71608(this, target);
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
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6211/*"EventFadeoutFrameMove2"*/, v8->static_fields->MAXIM_IN_SPEED, 0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4CC2EE9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6210/*"EventFadeoutFrameMove"*/);
    byte_4CC2EE9 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6210/*"EventFadeoutFrameMove"*/,
    delay,
    0);
}


void ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_34618208(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 naturalAligment; // x10
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
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Vector3_o v33; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4CC2EE7 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C713B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6223/*"EventMaximMove2"*/);
    byte_4CC2EE7 = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v33.fields.z = 0.0;
  *(_QWORD *)&v33.fields.x = 0;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
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
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(
                                  (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                  v7);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v33, v8);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  v9 = this->fields.dragObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v35.fields.x = v33.fields.x * 0.017453;
  v35.fields.y = v33.fields.y * 0.017453;
  v35.fields.z = v33.fields.z * 0.017453;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v37 = UnityEngine_Quaternion__Internal_FromEulerRad(v35, 0);
  v15 = v37.fields.y;
  v16 = v37.fields.z;
  w = v37.fields.w;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v15;
  v37.fields.w = v16;
  v18 = w;
  TweenRotation__Begin(v9, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v37.fields.y, 0);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0);
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v19 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v36,
          0);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v19 )
LABEL_13:
    sub_1C71608(dragObject, method);
  v19->fields.eventReceiver = dragObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v19->fields.eventReceiver,
    (int32_t)dragObject,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_6223/*"EventMaximMove2"*/;
  v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6223/*"EventMaximMove2"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->fields.callWhenFinished, v26, v27, v28, v29, v30, v31, v32);
}


void ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v4; // x0
  struct UnityEngine_GameObject_o **p_playScriptButton; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1

  if ( (byte_4CC2EE8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_10676/*"PlayScriptButton"*/);
    sub_1C713B0(&StringLiteral_6226/*"EventMoveEnd"*/);
    byte_4CC2EE8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6226/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0);
  v4 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10676/*"PlayScriptButton"*/, 0);
  this->fields.playScriptButton = v4;
  p_playScriptButton = &this->fields.playScriptButton;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_playScriptButton, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  v12 = (UnityEngine_Object_o *)*p_playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    if ( !*p_playScriptButton )
      sub_1C71608(0, v13);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4CC2EE6 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C713B0(&StringLiteral_6222/*"EventMaximMove"*/);
    byte_4CC2EE6 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0 )
  {
    sub_1C71608(dragObject, v13);
  }
  ServantStatusCharaGraphListViewObject__Init_34600060((ServantStatusCharaGraphListViewObject_o *)dragObject, 2, v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6222/*"EventMaximMove"*/,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__EventUsuallyMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 naturalAligment; // x10
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Object_o *monitor; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v8; // x20
  ServantStatusCharaGraphListViewObject_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v15; // s4
  UnityEngine_Transform_o *parent; // x20
  float v17; // s4
  float v18; // s5
  float v19; // s3
  TweenPosition_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  GrandQuestFolderBoardItem_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v35; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v46; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4CC2EED & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    sub_1C713B0(&StringLiteral_6271/*"EventUsuallyMove2"*/);
    byte_4CC2EED = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
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
                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_30;
  v6 = dragObject;
  monitor = (UnityEngine_Object_o *)dragObject[5].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
    v8 = (ServantStatusCharaGraphListViewItemDraw_o *)v6[5].monitor;
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    if ( !v8 )
      goto LABEL_30;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v8,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v9 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v10 = this->fields.dragObject;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v9 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  v43.fields.x = 0.0;
  v43.fields.y = 0.0;
  v43.fields.z = 0.0;
  MAXIM_OUT_SPEED = v9->static_fields->MAXIM_OUT_SPEED;
  v47 = UnityEngine_Quaternion__Internal_FromEulerRad(v43, 0);
  y = v47.fields.y;
  z = v47.fields.z;
  w = v47.fields.w;
  v47.fields.y = v47.fields.x;
  v47.fields.z = y;
  v47.fields.w = z;
  v15 = w;
  TweenRotation__Begin(v10, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v47.fields.y, 0);
  v46.fields.x = 1.0;
  v46.fields.y = 1.0;
  v46.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v46,
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
  v45 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0);
  v17 = v45.fields.y;
  v18 = v45.fields.z;
  v45.fields.y = v45.fields.x;
  v45.fields.z = v17;
  v19 = v18;
  v20 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v45.fields.y,
          0);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v20 )
    goto LABEL_30;
  v20->fields.eventReceiver = dragObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v20->fields.eventReceiver,
    (int32_t)dragObject,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = StringLiteral_6271/*"EventUsuallyMove2"*/;
  v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6271/*"EventUsuallyMove2"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (GrandQuestFolderBoardItem_o *)&this->fields.playScriptButton;
  v35 = (UnityEngine_Object_o *)playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
  {
    dragObject = (UnityEngine_GameObject_o *)p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive(dragObject, 1, 0);
      p_playScriptButton->klass = 0;
      sub_1C71354(p_playScriptButton, 0, v37, v38, v39, v40, v41, v42);
      return;
    }
LABEL_30:
    sub_1C71608(dragObject, method);
  }
}


void ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10
  const MethodInfo *v5; // x2
  UnityEngine_Object_o *dragObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4CC2EEE & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewManager_TypeInfo);
    byte_4CC2EEE = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (naturalAligment = ServantStatusCharaGraphListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_1C71608(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.dragObject, 0, v7, v8, v9, v10, v11, v12);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v13);
}


void ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4CC2EEC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6270/*"EventUsuallyMove"*/);
    byte_4CC2EEC = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6270/*"EventUsuallyMove"*/,
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
  ServantStatusCharaGraphListViewObject_c *v2; // x0
  float *p_CARD_HEIGHT; // x8
  float v4; // s3
  float v5; // s4
  float v6; // s2
  float v7; // s0
  float v8; // s1
  float v9; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC2EE2 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4CC2EE2 = 1;
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


ServantStatusCharaGraphListViewItem_o *ServantStatusCharaGraphListViewObject__GetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC2EDE & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4CC2EDE = 1;
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

  if ( (byte_4CC2EE3 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1C713B0(&ServantStatusCharaGraphListViewObject_TypeInfo);
    byte_4CC2EE3 = 1;
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w8
  int32_t v32; // w9
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4CC2EE0 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4CC2EE0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  if ( (unsigned int)(v12 - 7) >= 3 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C71608(transform, v22);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  }
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  switch ( v12 )
  {
    case 0:
      v31 = 1;
      this->fields.dispMode = 0;
      goto LABEL_17;
    case 1:
      v31 = 1;
      this->fields.dispMode = 1;
      goto LABEL_17;
    case 2:
      v32 = 1;
      goto LABEL_21;
    case 3:
      v32 = 3;
LABEL_21:
      this->fields.dispMode = 2;
      this->fields.state = v32;
      goto LABEL_22;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventMaximStart(this, delay, v24);
      return;
    case 5:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(this, delay, v24);
      return;
    case 6:
      this->fields.state = 2;
      ServantStatusCharaGraphListViewObject__EventUsuallyStart(this, delay, v24);
      return;
    case 7:
    case 8:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventMaximStartViewer(this, v24);
      v31 = 3;
LABEL_17:
      this->fields.state = v31;
      if ( !state )
        goto LABEL_24;
      goto LABEL_23;
    case 9:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_34618208(this, this, v25);
      goto LABEL_32;
    case 10:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventExViewer(this, v24);
LABEL_32:
      this->fields.state = 3;
      return;
    case 11:
      ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v25);
      if ( !state )
        goto LABEL_24;
      goto LABEL_23;
    default:
LABEL_22:
      if ( !state )
        goto LABEL_24;
LABEL_23:
      if ( dispMode != this->fields.dispMode )
LABEL_24:
        ServantStatusCharaGraphListViewObject__SetupDisp(this, v12 == 8, v25);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C71354(p_callbackFunc, 0, (int32_t)v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__Init_34600060(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewObject__Init_34601372(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
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
void ServantStatusCharaGraphListViewObject__Init_34601472(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


bool ServantStatusCharaGraphListViewObject__IsExpandImage(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  char IsAdditionExpandImage; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC2EF2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC2EF2 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0), !v6) )
  {
    sub_1C71608(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    v6,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  IsAdditionExpandImage = (char)entity;
  if ( entity )
    IsAdditionExpandImage = ServantEntity__IsAdditionExpandImage(
                              (ServantEntity_o *)entity,
                              item->fields.imageLimitCount,
                              0);
  return IsAdditionExpandImage & 1;
}


void ServantStatusCharaGraphListViewObject__OnDestroy(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_4CC2EDD & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2EDD = 1;
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
    sub_1C71354(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
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
    sub_1C71608(IsExpandImage, v6);
  }
  item->fields.itemDataType = 0;
  IsExpandImage = this->fields.itemDraw;
  if ( !IsExpandImage )
    goto LABEL_7;
  ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, item, this->fields.dispMode, v8);
}


void ServantStatusCharaGraphListViewObject__SetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void ServantStatusCharaGraphListViewObject__SetItemDataType(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject_o *v4; // x19
  ServantStatusCharaGraphListViewItem_o *linkItem; // x20
  ServantStatusCharaGraphListViewItem_c *v6; // x1
  __int64 naturalAligment; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x9
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4CC2EF1 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1C713B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4CC2EF1 = 1;
  }
  linkItem = (ServantStatusCharaGraphListViewItem_o *)v4->fields.linkItem;
  v6 = ServantStatusCharaGraphListViewItem_TypeInfo;
  if ( dispType == 1 )
  {
    if ( !linkItem
      || (naturalAligment = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject__IsExpandImage(
                                                          this,
                                                          0,
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
      sub_1C71608(this, v6);
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
    v10 = ServantStatusCharaGraphListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v10
      && (ServantStatusCharaGraphListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] == ServantStatusCharaGraphListViewItem_TypeInfo )
    {
      linkItem->fields.itemDataType = 0;
      ServantStatusCharaGraphListViewObject__SetupDisp(v4, 0, method);
    }
    else
    {
      v11 = (ServantStatusCharaGraphListViewManager_o *)sub_1C719A4(v4->fields.linkItem);
      ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(v11, v12, v13);
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
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v14; // x8
  int32_t dispMode; // w2

  if ( (byte_4CC2EE1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusCharaGraphListViewItem_TypeInfo);
    byte_4CC2EE1 = 1;
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
    goto LABEL_8;
  }
  v7 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v7, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsExpandImage = (struct ServantStatusCharaGraphListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
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
      sub_1C71608(IsExpandImage, v10);
    }
  }
}


System_String_o *ServantStatusCharaGraphListViewObject__ToString(
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

  if ( (byte_4CC2EF0 & 1) == 0 )
  {
    sub_1C713B0(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CC2EF0 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E2ED10(&v10, 0, 0, 0);
  return System_String__Concat_64069988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC2EDA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2EDA = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1C719A4(v8);
  ServantStatusCharaGraphListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusCharaGraphListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC2EDB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC2EDB = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1C719A4(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}