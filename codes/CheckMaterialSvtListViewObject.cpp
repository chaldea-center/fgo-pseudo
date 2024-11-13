void __fastcall CheckMaterialSvtListViewObject___ctor(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19C3F & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B19C3F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtListViewObject__Awake(CheckMaterialSvtListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19C33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___, method, v2);
    byte_4B19C33 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewItemDraw___);
  this->fields.itemDraw = (struct CheckMaterialSvtListViewItemDraw_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall CheckMaterialSvtListViewObject__CallOnMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onMoveEnd; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onMoveEnd; // t1

  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = (PartyOrganizationUtility_o *)&this->fields.onMoveEnd;
  v9 = onMoveEnd;
  if ( onMoveEnd )
  {
    p_onMoveEnd->klass = 0LL;
    sub_1BCA784(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall CheckMaterialSvtListViewObject__CreateDragObject(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  CheckMaterialSvtListViewObject_o *v11; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4B19C38 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19C38 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CheckMaterialSvtListViewObject___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v9);
    }
    v11 = (CheckMaterialSvtListViewObject_o *)Component_object;
    CheckMaterialSvtListViewObject__Init((CheckMaterialSvtListViewObject_o *)Component_object, 2, 0LL, v10);
    CheckMaterialSvtListViewObject__SetupDisp(v11, v12);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


CheckMaterialSvtListViewItem_o *__fastcall CheckMaterialSvtListViewObject__GetItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B19C35 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, method, v2);
    byte_4B19C35 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    return (CheckMaterialSvtListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall CheckMaterialSvtListViewObject__GetState(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  if ( initMode == 3 )
    return 3;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewObject__Init(
        CheckMaterialSvtListViewObject_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  unsigned int v5; // w20
  struct ListViewItem_o *linkItem; // x0
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 methodPtr_low; // x9
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  int v21; // w8

  v5 = initMode;
  if ( (byte_4B19C39 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, *(_QWORD *)&initMode, onMoveEnd);
    byte_4B19C39 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewItem_TypeInfo )
  {
    sub_1BCACFC(linkItem);
LABEL_7:
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(CheckMaterialSvtListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, (int64_t)onMoveEnd, v13, v14, v15, v16, v17, v18);
  if ( v5 == 1 )
    goto LABEL_13;
  if ( v5 == 3 )
  {
    v21 = 2;
    this->fields.dispMode = 2;
  }
  else
  {
    if ( v5 == 2 )
    {
LABEL_13:
      this->fields.dispMode = v5;
      v20 = 1;
      v21 = v5;
      goto LABEL_20;
    }
    v21 = 0;
    this->fields.dispMode = 0;
    if ( v5 < 3 )
    {
      v20 = 1;
      goto LABEL_20;
    }
  }
  if ( v5 == 3 )
    v20 = 3;
  else
    v20 = 0;
LABEL_20:
  this->fields.state = v20;
  if ( !state || dispMode != v21 )
    CheckMaterialSvtListViewObject__SetupDisp(this, v19);
  CheckMaterialSvtListViewObject__CallOnMoveEnd(this, v19);
}


void __fastcall CheckMaterialSvtListViewObject__InitItem(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


bool __fastcall CheckMaterialSvtListViewObject__IsCanDrag(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4B19C37 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B19C37 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_13;
  methodPtr_low = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_1BCACFC(manager);
    goto LABEL_13;
  }
  touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CheckMaterialSvtListViewManager_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
  {
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_13:
    sub_1BCAA3C(manager, method);
  }
  return 0;
}


void __fastcall CheckMaterialSvtListViewObject__OnClickSelect(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CheckMaterialSvtListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *manager; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v8; // x2

  v3 = this;
  if ( (byte_4B19C3B & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, method, v2);
    this = (CheckMaterialSvtListViewObject_o *)sub_1BCA7E0(&StringLiteral_9997/*"OnClickSelectListView"*/, v4, v5);
    byte_4B19C3B = 1;
  }
  if ( v3->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)v3->fields.manager;
    if ( !manager
      || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_1BCAA3C(this, method);
    }
    v8 = (Il2CppObject *)CheckMaterialSvtListViewObject__GetItem(v3, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9997/*"OnClickSelectListView"*/, v8, 0LL);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnDestroy(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19C34 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19C34 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnDragDropStart(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CheckMaterialSvtListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x10

  v3 = this;
  if ( (byte_4B19C3D & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, method, v2);
    this = (CheckMaterialSvtListViewObject_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19C3D = 1;
  }
  manager = v3->fields.manager;
  if ( !manager
    || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != CheckMaterialSvtListViewManager_TypeInfo )
  {
    sub_1BCAA3C(this, method);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnLongPush(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *linkItem; // x0
  CheckMaterialSvtListViewItem_c *v7; // x1
  __int64 methodPtr_low; // x9
  __int64 v9; // x9

  if ( (byte_4B19C3C & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, v4, v5);
    byte_4B19C3C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v7 = CheckMaterialSvtListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)methodPtr_low
      && *(CheckMaterialSvtListViewItem_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * methodPtr_low - 8) == CheckMaterialSvtListViewItem_TypeInfo )
    {
      linkItem = this->fields.manager;
      if ( !linkItem )
        goto LABEL_11;
      v9 = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)linkItem + 304LL) >= (unsigned int)v9
        && *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)linkItem + 200LL) + 8 * v9 - 8) == CheckMaterialSvtListViewManager_TypeInfo )
      {
        return;
      }
    }
    sub_1BCACFC(linkItem);
LABEL_11:
    sub_1BCAA3C(linkItem, v7);
  }
}


void __fastcall CheckMaterialSvtListViewObject__OnLongRelease(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B19C3E & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_4121/*"CancelDragEnd"*/, v6, v7);
    byte_4B19C3E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager )
    {
      methodPtr_low = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[1].klass) )
          return;
        UnityEngine_Component__SendMessage_70125484(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4121/*"CancelDragEnd"*/,
          0LL);
        manager = this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(manager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtListViewObject__SetInput(
        CheckMaterialSvtListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v11; // x3
  CheckMaterialSvtListViewItemDraw_o *manager; // x0
  __int64 v13; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 methodPtr_low; // x10
  CheckMaterialSvtListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4B19C36 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, isInput, method);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19C36 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    manager = (CheckMaterialSvtListViewItemDraw_o *)this->fields.manager;
    if ( manager
      && ((v13 = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v13)
       || (CheckMaterialSvtListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] != CheckMaterialSvtListViewManager_TypeInfo) )
    {
      sub_1BCACFC(manager);
    }
    else
    {
      linkItem = this->fields.linkItem;
      if ( !linkItem
        || (methodPtr_low = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
        && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CheckMaterialSvtListViewItem_TypeInfo )
      {
        if ( !manager || (manager = this->fields.itemDraw) == 0LL )
          sub_1BCAA3C(manager, linkItem);
        CheckMaterialSvtListViewItemDraw__SetInput(manager, (CheckMaterialSvtListViewItem_o *)linkItem, 1, v11);
        return;
      }
    }
    sub_1BCACFC(linkItem);
    CheckMaterialSvtListViewObject__IsCanDrag(v16, v17);
  }
}


void __fastcall CheckMaterialSvtListViewObject__SetItem(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall CheckMaterialSvtListViewObject__SetItem_45864164(
        CheckMaterialSvtListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall CheckMaterialSvtListViewObject__SetupDisp(
        CheckMaterialSvtListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  bool v12; // w1
  __int64 v13; // x1
  UnityEngine_Object_o *itemDraw; // x22
  CheckMaterialSvtListViewItemDraw_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5

  if ( (byte_4B19C3A & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&CheckMaterialSvtListViewManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B19C3A = 1;
  }
  manager = (int32_t *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(CheckMaterialSvtListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)manager + 304LL) < (unsigned int)methodPtr_low
      || *(CheckMaterialSvtListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * methodPtr_low - 8) != CheckMaterialSvtListViewManager_TypeInfo )
    {
      sub_1BCACFC(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v11 = LOBYTE(CheckMaterialSvtListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
      && (CheckMaterialSvtListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] == CheckMaterialSvtListViewItem_TypeInfo )
    {
      v12 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    sub_1BCACFC(linkItem);
    goto LABEL_19;
  }
  v12 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v12, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = (CheckMaterialSvtListViewItemDraw_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    if ( manager )
    {
      v15 = this->fields.itemDraw;
      if ( v15 )
      {
        CheckMaterialSvtListViewItemDraw__SetItem(
          v15,
          (CheckMaterialSvtListViewItem_o *)linkItem,
          this->fields.dispMode,
          1,
          manager[83],
          v17);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(v15, v16);
  }
}


void __fastcall CheckMaterialSvtListViewObject__add_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B19C31 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19C31 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CheckMaterialSvtListViewObject__remove_onMoveEnd(v11, v12, v13);
}


void __fastcall CheckMaterialSvtListViewObject__remove_onMoveEnd(
        CheckMaterialSvtListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onMoveEnd; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onMoveEnd; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CheckMaterialSvtListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B19C32 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B19C32 = 1;
  }
  onMoveEnd = this->fields.onMoveEnd;
  p_onMoveEnd = &this->fields.onMoveEnd;
  v6 = (System_Delegate_o *)onMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onMoveEnd, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CheckMaterialSvtListViewObject__Awake(v11, v12);
}