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
  __int64 v2; // x2
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct EventInfoTipsArchiveListViewItemDraw_o **p_itemDraw; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1813F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___, method, v2);
    byte_4B1813F = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___);
  this->fields.itemDraw = (struct EventInfoTipsArchiveListViewItemDraw_o *)Component_object;
  p_itemDraw = &this->fields.itemDraw;
  sub_1BCA784((PartyOrganizationUtility_o *)p_itemDraw, (int64_t)Component_object, v7, v8, v9, v10, v11, v12);
  *((_DWORD *)p_itemDraw + 3) = 0;
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetKind(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v6; // x0

  if ( (byte_4B18140 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18140 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return ((__int64 (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, Il2CppMethodPointer))v6->klass->vtable._4_GetKind.method)(
           v6,
           v6->klass->vtable._5_SetItem.methodPtr);
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetSize(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x1
  EventInfoTipsArchiveListViewItemDraw_o *v8; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v10; // x0

  if ( (byte_4B18141 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18141 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    return EventInfoTipsArchiveListViewItemDraw__GetHeight(v8, v7);
  }
  else
  {
    v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo, v7);
      v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v10->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
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
  __int64 v11; // x2
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  int32_t v24; // w3
  MethodInfo *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w21
  System_String_o *v29; // x4
  PartyOrganizationUtility_c *klass; // x19

  hasValue = pos.fields.hasValue;
  if ( (byte_4B18145 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Vector3__GetValueOrDefault__, *(_QWORD *)&initMode, callbackFunc);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v10, v11);
    byte_4B18145 = 1;
  }
  if ( !((unsigned __int8)byte_4B109C1 | hasValue) )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  EventInfoTipsArchiveListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v28 = 1;
  if ( (unsigned int)initMode < 3 )
  {
    EventInfoTipsArchiveListViewObject__SetInput(this, 0, v23);
    this->fields.dispMode = initMode;
    this->fields.state = 1;
LABEL_13:
    v29 = (System_String_o *)(unsigned int)this->fields.dispMode;
    if ( state && dispMode == (_DWORD)v29 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( initMode != 4 )
  {
    if ( initMode != 3 )
      goto LABEL_13;
    EventInfoTipsArchiveListViewObject__SetInput(this, 1, v23);
    v28 = 3;
  }
  LODWORD(v29) = 2;
  this->fields.dispMode = 2;
  this->fields.state = v28;
LABEL_15:
  EventInfoTipsArchiveListViewObject__SetupDisp(
    this,
    this->fields.id,
    this->fields.mainInfo,
    this->fields.isLast,
    (int32_t)v29,
    v25);
LABEL_16:
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)v23, v24, v29, (BattleSetupInfo_o *)v25, v26, v27);
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
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v7; // x8
  struct UISprite_o *partitionSprite; // x8

  if ( (byte_4B18142 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18142 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( !v5 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 || (partitionSprite = v7->fields.partitionSprite) == 0LL )
    sub_1BCAA3C(v5, v6);
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
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseParent, (int64_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v4);
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
  __int64 v6; // x1
  UnityEngine_Object_o *FrameCollider; // x20

  if ( (byte_4B18144 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    byte_4B18144 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    goto LABEL_9;
  FrameCollider = (UnityEngine_Object_o *)EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
                                            itemDraw,
                                            (const MethodInfo *)isInput);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  itemDraw = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Object__op_Equality(FrameCollider, 0LL, 0LL);
  if ( ((unsigned __int8)itemDraw & 1) == 0 )
  {
    if ( FrameCollider )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)FrameCollider, isInput, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(itemDraw, isInput);
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
  sub_1BCA784(
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
  sub_1BCA784(
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, isDisp);
    ShiningIconComponent__Set_38945552(newIcon, isDisp, 0LL);
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
    sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B18143 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isVisible, method);
    byte_4B18143 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v11; // x1
  UnityEngine_Object_o *itemDraw; // x24
  __int64 v13; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v14; // x0

  if ( (byte_4B18146 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id, info);
    byte_4B18146 = 1;
  }
  EventInfoTipsArchiveListViewObject__SetVisible(this, dispMode != 0, (const MethodInfo *)info);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_1BCAA3C(0LL, v13);
    ((void (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, _QWORD, EventInfoTipsArchiveListViewItem_o *, bool, _QWORD, void *))v14->klass->vtable._5_SetItem.method)(
      v14,
      (unsigned int)id,
      info,
      isLast,
      (unsigned int)dispMode,
      v14->klass[1]._1.image);
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

  if ( (byte_4B1813D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1813D = 1;
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
  sub_1BCACFC(v8);
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

  if ( (byte_4B1813E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1813E = 1;
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
  sub_1BCACFC(v8);
  EventInfoTipsArchiveListViewObject__get_ReadEndValue(v11, v12);
}


void __fastcall EventInfoTipsArchiveListViewObject__set_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ReadEndValue_k__BackingField = value;
}