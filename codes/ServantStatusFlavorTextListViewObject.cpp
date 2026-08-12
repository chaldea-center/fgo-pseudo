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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596CB81 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
    byte_596CB81 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusFlavorTextListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ServantStatusFlavorTextListViewObject__SetBaseTransform(this, v11);
}


int32_t ServantStatusFlavorTextListViewObject__GetKind(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v6; // x0

  if ( (byte_596CB82 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB82 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_2213CDC(0, v5);
  return ((int32_t (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, const MethodInfo *))v6->klass->vtable._4_GetKind.methodPtr)(
           v6,
           v6->klass->vtable._4_GetKind.method);
}


int32_t ServantStatusFlavorTextListViewObject__GetSize(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v11; // s1

  if ( (byte_596CB83 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_BoxCollider_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB83 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment,
        Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_object;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_2213CDC(v8, v9);
  v11 = COERCE_FLOAT(LODWORD(UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0).fields.y));
  if ( v11 == INFINITY )
    return 0x80000000;
  else
    return (int)v11;
}


void ServantStatusFlavorTextListViewObject__HideNew(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
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
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_o *v27; // x19

  ServantStatusFlavorTextListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  ServantStatusFlavorTextListViewObject__SetInput(this, initMode == 3, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (unsigned int)initMode <= 3 )
  {
    v20 = dword_E9C0E0[initMode];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + (unsigned int)initMode);
    this->fields.state = v20;
  }
  ServantStatusFlavorTextListViewObject__SetupDisp(this, v19);
  v27 = this->fields.callbackFunc;
  if ( v27 )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v21, v22, v23, v24, v25, v26);
    ((void (__fastcall *)(intptr_t, intptr_t))v27->fields.invoke_impl)(v27->fields.method_code, v27->fields.method);
  }
}


void ServantStatusFlavorTextListViewObject__Init_42367508(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  ServantStatusFlavorTextListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void ServantStatusFlavorTextListViewObject__Init_42368816(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  ServantStatusFlavorTextListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void ServantStatusFlavorTextListViewObject__Init_42368900(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  ServantStatusFlavorTextListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
}


void ServantStatusFlavorTextListViewObject__OnClick(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596CB87 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_596CB87 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewObject__OnClickVoice(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596CB88 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10259/*"OnClickListViewVoice"*/);
    byte_596CB88 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10259/*"OnClickListViewVoice"*/, (Il2CppObject *)this, 0);
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
      sub_2213CDC(0, v5);
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
      sub_2213CDC(0, v5);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596CB85 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB85 = 1;
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  char v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2

  this->fields.mainInfo = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)item,
    *(System_String_o **)&id,
    (System_String_o *)isOpen,
    isNew,
    (int32_t)text,
    profileNum,
    (bool)method);
  this->fields.id = id;
  this->fields.isOpen = isOpen;
  this->fields.isNew = isNew;
  this->fields.messageData = text;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.messageData,
    (int32_t)text,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.profileNum = profileNum;
  ServantStatusFlavorTextListViewObject__Init_42367508(this, 2, v20);
}


void ServantStatusFlavorTextListViewObject__SetManager(
        ServantStatusFlavorTextListViewObject_o *this,
        ServantStatusFlavorTextListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantStatusFlavorTextListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusFlavorTextListViewObject__Init_42367508(this, 2, v10);
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
void ServantStatusFlavorTextListViewObject__SetVisible(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596CB84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB84 = 1;
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


void ServantStatusFlavorTextListViewObject__SetupDisp(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v8; // x0

  if ( (byte_596CB86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB86 = 1;
  }
  ServantStatusFlavorTextListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_2213CDC(0, v7);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, struct ServantStatusListViewItem_o *, bool, bool, struct System_String_o *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._5_SetItem.methodPtr)(
      v8,
      this->fields.mainInfo,
      this->fields.isOpen,
      this->fields.isNew,
      this->fields.messageData,
      (unsigned int)this->fields.profileNum,
      (unsigned int)this->fields.dispMode,
      v8->klass->vtable._5_SetItem.method);
  }
}


void ServantStatusFlavorTextListViewObject__UpdateParameter(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_2213CDC(0, method);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596CB7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596CB7F = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewObject__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewObject__get_BottomPosition(
        ServantStatusFlavorTextListViewObject_o *this,
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
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  result.fields.z = z;
  result.fields.y = y + (float)((float)Size * -0.5);
  result.fields.x = x;
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
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  int v10; // w20
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v12; // x21
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s10
  UnityEngine_Object_c *klass; // x8
  float v20; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CB7E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    byte_596CB7E = 1;
  }
  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  itemDraw = this->fields.itemDraw;
  v10 = Size;
  if ( itemDraw
    && (naturalAligment = ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.naturalAligment,
        itemDraw->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusFlavorTextListViewItemDrawText2_c *)itemDraw->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusFlavorTextListViewItemDrawText2_TypeInfo )
      v12 = (UnityEngine_Object_o *)this->fields.itemDraw;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v13 = UnityEngine_Object__op_Inequality(v12, 0, 0);
  if ( v13 )
  {
    if ( !v12
      || (v15 = this->fields.basePosition.fields.y,
          v20 = ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
                  (ServantStatusFlavorTextListViewItemDrawText2_o *)v12,
                  v14).fields.y,
          (klass = v12[3].klass) == 0) )
    {
      sub_2213CDC(v13, v14);
    }
    result.fields.y = (float)((float)(v15 + v20) - (float)SHIDWORD(klass->_1.implementedInterfaces))
                    + (float)SLODWORD(klass[1]._1.this_arg.data);
  }
  else
  {
    result.fields.y = y + (float)((float)v10 * -0.5);
  }
  result.fields.x = x;
  result.fields.z = z;
  return result;
}


UnityEngine_Vector3_o ServantStatusFlavorTextListViewObject__get_TopPosition(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  float x; // s10
  float y; // s11
  float z; // s12
  float v5; // s9
  int32_t Size; // w0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  if ( this->fields.isNew )
    v5 = 5.0;
  else
    v5 = 0.0;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  result.fields.x = x + 0.0;
  result.fields.z = z + 0.0;
  result.fields.y = y + (float)(v5 + vcvts_n_f32_s32(Size, 1u));
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantStatusFlavorTextListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596CB80 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596CB80 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ServantStatusFlavorTextListViewObject__Awake(v13, v14);
}