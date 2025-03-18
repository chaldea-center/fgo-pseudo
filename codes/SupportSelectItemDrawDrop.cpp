void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1E7CA & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectItemDrawDrop_TypeInfo, v1);
    byte_4C1E7CA = 1;
  }
  LODWORD(SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME) = (struct SupportSelectItemDrawDrop_StaticFields)1045220557;
}


void __fastcall SupportSelectItemDrawDrop___ctor(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoReturnMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *ListViewObj; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x21
  UnityEngine_Transform_o *v7; // x20
  int v8; // s0
  SupportSelectItemDrawDrop_c *v11; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Component_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C1E7C9 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectItemDrawDrop_TypeInfo, method);
    sub_1C3B764(&StringLiteral_10096/*"PASV\r\n"*/, v3);
    byte_4C1E7C9 = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_12;
  v6 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v6 )
    goto LABEL_12;
  v7 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v6, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v7 )
    goto LABEL_12;
  v31 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v31.fields.x;
  y = v31.fields.y;
  z = v31.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v11 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v11->static_fields->ACTION_TIME, v32, 0LL);
  if ( !ListViewObj )
LABEL_12:
    sub_1C3B9C0(ListViewObj, v5);
  v16 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].monitor = gameObject;
  sub_1C3B708((PartyOrganizationUtility_o *)&v16[3].monitor, (int64_t)gameObject, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_10096/*"PASV\r\n"*/;
  *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_10096/*"PASV\r\n"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v16[3].fields, v24, v25, v26, v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  SupportSelectListViewDropObject_o *v43; // x19
  int v44; // s0
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C1E7C7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, target);
    sub_1C3B764(&SupportSelectItemDrawDrop_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_10097/*"PATH:"*/, v6);
    byte_4C1E7C7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    dragObject = this->fields.dragObject;
    if ( !dragObject )
      goto LABEL_21;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
    if ( !dragObject )
      goto LABEL_21;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)dragObject,
                                               0LL);
    if ( !target )
      goto LABEL_21;
    v9 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v9 )
      goto LABEL_21;
    v47 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
    v13 = this->fields.dragObject;
    x = v47.fields.x;
    y = v47.fields.y;
    v16 = SupportSelectItemDrawDrop_TypeInfo;
    z = v47.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v16 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->ACTION_TIME, v48, 0LL);
    if ( !dragObject )
      goto LABEL_21;
    v18 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v18[3].monitor = gameObject;
    sub_1C3B708((PartyOrganizationUtility_o *)&v18[3].monitor, (int64_t)gameObject, v20, v21, v22, v23, v24, v25);
    v26 = StringLiteral_10097/*"PATH:"*/;
    *(_QWORD *)&v18[3].fields.m_CachedPtr = StringLiteral_10097/*"PATH:"*/;
    sub_1C3B708((PartyOrganizationUtility_o *)&v18[3].fields, v26, v27, v28, v29, v30, v31, v32);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v33);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v36 = (UnityEngine_Component_o *)ListViewObj;
    sub_1C3B708((PartyOrganizationUtility_o *)p_dropObject, (int64_t)target, v37, v38, v39, v40, v41, v42);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v7), !v36)
      || (v43 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v36, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v43) )
    {
LABEL_21:
      sub_1C3B9C0(dragObject, v7);
    }
    SupportSelectListViewDropObject__DoSwap(
      v43,
      *(UnityEngine_Vector3_o *)&v44,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v7);
  }
}


SupportSelectListViewManager_o *__fastcall SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1E7C2 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectListViewManager_TypeInfo, method);
    byte_4C1E7C2 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1C3B9C0(0LL, v4);
  manager = ListViewObj->fields.manager;
  if ( !manager )
    return 0LL;
  methodPtr_low = LOBYTE(SupportSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewManager_TypeInfo )
    return (SupportSelectListViewManager_o *)ListViewObj->fields.manager;
  return 0LL;
}


SupportSelectListViewDropObject_o *__fastcall SupportSelectItemDrawDrop__GetListViewObj(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1E7C1 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectListViewDropObject_TypeInfo, method);
    byte_4C1E7C1 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    return 0LL;
  methodPtr_low = LOBYTE(SupportSelectListViewDropObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (SupportSelectListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewDropObject_TypeInfo )
    return (SupportSelectListViewDropObject_o *)this->fields.mListViewObject;
  return 0LL;
}


bool __fastcall SupportSelectItemDrawDrop__IsSameObject(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v7; // x1
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v9; // x19

  if ( (byte_4C1E7C6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, obj);
    byte_4C1E7C6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_18;
    memberObject = ListViewObj->fields.memberObject;
    v9 = obj->fields.memberObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v9,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v9 )
          return memberObject->fields.classPos == v9->fields.classPos;
LABEL_18:
        sub_1C3B9C0(ListViewObj, v7);
      }
    }
  }
  return 0;
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropRelease(
        SupportSelectItemDrawDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_4C1E7C5 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1E7C5 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.surface, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1C3B9C0(v11, v12);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v15) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v12);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v16);
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v13; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  SupportSelectListViewManager_o *v18; // x19

  if ( (byte_4C1E7C4 & 1) == 0 )
  {
    sub_1C3B764(&UICamera_TypeInfo, method);
    byte_4C1E7C4 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  currentTouch = v10->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_13:
        sub_1C3B9C0(ListViewManager, v13);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.surface, (int64_t)dragged, v4, v5, v6, v7, v8, v9);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v3);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v16);
  if ( !ListViewManager )
    goto LABEL_13;
  v18 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v17);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_13;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v13);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v18->klass->vtable._8_ItemDragStart.method)(
    v18,
    v18->klass->vtable._9_ItemDragEnd.methodPtr);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishDragAndDrop(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *ListViewManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  SupportSelectListViewManager_o *v5; // x19

  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, method);
  if ( !ListViewManager )
    sub_1C3B9C0(0LL, v3);
  v5 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 1, v4);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v5->klass->vtable._9_ItemDragEnd.method)(
    v5,
    v5->klass->vtable._10_SetSortKind.methodPtr);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedReturnMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectObject_o *ListViewObj; // x0
  const MethodInfo *v4; // x1
  SupportSelectListViewDropObject_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  ListViewObj = (SupportSelectObject_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj
    || (v5 = (SupportSelectListViewDropObject_o *)ListViewObj,
        (ListViewObj = (SupportSelectObject_o *)ListViewObj[1].fields.supportServantData) == 0LL) )
  {
    sub_1C3B9C0(ListViewObj, v4);
  }
  SupportSelectObject__ShowEquip(ListViewObj, v4);
  SupportSelectListViewDropObject__DestroyDragObj(v5, v6);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v7);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedSwapMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v30; // x27
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v38; // x26
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Object_o *v45; // x20
  UnityEngine_Object_o *v46; // x20
  const MethodInfo *v47; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x8
  int64_t v62; // x1
  __int64 v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  int64_t v71; // x1
  SupportSelectObject_o **v72; // x20
  SupportSelectObject_o *v73; // x23
  SupportSelectObject_o *v74; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct System_Reflection_MethodInfo_o *original_method_info; // x25
  struct System_Reflection_MethodInfo_o *method_info; // x28
  __int64 v78; // x8
  __int64 v79; // x25
  __int64 v80; // x28
  int32_t v81; // w25
  struct SupportSelectMenu_CallbackFunc_o *v82; // x8
  int32_t v83; // w28
  int32_t v84; // w5
  struct SupportSelectMenu_CallbackFunc_o *v85; // x8
  struct System_Reflection_MethodInfo_o *v86; // x25
  struct System_Reflection_MethodInfo_o *v87; // x28
  __int64 v88; // x8
  __int64 v89; // x25
  __int64 v90; // x28
  int32_t v91; // w28
  struct SupportSelectMenu_CallbackFunc_o *v92; // x8
  int32_t v93; // w25
  int32_t v94; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v96; // w26
  System_Text_StringBuilder_o *v97; // x22
  System_Text_StringBuilder_o *v98; // x27
  System_Text_StringBuilder_o *v99; // x25
  Il2CppObject *Entity; // x25
  __int64 v101; // x8
  PartyOrganizationUtility_o *v102; // x29
  __int64 v103; // x26
  __int64 v104; // x27
  System_String_o *v105; // x25
  int32_t v106; // w26
  Il2CppObject *v107; // x25
  __int64 v108; // x8
  PartyOrganizationUtility_o *v109; // x29
  __int64 v110; // x26
  __int64 v111; // x27
  UserServantEntity_o *v112; // x8
  System_String_o *v113; // x24
  EquipTargetInfo_o *v114; // x8
  int32_t v115; // w23
  int32_t v116; // w23
  int32_t v117; // w24
  int32_t v118; // w23
  int32_t v119; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v121; // x1
  System_Text_StringBuilder_o *v122; // x20
  float v123; // s8
  int32_t windowHeight; // w25
  float v125; // s9
  System_String_o *v126; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v128; // x21
  System_String_o *v129; // x22
  System_String_o *v130; // x23
  CommonConfirmDialog_ClickDelegate_o *v131; // x24
  __int64 v132; // x23
  unsigned int v133; // w19
  SupportSelectObject_o *v134; // x8
  unsigned int v135; // w21
  SupportSelectObject_o *v136; // x20
  __int64 v137; // x8
  System_Text_StringBuilder_o *v138; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v139; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v140; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v141; // [xsp+50h] [xbp-A0h]
  unsigned int v142; // [xsp+50h] [xbp-A0h]
  int v143; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v147; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_4C1E7C8 & 1) == 0 )
  {
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&System_Math_TypeInfo, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1C3B764(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v13);
    sub_1C3B764(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_10322/*"PartyOrganizationScene"*/, v15);
    sub_1C3B764(&StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, v16);
    sub_1C3B764(&StringLiteral_3807/*"CP00858"*/, v17);
    sub_1C3B764(&StringLiteral_1/*""*/, v18);
    byte_4C1E7C8 = 1;
  }
  v147 = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  *(_QWORD *)maxLength = 0LL;
  v19 = sub_1C3B9B0(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_110;
  *(_QWORD *)(v19 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)this, v22, v23, v24, v25, v26, v27);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v28);
  *(_QWORD *)(v19 + 16) = ListViewObj;
  v30 = v19 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)ListViewObj, v31, v32, v33, v34, v35, v36);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v19 + 24) = dropObject;
  v38 = (UnityEngine_Object_o **)(v19 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)dropObject, v39, v40, v41, v42, v43, v44);
  v45 = *(UnityEngine_Object_o **)(v19 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    return;
  v46 = *v38;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v47);
  *(_QWORD *)(v19 + 40) = ListViewManager;
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)ListViewManager, v49, v50, v51, v52, v53, v54);
  v61 = *(_QWORD *)(v19 + 16);
  if ( !v61 )
    goto LABEL_110;
  v62 = *(_QWORD *)(v61 + 120);
  *(_QWORD *)(v19 + 48) = v62;
  v63 = v19 + 48;
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 48), v62, v55, v56, v57, v58, v59, v60);
  v70 = *(_QWORD *)(v19 + 24);
  if ( !v70 )
    goto LABEL_110;
  v71 = *(_QWORD *)(v70 + 120);
  *(_QWORD *)(v19 + 56) = v71;
  v72 = (SupportSelectObject_o **)(v19 + 56);
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 56), v71, v64, v65, v66, v67, v68, v69);
  LeaderInfo = *(SupportSelectObject_o **)(v19 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v21);
  if ( !*v72 )
    goto LABEL_110;
  v73 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v72, v21);
  *(_QWORD *)actMaxRarity = 0LL;
  v147 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v73 )
    goto LABEL_110;
  v74 = LeaderInfo;
  if ( *(_QWORD *)&v73->fields.m_CachedPtr && SLODWORD(v73->fields.eventFriendPoints) >= 1 )
  {
    if ( !LeaderInfo )
      goto LABEL_110;
    callbackFunc = LeaderInfo->fields.callbackFunc;
    if ( callbackFunc )
    {
      method_info = callbackFunc->fields.method_info;
      original_method_info = callbackFunc->fields.original_method_info;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v149.fields.currentCryptoKey = method_info;
      *(_QWORD *)&v149.fields.fakeValue = original_method_info;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v149, 0LL) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v78 = *(_QWORD *)&v73->fields.m_CachedPtr;
        v141 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v78 )
          goto LABEL_110;
        v79 = *(_QWORD *)(v78 + 80);
        v80 = *(_QWORD *)(v78 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v150.fields.currentCryptoKey = v79;
        *(_QWORD *)&v150.fields.fakeValue = v80;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                v150,
                                                0LL);
        if ( !*(_QWORD *)&v73->fields.m_CachedPtr )
          goto LABEL_110;
        v81 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v73->fields.m_CachedPtr,
                                                0LL);
        v82 = v74->fields.callbackFunc;
        if ( !v82 )
          goto LABEL_110;
        v83 = (int)LeaderInfo;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v82->fields.method_info,
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v141;
        if ( !v141 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v141,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v81,
                                                v83,
                                                v84,
                                                -1,
                                                0LL);
        goto LABEL_31;
      }
    }
  }
  else if ( !LeaderInfo )
  {
    goto LABEL_110;
  }
  LeaderInfo = 0LL;
LABEL_31:
  if ( *(_QWORD *)&v74->fields.m_CachedPtr
    && SLODWORD(v74->fields.eventFriendPoints) >= 1
    && (v85 = v73->fields.callbackFunc) != 0LL )
  {
    v142 = (unsigned int)LeaderInfo;
    v87 = v85->fields.method_info;
    v86 = v85->fields.original_method_info;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v151.fields.currentCryptoKey = v87;
    *(_QWORD *)&v151.fields.fakeValue = v86;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v151, 0LL) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v88 = *(_QWORD *)&v74->fields.m_CachedPtr;
      v139 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v88 )
        goto LABEL_110;
      v90 = *(_QWORD *)(v88 + 80);
      v89 = *(_QWORD *)(v88 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v152.fields.currentCryptoKey = v90;
      *(_QWORD *)&v152.fields.fakeValue = v89;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v152,
                                              0LL);
      if ( !*(_QWORD *)&v74->fields.m_CachedPtr )
        goto LABEL_110;
      v91 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v74->fields.m_CachedPtr,
                                              0LL);
      v92 = v73->fields.callbackFunc;
      if ( !v92 )
        goto LABEL_110;
      v93 = (int)LeaderInfo;
      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v92->fields.method_info,
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v139;
      if ( !v139 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v139,
                              &v147,
                              actMaxRarity,
                              v91,
                              v93,
                              v94,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v142;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v96 = (int)LeaderInfo;
    v97 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v97, 0LL);
    v98 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v98, 0LL);
    v99 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v99, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v143 = v96;
    v138 = v99;
    v140 = (PartyOrganizationUtility_o *)v98;
    if ( (v96 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v73->fields.eventFriendPoints,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v101 = *(_QWORD *)&v73->fields.m_CachedPtr;
      if ( !v101 )
        goto LABEL_110;
      v102 = (PartyOrganizationUtility_o *)LeaderInfo;
      v104 = *(_QWORD *)(v101 + 96);
      v103 = *(_QWORD *)(v101 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v153.fields.currentCryptoKey = v104;
      *(_QWORD *)&v153.fields.fakeValue = v103;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v153,
                                              0LL);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0LL);
      if ( !*(_QWORD *)&v73->fields.m_CachedPtr )
        goto LABEL_110;
      v105 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v73->fields.m_CachedPtr,
                                              0LL);
      if ( !v74->fields.callbackFunc )
        goto LABEL_110;
      v106 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v74->fields.callbackFunc,
                                              0LL);
      if ( !v102 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v102,
                                              &maxLength[1],
                                              v105,
                                              v106,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v98 = (System_Text_StringBuilder_o *)v140;
      if ( !v140 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_62529764(
        (System_Text_StringBuilder_o *)v140,
        (System_String_o *)LeaderInfo,
        0LL);
      v99 = v138;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v107 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
               (int32_t)v74->fields.eventFriendPoints,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v108 = *(_QWORD *)&v74->fields.m_CachedPtr;
      if ( !v108 )
        goto LABEL_110;
      v109 = (PartyOrganizationUtility_o *)LeaderInfo;
      v111 = *(_QWORD *)(v108 + 96);
      v110 = *(_QWORD *)(v108 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v154.fields.currentCryptoKey = v111;
      *(_QWORD *)&v154.fields.fakeValue = v110;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v154,
                                              0LL);
      if ( !v107 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)v107,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0LL);
      v112 = *(UserServantEntity_o **)&v74->fields.m_CachedPtr;
      if ( !v112 )
        goto LABEL_110;
      v113 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v112, 0LL);
      v114 = (EquipTargetInfo_o *)v73->fields.callbackFunc;
      if ( !v114 )
        goto LABEL_110;
      v115 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v114, 0LL);
      if ( !v109 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v109,
                                              maxLength,
                                              v113,
                                              v115,
                                              (System_String_o *)LeaderInfo,
                                              v147,
                                              actMaxRarity[0],
                                              0LL);
      v99 = v138;
      if ( !v138 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_62529764(v138, (System_String_o *)LeaderInfo, 0LL);
      v98 = (System_Text_StringBuilder_o *)v140;
    }
    v117 = maxLength[0];
    v116 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v118 = System_Math__Max_64187756(v116, v117, 0LL);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v118,
        0LL);
      if ( *(_QWORD *)v63 )
      {
        if ( *v72 && v97 )
        {
          v119 = *(_DWORD *)(*(_QWORD *)v63 + 60LL);
          classPos = (*v72)->fields.classPos;
          v121 = v119 >= classPos ? v99 : v98;
          v122 = v119 >= classPos ? v98 : v99;
          System_Text_StringBuilder__Append_62530392(v97, v121, 0LL);
          System_Text_StringBuilder__Append_62530392(v97, v122, 0LL);
          v123 = (v143 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v143 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v125 = (v143 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_10322/*"PartyOrganizationScene"*/, 0LL);
          System_Text_StringBuilder__Append_62529764(v97, v126, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v128 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                                      v97,
                                      v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"CP00858"*/, 0LL);
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
          v131 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v131,
            (Il2CppObject *)v19,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_31232212(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v128,
              v129,
              v130,
              v131,
              minFontSize[1],
              minFontSize[0],
              v125,
              728,
              2,
              windowHeight,
              v123,
              0,
              0,
              240,
              1,
              0LL);
            return;
          }
        }
      }
    }
LABEL_110:
    sub_1C3B9C0(LeaderInfo, v21);
  }
  if ( !*(_QWORD *)v30 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v30 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v21);
  if ( !*v38 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v38)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v21);
  LeaderInfo = *(SupportSelectObject_o **)v30;
  if ( !*(_QWORD *)v30 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v21);
  LeaderInfo = (SupportSelectObject_o *)*v38;
  if ( !*v38 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v21);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v63;
  if ( !*(_QWORD *)v63 )
    goto LABEL_110;
  v132 = *(_QWORD *)(v19 + 40);
  v133 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v21);
  v134 = *v72;
  if ( !*v72 )
    goto LABEL_110;
  v135 = v134->fields.classPos;
  v136 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v134, v21);
  if ( !v132 )
    goto LABEL_110;
  v137 = *(_QWORD *)(v132 + 360);
  if ( v137 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v137 + 24))(
      *(_QWORD *)(v137 + 64),
      1LL,
      v133,
      v136,
      v135,
      LeaderInfo,
      *(_QWORD *)(v137 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v21);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *listViewObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct ListViewObject_o *Component_object; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4C1E7C0 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1E7C0 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.mListViewObject,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v16 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v16,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.mDragScrollView,
          (int64_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1C3B9C0(mListViewObject, v14);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v24, v25, v26, v27, v28, v29);
  v30 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mCollider, (int64_t)v30, v31, v32, v33, v34, v35, v36);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4C1E7C3 & 1) == 0 )
  {
    sub_1C3B764(&UICamera_TypeInfo, method);
    byte_4C1E7C3 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !UICamera__IsPressed(surface, 0LL) )
      ((void (__fastcall *)(SupportSelectItemDrawDrop_o *, struct UnityEngine_GameObject_o *, void *))this->klass->vtable._8_OnDragDropRelease.method)(
        this,
        this->fields.surface,
        this->klass[1]._1.image);
  }
}


void __fastcall SupportSelectItemDrawDrop____n__0(
        SupportSelectItemDrawDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0LL);
}


void __fastcall SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor(
        SupportSelectItemDrawDrop___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop___c__DisplayClass13_0___OnFinishedSwapMove_b__0(
        SupportSelectItemDrawDrop___c__DisplayClass13_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v4; // x19
  struct SupportSelectListViewDropObject_o *from; // x8
  struct SupportSelectListViewDropObject_o *to; // x8
  struct SupportSelectListViewManager_o *manager; // x23
  unsigned int toMember_high; // w20
  struct SupportSelectObject_o *toMember; // x8
  unsigned int classPos; // w22
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v11; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x8

  v4 = this;
  if ( (byte_4C1E7CB & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1C3B764(
                                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                  isDecide);
    byte_4C1E7CB = 1;
  }
  from = v4->fields.from;
  if ( !from )
    goto LABEL_19;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)from->fields.memberObject;
  if ( !this )
    goto LABEL_19;
  SupportSelectObject__ShowEquip((SupportSelectObject_o *)this, (const MethodInfo *)isDecide);
  to = v4->fields.to;
  if ( !to )
    goto LABEL_19;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)to->fields.memberObject;
  if ( !this )
    goto LABEL_19;
  SupportSelectObject__ShowEquip((SupportSelectObject_o *)this, (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.from;
  if ( !this )
    goto LABEL_19;
  SupportSelectListViewDropObject__DestroyDragObj(
    (SupportSelectListViewDropObject_o *)this,
    (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.to;
  if ( !this )
    goto LABEL_19;
  SupportSelectListViewDropObject__DestroyDragObj(
    (SupportSelectListViewDropObject_o *)this,
    (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_19;
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  if ( !isDecide )
    goto LABEL_16;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.fromMember;
  if ( !this
    || (manager = v4->fields.manager,
        toMember_high = HIDWORD(this->fields.toMember),
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      (SupportSelectObject_o *)this,
                                                                      (const MethodInfo *)isDecide),
        (toMember = v4->fields.toMember) == 0LL)
    || (classPos = toMember->fields.classPos,
        v11 = this,
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      v4->fields.toMember,
                                                                      (const MethodInfo *)isDecide),
        !manager) )
  {
LABEL_19:
    sub_1C3B9C0(this, isDecide);
  }
  dragSwapCallbackFunc = manager->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, _QWORD))dragSwapCallbackFunc->fields.m_target)(
      dragSwapCallbackFunc->fields.original_method_info,
      1LL,
      toMember_high,
      v11,
      classPos,
      this,
      *(_QWORD *)&dragSwapCallbackFunc->fields.extra_arg);
LABEL_16:
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_19;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)this, (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}