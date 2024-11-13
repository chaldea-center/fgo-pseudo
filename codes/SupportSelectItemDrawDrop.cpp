void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12B0A & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectItemDrawDrop_TypeInfo, v1, v2);
    byte_4B12B0A = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *ListViewObj; // x0
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x21
  UnityEngine_Transform_o *v9; // x20
  int v10; // s0
  __int64 v13; // x1
  SupportSelectItemDrawDrop_c *v14; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Component_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B12B09 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectItemDrawDrop_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10036/*"OnFinishedReturnMove"*/, v4, v5);
    byte_4B12B09 = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_12;
  v8 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v8 )
    goto LABEL_12;
  v9 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v8, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v9 )
    goto LABEL_12;
  v34 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v14 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v34.fields.x;
  y = v34.fields.y;
  z = v34.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo, v13);
    v14 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v14->static_fields->ACTION_TIME, v35, 0LL);
  if ( !ListViewObj )
LABEL_12:
    sub_1BCAA3C(ListViewObj, v7);
  v19 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19[3].monitor = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19[3].monitor, (int64_t)gameObject, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_10036/*"OnFinishedReturnMove"*/;
  *(_QWORD *)&v19[3].fields.m_CachedPtr = StringLiteral_10036/*"OnFinishedReturnMove"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19[3].fields, v27, v28, v29, v30, v31, v32, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v19; // x0
  float z; // s10
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  SupportSelectListViewDropObject_o *v46; // x19
  int v47; // s0
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B12B07 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, target, method);
    sub_1BCA7E0(&SupportSelectItemDrawDrop_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10037/*"OnFinishedSwapMove"*/, v7, v8);
    byte_4B12B07 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
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
    v11 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v11 )
      goto LABEL_21;
    v50 = UnityEngine_Transform__InverseTransformPoint(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
    v16 = this->fields.dragObject;
    x = v50.fields.x;
    y = v50.fields.y;
    v19 = SupportSelectItemDrawDrop_TypeInfo;
    z = v50.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo, v15);
      v19 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v51.fields.x = x;
    v51.fields.y = y;
    v51.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v16, v19->static_fields->ACTION_TIME, v51, 0LL);
    if ( !dragObject )
      goto LABEL_21;
    v21 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21[3].monitor = gameObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[3].monitor, (int64_t)gameObject, v23, v24, v25, v26, v27, v28);
    v29 = StringLiteral_10037/*"OnFinishedSwapMove"*/;
    *(_QWORD *)&v21[3].fields.m_CachedPtr = StringLiteral_10037/*"OnFinishedSwapMove"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[3].fields, v29, v30, v31, v32, v33, v34, v35);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v36);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v39 = (UnityEngine_Component_o *)ListViewObj;
    sub_1BCA784((PartyOrganizationUtility_o *)p_dropObject, (int64_t)target, v40, v41, v42, v43, v44, v45);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v9), !v39)
      || (v46 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v39, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v46) )
    {
LABEL_21:
      sub_1BCAA3C(dragObject, v9);
    }
    SupportSelectListViewDropObject__DoSwap(
      v46,
      *(UnityEngine_Vector3_o *)&v47,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v9);
  }
}


SupportSelectListViewManager_o *__fastcall SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v5; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B12B02 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectListViewManager_TypeInfo, method, v2);
    byte_4B12B02 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  struct ListViewObject_o *mListViewObject; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B12B01 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectListViewDropObject_TypeInfo, method, v2);
    byte_4B12B01 = 1;
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
  __int64 v10; // x1

  if ( (byte_4B12B06 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, method);
    byte_4B12B06 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_18;
    memberObject = ListViewObj->fields.memberObject;
    v9 = obj->fields.memberObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v9,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v9 )
          return memberObject->fields.classPos == v9->fields.classPos;
LABEL_18:
        sub_1BCAA3C(ListViewObj, v7);
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
  __int64 v11; // x2
  __int64 v12; // x1
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  if ( (byte_4B12B05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B12B05 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.surface, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v13 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v13 = UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( !v13 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1BCAA3C(v13, v14);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v18) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v14);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v19);
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UICamera_c *v11; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v14; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  SupportSelectListViewManager_o *v19; // x19

  if ( (byte_4B12B04 & 1) == 0 )
  {
    sub_1BCA7E0(&UICamera_TypeInfo, method, v2);
    byte_4B12B04 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  v11 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
    v11 = UICamera_TypeInfo;
  }
  currentTouch = v11->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v4);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_13:
        sub_1BCAA3C(ListViewManager, v14);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.surface, (int64_t)dragged, v5, v6, v7, v8, v9, v10);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v4);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v17);
  if ( !ListViewManager )
    goto LABEL_13;
  v19 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v18);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_13;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v14);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v19->klass->vtable._8_ItemDragStart.method)(
    v19,
    v19->klass->vtable._9_ItemDragEnd.methodPtr);
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
    sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(ListViewObj, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v48; // x27
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v56; // x26
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  UnityEngine_Object_o *v64; // x20
  __int64 v65; // x1
  UnityEngine_Object_o *v66; // x20
  const MethodInfo *v67; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x8
  int64_t v82; // x1
  __int64 v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  int64_t v91; // x1
  SupportSelectObject_o **v92; // x20
  SupportSelectObject_o *v93; // x23
  __int64 v94; // x2
  __int64 v95; // x3
  SupportSelectObject_o *v96; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct System_Reflection_MethodInfo_o *original_method_info; // x25
  struct System_Reflection_MethodInfo_o *method_info; // x28
  __int64 v100; // x8
  __int64 v101; // x25
  __int64 v102; // x28
  int32_t v103; // w25
  struct SupportSelectMenu_CallbackFunc_o *v104; // x8
  int32_t v105; // w28
  int32_t v106; // w5
  struct SupportSelectMenu_CallbackFunc_o *v107; // x8
  struct System_Reflection_MethodInfo_o *v108; // x25
  struct System_Reflection_MethodInfo_o *v109; // x28
  __int64 v110; // x8
  __int64 v111; // x25
  __int64 v112; // x28
  int32_t v113; // w28
  struct SupportSelectMenu_CallbackFunc_o *v114; // x8
  int32_t v115; // w25
  int32_t v116; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v118; // w26
  System_Text_StringBuilder_o *v119; // x22
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  System_Text_StringBuilder_o *v123; // x27
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  System_Text_StringBuilder_o *v127; // x25
  __int64 v128; // x1
  Il2CppObject *Entity; // x25
  __int64 v130; // x8
  PartyOrganizationUtility_o *v131; // x29
  __int64 v132; // x26
  __int64 v133; // x27
  System_String_o *v134; // x25
  int32_t v135; // w26
  Il2CppObject *v136; // x25
  __int64 v137; // x8
  PartyOrganizationUtility_o *v138; // x29
  __int64 v139; // x26
  __int64 v140; // x27
  UserServantEntity_o *v141; // x8
  System_String_o *v142; // x24
  EquipTargetInfo_o *v143; // x8
  int32_t v144; // w23
  int32_t v145; // w23
  int32_t v146; // w24
  int32_t v147; // w23
  int32_t v148; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v150; // x1
  System_Text_StringBuilder_o *v151; // x20
  __int64 v152; // x1
  float v153; // s8
  int32_t windowHeight; // w25
  float v155; // s9
  System_String_o *v156; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v158; // x21
  System_String_o *v159; // x22
  System_String_o *v160; // x23
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  CommonConfirmDialog_ClickDelegate_o *v164; // x24
  __int64 v165; // x23
  unsigned int v166; // w19
  SupportSelectObject_o *v167; // x8
  unsigned int v168; // w21
  SupportSelectObject_o *v169; // x20
  __int64 v170; // x8
  System_Text_StringBuilder_o *v171; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v172; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v173; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v174; // [xsp+50h] [xbp-A0h]
  unsigned int v175; // [xsp+50h] [xbp-A0h]
  int v176; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v180; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v182; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v183; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16

  if ( (byte_4B12B08 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Math_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21, v22);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v25, v26);
    sub_1BCA7E0(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    byte_4B12B08 = 1;
  }
  v180 = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  *(_QWORD *)maxLength = 0LL;
  v37 = sub_1BCAA2C(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_110;
  *(_QWORD *)(v37 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)this, v40, v41, v42, v43, v44, v45);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v46);
  *(_QWORD *)(v37 + 16) = ListViewObj;
  v48 = v37 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)ListViewObj, v49, v50, v51, v52, v53, v54);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v37 + 24) = dropObject;
  v56 = (UnityEngine_Object_o **)(v37 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)dropObject, v57, v58, v59, v60, v61, v62);
  v64 = *(UnityEngine_Object_o **)(v37 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  if ( !UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
    return;
  v66 = *v56;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
  if ( !UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v67);
  *(_QWORD *)(v37 + 40) = ListViewManager;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 40), (int64_t)ListViewManager, v69, v70, v71, v72, v73, v74);
  v81 = *(_QWORD *)(v37 + 16);
  if ( !v81 )
    goto LABEL_110;
  v82 = *(_QWORD *)(v81 + 120);
  *(_QWORD *)(v37 + 48) = v82;
  v83 = v37 + 48;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 48), v82, v75, v76, v77, v78, v79, v80);
  v90 = *(_QWORD *)(v37 + 24);
  if ( !v90 )
    goto LABEL_110;
  v91 = *(_QWORD *)(v90 + 120);
  *(_QWORD *)(v37 + 56) = v91;
  v92 = (SupportSelectObject_o **)(v37 + 56);
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 56), v91, v84, v85, v86, v87, v88, v89);
  LeaderInfo = *(SupportSelectObject_o **)(v37 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v39);
  if ( !*v92 )
    goto LABEL_110;
  v93 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v92, v39);
  *(_QWORD *)actMaxRarity = 0LL;
  v180 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v93 )
    goto LABEL_110;
  v96 = LeaderInfo;
  if ( *(_QWORD *)&v93->fields.m_CachedPtr && SLODWORD(v93->fields.eventFriendPoints) >= 1 )
  {
    if ( !LeaderInfo )
      goto LABEL_110;
    callbackFunc = LeaderInfo->fields.callbackFunc;
    if ( callbackFunc )
    {
      method_info = callbackFunc->fields.method_info;
      original_method_info = callbackFunc->fields.original_method_info;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v182.fields.currentCryptoKey = method_info;
      *(_QWORD *)&v182.fields.fakeValue = original_method_info;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v182, 0LL) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v100 = *(_QWORD *)&v93->fields.m_CachedPtr;
        v174 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v100 )
          goto LABEL_110;
        v101 = *(_QWORD *)(v100 + 80);
        v102 = *(_QWORD *)(v100 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
        *(_QWORD *)&v183.fields.currentCryptoKey = v101;
        *(_QWORD *)&v183.fields.fakeValue = v102;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v183,
                                                0LL);
        if ( !*(_QWORD *)&v93->fields.m_CachedPtr )
          goto LABEL_110;
        v103 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v93->fields.m_CachedPtr,
                                                0LL);
        v104 = v96->fields.callbackFunc;
        if ( !v104 )
          goto LABEL_110;
        v105 = (int)LeaderInfo;
        v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v104->fields.method_info,
                 0LL);
        LeaderInfo = (SupportSelectObject_o *)v174;
        if ( !v174 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v174,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v103,
                                                v105,
                                                v106,
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
  if ( *(_QWORD *)&v96->fields.m_CachedPtr
    && SLODWORD(v96->fields.eventFriendPoints) >= 1
    && (v107 = v93->fields.callbackFunc) != 0LL )
  {
    v175 = (unsigned int)LeaderInfo;
    v109 = v107->fields.method_info;
    v108 = v107->fields.original_method_info;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    *(_QWORD *)&v184.fields.currentCryptoKey = v109;
    *(_QWORD *)&v184.fields.fakeValue = v108;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v184, 0LL) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v110 = *(_QWORD *)&v96->fields.m_CachedPtr;
      v172 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v110 )
        goto LABEL_110;
      v112 = *(_QWORD *)(v110 + 80);
      v111 = *(_QWORD *)(v110 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v185.fields.currentCryptoKey = v112;
      *(_QWORD *)&v185.fields.fakeValue = v111;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v185,
                                              0LL);
      if ( !*(_QWORD *)&v96->fields.m_CachedPtr )
        goto LABEL_110;
      v113 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v96->fields.m_CachedPtr,
                                              0LL);
      v114 = v93->fields.callbackFunc;
      if ( !v114 )
        goto LABEL_110;
      v115 = (int)LeaderInfo;
      v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v114->fields.method_info,
               0LL);
      LeaderInfo = (SupportSelectObject_o *)v172;
      if ( !v172 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v172,
                              &v180,
                              actMaxRarity,
                              v113,
                              v115,
                              v116,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v175;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v118 = (int)LeaderInfo;
    v119 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v39, v94, v95);
    System_Text_StringBuilder___ctor(v119, 0LL);
    v123 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v120, v121, v122);
    System_Text_StringBuilder___ctor(v123, 0LL);
    v127 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v124, v125, v126);
    System_Text_StringBuilder___ctor(v127, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v176 = v118;
    v171 = v127;
    v173 = (PartyOrganizationUtility_o *)v123;
    if ( (v118 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v93->fields.eventFriendPoints,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v130 = *(_QWORD *)&v93->fields.m_CachedPtr;
      if ( !v130 )
        goto LABEL_110;
      v131 = (PartyOrganizationUtility_o *)LeaderInfo;
      v133 = *(_QWORD *)(v130 + 96);
      v132 = *(_QWORD *)(v130 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v186.fields.currentCryptoKey = v133;
      *(_QWORD *)&v186.fields.fakeValue = v132;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v186,
                                              0LL);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0LL);
      if ( !*(_QWORD *)&v93->fields.m_CachedPtr )
        goto LABEL_110;
      v134 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v93->fields.m_CachedPtr,
                                              0LL);
      if ( !v96->fields.callbackFunc )
        goto LABEL_110;
      v135 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v96->fields.callbackFunc,
                                              0LL);
      if ( !v131 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v131,
                                              &maxLength[1],
                                              v134,
                                              v135,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v123 = (System_Text_StringBuilder_o *)v173;
      if ( !v173 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_61563116(
        (System_Text_StringBuilder_o *)v173,
        (System_String_o *)LeaderInfo,
        0LL);
      v127 = v171;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v136 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
               (int32_t)v96->fields.eventFriendPoints,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v137 = *(_QWORD *)&v96->fields.m_CachedPtr;
      if ( !v137 )
        goto LABEL_110;
      v138 = (PartyOrganizationUtility_o *)LeaderInfo;
      v140 = *(_QWORD *)(v137 + 96);
      v139 = *(_QWORD *)(v137 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v187.fields.currentCryptoKey = v140;
      *(_QWORD *)&v187.fields.fakeValue = v139;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v187,
                                              0LL);
      if ( !v136 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)v136,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0LL);
      v141 = *(UserServantEntity_o **)&v96->fields.m_CachedPtr;
      if ( !v141 )
        goto LABEL_110;
      v142 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v141, 0LL);
      v143 = (EquipTargetInfo_o *)v93->fields.callbackFunc;
      if ( !v143 )
        goto LABEL_110;
      v144 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v143, 0LL);
      if ( !v138 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v138,
                                              maxLength,
                                              v142,
                                              v144,
                                              (System_String_o *)LeaderInfo,
                                              v180,
                                              actMaxRarity[0],
                                              0LL);
      v127 = v171;
      if ( !v171 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_61563116(v171, (System_String_o *)LeaderInfo, 0LL);
      v123 = (System_Text_StringBuilder_o *)v173;
    }
    v146 = maxLength[0];
    v145 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v128);
    v147 = System_Math__Max_63220196(v145, v146, 0LL);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v147,
        0LL);
      if ( *(_QWORD *)v83 )
      {
        if ( *v92 && v119 )
        {
          v148 = *(_DWORD *)(*(_QWORD *)v83 + 60LL);
          classPos = (*v92)->fields.classPos;
          v150 = v148 >= classPos ? v127 : v123;
          v151 = v148 >= classPos ? v123 : v127;
          System_Text_StringBuilder__Append_61563744(v119, v150, 0LL);
          System_Text_StringBuilder__Append_61563744(v119, v151, 0LL);
          v153 = (v176 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v176 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v155 = (v176 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152);
          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_61563116(v119, v156, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v158 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v119->klass->vtable._3_ToString.method)(
                                      v119,
                                      v119->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v159 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
          v160 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
          v164 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                          v161,
                                                          v162,
                                                          v163);
          CommonConfirmDialog_ClickDelegate___ctor(
            v164,
            (Il2CppObject *)v37,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_30766668(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v158,
              v159,
              v160,
              v164,
              minFontSize[1],
              minFontSize[0],
              v155,
              728,
              2,
              windowHeight,
              v153,
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
    sub_1BCAA3C(LeaderInfo, v39);
  }
  if ( !*(_QWORD *)v48 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v48 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v39);
  if ( !*v56 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v56)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v39);
  LeaderInfo = *(SupportSelectObject_o **)v48;
  if ( !*(_QWORD *)v48 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v39);
  LeaderInfo = (SupportSelectObject_o *)*v56;
  if ( !*v56 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v39);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v83;
  if ( !*(_QWORD *)v83 )
    goto LABEL_110;
  v165 = *(_QWORD *)(v37 + 40);
  v166 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v39);
  v167 = *v92;
  if ( !*v92 )
    goto LABEL_110;
  v168 = v167->fields.classPos;
  v169 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v167, v39);
  if ( !v165 )
    goto LABEL_110;
  v170 = *(_QWORD *)(v165 + 360);
  if ( v170 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v170 + 24))(
      *(_QWORD *)(v170 + 64),
      1LL,
      v166,
      v169,
      v168,
      LeaderInfo,
      *(_QWORD *)(v170 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v39);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *listViewObject; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct ListViewObject_o *Component_object; // x1
  __int64 v18; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B12B00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B12B00 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mListViewObject,
    (int64_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v20 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v20,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mDragScrollView,
          (int64_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1BCAA3C(mListViewObject, v18);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mTrans, (int64_t)transform, v28, v29, v30, v31, v32, v33);
  v34 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mCollider, (int64_t)v34, v35, v36, v37, v38, v39, v40);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4B12B03 & 1) == 0 )
  {
    sub_1BCA7E0(&UICamera_TypeInfo, method, v2);
    byte_4B12B03 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
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
  if ( (byte_4B12B0B & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1BCA7E0(
                                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                  isDecide,
                                                                  method);
    byte_4B12B0B = 1;
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
    sub_1BCAA3C(this, isDecide);
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
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}