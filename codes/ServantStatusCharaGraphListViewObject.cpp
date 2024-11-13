void __fastcall ServantStatusCharaGraphListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x8

  if ( (byte_4B121E1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, v1, v2);
    byte_4B121E1 = 1;
  }
  static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CARD_HEIGHT = xmmword_BD3530;
  static_fields->MAXIM_OUT_SPEED = 0.2;
}


void __fastcall ServantStatusCharaGraphListViewObject___ctor(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B121E0 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B121E0 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__Awake(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B121C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___, method, v2);
    byte_4B121C9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusCharaGraphListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


float __fastcall ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(
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

  if ( (byte_4B121D1 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    byte_4B121D1 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = (int *)v3->static_fields;
  v5 = (float)static_fields[22];
  v6 = v5 / (float)static_fields[20];
  v7 = v5 / (float)static_fields[21];
  height = UnityEngine_Screen__get_height(0LL);
  v9 = (float)height / (float)UnityEngine_Screen__get_width(0LL);
  if ( v9 <= v6 )
    v10 = v9;
  else
    v10 = v6;
  if ( v9 < v7 )
    return v7;
  else
    return v10;
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

  if ( (byte_4B121DC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B121DC = 1;
  }
  if ( item )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
          sub_1BCAA3C(IsExpandImage, v7);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4B121CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method, v2);
    byte_4B121CC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  ServantStatusCharaGraphListViewObject__Init_32912976((ServantStatusCharaGraphListViewObject_o *)DragObject, 2, v7);
  return v6;
}


void __fastcall ServantStatusCharaGraphListViewObject__EventExViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantStatusCharaGraphListViewObject_c *v6; // x0

  if ( (byte_4B121D2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6314/*"EventMoveEnd"*/, v4, v5);
    byte_4B121D2 = 1;
  }
  v6 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
    v6 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6314/*"EventMoveEnd"*/,
    v6->static_fields->MAXIM_IN_SPEED,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B121D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method, v2);
    byte_4B121D7 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    sub_1BCAA3C(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_32930808(
    this,
    (ServantStatusCharaGraphListViewObject_o *)Component_object,
    v6);
}


// attributes: thunk
void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, method);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_32930808(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *dispObject; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v12; // x20
  ServantStatusCharaGraphListViewObject_c *v13; // x0

  v4 = (UnityEngine_MonoBehaviour_o *)this;
  if ( (byte_4B121D8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, target, method);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, v5, v6);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BCA7E0(&StringLiteral_6298/*"EventFadeoutFrameMove2"*/, v7, v8);
    byte_4B121D8 = 1;
  }
  if ( !target )
    goto LABEL_21;
  itemDraw = (UnityEngine_Object_o *)target->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    dispObject = (UnityEngine_Object_o *)target->fields.dispObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
      goto LABEL_12;
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.dispObject;
    if ( !this )
      goto LABEL_21;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
LABEL_12:
      this = (ServantStatusCharaGraphListViewObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
      v12 = target->fields.itemDraw;
      if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, target);
      if ( v12 )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadeout(
          v12,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          (const MethodInfo *)target);
        goto LABEL_18;
      }
LABEL_21:
      sub_1BCAA3C(this, target);
    }
    this = (ServantStatusCharaGraphListViewObject_o *)target->fields.itemDraw;
    if ( !this )
      goto LABEL_21;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(
      (ServantStatusCharaGraphListViewItemDraw_o *)this,
      (const MethodInfo *)target);
  }
LABEL_18:
  v13 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, v10);
    v13 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  UnityEngine_MonoBehaviour__Invoke(v4, (System_String_o *)StringLiteral_6298/*"EventFadeoutFrameMove2"*/, v13->static_fields->MAXIM_IN_SPEED, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B121D6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6297/*"EventFadeoutFrameMove"*/, method, v3);
    byte_4B121D6 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6297/*"EventFadeoutFrameMove"*/,
    delay,
    0LL);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventFadeoutFrameStartViewer(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_32930808(this, this, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float MAXIM_IN_SPEED; // s11
  float v24; // s5
  float v25; // s6
  float w; // s7
  float v27; // s4
  TweenPosition_o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_Vector3_o v42; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4B121D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method, v2);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_6311/*"EventMaximMove2"*/, v8, v9);
    byte_4B121D4 = 1;
  }
  dragObject = (UnityEngine_GameObject_o *)ServantStatusCharaGraphListViewObject_TypeInfo;
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v42.fields.z = 0.0;
  *(_QWORD *)&v42.fields.x = 0LL;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  this->fields.dragObjectRect = ServantStatusCharaGraphListViewObject__GetDragObjectRect(
                                  (ServantStatusCharaGraphListViewObject_o *)Component_object,
                                  v14);
  ServantStatusCharaGraphListViewObject__GetMaximTransformValues(this, &localScale, &v42, v15);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v17);
    byte_4B109C1 = 1;
  }
  v18 = this->fields.dragObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v44.fields.x = v42.fields.x * 0.017453;
  v44.fields.y = v42.fields.y * 0.017453;
  v44.fields.z = v42.fields.z * 0.017453;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  MAXIM_IN_SPEED = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED;
  v46 = UnityEngine_Quaternion__Internal_FromEulerRad(v44, 0LL);
  v24 = v46.fields.y;
  v25 = v46.fields.z;
  w = v46.fields.w;
  v46.fields.y = v46.fields.x;
  v46.fields.z = v24;
  v46.fields.w = v25;
  v27 = w;
  TweenRotation__Begin(v18, MAXIM_IN_SPEED, *(UnityEngine_Quaternion_o *)&v46.fields.y, 0LL);
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
    localScale,
    0LL);
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  v28 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
          v45,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v28 )
LABEL_13:
    sub_1BCAA3C(dragObject, method);
  v28->fields.eventReceiver = dragObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v28->fields.eventReceiver,
    (int64_t)dragObject,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = StringLiteral_6311/*"EventMaximMove2"*/;
  v28->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6311/*"EventMaximMove2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->fields.callWhenFinished, v35, v36, v37, v38, v39, v40, v41);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventMaximMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t targetFrameRate; // w0
  struct UnityEngine_GameObject_o *v11; // x0
  struct UnityEngine_GameObject_o **p_playScriptButton; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x20
  __int64 v21; // x1

  if ( (byte_4B121D5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_10801/*"PlayScriptButton"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6314/*"EventMoveEnd"*/, v8, v9);
    byte_4B121D5 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6314/*"EventMoveEnd"*/,
    1.0 / (float)targetFrameRate,
    0LL);
  v11 = UnityEngine_GameObject__Find((System_String_o *)StringLiteral_10801/*"PlayScriptButton"*/, 0LL);
  this->fields.playScriptButton = v11;
  p_playScriptButton = &this->fields.playScriptButton;
  sub_1BCA784((PartyOrganizationUtility_o *)p_playScriptButton, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  v20 = (UnityEngine_Object_o *)*p_playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    if ( !*p_playScriptButton )
      sub_1BCAA3C(0LL, v21);
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
  __int64 v7; // x2
  struct UnityEngine_GameObject_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4B121D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method, v3);
    sub_1BCA7E0(&StringLiteral_6310/*"EventMaximMove"*/, v6, v7);
    byte_4B121D3 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v8 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ServantStatusCharaGraphListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___)) == 0LL )
  {
    sub_1BCAA3C(dragObject, v15);
  }
  ServantStatusCharaGraphListViewObject__Init_32912976((ServantStatusCharaGraphListViewObject_o *)dragObject, 2, v17);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6310/*"EventMaximMove"*/,
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
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  void *dragObject; // x0
  struct ListViewManager_o *manager; // x20
  ListViewManager_c *klass; // x9
  __int64 methodPtr_low; // x10
  float v16; // s0
  ServantStatusCharaGraphListViewManager_o *v17; // x0
  void *v18; // x20
  UnityEngine_Object_o *v19; // x21
  ServantStatusCharaGraphListViewItemDraw_o *v20; // x20
  ServantStatusCharaGraphListViewObject_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x20
  float MAXIM_OUT_SPEED; // s8
  float y; // s5
  float z; // s6
  float w; // s7
  float v27; // s4
  UnityEngine_Transform_o *parent; // x20
  int v29; // s0
  float v32; // s4
  float v33; // s5
  float v34; // s3
  TweenPosition_o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  PartyOrganizationUtility_o *p_playScriptButton; // x19
  UnityEngine_Object_o *v51; // x20
  struct UnityEngine_GameObject_o *playScriptButton; // t1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v61; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4B121DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_6360/*"EventUsuallyMove2"*/, v10, v11);
    byte_4B121DA = 1;
  }
  dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
  manager = this->fields.manager;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
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
  v16 = *(float *)(*((_QWORD *)dragObject + 23) + 12LL);
  v17 = (ServantStatusCharaGraphListViewManager_c *)klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusCharaGraphListViewManager_TypeInfo
      ? (ServantStatusCharaGraphListViewManager_o *)manager
      : 0LL;
  ServantStatusCharaGraphListViewManager__DragBackFadein(v17, v16, method);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_33;
  dragObject = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)dragObject,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusCharaGraphListViewObject___);
  if ( !dragObject )
    goto LABEL_33;
  v18 = dragObject;
  v19 = (UnityEngine_Object_o *)*((_QWORD *)dragObject + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    dragObject = ServantStatusCharaGraphListViewObject_TypeInfo;
    v20 = (ServantStatusCharaGraphListViewItemDraw_o *)*((_QWORD *)v18 + 16);
    if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
    if ( !v20 )
      goto LABEL_33;
    ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteFadein(
      v20,
      ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_IN_SPEED,
      method);
  }
  v21 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v22 = this->fields.dragObject;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
    v21 = ServantStatusCharaGraphListViewObject_TypeInfo;
  }
  v59.fields.x = 0.0;
  v59.fields.y = 0.0;
  v59.fields.z = 0.0;
  MAXIM_OUT_SPEED = v21->static_fields->MAXIM_OUT_SPEED;
  v62 = UnityEngine_Quaternion__Internal_FromEulerRad(v59, 0LL);
  y = v62.fields.y;
  z = v62.fields.z;
  w = v62.fields.w;
  v62.fields.y = v62.fields.x;
  v62.fields.z = y;
  v62.fields.w = z;
  v27 = w;
  TweenRotation__Begin(v22, MAXIM_OUT_SPEED, *(UnityEngine_Quaternion_o *)&v62.fields.y, 0LL);
  v61.fields.x = 1.0;
  v61.fields.y = 1.0;
  v61.fields.z = 1.0;
  TweenScale__Begin(
    this->fields.dragObject,
    ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
    v61,
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
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_33;
  v60 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v29, 0LL);
  v32 = v60.fields.y;
  v33 = v60.fields.z;
  v60.fields.y = v60.fields.x;
  v60.fields.z = v32;
  v34 = v33;
  v35 = TweenPosition__Begin(
          this->fields.dragObject,
          ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->MAXIM_OUT_SPEED,
          *(UnityEngine_Vector3_o *)&v60.fields.y,
          0LL);
  dragObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v35 )
    goto LABEL_33;
  v35->fields.eventReceiver = (struct UnityEngine_GameObject_o *)dragObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v35->fields.eventReceiver,
    (int64_t)dragObject,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = StringLiteral_6360/*"EventUsuallyMove2"*/;
  v35->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6360/*"EventUsuallyMove2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->fields.callWhenFinished, v42, v43, v44, v45, v46, v47, v48);
  playScriptButton = this->fields.playScriptButton;
  p_playScriptButton = (PartyOrganizationUtility_o *)&this->fields.playScriptButton;
  v51 = (UnityEngine_Object_o *)playScriptButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    dragObject = p_playScriptButton->klass;
    if ( p_playScriptButton->klass )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)dragObject, 1, 0LL);
      p_playScriptButton->klass = 0LL;
      sub_1BCA784(p_playScriptButton, 0LL, v53, v54, v55, v56, v57, v58);
      return;
    }
LABEL_33:
    sub_1BCAA3C(dragObject, method);
  }
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyMove2(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( (byte_4B121DB & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewManager_TypeInfo, v4, v5);
    byte_4B121DB = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (methodPtr_low = LOBYTE(ServantStatusCharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusCharaGraphListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusCharaGraphListViewManager_TypeInfo )
  {
    sub_1BCAA3C(manager, method);
  }
  ServantStatusCharaGraphListViewManager__DragBackOff((ServantStatusCharaGraphListViewManager_o *)manager, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v8);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  ServantStatusCharaGraphListViewObject__EventMoveEnd(this, v17);
}


void __fastcall ServantStatusCharaGraphListViewObject__EventUsuallyStart(
        ServantStatusCharaGraphListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4B121D9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6359/*"EventUsuallyMove"*/, method, v3);
    byte_4B121D9 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  ServantStatusCharaGraphListViewObject__SetupDisp(this, 0, v3);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6359/*"EventUsuallyMove"*/,
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

  if ( (byte_4B121CF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewObject_TypeInfo, method, v2);
    byte_4B121CF = 1;
  }
  v3 = ServantStatusCharaGraphListViewObject_TypeInfo;
  if ( !ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, method);
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


ServantStatusCharaGraphListViewItem_o *__fastcall ServantStatusCharaGraphListViewObject__GetItem(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B121CB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, method, v2);
    byte_4B121CB = 1;
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
  __int64 v7; // x2
  __int64 v8; // x1
  float v9; // s0
  ServantStatusCharaGraphListViewObject_c *v10; // x0
  float v11; // s8
  uint32_t cctor_finished; // w8
  struct ServantStatusCharaGraphListViewObject_StaticFields *static_fields; // x9
  float CARD_HEIGHT; // s10
  float CARD_WIDTH; // s11
  ManagerConfig_c *v16; // x0
  float DEFAULT_SCALE; // s9
  float v18; // s10
  struct ManagerConfig_StaticFields *v19; // x8
  int *p_WIDTH; // x8
  struct ServantStatusCharaGraphListViewObject_StaticFields *p_CARD_WIDTH; // x9
  float v22; // s0

  if ( (byte_4B121D0 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, localScale, localEulerAngle);
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BCA7E0(
                                                        &ServantStatusCharaGraphListViewObject_TypeInfo,
                                                        v6,
                                                        v7);
    byte_4B121D0 = 1;
  }
  v9 = ServantStatusCharaGraphListViewObject__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
  v11 = v9;
  cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusCharaGraphListViewObject_TypeInfo, v8);
    v10 = ServantStatusCharaGraphListViewObject_TypeInfo;
    cctor_finished = ServantStatusCharaGraphListViewObject_TypeInfo->_2.cctor_finished;
  }
  static_fields = v10->static_fields;
  CARD_HEIGHT = static_fields->CARD_HEIGHT;
  CARD_WIDTH = static_fields->CARD_WIDTH;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10, v8);
    static_fields = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v16 = ManagerConfig_TypeInfo;
  DEFAULT_SCALE = static_fields->DEFAULT_SCALE;
  v18 = CARD_HEIGHT / CARD_WIDTH;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v8);
    v16 = ManagerConfig_TypeInfo;
  }
  v19 = v16->static_fields;
  if ( v11 >= v18 )
  {
    p_WIDTH = &v19->WIDTH;
    p_CARD_WIDTH = (struct ServantStatusCharaGraphListViewObject_StaticFields *)&ServantStatusCharaGraphListViewObject_TypeInfo->static_fields->CARD_WIDTH;
  }
  else
  {
    p_WIDTH = &v19->HEIGHT;
    p_CARD_WIDTH = ServantStatusCharaGraphListViewObject_TypeInfo->static_fields;
  }
  v22 = (float)(DEFAULT_SCALE * (float)*p_WIDTH) / p_CARD_WIDTH->CARD_HEIGHT;
  localScale->fields.z = 1.0;
  localScale->fields.x = v22;
  localScale->fields.y = v22;
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

  if ( (byte_4B121CD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B121CD = 1;
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
      sub_1BCAA3C(transform, v22);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  }
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BCA784(
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
      ServantStatusCharaGraphListViewObject__EventFadeoutFrameMove_32930808(this, this, v25);
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
        sub_1BCA784(p_callbackFunc, 0LL, (int64_t)v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_32912976(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewObject__Init_32914288(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
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
void __fastcall ServantStatusCharaGraphListViewObject__Init_32914388(
        ServantStatusCharaGraphListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  ServantStatusCharaGraphListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


bool __fastcall ServantStatusCharaGraphListViewObject__IsExpandImage(
        ServantStatusCharaGraphListViewObject_o *this,
        ServantStatusCharaGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  char IsAdditionExpandImage; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B121DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, item, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B121DF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        !item)
    || (v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
        (Instance = (DataManager_o *)item->fields.mainInfo) == 0LL)
    || (Instance = (DataManager_o *)ServantStatusListViewItem__get_SvtId((ServantStatusListViewItem_o *)Instance, 0LL),
        !v10) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    v10,
    &entity,
    (int32_t)Instance,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B121CA & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B121CA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
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
    sub_1BCAA3C(IsExpandImage, v6);
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
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
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
  if ( (byte_4B121DE & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewObject_o *)sub_1BCA7E0(
                                                        &ServantStatusCharaGraphListViewItem_TypeInfo,
                                                        *(_QWORD *)&dispType,
                                                        method);
    byte_4B121DE = 1;
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
      sub_1BCAA3C(this, v6);
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
      v11 = (ServantStatusCharaGraphListViewManager_o *)sub_1BCACFC(v4->fields.linkItem);
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
  __int64 v6; // x2
  ServantStatusCharaGraphListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  bool v9; // w1
  __int64 v10; // x1
  UnityEngine_Object_o *itemDraw; // x22
  struct ServantStatusCharaGraphListViewItemDraw_o *IsExpandImage; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  struct ServantStatusCharaGraphListViewItemDraw_o *v17; // x8
  int32_t dispMode; // w2

  if ( (byte_4B121CE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, hideFrame, method);
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItem_TypeInfo, v5, v6);
    byte_4B121CE = 1;
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
    v9 = 0;
    goto LABEL_8;
  }
  v9 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
                                                                            v14);
      v17 = this->fields.itemDraw;
      if ( ((unsigned __int8)IsExpandImage & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_25;
        ServantStatusCharaGraphListViewItemDraw__SetExCharaGraph(this->fields.itemDraw, linkItem, v16);
        if ( !hideFrame )
          return;
        goto LABEL_22;
      }
      if ( !v17 )
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
    ServantStatusCharaGraphListViewItemDraw__SetItem(IsExpandImage, linkItem, dispMode, v15);
    if ( hideFrame )
    {
LABEL_22:
      IsExpandImage = this->fields.itemDraw;
      if ( IsExpandImage )
      {
        ServantStatusCharaGraphListViewItemDraw__ExecuteSpriteHide(IsExpandImage, v13);
        return;
      }
LABEL_25:
      sub_1BCAA3C(IsExpandImage, v13);
    }
  }
}


System_String_o *__fastcall ServantStatusCharaGraphListViewObject__ToString(
        ServantStatusCharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x0
  float z; // w9
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Enum_o v11; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h] BYREF
  float v14; // [xsp+28h] [xbp-38h]

  if ( (byte_4B121DD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    byte_4B121DD = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v11.klass = (System_Enum_c *)ServantStatusCharaGraphListViewItemDraw_DispMode_TypeInfo;
  v11.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v6 = System_Enum__ToString(&v11, 0LL);
  z = this->fields.basePosition.fields.z;
  v8 = v6;
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v14 = z;
  v9 = (System_String_o *)sub_1DDA8EC(&v13, 0LL, 0LL, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, v9, 0LL);
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

  if ( (byte_4B121C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B121C7 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B121C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B121C8 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusCharaGraphListViewObject_o *)sub_1BCACFC(v8);
  ServantStatusCharaGraphListViewObject__GetDragObject(v11, v12);
}