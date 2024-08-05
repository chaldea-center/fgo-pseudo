void __fastcall ServantStatusFlavorTextListViewObject___ctor(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewObject__Awake(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_49FAA58 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___, method);
    byte_49FAA58 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64ACC(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusFlavorTextListViewItemDraw_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(this, v7);
}


int32_t __fastcall ServantStatusFlavorTextListViewObject__GetKind(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v5; // x0

  if ( (byte_49FAA59 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAA59 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1B64ACC(0LL, v4);
  return ((__int64 (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, Il2CppMethodPointer))v5->klass->vtable._4_GetKind.method)(
           v5,
           v5->klass->vtable._5_SetItem.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusFlavorTextListViewObject__GetSize(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s1

  if ( (byte_49FAA5A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    byte_49FAA5A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1B64ACC(v8, v9);
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0LL);
  if ( v10 == INFINITY )
    return 0x80000000;
  else
    return (int)v10;
}


void __fastcall ServantStatusFlavorTextListViewObject__Init(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  int32_t v16; // w9
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Action_o *v19; // x19

  ServantStatusFlavorTextListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  ServantStatusFlavorTextListViewObject__SetInput(this, initMode == 3, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v13, v14);
  if ( (unsigned int)initMode <= 3 )
  {
    v16 = dword_BA2920[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_BA3540 + initMode);
    this->fields.state = v16;
  }
  ServantStatusFlavorTextListViewObject__SetupDisp(this, v15);
  v19 = this->fields.callbackFunc;
  if ( v19 )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B64814(p_callbackFunc, 0, v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      *(_QWORD *)&v19->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_32456140(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
  }
  ServantStatusFlavorTextListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_32457472(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
  }
  ServantStatusFlavorTextListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_32457556(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
  }
  ServantStatusFlavorTextListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ServantStatusFlavorTextListViewObject__OnClick(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FAA5E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9803/*"OnClickListView"*/, method);
    byte_49FAA5E = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64ACC(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9803/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewObject__OnClickVoice(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FAA5F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9814/*"OnClickListViewVoice"*/, method);
    byte_49FAA5F = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1B64ACC(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9814/*"OnClickListViewVoice"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewObject__OnDestroy(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewObject__SetBaseTransform(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewObject__SetCondTitle(
        ServantStatusFlavorTextListViewObject_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  if ( !System_String__IsNullOrEmpty(title, 0LL) )
  {
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1B64ACC(0LL, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, System_String_o *, Il2CppMethodPointer))itemDraw->klass->vtable._6_SetCondTitle.method)(
      itemDraw,
      title,
      itemDraw->klass->vtable._7_SetCvName.methodPtr);
  }
}


void __fastcall ServantStatusFlavorTextListViewObject__SetCvName(
        ServantStatusFlavorTextListViewObject_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  if ( !System_String__IsNullOrEmpty(cvName, 0LL) )
  {
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1B64ACC(0LL, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, System_String_o *, Il2CppMethodPointer))itemDraw->klass->vtable._7_SetCvName.method)(
      itemDraw,
      cvName,
      itemDraw->klass->vtable._8_UpdateParameter.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__SetInput(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49FAA5C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FAA5C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1B64ACC(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewObject__SetItem(
        ServantStatusFlavorTextListViewObject_o *this,
        ServantStatusListViewItem_o *item,
        int32_t id,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        const MethodInfo *method)
{
  bool v12; // w23
  bool v13; // w24
  int32_t v14; // w2
  char v15; // w3
  const MethodInfo *v16; // x2

  this->fields.mainInfo = item;
  v12 = isOpen;
  v13 = isNew;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)item, id, isOpen);
  this->fields.id = id;
  this->fields.isOpen = v12;
  this->fields.isNew = v13;
  this->fields.messageData = text;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.messageData, (int32_t)text, v14, v15);
  this->fields.profileNum = profileNum;
  ServantStatusFlavorTextListViewObject__Init_32456140(this, 2, v16);
}


void __fastcall ServantStatusFlavorTextListViewObject__SetManager(
        ServantStatusFlavorTextListViewObject_o *this,
        ServantStatusFlavorTextListViewManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantStatusFlavorTextListViewManager_o **p_manager; // x20
  const MethodInfo *v6; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusFlavorTextListViewObject__Init_32456140(this, 2, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__SetTransform(
        ServantStatusFlavorTextListViewObject_o *this,
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
    sub_1B64ACC(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__SetVisible(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_49FAA5B & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isVisible);
    byte_49FAA5B = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewObject__SetupDisp(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v6; // x0

  if ( (byte_49FAA5D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAA5D = 1;
  }
  ServantStatusFlavorTextListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1B64ACC(0LL, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, struct ServantStatusListViewItem_o *, bool, bool, struct System_String_o *, _QWORD, _QWORD, Il2CppMethodPointer))v6->klass->vtable._5_SetItem.method)(
      v6,
      this->fields.mainInfo,
      this->fields.isOpen,
      this->fields.isNew,
      this->fields.messageData,
      (unsigned int)this->fields.profileNum,
      (unsigned int)this->fields.dispMode,
      v6->klass->vtable._6_SetCondTitle.methodPtr);
  }
}


void __fastcall ServantStatusFlavorTextListViewObject__UpdateParameter(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, struct ServantStatusListViewItem_o *, void *))itemDraw->klass->vtable._8_UpdateParameter.method)(
    itemDraw,
    this->fields.mainInfo,
    itemDraw->klass[1]._1.image);
}


void __fastcall ServantStatusFlavorTextListViewObject__add_callbackFunc(
        ServantStatusFlavorTextListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FAA56 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FAA56 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewObject_o *)sub_1B64D8C(v8);
  ServantStatusFlavorTextListViewObject__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewObject__get_BottomPosition(
        ServantStatusFlavorTextListViewObject_o *this,
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
  v5 = y + (float)((float)ServantStatusFlavorTextListViewObject__GetSize(this, method) * -0.5);
  v6 = x;
  v7 = z;
  result.fields.z = v7;
  result.fields.y = v5;
  result.fields.x = v6;
  return result;
}


int32_t __fastcall ServantStatusFlavorTextListViewObject__get_Id(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ServantStatusFlavorTextListViewObject__get_IsBusy(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool __fastcall ServantStatusFlavorTextListViewObject__get_IsNew(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isNew;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t Size; // w0
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  int v9; // w20
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v11; // x21
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  float v14; // s10
  float v15; // s1
  UnityEngine_Object_c *klass; // x8
  float v17; // s1
  float v18; // s0
  float v19; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAA55 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v3);
    byte_49FAA55 = 1;
  }
  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  itemDraw = this->fields.itemDraw;
  v9 = Size;
  if ( itemDraw
    && (methodPtr_low = LOBYTE(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(itemDraw->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantStatusFlavorTextListViewItemDrawText2_c *)itemDraw->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantStatusFlavorTextListViewItemDrawText2_TypeInfo )
      v11 = (UnityEngine_Object_o *)this->fields.itemDraw;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( v12 )
  {
    if ( !v11
      || (v14 = this->fields.basePosition.fields.y,
          *(UnityEngine_Vector3_o *)(&v15 - 1) = ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
                                                   (ServantStatusFlavorTextListViewItemDrawText2_o *)v11,
                                                   v13),
          (klass = v11[3].klass) == 0LL) )
    {
      sub_1B64ACC(v12, v13);
    }
    v17 = (float)((float)(v14 + v15) - (float)SHIDWORD(klass->_1.implementedInterfaces))
        + (float)(int)klass[1]._1.this_arg.bits;
  }
  else
  {
    v17 = y + (float)((float)v9 * -0.5);
  }
  v18 = x;
  v19 = z;
  result.fields.z = v19;
  result.fields.y = v17;
  result.fields.x = v18;
  return result;
}


UnityEngine_Vector3_o __fastcall ServantStatusFlavorTextListViewObject__get_TopPosition(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float v5; // s12
  int32_t Size; // w0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  if ( this->fields.isNew )
    v5 = 5.0;
  else
    v5 = 0.0;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  v7 = x + 0.0;
  v8 = y + (float)(v5 + (float)((float)Size * 0.5));
  v9 = z + 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


void __fastcall ServantStatusFlavorTextListViewObject__remove_callbackFunc(
        ServantStatusFlavorTextListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusFlavorTextListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FAA57 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FAA57 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusFlavorTextListViewObject_o *)sub_1B64D8C(v8);
  ServantStatusFlavorTextListViewObject__Awake(v11, v12);
}