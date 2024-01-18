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
  struct MasterMissionReceiveConfirmListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4189CC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___, method);
    byte_4189CC5 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, method);
  Component_srcLineSprite = (struct MasterMissionReceiveConfirmListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                      dispObject,
                                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(this, v11);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterMissionReceiveConfirmListViewObject__GetSize(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s1

  if ( (byte_4189CC8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4189CC8 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_WebViewObject
    && (v6 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        *(&Component_WebViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_WebViewObject->klass->_2.typeHierarchy[v6 - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_WebViewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0LL);
  if ( v10 == INFINITY )
    return (int)-v10;
  else
    return (int)v10;
}


void __fastcall MasterMissionReceiveConfirmListViewObject__Init(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( (unsigned int)initMode <= 3 )
  {
    v9 = dword_312F1A0[initMode];
    this->fields.dispMode = dword_319E8FC[initMode];
    this->fields.state = v9;
  }
  MasterMissionReceiveConfirmListViewObject__SetupDisp(this, v8);
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
        sub_B2C2F8(
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
    sub_B2C434(transform, v4);
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4189CC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4189CC6 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_WebViewObject )
      sub_B2C434(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewObject__SetItem(
        MasterMissionReceiveConfirmListViewObject_o *this,
        System_String_o *message,
        int32_t giftId,
        bool lineDisp,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x2

  this->fields.messageText = message;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.messageText,
    (System_Int32_array **)message,
    *(System_String_array ***)&giftId,
    (System_String_array **)lineDisp,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.giftId = giftId;
  this->fields.isLineDisp = lineDisp;
  MasterMissionReceiveConfirmListViewObject__Init(this, 2, v11);
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetManager(
        MasterMissionReceiveConfirmListViewObject_o *this,
        MasterMissionReceiveConfirmListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct MasterMissionReceiveConfirmListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 11) )
    MasterMissionReceiveConfirmListViewObject__Init(this, 2, v10);
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
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B2C434(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0LL);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4189CC7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4189CC7 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewObject__SetupDisp(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct MasterMissionReceiveConfirmListViewItemDraw_o *v6; // x0

  if ( (byte_4189CC9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189CC9 = 1;
  }
  MasterMissionReceiveConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_B2C434(0LL, v5);
    ((void (__fastcall *)(struct MasterMissionReceiveConfirmListViewItemDraw_o *, struct System_String_o *, _QWORD, _QWORD, bool, void *))v6->klass->vtable._4_SetItem.method)(
      v6,
      this->fields.messageText,
      (unsigned int)this->fields.giftId,
      (unsigned int)this->fields.dispMode,
      this->fields.isLineDisp,
      v6->klass[1]._1.image);
  }
}


bool __fastcall MasterMissionReceiveConfirmListViewObject__get_IsBusy(
        MasterMissionReceiveConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}