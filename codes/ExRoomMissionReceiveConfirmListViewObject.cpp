void ExRoomMissionReceiveConfirmListViewObject___ctor(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomMissionReceiveConfirmListViewObject__Awake(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  bool v5; // w0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Component_object; // x1
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596AF3D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ExRoomMissionReceiveConfirmListViewItemDraw___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF3D = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  Component_object = 0;
  if ( v5 )
  {
    v13 = this->fields.dispObject;
    if ( !v13 )
      sub_2213CDC(0, 0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v13,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ExRoomMissionReceiveConfirmListViewItemDraw___);
  }
  this->fields.itemDraw = (struct ExRoomMissionReceiveConfirmListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ExRoomMissionReceiveConfirmListViewObject__SetBaseTransform(this, v14);
}


int32_t ExRoomMissionReceiveConfirmListViewObject__GetSize(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  float v9; // s1

  if ( (byte_596AF40 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF40 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
    return 0;
  if ( !Component_object )
    sub_2213CDC(v6, v7);
  v9 = COERCE_FLOAT(LODWORD(UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0).fields.y));
  if ( v9 == INFINITY )
    return 0x80000000;
  else
    return (int)v9;
}


void ExRoomMissionReceiveConfirmListViewObject__Init(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  int32_t v9; // w9

  ExRoomMissionReceiveConfirmListViewObject__SetVisible(this, initMode != 0, method);
  ExRoomMissionReceiveConfirmListViewObject__SetInput(this, initMode == 3, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( (unsigned int)initMode <= 3 )
  {
    v9 = dword_E9C0E0[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + (unsigned int)initMode);
    this->fields.state = v9;
  }
  ExRoomMissionReceiveConfirmListViewObject__SetupDisp(this, v8);
}


void ExRoomMissionReceiveConfirmListViewObject__SetBaseTransform(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  struct UnityEngine_Transform_o *parent; // x0
  struct UnityEngine_Transform_o **p_baseParent; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  v5 = transform;
  parent = UnityEngine_Transform__get_parent(transform, 0);
  this->fields.baseParent = parent;
  p_baseParent = &this->fields.baseParent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_baseParent, (int32_t)parent, v8, v9, v10, v11, v12, v13);
  *(UnityEngine_Vector3_o *)(p_baseParent + 1) = UnityEngine_Transform__get_localPosition(v5, 0);
  *(UnityEngine_Vector3_o *)((char *)p_baseParent + 20) = UnityEngine_Transform__get_localScale(v5, 0);
}


void ExRoomMissionReceiveConfirmListViewObject__SetInput(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        bool isInputEnabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596AF3E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF3E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      sub_2213CDC(v8, v9);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInputEnabled, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionReceiveConfirmListViewObject__SetItem(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        ExRoomMissionReceiveConfirmDialogItem_o *item,
        bool inIsLineDisp,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.dialogItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dialogItem,
    (int32_t)item,
    (System_String_o *)inIsLineDisp,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.isLineDisp = inIsLineDisp;
  ExRoomMissionReceiveConfirmListViewObject__Init(this, 2, v10);
}


void ExRoomMissionReceiveConfirmListViewObject__SetManager(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        ExRoomMissionReceiveConfirmListViewManager_o *managerInstance,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ExRoomMissionReceiveConfirmListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = managerInstance;
  p_manager = &this->fields.manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)managerInstance,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 10) )
    ExRoomMissionReceiveConfirmListViewObject__Init(this, 2, v10);
}


void ExRoomMissionReceiveConfirmListViewObject__SetTransform(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
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
void ExRoomMissionReceiveConfirmListViewObject__SetVisible(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596AF3F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF3F = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible, method);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void ExRoomMissionReceiveConfirmListViewObject__SetupDisp(
        ExRoomMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  ExRoomMissionReceiveConfirmListViewItemDraw_o *v9; // x0

  if ( (byte_596AF41 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF41 = 1;
  }
  ExRoomMissionReceiveConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_2213CDC(0, v7);
    ExRoomMissionReceiveConfirmListViewItemDraw__SetItem(
      v9,
      this->fields.dialogItem,
      this->fields.dispMode,
      this->fields.isLineDisp,
      v8);
  }
}