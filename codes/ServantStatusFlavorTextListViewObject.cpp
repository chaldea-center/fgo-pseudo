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
  struct ServantStatusFlavorTextListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_418D153 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___, method);
    byte_418D153 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, method);
  Component_srcLineSprite = (struct ServantStatusFlavorTextListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusFlavorTextListViewItemDraw___);
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
  ServantStatusFlavorTextListViewObject__SetBaseTransform(this, v11);
}


int32_t __fastcall ServantStatusFlavorTextListViewObject__GetKind(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v5; // x0

  if ( (byte_418D154 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D154 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_B2C434(0LL, v4);
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
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s1

  if ( (byte_418D155 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418D155 = 1;
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
  BattleServantConfConponent_o *p_callbackFunc; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x19

  ServantStatusFlavorTextListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  ServantStatusFlavorTextListViewObject__SetInput(this, initMode == 3, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (unsigned int)initMode <= 3 )
  {
    v20 = dword_312F1A0[initMode];
    this->fields.dispMode = dword_319E8FC[initMode];
    this->fields.state = v20;
  }
  ServantStatusFlavorTextListViewObject__SetupDisp(this, v19);
  v27 = this->fields.callbackFunc;
  if ( v27 )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
    System_Action__Invoke(v27, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_34116564(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusFlavorTextListViewObject__Init(
    this,
    initMode,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_34117860(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusFlavorTextListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__Init_34118076(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusFlavorTextListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall ServantStatusFlavorTextListViewObject__OnClick(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418D159 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9954/*"OnClickListView"*/, method);
    byte_418D159 = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B2C434(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9954/*"OnClickListView"*/, (Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewObject__OnClickVoice(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_418D15A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9965/*"OnClickListViewVoice"*/, method);
    byte_418D15A = 1;
  }
  manager = (UnityEngine_Component_o *)this->fields.manager;
  if ( !manager )
    sub_B2C434(0LL, method);
  UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9965/*"OnClickListViewVoice"*/, (Il2CppObject *)this, 0LL);
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
      sub_B2C434(0LL, v5);
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
      sub_B2C434(0LL, v5);
    ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, System_String_o *, Il2CppMethodPointer))itemDraw->klass->vtable._7_SetCvName.method)(
      itemDraw,
      cvName,
      itemDraw->klass->vtable._8_SetParameterGauge.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__SetInput(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_418D157 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418D157 = 1;
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  this->fields.mainInfo = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    *(System_String_array ***)&id,
    (System_String_array **)isOpen,
    (System_Boolean_array **)isNew,
    (System_Int32_array **)text,
    *(System_Int32_array **)&profileNum,
    (System_Int32_array *)method);
  this->fields.id = id;
  this->fields.isOpen = isOpen;
  this->fields.isNew = isNew;
  this->fields.messageData = text;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.messageData,
    (System_Int32_array **)text,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.profileNum = profileNum;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusFlavorTextListViewObject__Init(
    this,
    2,
    0LL,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewObject__SetManager(
        ServantStatusFlavorTextListViewObject_o *this,
        ServantStatusFlavorTextListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantStatusFlavorTextListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

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
  if ( !*((_DWORD *)p_manager + 12) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    ServantStatusFlavorTextListViewObject__Init(
      this,
      2,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v10);
  }
}


void __fastcall ServantStatusFlavorTextListViewObject__SetParameterGauge(
        ServantStatusFlavorTextListViewObject_o *this,
        int32_t power,
        int32_t defense,
        int32_t agility,
        int32_t magic,
        int32_t luck,
        int32_t np,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, power);
  ((void (__fastcall *)(struct ServantStatusFlavorTextListViewItemDraw_o *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void *))itemDraw->klass->vtable._8_SetParameterGauge.method)(
    itemDraw,
    power,
    defense,
    agility,
    magic,
    luck,
    np,
    itemDraw->klass[1]._1.image);
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
void __fastcall ServantStatusFlavorTextListViewObject__SetVisible(
        ServantStatusFlavorTextListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_418D156 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isVisible);
    byte_418D156 = 1;
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


void __fastcall ServantStatusFlavorTextListViewObject__SetupDisp(
        ServantStatusFlavorTextListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusFlavorTextListViewItemDraw_o *v6; // x0

  if ( (byte_418D158 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418D158 = 1;
  }
  ServantStatusFlavorTextListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
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

  if ( (byte_418D151 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D151 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  float x; // s9
  float y; // s10
  float z; // s8
  int32_t Size; // w0
  struct ServantStatusFlavorTextListViewItemDraw_o *itemDraw; // x8
  int v9; // w20
  __int64 v10; // x11
  struct ServantStatusFlavorTextListViewItemDraw_o *v11; // x21
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  float v14; // s10
  float v15; // s1
  ServantStatusFlavorTextListViewItemDraw_Fields fields; // x8
  float v17; // s1
  float v18; // s0
  float v19; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D150 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v3);
    byte_418D150 = 1;
  }
  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  Size = ServantStatusFlavorTextListViewObject__GetSize(this, method);
  itemDraw = this->fields.itemDraw;
  v9 = Size;
  if ( itemDraw
    && (v10 = *(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.bitflags2 + 1),
        *(&itemDraw->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (ServantStatusFlavorTextListViewItemDrawText2_c *)itemDraw->klass->_2.typeHierarchy[v10 - 1] == ServantStatusFlavorTextListViewItemDrawText2_TypeInfo )
      v11 = this->fields.itemDraw;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( v12 )
  {
    if ( !v11
      || (v14 = this->fields.basePosition.fields.y,
          *(UnityEngine_Vector3_o *)(&v15 - 1) = ServantStatusFlavorTextListViewItemDrawText2__get_MessageLabelPosition(
                                                   (ServantStatusFlavorTextListViewItemDrawText2_o *)v11,
                                                   v13),
          (fields = v11[2].fields) == 0LL) )
    {
      sub_B2C434(v12, v13);
    }
    v17 = (float)((float)(v14 + v15) - (float)*(int *)(*(_QWORD *)&fields + 164LL))
        + (float)*(int *)(*(_QWORD *)&fields + 416LL);
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

  if ( (byte_418D152 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D152 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantStatusFlavorTextListViewObject__Awake(v11, v12);
}