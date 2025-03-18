void __fastcall ServantOperationListViewObject___ctor(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E288 & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C1E288 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantOperationListViewObject__Awake(ServantOperationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C1E27C & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___, v3);
    byte_4C1E27C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewItemDraw___);
  this->fields.itemDraw = (struct ServantOperationListViewItemDraw_o *)Component_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.itemDraw,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.itemDrag = (struct UIDragDropListViewItem_o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemDrag, (int64_t)v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall ServantOperationListViewObject__CallOnMoveEnd(
        ServantOperationListViewObject_o *this,
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
    sub_1C3B708(p_onMoveEnd, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


UnityEngine_GameObject_o *__fastcall ServantOperationListViewObject__CreateDragObject(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *DragObject; // x19
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  ServantOperationListViewObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4C1E281 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1E281 = 1;
  }
  DragObject = (UnityEngine_Object_o *)ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(DragObject, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !DragObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)DragObject,
                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantOperationListViewObject___)) == 0LL )
    {
      sub_1C3B9C0(Component_object, v6);
    }
    v8 = (ServantOperationListViewObject_o *)Component_object;
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)Component_object, 2, 0LL, v7);
    ServantOperationListViewObject__SetupDisp(v8, v9);
  }
  return (UnityEngine_GameObject_o *)DragObject;
}


int32_t __fastcall ServantOperationListViewObject__GetInitMode(int32_t initMode, const MethodInfo *method)
{
  int32_t v2; // w8

  if ( initMode == 2 )
    v2 = 3;
  else
    v2 = 0;
  if ( initMode == 1 )
    return 2;
  else
    return v2;
}


ServantOperationListViewItem_o *__fastcall ServantOperationListViewObject__GetItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1E27E & 1) == 0 )
  {
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, method);
    byte_4C1E27E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
    return (ServantOperationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


int32_t __fastcall ServantOperationListViewObject__GetState(
        ServantOperationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode < 3 )
    return 1;
  else
    return 2 * (initMode == 3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewObject__Init(
        ServantOperationListViewObject_o *this,
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
  if ( (byte_4C1E282 & 1) == 0 )
  {
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1E282 = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
  {
    sub_1C3BC80(linkItem);
LABEL_7:
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0LL);
  ((void (__fastcall *)(ServantOperationListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v5 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.onMoveEnd = onMoveEnd;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, (int64_t)onMoveEnd, v13, v14, v15, v16, v17, v18);
  if ( v5 == 1 )
    goto LABEL_13;
  if ( v5 == 3 )
  {
    v21 = 2;
    this->fields.dispMode = 2;
LABEL_16:
    v20 = 2 * (v5 == 3);
    goto LABEL_18;
  }
  if ( v5 != 2 )
  {
    v21 = 0;
    this->fields.dispMode = 0;
    if ( v5 < 3 )
    {
      v20 = 1;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
LABEL_13:
  this->fields.dispMode = v5;
  v20 = 1;
  v21 = v5;
LABEL_18:
  this->fields.state = v20;
  if ( !state || dispMode != v21 )
    ServantOperationListViewObject__SetupDisp(this, v19);
  ServantOperationListViewObject__CallOnMoveEnd(this, v19);
}


void __fastcall ServantOperationListViewObject__InitItem(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


bool __fastcall ServantOperationListViewObject__IsCanDrag(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  struct ListViewItem_o *linkItem; // x1
  __int64 v9; // x10
  UnityEngine_Object_o *touchPress; // x20
  ServantOperationListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C1E280 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, v4);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v5);
    byte_4C1E280 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_19;
  methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3BC80(manager);
    goto LABEL_19;
  }
  if ( (LODWORD(manager[5].fields.clickRange) & 0x80000000) != 0 )
  {
LABEL_12:
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
      return 0;
    manager = this->fields.touchPress;
    if ( manager )
    {
      UITouchPress__PressReset(manager, 0LL);
      return 0;
    }
LABEL_19:
    sub_1C3B9C0(manager, method);
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem
    || (v9 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9)
    && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewItem_TypeInfo )
  {
    if ( ServantOperationListViewManager__IsDragEnable(
           (ServantOperationListViewManager_o *)manager,
           (ServantOperationListViewItem_o *)linkItem,
           v2) )
    {
      return 1;
    }
    goto LABEL_12;
  }
  v12 = (ServantOperationListViewObject_o *)sub_1C3BC80(this->fields.linkItem);
  return (unsigned __int8)ServantOperationListViewObject__CreateDragObject(v12, v13);
}


void __fastcall ServantOperationListViewObject__OnClickSelect(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  ServantOperationListViewObject_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x19
  ServantOperationListViewItem_c *v11; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Component_o *manager; // x20
  __int64 v14; // x10
  int v15; // w8
  UserServantEntity_o *v16; // x0
  __int64 *v17; // x8
  UserServantEntity_o *klass; // x0
  System_String_o *v19; // x1
  UnityEngine_Component_o *v20; // x0
  Il2CppObject *v21; // x2
  const MethodInfo *v22; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  UnityEngine_Component_o *v25; // x19
  ServantOperationListViewObject_o *v26; // x0
  const MethodInfo *v27; // x1

  v2 = this;
  if ( (byte_4C1E284 & 1) == 0 )
  {
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, method);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v3);
    sub_1C3B764(&Method_ServantOperationListViewObject_OnClickSelect__, v4);
    sub_1C3B764(&TutorialFlag_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_10057/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, v6);
    sub_1C3B764(&StringLiteral_10030/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/, v7);
    sub_1C3B764(&StringLiteral_10054/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/, v8);
    this = (ServantOperationListViewObject_o *)sub_1C3B764(&StringLiteral_10052/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, v9);
    byte_4C1E284 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    v11 = ServantOperationListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewItem_TypeInfo )
    {
      v26 = (ServantOperationListViewObject_o *)sub_1C3BC80(v2->fields.linkItem);
      ServantOperationListViewObject__OnLongPush(v26, v27);
      return;
    }
    manager = (UnityEngine_Component_o *)v2->fields.manager;
    if ( manager )
    {
      v14 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        v15 = *((_DWORD *)&manager[19].fields + 1);
        switch ( v15 )
        {
          case 3:
            if ( !ServantOperationListViewItem__get_IsCanNotSelectPush(
                    (ServantOperationListViewItem_o *)v2->fields.linkItem,
                    (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
            {
              v17 = &StringLiteral_10054/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 2:
            klass = (UserServantEntity_o *)linkItem[1].klass;
            if ( !klass || !UserServantEntity__IsHeroine(klass, 0LL) )
              goto LABEL_26;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_39109112(126, 0LL) )
            {
LABEL_26:
              v17 = &StringLiteral_10030/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING4"*/;
              goto LABEL_27;
            }
            goto LABEL_30;
          case 1:
            v16 = (UserServantEntity_o *)linkItem[1].klass;
            if ( !v16 || !UserServantEntity__IsHeroine(v16, 0LL) )
              goto LABEL_17;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( !TutorialFlag__Get_39109112(126, 0LL) )
            {
LABEL_17:
              v17 = &StringLiteral_10052/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/;
LABEL_27:
              v19 = (System_String_o *)*v17;
              v20 = manager;
              v21 = (Il2CppObject *)linkItem;
LABEL_28:
              UnityEngine_Component__SendMessage(v20, v19, v21, 0LL);
              return;
            }
            goto LABEL_30;
        }
        if ( ServantOperationListViewItem__get_IsCanNotSelect(
               (ServantOperationListViewItem_o *)v2->fields.linkItem,
               (const MethodInfo *)ServantOperationListViewItem_TypeInfo) )
        {
LABEL_30:
          v23 = Method_ServantOperationListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_ServantOperationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v23 = (_QWORD *)sub_1C3B77C(Method_ServantOperationListViewObject_OnClickSelect__);
          v24 = (System_Reflection_MethodBase_o *)sub_1C3B748(v23, v23[4]);
          OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0LL);
          return;
        }
        v25 = (UnityEngine_Component_o *)v2->fields.manager;
        this = (ServantOperationListViewObject_o *)ServantOperationListViewObject__GetItem(v2, v22);
        if ( v25 )
        {
          v21 = (Il2CppObject *)this;
          v20 = v25;
          v19 = (System_String_o *)StringLiteral_10057/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/;
          goto LABEL_28;
        }
      }
    }
    sub_1C3B9C0(this, v11);
  }
}


void __fastcall ServantOperationListViewObject__OnDestroy(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C1E27D & 1) == 0 )
  {
    sub_1C3B764(&NGUITools_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1E27D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1C3B708(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ServantOperationListViewObject__OnDragDropStart(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UITouchPress_o *manager; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *touchPress; // x20

  if ( (byte_4C1E286 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v3);
    byte_4C1E286 = 1;
  }
  manager = (UITouchPress_o *)this->fields.manager;
  if ( !manager )
    goto LABEL_14;
  methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
  {
    manager = (UITouchPress_o *)sub_1C3BC80(manager);
    goto LABEL_14;
  }
  if ( (LODWORD(manager[5].fields.clickRange) & 0x80000000) == 0 )
  {
    touchPress = (UnityEngine_Object_o *)this->fields.touchPress;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(touchPress, 0LL, 0LL) )
    {
      manager = this->fields.touchPress;
      if ( manager )
      {
        UITouchPress__PressReset(manager, 0LL);
        return;
      }
LABEL_14:
      sub_1C3B9C0(manager, method);
    }
  }
}


void __fastcall ServantOperationListViewObject__OnLongPush(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *indicator; // x20
  __int64 v4; // x1
  ListViewItem_o *emptyMessageLabel; // x19
  ServantOperationListViewItem_c *v6; // x1
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  int32_t sortIndex; // w21
  char v10; // w8
  const MethodInfo *v11; // x3

  indicator = (ServantOperationListViewManager_o *)this;
  if ( (byte_4C1E285 & 1) == 0 )
  {
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, method);
    this = (ServantOperationListViewObject_o *)sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v4);
    byte_4C1E285 = 1;
  }
  emptyMessageLabel = (ListViewItem_o *)indicator->fields.emptyMessageLabel;
  if ( emptyMessageLabel )
  {
    v6 = ServantOperationListViewItem_TypeInfo;
    methodPtr_low = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(emptyMessageLabel->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (ServantOperationListViewItem_c *)emptyMessageLabel->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewItem_TypeInfo )
    {
      indicator = (ServantOperationListViewManager_o *)indicator->fields.indicator;
      if ( !indicator )
        goto LABEL_14;
      v8 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(indicator->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v8
        && (ServantOperationListViewManager_c *)indicator->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( ServantOperationListViewManager__IsDragEnable(
               indicator,
               (ServantOperationListViewItem_o *)emptyMessageLabel,
               v2) )
        {
          sortIndex = emptyMessageLabel->fields.sortIndex;
          v10 = ~ListViewItem__get_IsSelect(emptyMessageLabel, 0LL);
          ServantOperationListViewManager__SetDragStart(indicator, sortIndex, v10 & 1, v11);
        }
        return;
      }
    }
    else
    {
      sub_1C3BC80(indicator->fields.emptyMessageLabel);
    }
    this = (ServantOperationListViewObject_o *)sub_1C3BC80(indicator);
LABEL_14:
    sub_1C3B9C0(this, v6);
  }
}


void __fastcall ServantOperationListViewObject__OnLongRelease(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemDrag; // x20
  __int64 v7; // x1
  UIDragDropListViewItem_o *manager; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4C1E287 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_10115/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v4);
    sub_1C3B764(&StringLiteral_4135/*"Cannot insert null column"*/, v5);
    byte_4C1E287 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDrag = (UnityEngine_Object_o *)this->fields.itemDrag;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDrag, 0LL, 0LL) )
    {
      manager = this->fields.itemDrag;
      if ( !manager )
        goto LABEL_16;
      UIDragDropListViewItem__PressReset(manager, 0LL);
    }
    manager = (UIDragDropListViewItem_o *)this->fields.manager;
    if ( manager )
    {
      methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewManager_TypeInfo )
      {
        if ( HIDWORD(manager[3].fields.mListViewObject) )
          return;
        UnityEngine_Component__SendMessage_71093988(
          (UnityEngine_Component_o *)manager,
          (System_String_o *)StringLiteral_4135/*"Cannot insert null column"*/,
          0LL);
        manager = (UIDragDropListViewItem_o *)this->fields.manager;
        if ( manager )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)manager,
            (System_String_o *)StringLiteral_10115/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/,
            (Il2CppObject *)this->fields.linkItem,
            0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1C3B9C0(manager, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationListViewObject__SetInput(
        ServantOperationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x20
  ServantOperationListViewItem_c *v8; // x1
  const MethodInfo *v9; // x4
  struct ListViewItem_o *linkItem; // x20
  __int64 v11; // x9
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x10
  ServantOperationListViewItemDraw_o *v14; // x19
  const MethodInfo *v15; // x3
  ServantOperationListViewObject_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4C1E27F & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isInput);
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, v5);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v6);
    byte_4C1E27F = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && ((v8 = ServantOperationListViewItem_TypeInfo,
           v11 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11)
       || (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewItem_TypeInfo) )
    {
      v16 = (ServantOperationListViewObject_o *)sub_1C3BC80(this->fields.linkItem);
      ServantOperationListViewObject__IsCanDrag(v16, v17);
    }
    else
    {
      manager = this->fields.manager;
      if ( !manager
        || (methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
        || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo
        || (v14 = this->fields.itemDraw,
            manager = (struct ListViewManager_o *)ServantOperationListViewManager__IsSelectEnable(
                                                    (ServantOperationListViewManager_o *)manager,
                                                    (ServantOperationListViewItem_o *)linkItem,
                                                    0,
                                                    0,
                                                    v9),
            !v14) )
      {
        sub_1C3B9C0(manager, v8);
      }
      ServantOperationListViewItemDraw__SetInput(
        v14,
        (ServantOperationListViewItem_o *)linkItem,
        (unsigned __int8)manager & 1,
        v15);
    }
  }
}


void __fastcall ServantOperationListViewObject__SetItem(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42230072((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetItem_33958580(
        ServantOperationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall ServantOperationListViewObject__SetupDisp(
        ServantOperationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  ServantOperationListViewManager_o *manager; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  bool v9; // w1
  UnityEngine_Object_o *itemDraw; // x22
  __int64 IsSelectEnable; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  ServantOperationListViewItemDraw_o *v14; // x22
  int32_t dispMode; // w19
  const MethodInfo *v16; // x5

  if ( (byte_4C1E283 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantOperationListViewItem_TypeInfo, v4);
    sub_1C3B764(&ServantOperationListViewManager_TypeInfo, v5);
    byte_4C1E283 = 1;
  }
  manager = (ServantOperationListViewManager_o *)this->fields.manager;
  if ( manager )
  {
    methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantOperationListViewManager_TypeInfo )
    {
      sub_1C3BC80(this->fields.manager);
      goto LABEL_18;
    }
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = LOBYTE(ServantOperationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v8
      && (ServantOperationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewItem_TypeInfo )
    {
      v9 = this->fields.dispMode != 0;
      goto LABEL_11;
    }
LABEL_18:
    IsSelectEnable = sub_1C3BC80(linkItem);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_11:
  ListViewObject__SetVisible((ListViewObject_o *)this, v9, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsSelectEnable = UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( (IsSelectEnable & 1) == 0 )
  {
    if ( manager )
    {
      v14 = this->fields.itemDraw;
      dispMode = this->fields.dispMode;
      IsSelectEnable = ServantOperationListViewManager__IsSelectEnable(
                         manager,
                         (ServantOperationListViewItem_o *)linkItem,
                         0,
                         0,
                         v13);
      if ( v14 )
      {
        ServantOperationListViewItemDraw__SetItem(
          v14,
          (ServantOperationListViewItem_o *)linkItem,
          dispMode,
          IsSelectEnable & 1,
          manager->fields.modeKind,
          v16);
        return;
      }
    }
LABEL_19:
    sub_1C3B9C0(IsSelectEnable, v12);
  }
}