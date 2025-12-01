void ServantStatusFlavorTextListViewObject___ctor(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusFlavorTextListViewObject__Awake(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4CC372A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
    byte_4CC372A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusFlavorTextListViewItemDraw_o *)Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(this, v11);
}


int32_t ServantStatusFlavorTextListViewObject__GetKind(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v5; // x0

  if ( (byte_4CC372B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC372B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1C71608(0, v4);
  return ((__int64 (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, const MethodInfo *))v5->klass->vtable._4_GetKind.methodPtr)(
           v5,
           v5->klass->vtable._4_GetKind.method);
}


int32_t ServantStatusFlavorTextListViewObject__GetSize(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC372C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC372C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment,
        Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
      v5 = (UnityEngine_Object_o *)Component_object;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1C71608(v6, v7);
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v5, 0);
  if ( size.fields.y == INFINITY )
    return 0x80000000;
  else
    return (int)size.fields.y;
}


void ServantStatusFlavorTextListViewObject__HideNew(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, const MethodInfo *))itemDraw->klass->vtable._9_HideNew.methodPtr)(
    itemDraw,
    itemDraw->klass->vtable._9_HideNew.method);
}


void ServantStatusFlavorTextListViewObject__Init(
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
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Action_o *v27; // x19

  ServantStatusFlavorTextListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  ServantStatusFlavorTextListViewObject__SetInput(this, initMode == 3, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (unsigned int)initMode <= 3 )
  {
    v20 = dword_CEE5F0[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_CEF2E0 + initMode);
    this->fields.state = v20;
  }
  ServantStatusFlavorTextListViewObject__SetupDisp(this, v19);
  v27 = this->fields.callbackFunc;
  if ( v27 )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, v21, v22, v23, v24, v25, v26);
    ((void (__fastcall *)(intptr_t, intptr_t))v27->fields.invoke_impl)(v27->fields.method_code, v27->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewObject__Init_35598568(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ServantStatusFlavorTextListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewObject__Init_35599900(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
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
void ServantStatusFlavorTextListViewObject__Init_35599984(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ServantStatusFlavorTextListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void ServantStatusFlavorTextListViewObject__OnClick(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC3730 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9850/*"OnClickListView"*/);
    byte_4CC3730 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C71608(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9850/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewObject__OnClickVoice(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC3731 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9861/*"OnClickListViewVoice"*/);
    byte_4CC3731 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_1C71608(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9861/*"OnClickListViewVoice"*/, (Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewObject__OnDestroy(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusFlavorTextListViewObject__SetBaseTransform(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void ServantStatusFlavorTextListViewObject__SetCondTitle(
        ServantStatusFlavorTextListViewObject_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  if ( !System_String__IsNullOrEmpty(title, 0) )
  {
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1C71608(0, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, System_String_o *, const MethodInfo *))itemDraw->klass->vtable._6_SetCondTitle.methodPtr)(
      itemDraw,
      title,
      itemDraw->klass->vtable._6_SetCondTitle.method);
  }
}


void ServantStatusFlavorTextListViewObject__SetCvName(
        ServantStatusFlavorTextListViewObject_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  if ( !System_String__IsNullOrEmpty(cvName, 0) )
  {
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_1C71608(0, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, System_String_o *, const MethodInfo *))itemDraw->klass->vtable._7_SetCvName.methodPtr)(
      itemDraw,
      cvName,
      itemDraw->klass->vtable._7_SetCvName.method);
  }
}


void ServantStatusFlavorTextListViewObject__SetInput(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CC372E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC372E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C71608(v6, v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewObject__SetItem(
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
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2

  this->fields.mainInfo = item;
  v12 = isOpen;
  v13 = isNew;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mainInfo,
    (int32_t)item,
    id,
    isOpen,
    (System_String_o *)isNew,
    (int32_t)text,
    *(int64_t *)&profileNum,
    (System_String_o *)method);
  this->fields.id = id;
  this->fields.isOpen = v12;
  this->fields.isNew = v13;
  this->fields.messageData = text;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.messageData, (int32_t)text, v14, v15, v16, v17, v18, v19);
  this->fields.profileNum = profileNum;
  ServantStatusFlavorTextListViewObject__Init_35598568(this, 2, v20);
}


void ServantStatusFlavorTextListViewObject__SetManager(
        ServantStatusFlavorTextListViewObject_o *this,
        ServantStatusFlavorTextListViewManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantStatusFlavorTextListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusFlavorTextListViewObject__Init_35598568(this, 2, v10);
}


void ServantStatusFlavorTextListViewObject__SetTransform(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


void ServantStatusFlavorTextListViewObject__SetVisible(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC372D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC372D = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C71608(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void ServantStatusFlavorTextListViewObject__SetupDisp(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v6; // x0

  if ( (byte_4CC372F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC372F = 1;
  }
  ServantStatusFlavorTextListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C71608(0, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, struct ServantStatusListViewItem_o *, bool, bool, struct System_String_o *, _QWORD, _QWORD, const MethodInfo *))v6->klass->vtable._5_SetItem.methodPtr)(
      v6,
      this->fields.mainInfo,
      this->fields.isOpen,
      this->fields.isNew,
      this->fields.messageData,
      (unsigned int)this->fields.profileNum,
      (unsigned int)this->fields.dispMode,
      v6->klass->vtable._5_SetItem.method);
  }
}


void ServantStatusFlavorTextListViewObject__UpdateParameter(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))itemDraw->klass->vtable._8_UpdateParameter.methodPtr)(
    itemDraw,
    this->fields.mainInfo,
    itemDraw->klass->vtable._8_UpdateParameter.method);
}


void ServantStatusFlavorTextListViewObject__add_callbackFunc(
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

  if ( (byte_4CC3728 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC3728 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ServantStatusFlavorTextListViewObject__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewObject__get_BottomPosition(
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


int32_t ServantStatusFlavorTextListViewObject__get_Id(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool ServantStatusFlavorTextListViewObject__get_IsBusy(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isBusy;
}


bool ServantStatusFlavorTextListViewObject__get_IsNew(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isNew;
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewObject__get_ProfileLastLinePosition(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  float x; // s8
  float y; // s10
  float z; // s9
  int32_t Size; // w0
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  int v8; // w20
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v10; // x21
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  float v13; // s10
  UnityEngine_Object_c *klass; // x8
  float v15; // s1
  float v16; // s0
  float v17; // s2
  UnityEngine_Vector3_o MessageLabelPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3727 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    byte_4CC3727 = 1;
  }
  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  itemDraw = this->fields.itemDraw;
  v8 = Size;
  if ( itemDraw
    && (naturalAligment = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.naturalAligment,
        itemDraw->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusFlavorTextListViewItemDrawText2_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusFlavorTextListViewItemDrawText2_TypeInfo )
      v10 = (UnityEngine_Object_o *)this->fields.itemDraw;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( v11 )
  {
    if ( !v10
      || (v13 = this->fields.basePosition.fields.y,
          MessageLabelPosition = ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
                                   (ServantStatusFlavorTextListViewItemDrawText2_o *)v10,
                                   v12),
          (klass = v10[3].klass) == 0) )
    {
      sub_1C71608(v11, v12);
    }
    v15 = (float)((float)(v13 + MessageLabelPosition.fields.y) - (float)SHIDWORD(klass->_1.implementedInterfaces))
        + (float)SLODWORD(klass[1]._1.this_arg.data);
  }
  else
  {
    v15 = y + (float)((float)v8 * -0.5);
  }
  v16 = x;
  v17 = z;
  result.fields.z = v17;
  result.fields.y = v15;
  result.fields.x = v16;
  return result;
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewObject__get_TopPosition(
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


void ServantStatusFlavorTextListViewObject__remove_callbackFunc(
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

  if ( (byte_4CC3729 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC3729 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ServantStatusFlavorTextListViewObject__Awake(v11, v12);
}