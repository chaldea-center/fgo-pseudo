void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  if ( (byte_4A5709B & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4A5709B = 1;
  }
  LODWORD(PartyOrganizationListViewDropObject_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationListViewDropObject_StaticFields)1045220557;
}


void __fastcall PartyOrganizationListViewDropObject___ctor(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__Awake(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57082 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4A57082 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _BOOL4 isBusy; // w21
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v9; // x1
  PartyOrganizationListViewItemDraw_o *v10; // x0

  if ( (byte_4A57086 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57086 = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v10 = this->fields.itemDraw;
      if ( !v10 )
        sub_1B8880C(0LL, v9);
      PartyOrganizationListViewItemDraw__ClearItem(v10, 0LL);
    }
  }
  return !isBusy;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyOrganizationListViewDropObject_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4A5708B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    byte_4A5708B = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_32052600((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v8);
  return v5;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_32052816(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  PartyOrganizationListViewDropObject_o *v8; // x21
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v10; // x2

  if ( (byte_4A5708C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5708C = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_11;
  v7 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v8 = (PartyOrganizationListViewDropObject_o *)DragObject;
  monitor = (UnityEngine_Object_o *)DragObject[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v8->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1B8880C(DragObject, v6);
  }
LABEL_10:
  PartyOrganizationListViewDropObject__Init_32052600(v8, 2, v10);
  return v7;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57093 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57093 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *DragObject_32052816; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  char *Component_object; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x8
  float v25; // s11
  float v26; // s4
  float v27; // s5
  float v28; // s3
  char *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4A57092 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1B885B0(&StringLiteral_9142/*"MoveEnd"*/);
    byte_4A57092 = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    if ( isEquipSwap )
    {
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v11);
      DragObject_32052816 = PartyOrganizationListViewDropObject__CreateDragObject_32052816(this, -100, v12);
      this->fields.dragObject = DragObject_32052816;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)DragObject_32052816, v14, v15);
      Component_object = (char *)this->fields.dragObject;
      if ( !Component_object )
        goto LABEL_20;
      Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Component_object,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_object )
        goto LABEL_20;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v17);
    }
    else
    {
      Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_20;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v18);
      v20 = PartyOrganizationListViewDropObject__CreateDragObject_32052816(this, -100, v19);
      this->fields.dragObject = v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v20, v21, v22);
    }
  }
  v23 = *p_dragObject;
  Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v24 = *p_dragObject;
    if ( !v23 )
      goto LABEL_20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v24 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_20;
  }
  v25 = **((float **)Component_object + 23);
  Component_object = (char *)UnityEngine_GameObject__get_transform(v24, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v37 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v36, 0LL);
  v26 = v37.fields.y;
  v27 = v37.fields.z;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v26;
  v28 = v27;
  Component_object = (char *)TweenPosition__Begin(v23, v25, *(UnityEngine_Vector3_o *)&v37.fields.y, 0LL);
  if ( !Component_object )
LABEL_20:
    sub_1B8880C(Component_object, v11);
  v29 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v29 + 10) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 80), (int32_t)gameObject, v31, v32);
  v33 = StringLiteral_9142/*"MoveEnd"*/;
  *((_QWORD *)v29 + 11) = StringLiteral_9142/*"MoveEnd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 88), v33, v34, v35);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A57084 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A57084 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v17; // w24
  int32_t dispMode; // w23
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  int32_t v28; // w8
  int32_t v29; // w8
  int32_t v30; // w9
  ServantStatusBattleListViewItem_c *klass; // x19
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4A5708D & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A5708D = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
        v17 = initMode;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    PartyOrganizationListViewDropObject__SetVisible(this, v17 != 0 && v17 != 5, (const MethodInfo *)callbackFunc);
    ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      (v17 == 4) | (unsigned int)(v17 == 8),
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1B8880C(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v23, v24);
    v28 = 1;
    switch ( v17 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_16;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v25);
        return;
      case 4:
        v28 = 3;
        v17 = 2;
LABEL_16:
        this->fields.dispMode = v17;
        this->fields.state = v28;
        goto LABEL_17;
      case 5:
        v29 = 4;
        v30 = 2;
        goto LABEL_25;
      case 6:
        this->fields.state = 2;
        v32.fields.y = y;
        v32.fields.z = z;
        v32.fields.x = x;
        PartyOrganizationListViewDropObject__DragMoveStart(this, v32, isEquipSwap, v26);
        return;
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v25);
        return;
      case 8:
        v29 = 2;
        v30 = 3;
        goto LABEL_25;
      case 9:
        v29 = 2;
        v30 = 1;
LABEL_25:
        this->fields.dispMode = v29;
        this->fields.state = v30;
        goto LABEL_26;
      default:
LABEL_17:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v25);
LABEL_27:
        klass = p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_1B88554(p_callbackFunc, 0, (int32_t)v26, v27);
          ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
            klass->_1.element_class,
            *(_QWORD *)&klass->_1.byval_arg.bits);
        }
        break;
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__Init_32052600(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    0LL,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v3);
}


void __fastcall PartyOrganizationListViewDropObject__Init_32054992(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v5);
}


void __fastcall PartyOrganizationListViewDropObject__Init_32055120(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoMove(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4A57090 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7686/*"IntoMove2"*/);
    byte_4A57090 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent
    || (v18 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v18.fields.y,
        z = v18.fields.z,
        v18.fields.y = v18.fields.x,
        v18.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v18.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_7686/*"IntoMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_7686/*"IntoMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3].fields, v15, v16, v17);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_4A57091 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A57091 = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v6, v7);
  PartyOrganizationListViewDropObject__MoveEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0

  if ( (byte_4A5708F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7685/*"IntoMove"*/);
    byte_4A5708F = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_69483968(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B8880C(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7685/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewItem_o *v6; // x20
  __int64 v7; // x10

  if ( (byte_4A5708A & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewManager_TypeInfo);
    byte_4A5708A = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
      v6 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v6 = 0LL;
    if ( !manager )
LABEL_22:
      sub_1B8880C(manager, method);
  }
  else
  {
    v6 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v7 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  manager = (struct ListViewManager_o *)PartyOrganizationListViewManager__IsCanDrag(
                                          (PartyOrganizationListViewManager_o *)manager,
                                          0LL);
  if ( ((unsigned __int8)manager & 1) != 0 )
  {
    if ( this->fields.isEquipPress )
    {
      if ( !v6 )
        goto LABEL_22;
      return !v6->fields.isFollower;
    }
    if ( !v6 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v6, method) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v6->fields.isFollower;
  }
  return 0;
}


bool __fastcall PartyOrganizationListViewDropObject__IsEquipPress(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipPress;
}


void __fastcall PartyOrganizationListViewDropObject__MoveEnd(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.dispLimitCount.fields.fakeValue) = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isMine = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A57096 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9843/*"OnClickListDropEquip"*/);
    byte_4A57096 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9843/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A57094 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9845/*"OnClickListDropServant"*/);
    byte_4A57094 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9845/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57083 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57083 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A57095 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9846/*"OnClickListDropServantDetail"*/);
    byte_4A57095 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9846/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4A57097 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_9844/*"OnClickListDropEquipDetail"*/);
    byte_4A57097 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B8880C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9844/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    if ( this->fields.linkItem )
      this->fields.isEquipPress = 0;
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  v2 = this;
  if ( (byte_4A57098 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A57098 = 1;
  }
  if ( v2->fields.state == 3 )
  {
    linkItem = v2->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_1B8880C(this, method);
      }
      v2->fields.isEquipPress = !LOBYTE(linkItem[1].fields.viewObject)
                             && !BYTE2(linkItem[1].fields.viewObject)
                             && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4A57085 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57085 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v9 = this->fields.itemDraw;
      if ( !v9 )
        sub_1B8880C(0LL, v8);
      PartyOrganizationListViewItemDraw__ClearItem(v9, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A5709A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4A5709A = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_1B8880C(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0LL);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


void __fastcall PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1B8880C(0LL, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4A57099 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57099 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
              Component_object,
              0LL,
              1LL,
              Component_object->klass[1]._1.interfaceOffsets),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_1B8880C(Component_object, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, flg, 0LL);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v6; // x1
  UIDragDropListViewItem_o *v7; // x0

  if ( (byte_4A57089 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57089 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v7 = this->fields.equipUIDragDrop;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UIDragDropListViewItem__SetEnable(v7, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  __int64 v8; // x1
  struct UIDragDropListViewItem_o *v9; // x0

  if ( (byte_4A57087 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57087 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_40705264((ListViewDropObject_o *)this, item, seed, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A57088 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57088 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0LL);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
  {
    v7 = this->fields.equipDispBase;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4A5708E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A5708E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v6, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    PartyOrganizationListViewItemDraw__SetItem(
      v9,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}