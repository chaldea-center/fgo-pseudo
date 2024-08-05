void __fastcall QuestInformationListViewObject___ctor(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49FB5A7 & 1) == 0 )
  {
    sub_1B64870(&ListViewObject_TypeInfo, method);
    byte_49FB5A7 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall QuestInformationListViewObject__Awake(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB5A0 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewItemDraw___, method);
    byte_49FB5A0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64ACC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewItemDraw___);
  this->fields.itemDraw = (struct QuestInformationListViewItemDraw_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall QuestInformationListViewObject__CreateDragObject(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_49FB5A3 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, method);
    byte_49FB5A3 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___)) == 0LL) )
  {
    sub_1B64ACC(DragObject, v4);
  }
  QuestInformationListViewObject__Init_33775108((QuestInformationListViewObject_o *)DragObject, 3, v6);
  return v5;
}


QuestInformationListViewItem_o *__fastcall QuestInformationListViewObject__GetItem(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49FB5A2 & 1) == 0 )
  {
    sub_1B64870(&QuestInformationListViewItem_TypeInfo, method);
    byte_49FB5A2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo )
    return (QuestInformationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init(
        QuestInformationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_49FB5A4 & 1) == 0 )
  {
    sub_1B64870(&QuestInformationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49FB5A4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(QuestInformationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64ACC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_BA2920[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BA3540 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestInformationListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B64814(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_33775108(
        QuestInformationListViewObject_o *this,
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
  QuestInformationListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_33778708(
        QuestInformationListViewObject_o *this,
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
  QuestInformationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_33778792(
        QuestInformationListViewObject_o *this,
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
  QuestInformationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall QuestInformationListViewObject__OnDestroy(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB5A1 & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB5A1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B64814(p_dragObject, 0, v8, v9);
  }
}


void __fastcall QuestInformationListViewObject__SetItem(
        QuestInformationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40424228((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall QuestInformationListViewObject__SetupDisp(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestInformationListViewItemDraw_o *v10; // x0

  if ( (byte_49FB5A5 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&QuestInformationListViewItem_TypeInfo, v3);
    byte_49FB5A5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1B64ACC(0LL, v8);
    QuestInformationListViewItemDraw__SetItem(
      v10,
      (QuestInformationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


void __fastcall QuestInformationListViewObject__Start(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    QuestInformationListViewObject__Init_33775108(this, 3, v2);
}


System_String_o *__fastcall QuestInformationListViewObject__ToString(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x9
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  float z; // [xsp+8h] [xbp-38h]
  int32_t dispMode; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB5A6 & 1) == 0 )
  {
    sub_1B64870(&QuestInformationListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v6);
    sub_1B64870(&StringLiteral_117/*" "*/, v7);
    byte_49FB5A6 = 1;
  }
  dispMode = this->fields.dispMode;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(QuestInformationListViewItemDraw_DispMode_TypeInfo, &dispMode, v2, v3, v4);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  v15 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v15, v10, v11, v12);
  return System_String__Concat_61394588(v8, (Il2CppObject *)StringLiteral_117/*" "*/, v13, 0LL);
}


void __fastcall QuestInformationListViewObject__add_callbackFunc(
        QuestInformationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FB59E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FB59E = 1;
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
  sub_1B64D8C(v8);
  QuestInformationListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall QuestInformationListViewObject__remove_callbackFunc(
        QuestInformationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  QuestInformationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49FB59F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, value);
    byte_49FB59F = 1;
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
  sub_1B64D8C(v8);
  QuestInformationListViewObject__Awake(v11, v12);
}