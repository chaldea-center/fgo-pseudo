void CheckMaterialSvtListViewObject___ctor(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A207 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596A207 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CheckMaterialSvtListViewObject__Awake(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A1FB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
    byte_596A1FB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
  this->fields.itemDraw = (struct CheckMaterialSvtListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void CheckMaterialSvtListViewObject__CallOnMoveEnd(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0;
    sub_2213A04(p_onMoveEnd, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


UnityEngine_GameObject_o *CheckMaterialSvtListViewObject__CreateDragObject(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  CheckMaterialSvtListViewObject_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_596A200 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A200 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___)) == 0 )
    {
      sub_2213CDC(Component_object, v7);
    }
    v9 = (CheckMaterialSvtListViewObject_o *)Component_object;
    CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Component_object, 2, 0, v8);
    CheckMaterialSvtListViewObject__SetupDisp(v9, v10);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CheckMaterialSvtListViewItem_o *CheckMaterialSvtListViewObject__GetItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596A1FD & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_596A1FD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    return (CheckMaterialSvtListViewItem_o *)this->fields.linkItem;
  return 0;
}


int32_t CheckMaterialSvtListViewObject__GetState(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( initMode == 3 )
    v3 = 3;
  else
    v3 = 0;
  if ( (unsigned int)initMode <= 2 )
    return 1;
  else
    return v3;
}


void CheckMaterialSvtListViewObject__Init(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 naturalAligment; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  int32_t v21; // w9

  if ( (byte_596A201 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    byte_596A201 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewItem_TypeInfo )
  {
    sub_221405C(linkItem, CheckMaterialSvtListViewItem_TypeInfo, onMoveEnd, method);
LABEL_7:
    initMode = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, initMode != 0, 0);
  ((void (__fastcall *)(CheckMaterialSvtListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (unsigned int)(initMode - 1) > 2 )
    v20 = 0;
  else
    v20 = dword_ED8B08[initMode - 1];
  this->fields.dispMode = v20;
  if ( initMode == 3 )
    v21 = 3;
  else
    v21 = 0;
  if ( (unsigned int)initMode <= 2 )
    v21 = 1;
  this->fields.state = v21;
  if ( !state || dispMode != v20 )
    CheckMaterialSvtListViewObject__SetupDisp(this, v19);
  CheckMaterialSvtListViewObject__CallOnMoveEnd(this, v19);
}


void CheckMaterialSvtListViewObject__InitItem(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


bool CheckMaterialSvtListViewObject__IsCanDrag(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UITouchPress_o *manager; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_596A1FF & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1FF = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_13;
  naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_221405C(manager, CheckMaterialSvtListViewManager_TypeInfo, v2, v3);
    goto LABEL_13;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CheckMaterialSvtListViewManager_TypeInfo, v2);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0, 0) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0);
      return 0;
    }
LABEL_13:
    sub_2213CDC(manager, method);
  }
  return 0;
}


void CheckMaterialSvtListViewObject__OnClickSelect(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  UnityEngine_Component_o *manager; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v5; // x2

  v2 = this;
  if ( (byte_596A203 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596A203 = 1;
  }
  if ( v2->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( !manager
      || (naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_2213CDC(this, method);
    }
    v5 = (Il2CppObject *)CheckMaterialSvtListViewObject__GetItem(v2, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/, v5, 0);
  }
}


void CheckMaterialSvtListViewObject__OnDestroy(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A1FC & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1FC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void CheckMaterialSvtListViewObject__OnDragDropStart(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  CheckMaterialSvtListViewObject_o *v2; // x19
  struct ListViewManager_o *manager; // x9
  ListViewManager_c *klass; // x9
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_596A205 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    this = (CheckMaterialSvtListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A205 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (klass = manager->klass,
        naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CheckMaterialSvtListViewManager_c *)klass->_2.typeHierarchy[naturalAligment - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_2213CDC(this, method);
  }
}


void CheckMaterialSvtListViewObject__OnLongPush(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  void *linkItem; // x0
  void *v6; // x1
  __int64 naturalAligment; // x9
  __int64 v8; // x9

  if ( (byte_596A204 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    byte_596A204 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v6 = CheckMaterialSvtListViewItem_TypeInfo;
    naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)naturalAligment
      && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * naturalAligment - 8) == CheckMaterialSvtListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v6 = CheckMaterialSvtListViewManager_TypeInfo;
      v8 = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)v8
        && *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v8 - 8) == CheckMaterialSvtListViewManager_TypeInfo )
      {
        return;
      }
    }
    linkItem = (void *)sub_221405C(linkItem, v6, v2, v3);
LABEL_11:
    sub_2213CDC(linkItem, v6);
  }
}


void CheckMaterialSvtListViewObject__OnLongRelease(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A206 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    sub_2213A60(&StringLiteral_4180/*"CancelDragEnd"*/);
    byte_596A206 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
      if ( manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].klass) )
          return;
        UnityEngine_Component__SendMessage_83422876(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4180/*"CancelDragEnd"*/,
          0);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0);
          return;
        }
      }
    }
    sub_2213CDC(manager, method);
  }
}


void CheckMaterialSvtListViewObject__SetInput(
        CheckMaterialSvtListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  CheckMaterialSvtListViewItemDraw_o *manager; // x0
  __int64 v11; // x9
  struct ListViewItem_o *linkItem; // x1
  CheckMaterialSvtListViewItem_c *v13; // x8
  __int64 naturalAligment; // x10
  CheckMaterialSvtListViewObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_596A1FE & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A1FE = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    manager = (CheckMaterialSvtListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v11 = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment,
           manager->klass->_2.naturalAligment < (unsigned int)v11)
       || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != CheckMaterialSvtListViewManager_TypeInfo) )
    {
      sub_221405C(manager, CheckMaterialSvtListViewManager_TypeInfo, v8, v9);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (v13 = CheckMaterialSvtListViewItem_TypeInfo,
            naturalAligment = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment,
            linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0 )
          sub_2213CDC(manager, linkItem);
        CheckMaterialSvtListViewItemDraw__SetInput(manager, (CheckMaterialSvtListViewItem_o *)linkItem, 1, v9);
        return;
      }
    }
    v15 = (CheckMaterialSvtListViewObject_o *)sub_221405C(linkItem, v13, v8, v9);
    CheckMaterialSvtListViewObject__IsCanDrag(v15, v16);
  }
}


void CheckMaterialSvtListViewObject__SetItem(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void CheckMaterialSvtListViewObject__SetItem_37659644(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void CheckMaterialSvtListViewObject__SetupDisp(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x21
  int32_t *manager; // x20
  __int64 naturalAligment; // x9
  CheckMaterialSvtListViewItem_c *v8; // x1
  __int64 v9; // x9
  bool v10; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *itemDraw; // x22
  CheckMaterialSvtListViewItemDraw_o *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x5

  if ( (byte_596A202 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtListViewItem_TypeInfo);
    sub_2213A60(&CheckMaterialSvtListViewManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A202 = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    naturalAligment = CheckMaterialSvtListViewManager_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)naturalAligment
      || *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * naturalAligment - 8) != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_221405C(this->fields.manager, CheckMaterialSvtListViewManager_TypeInfo, v2, v3);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = CheckMaterialSvtListViewItem_TypeInfo;
    v9 = CheckMaterialSvtListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)v9
      && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    v14 = (CheckMaterialSvtListViewItemDraw_o *)sub_221405C(linkItem, v8, v2, v3);
    goto LABEL_19;
  }
  v10 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    if ( manager )
    {
      v14 = this->fields.itemDraw;
      if ( v14 )
      {
        CheckMaterialSvtListViewItemDraw__SetItem(
          v14,
          (CheckMaterialSvtListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[83],
          v16);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(v14, v15);
  }
}


void CheckMaterialSvtListViewObject__add_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CheckMaterialSvtListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A1F9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A1F9 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CheckMaterialSvtListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CheckMaterialSvtListViewObject__remove_onMoveEnd(v13, v14, v15);
}


void CheckMaterialSvtListViewObject__remove_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CheckMaterialSvtListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A1FA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A1FA = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_onMoveEnd, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CheckMaterialSvtListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  CheckMaterialSvtListViewObject__Awake(v13, v14);
}