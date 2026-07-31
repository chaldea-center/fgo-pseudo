void MasterMissionReceiveConfirmListViewObject___ctor(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterMissionReceiveConfirmListViewObject__Awake(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_593C089 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___);
    byte_593C089 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct MasterMissionReceiveConfirmListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(this, v11);
}


int32_t MasterMissionReceiveConfirmListViewObject__GetSize(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593C08C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_BoxCollider_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C08C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment,
        Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
      v6 = (UnityEngine_Object_o *)Component_object;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v7 = UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_21FFECC(v7, v8);
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v6, 0);
  if ( size.fields.y == INFINITY )
    return 0x80000000;
  else
    return (int)size.fields.y;
}


void MasterMissionReceiveConfirmListViewObject__Init(
        MasterMissionReceiveConfirmListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  int32_t v9; // w9

  MasterMissionReceiveConfirmListViewObject__SetVisible(this, initMode != 0, method);
  MasterMissionReceiveConfirmListViewObject__SetInput(this, initMode == 3, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( (unsigned int)initMode <= 3 )
  {
    v9 = dword_E92F40[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_E93450 + (unsigned int)initMode);
    this->fields.state = v9;
  }
  MasterMissionReceiveConfirmListViewObject__SetupDisp(this, v8);
}


void MasterMissionReceiveConfirmListViewObject__OnDestroy(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void MasterMissionReceiveConfirmListViewObject__SetBaseTransform(
        MasterMissionReceiveConfirmListViewObject_o *this,
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
        sub_21FFBF4(
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
    sub_21FFECC(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void MasterMissionReceiveConfirmListViewObject__SetInput(
        MasterMissionReceiveConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_593C08A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C08A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      sub_21FFECC(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionReceiveConfirmListViewObject__SetItem(
        MasterMissionReceiveConfirmListViewObject_o *this,
        System_String_o *message,
        int32_t giftId,
        bool lineDisp,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x2

  this->fields.messageText = message;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.messageText,
    (int32_t)message,
    *(System_String_o **)&giftId,
    (System_String_o *)lineDisp,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.giftId = giftId;
  this->fields.isLineDisp = lineDisp;
  MasterMissionReceiveConfirmListViewObject__Init(this, 2, v11);
}


void MasterMissionReceiveConfirmListViewObject__SetManager(
        MasterMissionReceiveConfirmListViewObject_o *this,
        MasterMissionReceiveConfirmListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MasterMissionReceiveConfirmListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 11) )
    MasterMissionReceiveConfirmListViewObject__Init(this, 2, v10);
}


void MasterMissionReceiveConfirmListViewObject__SetTransform(
        MasterMissionReceiveConfirmListViewObject_o *this,
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
    sub_21FFECC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionReceiveConfirmListViewObject__SetVisible(
        MasterMissionReceiveConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_593C08B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C08B = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void MasterMissionReceiveConfirmListViewObject__SetupDisp(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  struct MasterMissionReceiveConfirmListViewItemDraw_o *v7; // x0

  if ( (byte_593C08D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C08D = 1;
  }
  MasterMissionReceiveConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_21FFECC(0, v6);
    ((void (__fastcall *)(struct MasterMissionReceiveConfirmListViewItemDraw_o *, struct System_String_o *, _QWORD, _QWORD, bool, const MethodInfo *))v7->klass->vtable._4_SetItem.methodPtr)(
      v7,
      this->fields.messageText,
      (unsigned int)this->fields.giftId,
      (unsigned int)this->fields.dispMode,
      this->fields.isLineDisp,
      v7->klass->vtable._4_SetItem.method);
  }
}


bool MasterMissionReceiveConfirmListViewObject__get_IsBusy(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}