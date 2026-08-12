void EventInfoTipsArchiveListViewObject___ctor(EventInfoTipsArchiveListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoTipsArchiveListViewObject__Awake(EventInfoTipsArchiveListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveListViewItemDraw_o **p_itemDraw; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5972FFC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___);
    byte_5972FFC = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___);
  this->fields.itemDraw = (struct EventInfoTipsArchiveListViewItemDraw_o *)Component_object;
  p_itemDraw = &this->fields.itemDraw;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_itemDraw, (int32_t)Component_object, v6, v7, v8, v9, v10, v11);
  *((_DWORD *)p_itemDraw + 3) = 0;
}


int32_t EventInfoTipsArchiveListViewObject__GetKind(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v5; // x0

  if ( (byte_5972FFD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FFD = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return ((int32_t (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, const MethodInfo *))v5->klass->vtable._4_GetKind.methodPtr)(
           v5,
           v5->klass->vtable._4_GetKind.method);
}


int32_t EventInfoTipsArchiveListViewObject__GetSize(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  EventInfoTipsArchiveListViewItemDraw_o *v5; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v7; // x0

  if ( (byte_5972FFE & 1) == 0 )
  {
    sub_2213A60(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FFE = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_2213CDC(0, v4);
    return EventInfoTipsArchiveListViewItemDraw__GetHeight(v5, v4);
  }
  else
  {
    v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !*(&EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo, v4);
      v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v7->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void EventInfoTipsArchiveListViewObject__Init(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        System_Nullable_Vector3__o pos,
        const MethodInfo *method)
{
  bool hasValue; // w20
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  MethodInfo *v21; // x2
  System_String_o *v22; // x3
  const MethodInfo *v23; // x5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w8
  int32_t v27; // w4
  MissionNaviTransitionBoardItem_c *klass; // x19

  hasValue = pos.fields.hasValue;
  if ( (byte_5973002 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    byte_5973002 = 1;
  }
  if ( !hasValue && !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  EventInfoTipsArchiveListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v13);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( initMode <= 1 )
  {
    if ( initMode )
    {
      if ( initMode == 1 )
      {
        EventInfoTipsArchiveListViewObject__SetInput(this, 0, v21);
        v27 = 1;
        this->fields.dispMode = 1;
        this->fields.state = 1;
        if ( !state )
          goto LABEL_25;
        goto LABEL_24;
      }
LABEL_23:
      v27 = this->fields.dispMode;
      if ( !state )
        goto LABEL_25;
LABEL_24:
      if ( dispMode == v27 )
        goto LABEL_26;
      goto LABEL_25;
    }
    EventInfoTipsArchiveListViewObject__SetInput(this, 0, v21);
    v27 = 0;
    this->fields.dispMode = 0;
LABEL_21:
    this->fields.state = 1;
    if ( !state )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( initMode == 2 )
  {
    EventInfoTipsArchiveListViewObject__SetInput(this, 0, v21);
    v27 = 2;
    this->fields.dispMode = 2;
    goto LABEL_21;
  }
  if ( initMode == 3 )
  {
    EventInfoTipsArchiveListViewObject__SetInput(this, 1, v21);
    v26 = 3;
    goto LABEL_19;
  }
  if ( initMode != 4 )
    goto LABEL_23;
  v26 = 1;
LABEL_19:
  v27 = 2;
  this->fields.state = v26;
  this->fields.dispMode = 2;
LABEL_25:
  EventInfoTipsArchiveListViewObject__SetupDisp(
    this,
    this->fields.id,
    this->fields.mainInfo,
    this->fields.isLast,
    v27,
    v23);
LABEL_26:
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)v21, v22, v27, (int32_t)v23, v24, v25);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void EventInfoTipsArchiveListViewObject__OnDestroy(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t EventInfoTipsArchiveListViewObject__PartitionHeight(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v6; // x8
  struct UISprite_o *partitionSprite; // x8

  if ( (byte_5972FFF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FFF = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 || (partitionSprite = v6->fields.partitionSprite) == 0 )
    sub_2213CDC(v4, v5);
  return partitionSprite->fields.mHeight;
}


void EventInfoTipsArchiveListViewObject__SetBaseTransform(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseParent,
          (int32_t)parent,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewObject__SetInput(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItemDraw_o *itemDraw; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *FrameCollider; // x20

  if ( (byte_5973001 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973001 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    goto LABEL_9;
  FrameCollider = (UnityEngine_Object_o *)EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
                                            itemDraw,
                                            (const MethodInfo *)isInput);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  itemDraw = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Object__op_Equality(FrameCollider, 0, 0);
  if ( ((unsigned __int8)itemDraw & 1) == 0 )
  {
    if ( FrameCollider )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)FrameCollider, isInput, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(itemDraw, isInput);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewObject__SetItem(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *item,
        bool isLast,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.id = id;
  this->fields.mainInfo = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)item,
    (System_String_o *)item,
    (System_String_o *)isLast,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.isLast = isLast;
  *(_QWORD *)&v12.fields.hasValue = 0;
  *(_QWORD *)&v12.fields.value.fields.y = 0;
  EventInfoTipsArchiveListViewObject__Init(this, 2, 0, v11, v12, v10);
}


void EventInfoTipsArchiveListViewObject__SetManager(
        EventInfoTipsArchiveListViewObject_o *this,
        EventInfoTipsArchiveListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoTipsArchiveListViewManager_o **p_viewManager; // x20
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.viewManager = manager;
  p_viewManager = &this->fields.viewManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewManager,
    (int32_t)manager,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_viewManager + 12) )
  {
    *(_QWORD *)&v12.fields.hasValue = 0;
    *(_QWORD *)&v12.fields.value.fields.y = 0;
    EventInfoTipsArchiveListViewObject__Init(this, 2, 0, v11, v12, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewObject__SetNewIconDisp(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItemDraw_o *itemDraw; // x8
  ShiningIconComponent_o *newIcon; // x0

  itemDraw = this->fields.itemDraw;
  if ( itemDraw )
  {
    newIcon = itemDraw->fields.newIcon;
    if ( !newIcon )
      sub_2213CDC(0, isDisp);
    ShiningIconComponent__Set_48066308(newIcon, isDisp, 0);
  }
}


void EventInfoTipsArchiveListViewObject__SetTransform(
        EventInfoTipsArchiveListViewObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewObject__SetVisible(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5973000 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973000 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void EventInfoTipsArchiveListViewObject__SetupDisp(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *info,
        bool isLast,
        int32_t dispMode,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Object_o *itemDraw; // x24
  __int64 v13; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v14; // x0

  if ( (byte_5973003 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973003 = 1;
  }
  EventInfoTipsArchiveListViewObject__SetVisible(this, dispMode != 0, (const MethodInfo *)info);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_2213CDC(0, v13);
    ((void (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, _QWORD, EventInfoTipsArchiveListViewItem_o *, bool, _QWORD, const MethodInfo *))v14->klass->vtable._5_SetItem.methodPtr)(
      v14,
      (unsigned int)id,
      info,
      isLast,
      (unsigned int)dispMode,
      v14->klass->vtable._5_SetItem.method);
  }
}


void EventInfoTipsArchiveListViewObject__add_callbackFunc(
        EventInfoTipsArchiveListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5972FFA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5972FFA = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  EventInfoTipsArchiveListViewObject__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_Vector3_o EventInfoTipsArchiveListViewObject__get_BottomPosition(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t Size; // w0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  Size = EventInfoTipsArchiveListViewObject__GetSize(this, method);
  result.fields.z = z;
  result.fields.y = y + (float)((float)Size * -0.5);
  result.fields.x = x;
  return result;
}


int32_t EventInfoTipsArchiveListViewObject__get_Id(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


float EventInfoTipsArchiveListViewObject__get_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields._ReadEndValue_k__BackingField;
}


void EventInfoTipsArchiveListViewObject__remove_callbackFunc(
        EventInfoTipsArchiveListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_5972FFB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_5972FFB = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  EventInfoTipsArchiveListViewObject__get_ReadEndValue(v12, v13);
}


void EventInfoTipsArchiveListViewObject__set_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ReadEndValue_k__BackingField = value;
}