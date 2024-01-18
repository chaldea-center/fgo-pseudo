void __fastcall QuestInformationListViewObject___ctor(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4186ECA & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4186ECA = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall QuestInformationListViewObject__Awake(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct QuestInformationListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186EC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewItemDraw___, method);
    byte_4186EC3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct QuestInformationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                           dispObject,
                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall QuestInformationListViewObject__CreateDragObject(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  QuestInformationListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186EC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___, method);
    byte_4186EC6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestInformationListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  v6 = (QuestInformationListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestInformationListViewObject__Init(v6, 3, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


QuestInformationListViewItem_o *__fastcall QuestInformationListViewObject__GetItem(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4186EC5 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, method);
    byte_4186EC5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == QuestInformationListViewItem_TypeInfo )
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
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  unsigned int v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w9
  System_Action_o *klass; // x19

  if ( (byte_4186EC7 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4186EC7 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == QuestInformationListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(QuestInformationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( v13 <= 3 )
  {
    v30 = dword_312F1A0[v13];
    this->fields.dispMode = dword_319E8FC[v13];
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    QuestInformationListViewObject__SetupDisp(this, v23);
  klass = (System_Action_o *)p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    System_Action__Invoke(klass, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_23914980(
        QuestInformationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestInformationListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_23917620(
        QuestInformationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestInformationListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Init_23917684(
        QuestInformationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  QuestInformationListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall QuestInformationListViewObject__OnDestroy(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4186EC4 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186EC4 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall QuestInformationListViewObject__SetItem(
        QuestInformationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall QuestInformationListViewObject__SetupDisp(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestInformationListViewItemDraw_o *v10; // x0

  if ( (byte_4186EC8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&QuestInformationListViewItem_TypeInfo, v3);
    byte_4186EC8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&QuestInformationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (QuestInformationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == QuestInformationListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    QuestInformationListViewItemDraw__SetItem(
      v10,
      (QuestInformationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewObject__Start(QuestInformationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    QuestInformationListViewObject__Init(this, 3, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall QuestInformationListViewObject__ToString(
        QuestInformationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  float z; // w9
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v10; // [xsp+0h] [xbp-20h] BYREF
  float v11; // [xsp+8h] [xbp-18h]
  int32_t dispMode; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186EC9 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_80/*" "*/, v4);
    byte_4186EC9 = 1;
  }
  dispMode = this->fields.dispMode;
  v5 = j_il2cpp_value_box_0(QuestInformationListViewItemDraw_DispMode_TypeInfo, &dispMode);
  z = this->fields.basePosition.fields.z;
  v7 = (Il2CppObject *)v5;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v10);
  return System_String__Concat_44385236(v7, (Il2CppObject *)StringLiteral_80/*" "*/, v8, 0LL);
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

  if ( (byte_4186EC1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186EC1 = 1;
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
  v11 = (QuestInformationListViewObject_o *)sub_B2C728(v8);
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

  if ( (byte_4186EC2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4186EC2 = 1;
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
  v11 = (QuestInformationListViewObject_o *)sub_B2C728(v8);
  QuestInformationListViewObject__Awake(v11, v12);
}