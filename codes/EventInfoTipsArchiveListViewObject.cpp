void __fastcall EventInfoTipsArchiveListViewObject___ctor(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewObject__Awake(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveListViewItemDraw_o **p_itemDraw; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C23FC4 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___, method);
    byte_4C23FC4 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___);
  this->fields.itemDraw = (struct EventInfoTipsArchiveListViewItemDraw_o *)Component_object;
  p_itemDraw = &this->fields.itemDraw;
  sub_1C3B708((PartyOrganizationUtility_o *)p_itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
  *((_DWORD *)p_itemDraw + 3) = 0;
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetKind(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v5; // x0

  if ( (byte_4C23FC5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23FC5 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1C3B9C0(0LL, v4);
  return ((__int64 (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, Il2CppMethodPointer))v5->klass->vtable._4_GetKind.method)(
           v5,
           v5->klass->vtable._5_SetItem.methodPtr);
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetSize(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  EventInfoTipsArchiveListViewItemDraw_o *v6; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v8; // x0

  if ( (byte_4C23FC6 & 1) == 0 )
  {
    sub_1C3B764(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C23FC6 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C3B9C0(0LL, v5);
    return EventInfoTipsArchiveListViewItemDraw__GetHeight(v6, v5);
  }
  else
  {
    v8 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo);
      v8 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v8->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__Init(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        System_Nullable_Vector3__o pos,
        const MethodInfo *method)
{
  bool hasValue; // w22
  __int64 v10; // x1
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x2
  int32_t v23; // w3
  MethodInfo *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t v27; // w21
  System_String_o *v28; // x4
  PartyOrganizationUtility_c *klass; // x19

  hasValue = pos.fields.hasValue;
  if ( (byte_4C23FCA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Nullable_Vector3__GetValueOrDefault__, *(_QWORD *)&initMode);
    sub_1C3B764(&Method_System_Nullable_Vector3__get_HasValue__, v10);
    byte_4C23FCA = 1;
  }
  if ( !((unsigned __int8)byte_4C1C511 | hasValue) )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  EventInfoTipsArchiveListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(transform, v14);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v27 = 1;
  if ( (unsigned int)initMode < 3 )
  {
    EventInfoTipsArchiveListViewObject__SetInput(this, 0, v22);
    this->fields.dispMode = initMode;
    this->fields.state = 1;
LABEL_13:
    v28 = (System_String_o *)(unsigned int)this->fields.dispMode;
    if ( state && dispMode == (_DWORD)v28 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( initMode != 4 )
  {
    if ( initMode != 3 )
      goto LABEL_13;
    EventInfoTipsArchiveListViewObject__SetInput(this, 1, v22);
    v27 = 3;
  }
  LODWORD(v28) = 2;
  this->fields.dispMode = 2;
  this->fields.state = v27;
LABEL_15:
  EventInfoTipsArchiveListViewObject__SetupDisp(
    this,
    this->fields.id,
    this->fields.mainInfo,
    this->fields.isLast,
    (int32_t)v28,
    v24);
LABEL_16:
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C3B708(p_callbackFunc, 0LL, (int64_t)v22, v23, v28, (BattleSetupInfo_o *)v24, v25, v26);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void __fastcall EventInfoTipsArchiveListViewObject__OnDestroy(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__PartitionHeight(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v6; // x8
  struct UISprite_o *partitionSprite; // x8

  if ( (byte_4C23FC7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23FC7 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( !v4 )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 || (partitionSprite = v6->fields.partitionSprite) == 0LL )
    sub_1C3B9C0(v4, v5);
  return partitionSprite->fields.mHeight;
}


void __fastcall EventInfoTipsArchiveListViewObject__SetBaseTransform(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseParent, (int64_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetInput(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItemDraw_o *itemDraw; // x0
  UnityEngine_Object_o *FrameCollider; // x20

  if ( (byte_4C23FC9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isInput);
    byte_4C23FC9 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    goto LABEL_9;
  FrameCollider = (UnityEngine_Object_o *)EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
                                            itemDraw,
                                            (const MethodInfo *)isInput);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemDraw = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Object__op_Equality(FrameCollider, 0LL, 0LL);
  if ( ((unsigned __int8)itemDraw & 1) == 0 )
  {
    if ( FrameCollider )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)FrameCollider, isInput, 0LL);
      return;
    }
LABEL_9:
    sub_1C3B9C0(itemDraw, isInput);
  }
}


void __fastcall EventInfoTipsArchiveListViewObject__SetItem(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *item,
        bool isLast,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool v9; // w20
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.id = id;
  this->fields.mainInfo = item;
  v9 = isLast;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mainInfo,
    (int64_t)item,
    (int64_t)item,
    isLast,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.isLast = v9;
  *(_QWORD *)&v12.fields.hasValue = 0LL;
  *(_QWORD *)&v12.fields.value.fields.y = 0LL;
  EventInfoTipsArchiveListViewObject__Init(this, 2, 0LL, v11, v12, v10);
}


void __fastcall EventInfoTipsArchiveListViewObject__SetManager(
        EventInfoTipsArchiveListViewObject_o *this,
        EventInfoTipsArchiveListViewManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoTipsArchiveListViewManager_o **p_viewManager; // x20
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.viewManager = manager;
  p_viewManager = &this->fields.viewManager;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.viewManager,
    (int64_t)manager,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_viewManager + 12) )
  {
    *(_QWORD *)&v12.fields.hasValue = 0LL;
    *(_QWORD *)&v12.fields.value.fields.y = 0LL;
    EventInfoTipsArchiveListViewObject__Init(this, 2, 0LL, v11, v12, v10);
  }
}


void __fastcall EventInfoTipsArchiveListViewObject__SetNewIconDisp(
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
      sub_1C3B9C0(0LL, isDisp);
    ShiningIconComponent__Set_39658244(newIcon, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetTransform(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1C3B9C0(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetVisible(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C23FC8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4C23FC8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetupDisp(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *info,
        bool isLast,
        int32_t dispMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x24
  __int64 v12; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v13; // x0

  if ( (byte_4C23FCB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4C23FCB = 1;
  }
  EventInfoTipsArchiveListViewObject__SetVisible(this, dispMode != 0, (const MethodInfo *)info);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1C3B9C0(0LL, v12);
    ((void (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, _QWORD, EventInfoTipsArchiveListViewItem_o *, bool, _QWORD, void *))v13->klass->vtable._5_SetItem.method)(
      v13,
      (unsigned int)id,
      info,
      isLast,
      (unsigned int)dispMode,
      v13->klass[1]._1.image);
  }
}


void __fastcall EventInfoTipsArchiveListViewObject__add_callbackFunc(
        EventInfoTipsArchiveListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C23FC2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C23FC2 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  EventInfoTipsArchiveListViewObject__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_Vector3_o __fastcall EventInfoTipsArchiveListViewObject__get_BottomPosition(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s10
  float z; // s9
  float v5; // s1
  float v6; // s0
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  v5 = y + (float)((float)EventInfoTipsArchiveListViewObject__GetSize(this, method) * -0.5);
  v6 = x;
  v7 = z;
  result.fields.z = v7;
  result.fields.y = v5;
  result.fields.x = v6;
  return result;
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__get_Id(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall EventInfoTipsArchiveListViewObject__get_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields._ReadEndValue_k__BackingField;
}


void __fastcall EventInfoTipsArchiveListViewObject__remove_callbackFunc(
        EventInfoTipsArchiveListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventInfoTipsArchiveListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C23FC3 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C23FC3 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  EventInfoTipsArchiveListViewObject__get_ReadEndValue(v11, v12);
}


void __fastcall EventInfoTipsArchiveListViewObject__set_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ReadEndValue_k__BackingField = value;
}