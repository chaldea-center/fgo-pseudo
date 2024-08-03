void __fastcall MasterMissionReceiveConfirmListViewObject___ctor(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewObject__Awake(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_49FF6B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___, method);
    byte_49FF6B3 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct MasterMissionReceiveConfirmListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(this, v7);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterMissionReceiveConfirmListViewObject__GetSize(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  float v9; // s1

  if ( (byte_49FF6B6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF6B6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_object;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_1B64324(v8);
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0LL);
  if ( v9 == INFINITY )
    return 0x80000000;
  else
    return (int)v9;
}


void __fastcall MasterMissionReceiveConfirmListViewObject__Init(
        MasterMissionReceiveConfirmListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w9

  MasterMissionReceiveConfirmListViewObject__SetVisible(this, initMode != 0, method);
  MasterMissionReceiveConfirmListViewObject__SetInput(this, initMode == 3, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( (unsigned int)initMode <= 3 )
  {
    v8 = dword_BA25B0[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_BA31D0 + initMode);
    this->fields.state = v8;
  }
  MasterMissionReceiveConfirmListViewObject__SetupDisp(this, v7);
}


void __fastcall MasterMissionReceiveConfirmListViewObject__OnDestroy(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetBaseTransform(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseParent, (int32_t)parent, v5, v6),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewObject__SetInput(
        MasterMissionReceiveConfirmListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0

  if ( (byte_49FF6B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF6B4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1B64324(v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetItem(
        MasterMissionReceiveConfirmListViewObject_o *this,
        System_String_o *message,
        int32_t giftId,
        bool lineDisp,
        const MethodInfo *method)
{
  bool v7; // w21
  const MethodInfo *v8; // x2

  this->fields.messageText = message;
  v7 = lineDisp;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageText, (int32_t)message, giftId, lineDisp);
  this->fields.giftId = giftId;
  this->fields.isLineDisp = v7;
  MasterMissionReceiveConfirmListViewObject__Init(this, 2, v8);
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetManager(
        MasterMissionReceiveConfirmListViewObject_o *this,
        MasterMissionReceiveConfirmListViewManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct MasterMissionReceiveConfirmListViewManager_o **p_manager; // x20
  const MethodInfo *v6; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
  if ( !*((_DWORD *)p_manager + 11) )
    MasterMissionReceiveConfirmListViewObject__Init(this, 2, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewObject__SetTransform(
        MasterMissionReceiveConfirmListViewObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  UnityEngine_Transform__set_position(transform, v8, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewObject__SetVisible(
        MasterMissionReceiveConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49FF6B5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isVisible);
    byte_49FF6B5 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetupDisp(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  struct MasterMissionReceiveConfirmListViewItemDraw_o *v5; // x0

  if ( (byte_49FF6B7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF6B7 = 1;
  }
  MasterMissionReceiveConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct MasterMissionReceiveConfirmListViewItemDraw_o *, struct System_String_o *, _QWORD, _QWORD, bool, void *))v5->klass->vtable._4_SetItem.method)(
      v5,
      this->fields.messageText,
      (unsigned int)this->fields.giftId,
      (unsigned int)this->fields.dispMode,
      this->fields.isLineDisp,
      v5->klass[1]._1.image);
  }
}


bool __fastcall MasterMissionReceiveConfirmListViewObject__get_IsBusy(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}