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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventInfoTipsArchiveListViewItemDraw_o *Component_srcLineSprite; // x0
  struct EventInfoTipsArchiveListViewItemDraw_o **p_itemDraw; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9A9A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9A9A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, method);
  Component_srcLineSprite = (struct EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               dispObject,
                                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventInfoTipsArchiveListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  p_itemDraw = &this->fields.itemDraw;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *((_DWORD *)p_itemDraw + 3) = 0;
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetKind(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v7; // x0

  if ( (byte_42E9A9B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A9B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return ((__int64 (__fastcall *)(struct EventInfoTipsArchiveListViewItemDraw_o *, Il2CppMethodPointer))v7->klass->vtable._4_GetKind.method)(
           v7,
           v7->klass->vtable._5_SetItem.methodPtr);
}


int32_t __fastcall EventInfoTipsArchiveListViewObject__GetSize(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v9; // x1
  EventInfoTipsArchiveListViewItemDraw_o *v10; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v12; // x0

  if ( (byte_42E9A9C & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9A9C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B5D69C(0LL, v9);
    return EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v9);
  }
  else
  {
    v12 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( (BYTE3(EventInfoTipsArchiveListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo);
      v12 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v12->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void __fastcall EventInfoTipsArchiveListViewObject__Init(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        System_Nullable_Vector3__o pos,
        const MethodInfo *method)
{
  bool has_value; // x20^4
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  MethodInfo *v24; // x2
  System_String_array **v25; // x3
  MethodInfo *v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // w8
  int32_t v30; // w8
  System_Boolean_array **v31; // x4
  System_Action_o *klass; // x19

  has_value = pos.fields.has_value;
  if ( (byte_42E9AA0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Nullable_Vector3__GetValueOrDefault__,
      initMode,
      (_DWORD)callbackFunc,
      *(_QWORD *)&pos.fields.value.fields.x);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v10, v11, v12);
    byte_42E9AA0 = 1;
  }
  if ( !has_value )
    UnityEngine_Vector3__get_zero(0LL);
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  EventInfoTipsArchiveListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v29 = 1;
  switch ( initMode )
  {
    case 0:
      EventInfoTipsArchiveListViewObject__SetInput(this, 0, v24);
      v30 = 0;
      goto LABEL_13;
    case 1:
      EventInfoTipsArchiveListViewObject__SetInput(this, 0, v24);
      v30 = 1;
      goto LABEL_13;
    case 2:
      EventInfoTipsArchiveListViewObject__SetInput(this, 0, v24);
      v30 = 2;
LABEL_13:
      this->fields.dispMode = v30;
      this->fields.state = 1;
      goto LABEL_14;
    case 3:
      EventInfoTipsArchiveListViewObject__SetInput(this, 1, v24);
      v29 = 3;
      goto LABEL_10;
    case 4:
LABEL_10:
      LODWORD(v31) = 2;
      this->fields.dispMode = 2;
      this->fields.state = v29;
      goto LABEL_16;
    default:
LABEL_14:
      v31 = (System_Boolean_array **)(unsigned int)this->fields.dispMode;
      if ( !state || dispMode != (_DWORD)v31 )
LABEL_16:
        EventInfoTipsArchiveListViewObject__SetupDisp(
          this,
          this->fields.id,
          this->fields.mainInfo,
          this->fields.isLast,
          (int32_t)v31,
          v26);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)v24, v25, v31, (System_Int32_array **)v26, v27, v28);
        System_Action__Invoke(klass, 0LL);
      }
      return;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct EventInfoTipsArchiveListViewItemDraw_o *v8; // x8
  struct UISprite_o *partitionSprite; // x8

  if ( (byte_42E9A9D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9A9D = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.itemDraw;
  if ( !v8 || (partitionSprite = v8->fields.partitionSprite) == 0LL )
    sub_B5D69C(v6, v7);
  return partitionSprite->fields.mHeight;
}


void __fastcall EventInfoTipsArchiveListViewObject__SetBaseTransform(
        EventInfoTipsArchiveListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.baseParent,
          (System_Int32_array **)parent,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetInput(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoTipsArchiveListViewItemDraw_o *itemDraw; // x0
  UnityEngine_Object_o *FrameCollider; // x20

  if ( (byte_42E9A9F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    byte_42E9A9F = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    goto LABEL_10;
  FrameCollider = (UnityEngine_Object_o *)EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
                                            itemDraw,
                                            (const MethodInfo *)isInput);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  itemDraw = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Object__op_Equality(FrameCollider, 0LL, 0LL);
  if ( ((unsigned __int8)itemDraw & 1) == 0 )
  {
    if ( FrameCollider )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)FrameCollider, isInput, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(itemDraw, isInput);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewObject__SetItem(
        EventInfoTipsArchiveListViewObject_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *item,
        bool isLast,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.id = id;
  this->fields.mainInfo = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    (System_String_array **)item,
    (System_String_array **)isLast,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.isLast = isLast;
  *(_QWORD *)&v12.fields.value.fields.x = 0LL;
  *(_QWORD *)&v12.fields.value.fields.z = 0LL;
  EventInfoTipsArchiveListViewObject__Init(this, 2, 0LL, v11, v12, v10);
}


void __fastcall EventInfoTipsArchiveListViewObject__SetManager(
        EventInfoTipsArchiveListViewObject_o *this,
        EventInfoTipsArchiveListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoTipsArchiveListViewManager_o **p_viewManager; // x20
  const MethodInfo *v10; // x5
  float v11; // s0
  System_Nullable_Vector3__o v12; // 0:x3.16

  this->fields.viewManager = manager;
  p_viewManager = &this->fields.viewManager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.viewManager,
    (System_Int32_array **)manager,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_viewManager + 12) )
  {
    *(_QWORD *)&v12.fields.value.fields.x = 0LL;
    *(_QWORD *)&v12.fields.value.fields.z = 0LL;
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
      sub_B5D69C(0LL, isDisp);
    ShiningIconComponent__Set_33897340(newIcon, isDisp, 0LL);
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
    sub_B5D69C(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


void __fastcall EventInfoTipsArchiveListViewObject__SetVisible(
        EventInfoTipsArchiveListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *dispObject; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E9A9E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isVisible, (_DWORD)method, v3);
    byte_42E9A9E = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v8 = this->fields.dispObject;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isVisible, 0LL);
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

  if ( (byte_42E9AA1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, id, (_DWORD)info, isLast);
    byte_42E9AA1 = 1;
  }
  EventInfoTipsArchiveListViewObject__SetVisible(this, dispMode != 0, (const MethodInfo *)info);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9A98 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9A98 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventInfoTipsArchiveListViewObject_o *)sub_B5D990(v9);
  EventInfoTipsArchiveListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventInfoTipsArchiveListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E9A99 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9A99 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventInfoTipsArchiveListViewObject_o *)sub_B5D990(v9);
  EventInfoTipsArchiveListViewObject__get_ReadEndValue(v12, v13);
}


void __fastcall EventInfoTipsArchiveListViewObject__set_ReadEndValue(
        EventInfoTipsArchiveListViewObject_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._ReadEndValue_k__BackingField = value;
}