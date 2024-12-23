void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8

  if ( (byte_4B62B3C & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, v1);
    byte_4B62B3C = 1;
  }
  static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CARD_HEIGHT = xmmword_BE2A90;
  static_fields->MAXIM_OUT_SPEED = 0.2;
}


void __fastcall ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62B3B & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B62B3B = 1;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B62B24 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___, method);
    byte_4B62B24 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusCharaGraphListViewItemDraw_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B62B2C & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    byte_4B62B2C = 1;
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

  if ( (byte_4B62B37 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, item);
    byte_4B62B37 = 1;
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
          sub_1BE4D28(IsExpandImage, v7);
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

  if ( (byte_4B62B27 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_4B62B27 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_1BE4D28(DragObject, v4);
  }
  ServantStatusCharaGraphListViewObject__Init_33047448((ServantStatusCharaGraphListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusCharaGraphListViewObject_c *v4; // x0

  if ( (byte_4B62B2D & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_6329/*"EventMoveEnd"*/, v3);
    byte_4B62B2D = 1;
  }
  v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v4 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6329/*"EventMoveEnd"*/,
    v4->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B62B32 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    byte_4B62B32 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_1BE4D28(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_33065280(
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


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_33065280(
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
  if ( (byte_4B62B33 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, target);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BE4ACC(&StringLiteral_6313/*"EventFadeoutFrameMove2"*/, v6);
    byte_4B62B33 = 1;
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
      v9 = target->fields.itemDraw;
      if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
      if ( v9 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v9,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_18;
      }
LABEL_21:
      sub_1BE4D28(this, target);
    }
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.itemDraw;
    if ( !this )
      goto LABEL_21;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      (const MethodInfo *)target);
  }
LABEL_18:
  v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6313/*"EventFadeoutFrameMove2"*/, v10->static_fields->MAXIM_IN_SPEED, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B62B31 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6312/*"EventFadeoutFrameMove"*/, method);
    byte_4B62B31 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6312/*"EventFadeoutFrameMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_33065280(this, this, v2);
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
  __int64 methodPtr_low; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float MAXIM_IN_SPEED; // s11
  float v19; // s5
  float v20; // s6
  float w; // s7
  float v22; // s4
  TweenPosition_o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Vector3_o v37; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4B62B2F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_6326/*"EventMaximMove2"*/, v5);
    byte_4B62B2F = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v37.fields.z = 0.0;
  *(_QWORD *)&v37.fields.x = 0LL;
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
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(
                                  (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                  v10);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v37, v11);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4B612E1 = 1;
  }
  v13 = this->fields.dragObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v39.fields.x = v37.fields.x * 0.017453;
  v39.fields.y = v37.fields.y * 0.017453;
  v39.fields.z = v37.fields.z * 0.017453;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v41 = UnityEngine_Quaternion__Internal_FromEulerRad(v39, 0LL);
  v19 = v41.fields.y;
  v20 = v41.fields.z;
  w = v41.fields.w;
  v41.fields.y = v41.fields.x;
  v41.fields.z = v19;
  v41.fields.w = v20;
  v22 = w;
  TweenRotation__Begin(v13, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v41.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v23 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v40,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
LABEL_13:
    sub_1BE4D28(dragObject, method);
  v23->fields.eventReceiver = dragObject;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v23->fields.eventReceiver,
    (int64_t)dragObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = StringLiteral_6326/*"EventMaximMove2"*/;
  v23->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6326/*"EventMaximMove2"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v23->fields.callWhenFinished, v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_o **p_playScriptButton; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B62B30 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Application_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_10829/*"PlayScriptButton"*/, v4);
    sub_1BE4ACC(&StringLiteral_6329/*"EventMoveEnd"*/, v5);
    byte_4B62B30 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6329/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0LL);
  v7 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10829/*"PlayScriptButton"*/, 0LL);
  this->fields.playScriptButton = v7;
  p_playScriptButton = &this->fields.playScriptButton;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_playScriptButton, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  v15 = (UnityEngine_Object_o *)*p_playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    if ( !*p_playScriptButton )
      sub_1BE4D28(0LL, v16);
    UnityEngine_GameObject__SetActive(*p_playScriptButton, 0, 0LL);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4B62B2E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_1BE4ACC(&StringLiteral_6325/*"EventMaximMove"*/, v6);
    byte_4B62B2E = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_1BE4D28(dragObject, v14);
  }
  ServantStatusCharaGraphListViewObject__Init_33047448((ServantStatusCharaGraphListViewObject_o *)dragObject, 2, v16);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6325/*"EventMaximMove"*/,
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields._IsQuestStartMenuMode_k__BackingField = 0;
  *(_DWORD *)(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
  void *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  ListViewManager_c *klass; // x9
  __int64 methodPtr_low; // x10
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  PartyOrganizationUtility_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v45; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v55; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4B62B35 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewManager_TypeInfo, v4);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_6375/*"EventUsuallyMove2"*/, v6);
    byte_4B62B35 = 1;
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
  v11 = *(float *)(*((_QWORD *)dragObject + 23) + 12LL);
  v12 = (ServantStatusCharaGraphListViewManager_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
      ? (ServantStatusCharaGraphListViewManager_o *)manager
      : 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v12, v11, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_33;
  dragObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)dragObject,
                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_33;
  v13 = dragObject;
  v14 = (UnityEngine_Object_o *)*((_QWORD *)dragObject + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
    v15 = (ServantStatusCharaGraphListViewItemDraw_o *)*((_QWORD *)v13 + 16);
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    if ( !v15 )
      goto LABEL_33;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v15,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v16 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v17 = this->fields.dragObject;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v16 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  v53.fields.x = 0.0;
  v53.fields.y = 0.0;
  v53.fields.z = 0.0;
  MAXIM_OUT_SPEED = v16->static_fields->MAXIM_OUT_SPEED;
  v56 = UnityEngine_Quaternion__Internal_FromEulerRad(v53, 0LL);
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
    goto LABEL_33;
  dragObject = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_33;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_33;
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
    goto LABEL_33;
  v30->fields.eventReceiver = (struct UnityEngine_GameObject_o *)dragObject;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v30->fields.eventReceiver,
    (int64_t)dragObject,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = StringLiteral_6375/*"EventUsuallyMove2"*/;
  v30->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6375/*"EventUsuallyMove2"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v30->fields.callWhenFinished, v37, v38, v39, v40, v41, v42, v43);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (PartyOrganizationUtility_o *)&this->fields.playScriptButton;
  v45 = (UnityEngine_Object_o *)playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    dragObject = p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragObject, 1, 0LL);
      p_playScriptButton->klass = 0LL;
      sub_1BE4A70(p_playScriptButton, 0LL, v47, v48, v49, v50, v51, v52);
      return;
    }
LABEL_33:
    sub_1BE4D28(dragObject, method);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *dragObject; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B62B36 & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, method);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewManager_TypeInfo, v3);
    byte_4B62B36 = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_1BE4D28(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v6);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v14);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B62B34 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6374/*"EventUsuallyMove"*/, method);
    byte_4B62B34 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6374/*"EventUsuallyMove"*/,
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

  if ( (byte_4B62B2A & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, method);
    byte_4B62B2A = 1;
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

  if ( (byte_4B62B26 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewItem_TypeInfo, method);
    byte_4B62B26 = 1;
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
  __int64 v6; // x1
  float v7; // s0
  ServantStatusCharaGraphListViewObject_c *v8; // x0
  float v9; // s8
  uint32_t cctor_finished; // w8
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x9
  float CARD_HEIGHT; // s10
  float CARD_WIDTH; // s11
  ManagerConfig_c *v14; // x0
  float DEFAULT_SCALE; // s9
  float v16; // s10
  struct ManagerConfig_StaticFields *v17; // x8
  int *p_WIDTH; // x8
  struct ServantStatusCharaGraphListViewObject_StaticFields *p_CARD_WIDTH; // x9
  float v20; // s0

  if ( (byte_4B62B2B & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, localScale);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BE4ACC(&ServantStatusCharaGraphListViewObject_TypeInfo, v6);
    byte_4B62B2B = 1;
  }
  v7 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v9 = v7;
  cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo);
    v8 = ServantStatusCharaGraphListViewObject_TypeInfo;
    cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  }
  static_fields = v8->static_fields;
  CARD_HEIGHT = static_fields->CARD_HEIGHT;
  CARD_WIDTH = static_fields->CARD_WIDTH;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v14 = ManagerConfig_TypeInfo;
  DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
  v16 = CARD_HEIGHT / CARD_WIDTH;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  v17 = v14->static_fields;
  if ( v9 >= v16 )
  {
    p_WIDTH = &v17->WIDTH;
    p_CARD_WIDTH = (struct ServantStatusCharaGraphListViewObject_StaticFields *)&ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_WIDTH;
  }
  else
  {
    p_WIDTH = &v17->HEIGHT;
    p_CARD_WIDTH = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v20 = (float)(DEFAULT_SCALE * (float)*p_WIDTH) / p_CARD_WIDTH->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  localScale->fields.x = v20;
  localScale->fields.y = v20;
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w8
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4B62B28 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B62B28 = 1;
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
      sub_1BE4D28(transform, v22);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  }
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  switch ( v12 )
  {
    case 0:
      this->fields.dispMode = 0;
      goto LABEL_18;
    case 1:
      v31 = 1;
      this->fields.dispMode = 1;
      goto LABEL_21;
    case 2:
      this->fields.dispMode = 2;
LABEL_18:
      v31 = 1;
      goto LABEL_21;
    case 3:
      this->fields.dispMode = 2;
      goto LABEL_20;
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
LABEL_20:
      v31 = 3;
LABEL_21:
      this->fields.state = v31;
      goto LABEL_22;
    case 9:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_33065280(this, this, v25);
      goto LABEL_32;
    case 10:
      this->fields.dispMode = 2;
      ServantStatusCharaGraphListViewObject__EventExViewer(this, v24);
LABEL_32:
      this->fields.state = 3;
      break;
    default:
LABEL_22:
      if ( !state || dispMode != this->fields.dispMode )
        ServantStatusCharaGraphListViewObject__SetupDisp(this, v12 == 8, v25);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_33047448(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_33048760(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_33048860(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  char IsAdditionExpandImage; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B62B3A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B62B3A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0LL)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL),
        !v8) )
  {
    sub_1BE4D28(Instance, v7);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    v8,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B62B25 & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B62B25 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
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
    sub_1BE4A70(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_1BE4D28(IsExpandImage, v6);
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
  ListViewObject__SetItem_41717728((ListViewObject_o *)this, item, seed, 0LL);
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
  __int64 methodPtr_low; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x9
  ServantStatusCharaGraphListViewManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4B62B39 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BE4ACC(
                                                        &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                        *(_QWORD *)&dispType);
    byte_4B62B39 = 1;
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
      sub_1BE4D28(this, v6);
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
      v11 = (ServantStatusCharaGraphListViewManager_o *)sub_1BE4FE8(v4->fields.linkItem);
      ServantStatusCharaGraphListViewManager__SetVisibleHighPriorityObject(v11, v12, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__SetupDisp(
        ServantStatusCharaGraphListViewObject_o *this,
        bool hideFrame,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  bool v8; // w1
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v15; // x8
  int32_t dispMode; // w2

  if ( (byte_4B62B29 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, hideFrame);
    sub_1BE4ACC(&ServantStatusCharaGraphListViewItem_TypeInfo, v5);
    byte_4B62B29 = 1;
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
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
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
                                                                            v12);
      v15 = this->fields.itemDraw;
      if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_25;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(this->fields.itemDraw, linkItem, v14);
        if ( !hideFrame )
          return;
        goto LABEL_22;
      }
      if ( !v15 )
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
    ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, linkItem, dispMode, v13);
    if ( hideFrame )
    {
LABEL_22:
      IsExpandImage = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(IsExpandImage, v11);
        return;
      }
LABEL_25:
      sub_1BE4D28(IsExpandImage, v11);
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4B62B38 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_116/*" "*/, v3);
    byte_4B62B38 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1DF56B8(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62710068(v6, (System_String_o *)StringLiteral_116/*" "*/, v7, 0LL);
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

  if ( (byte_4B62B22 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B62B22 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1BE4FE8(v8);
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

  if ( (byte_4B62B23 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B62B23 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1BE4FE8(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}