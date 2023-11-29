void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD21A & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectItemDrawDrop_TypeInfo, v1);
    byte_40FD21A = 1;
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
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x0
  int v10; // s0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v16; // x0
  float z; // s10
  TweenPosition_o *v18; // x0
  TweenPosition_o *v19; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FD219 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectItemDrawDrop_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9974, v3);
    byte_40FD219 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_13;
  v5 = (UnityEngine_Component_o *)ListViewObj;
  transform = UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !transform )
    goto LABEL_13;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v8 = parent;
  v9 = UnityEngine_Component__get_transform(v5, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position(v9, 0LL);
  if ( !v8 )
    goto LABEL_13;
  v34 = UnityEngine_Transform__InverseTransformPoint(v8, *(UnityEngine_Vector3_o *)&v10, 0LL);
  dragObject = this->fields.dragObject;
  x = v34.fields.x;
  y = v34.fields.y;
  v16 = SupportSelectItemDrawDrop_TypeInfo;
  z = v34.fields.z;
  if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v16 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v18 = TweenPosition__Begin(dragObject, v16->static_fields->ACTION_TIME, v35, 0LL);
  if ( !v18 )
LABEL_13:
    sub_B170D4();
  v19 = v18;
  v18->fields.style = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v19->fields.eventReceiver, gameObject, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_9974;
  v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9974;
  sub_B16F98((BattleServantConfConponent_o *)&v19->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x0
  int v12; // s0
  UnityEngine_GameObject_o *v15; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v18; // x0
  float z; // s10
  TweenPosition_o *v20; // x0
  TweenPosition_o *v21; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  SupportSelectObject_o *memberObject; // x0
  SupportSelectListViewDropObject_o *v48; // x19
  UnityEngine_Transform_o *v49; // x0
  const MethodInfo *v50; // x1
  int v51; // s0
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FD217 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, target);
    sub_B16FFC(&SupportSelectItemDrawDrop_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_9975, v6);
    byte_40FD217 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    dragObject = this->fields.dragObject;
    if ( !dragObject )
      goto LABEL_23;
    transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
    if ( !transform )
      goto LABEL_23;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !target )
      goto LABEL_23;
    v10 = parent;
    v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)target, 0LL);
    if ( !v11 )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(v11, 0LL);
    if ( !v10 )
      goto LABEL_23;
    v54 = UnityEngine_Transform__InverseTransformPoint(v10, *(UnityEngine_Vector3_o *)&v12, 0LL);
    v15 = this->fields.dragObject;
    x = v54.fields.x;
    y = v54.fields.y;
    v18 = SupportSelectItemDrawDrop_TypeInfo;
    z = v54.fields.z;
    if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v18 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v55.fields.x = x;
    v55.fields.y = y;
    v55.fields.z = z;
    v20 = TweenPosition__Begin(v15, v18->static_fields->ACTION_TIME, v55, 0LL);
    if ( !v20 )
      goto LABEL_23;
    v21 = v20;
    v20->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v21->fields.eventReceiver, gameObject, v23, v24, v25, v26, v27, v28);
    v29 = (System_Int32_array **)StringLiteral_9975;
    v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9975;
    sub_B16F98((BattleServantConfConponent_o *)&v21->fields.callWhenFinished, v29, v30, v31, v32, v33, v34, v35);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v36);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v39 = (UnityEngine_Component_o *)ListViewObj;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_dropObject,
      (System_Int32_array **)target,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( !*p_dropObject
      || (memberObject = (*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip(memberObject, v46), !v39)
      || (v48 = *p_dropObject, (v49 = UnityEngine_Component__get_transform(v39, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_position(v49, 0LL), !v48) )
    {
LABEL_23:
      sub_B170D4();
    }
    SupportSelectListViewDropObject__DoSwap(
      v48,
      *(UnityEngine_Vector3_o *)&v51,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v50);
  }
}


SupportSelectListViewManager_o *__fastcall SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11

  if ( (byte_40FD212 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewManager_TypeInfo, method);
    byte_40FD212 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_B170D4();
  manager = ListViewObj->fields.manager;
  if ( !manager )
    return 0LL;
  v5 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == SupportSelectListViewManager_TypeInfo )
    return (SupportSelectListViewManager_o *)ListViewObj->fields.manager;
  return 0LL;
}


SupportSelectListViewDropObject_o *__fastcall SupportSelectItemDrawDrop__GetListViewObj(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11

  if ( (byte_40FD211 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewDropObject_TypeInfo, method);
    byte_40FD211 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    return 0LL;
  v4 = *(&SupportSelectListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (SupportSelectListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v4 - 1] == SupportSelectListViewDropObject_TypeInfo )
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
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v8; // x19

  if ( (byte_40FD216 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, obj);
    byte_40FD216 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_21;
    memberObject = ListViewObj->fields.memberObject;
    v8 = obj->fields.memberObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
      {
        if ( memberObject && v8 )
          return memberObject->fields.classPos == v8->fields.classPos;
LABEL_21:
        sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_40FD215 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FD215 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.surface,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL) )
    goto LABEL_18;
  if ( !surface )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    goto LABEL_18;
  if ( !Component_srcLineSprite )
LABEL_20:
    sub_B170D4();
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)klass, v14) )
  {
LABEL_18:
    SupportSelectItemDrawDrop__DoReturnMove(this, v11);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)klass, v15);
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v14; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v16; // x2
  SupportSelectListViewManager_o *v17; // x19
  const MethodInfo *v18; // x1
  SupportSelectObject_o *memberObject; // x0

  if ( (byte_40FD214 & 1) == 0 )
  {
    sub_B16FFC(&UICamera_TypeInfo, method);
    byte_40FD214 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  v10 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  currentTouch = v10->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_15:
        sub_B170D4();
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v3);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v14);
  if ( !ListViewManager )
    goto LABEL_15;
  v17 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v16);
  if ( !ListViewObj )
    goto LABEL_15;
  memberObject = ListViewObj->fields.memberObject;
  if ( !memberObject )
    goto LABEL_15;
  SupportSelectObject__HideEquip(memberObject, v18);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v17->klass->vtable._7_ItemDragStart.method)(
    v17,
    v17->klass->vtable._8_ItemDragEnd.methodPtr);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishDragAndDrop(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v3; // x2
  SupportSelectListViewManager_o *v4; // x19

  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, method);
  if ( !ListViewManager )
    sub_B170D4();
  v4 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 1, v3);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v4->klass->vtable._8_ItemDragEnd.method)(
    v4,
    v4->klass->vtable._9_SetSortKind.methodPtr);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedReturnMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  const MethodInfo *v4; // x1
  SupportSelectListViewDropObject_o *v5; // x20
  SupportSelectObject_o *memberObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj || (v5 = ListViewObj, (memberObject = ListViewObj->fields.memberObject) == 0LL) )
    sub_B170D4();
  SupportSelectObject__ShowEquip(memberObject, v4);
  SupportSelectListViewDropObject__DestroyDragObj(v5, v7);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v8);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedSwapMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  System_Int32_array **ListViewObj; // x0
  SupportSelectListViewDropObject_o **v32; // x27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **dropObject; // x1
  SupportSelectListViewDropObject_o **v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *v47; // x20
  UnityEngine_Object_o *v48; // x20
  const MethodInfo *v49; // x1
  System_Int32_array **ListViewManager; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x8
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x8
  System_Int32_array **v72; // x1
  SupportSelectObject_o **v73; // x20
  const MethodInfo *v74; // x1
  SupportSelectObject_o *v75; // x0
  UserServantLeaderEntity_o *LeaderInfo; // x0
  const MethodInfo *v77; // x1
  UserServantLeaderEntity_o *v78; // x23
  UserServantLeaderEntity_o *v79; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  UserServantLeaderEntity_o *v84; // x25
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v86; // x21
  __int64 v87; // x28
  clsQuestCheck_o *v88; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v90; // x21
  __int64 v91; // x28
  int32_t v92; // w0
  int32_t v93; // w21
  int32_t Rarity; // w0
  struct EquipTargetInfo_o *v95; // x8
  int32_t v96; // w28
  int32_t v97; // w5
  _BOOL4 IsRarityRestriction; // w0
  struct EquipTargetInfo_o *v99; // x8
  __int64 v100; // x21
  __int64 v101; // x28
  clsQuestCheck_o *v102; // x0
  struct UserServantEntity_o *v103; // x8
  __int64 v104; // x21
  __int64 v105; // x28
  int32_t v106; // w0
  int32_t v107; // w21
  int32_t v108; // w0
  struct EquipTargetInfo_o *v109; // x8
  int32_t v110; // w28
  int32_t v111; // w5
  _BOOL4 v112; // w28
  _BOOL4 v113; // w24
  System_Text_StringBuilder_o *v114; // x22
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  System_Text_StringBuilder_o *v119; // x26
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  System_Text_StringBuilder_o *v124; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x24
  clsQuestCheck_o *v128; // x0
  struct UserServantEntity_o *v129; // x8
  PartyOrganizationUtility_o *v130; // x27
  __int64 v131; // x21
  __int64 v132; // x26
  int32_t v133; // w0
  System_String_o *Name; // x0
  System_String_o *v135; // x24
  int32_t v136; // w0
  int32_t v137; // w26
  System_String_o *SvtName; // x0
  System_String_o *RarityInvalidMessage; // x0
  WebViewManager_o *v140; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v141; // x0
  ServantEntity_o *v142; // x24
  clsQuestCheck_o *v143; // x0
  struct UserServantEntity_o *v144; // x8
  PartyOrganizationUtility_o *v145; // x27
  __int64 v146; // x21
  __int64 v147; // x26
  int32_t v148; // w0
  System_String_o *v149; // x0
  System_String_o *v150; // x24
  int32_t v151; // w0
  EquipTargetInfo_o *v152; // x8
  int32_t v153; // w23
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  int32_t v156; // w23
  int32_t v157; // w24
  int32_t v158; // w23
  PartyOrganizationUtility_o *v159; // x0
  System_Text_StringBuilder_o *v160; // x0
  Il2CppObject *v161; // x1
  SupportSelectObject_o *memberObject; // x0
  const MethodInfo *v163; // x1
  SupportSelectObject_o *v164; // x0
  const MethodInfo *v165; // x1
  const MethodInfo *v166; // x1
  const MethodInfo *v167; // x1
  SupportSelectObject_o *v168; // x0
  __int64 v169; // x23
  int32_t classPos; // w19
  UserServantLeaderEntity_o *v171; // x0
  const MethodInfo *v172; // x1
  SupportSelectObject_o *v173; // x8
  int32_t v174; // w21
  UserServantLeaderEntity_o *v175; // x20
  UserServantLeaderEntity_o *v176; // x0
  const MethodInfo *v177; // x1
  UserServantLeaderEntity_o *v178; // x5
  SupportSelectMenu_DragSwapCallbackFunc_o *v179; // x0
  float v180; // s8
  int32_t windowHeight; // w25
  float v182; // s9
  System_String_o *v183; // x0
  CommonUI_o *v184; // x20
  System_String_o *v185; // x21
  System_String_o *v186; // x22
  System_String_o *v187; // x23
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  __int64 v191; // x4
  CommonConfirmDialog_ClickDelegate_o *v192; // x24
  System_Text_StringBuilder_o *v193; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v194; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v195; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v196; // [xsp+50h] [xbp-A0h]
  _BOOL4 v197; // [xsp+50h] [xbp-A0h]
  _BOOL4 v198; // [xsp+50h] [xbp-A0h]
  SupportSelectObject_o **v199; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+68h] [xbp-88h] BYREF
  int32_t maxFontSize; // [xsp+6Ch] [xbp-84h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v204; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v210; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v211; // 0:x0.16

  if ( (byte_40FD218 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&System_Math_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v15);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B16FFC(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v17);
    sub_B16FFC(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_10175, v19);
    sub_B16FFC(&StringLiteral_3255, v20);
    sub_B16FFC(&StringLiteral_3258, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FD218 = 1;
  }
  skillName = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  v204 = 0LL;
  maxFontSize = 0;
  minFontSize = 0;
  *(_QWORD *)maxLength = 0LL;
  v23 = sub_B170CC(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, method, v2, v3, v4);
  SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor((SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_132;
  *(_QWORD *)(v23 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  ListViewObj = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewObj(this, v30);
  v32 = (SupportSelectListViewDropObject_o **)(v23 + 16);
  *(_QWORD *)(v23 + 16) = ListViewObj;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), ListViewObj, v33, v34, v35, v36, v37, v38);
  dropObject = (System_Int32_array **)this->fields.dropObject;
  v40 = (SupportSelectListViewDropObject_o **)(v23 + 24);
  *(_QWORD *)(v23 + 24) = dropObject;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), dropObject, v41, v42, v43, v44, v45, v46);
  v47 = *(UnityEngine_Object_o **)(v23 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    return;
  v48 = (UnityEngine_Object_o *)*v40;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
    return;
  ListViewManager = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewManager(this, v49);
  *(_QWORD *)(v23 + 40) = ListViewManager;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 40), ListViewManager, v51, v52, v53, v54, v55, v56);
  v63 = *(_QWORD *)(v23 + 16);
  if ( !v63 )
    goto LABEL_132;
  v64 = *(System_Int32_array ***)(v63 + 112);
  *(_QWORD *)(v23 + 48) = v64;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 48), v64, v57, v58, v59, v60, v61, v62);
  v71 = *(_QWORD *)(v23 + 24);
  v199 = (SupportSelectObject_o **)(v23 + 48);
  if ( !v71 )
    goto LABEL_132;
  v72 = *(System_Int32_array ***)(v71 + 112);
  *(_QWORD *)(v23 + 56) = v72;
  v73 = (SupportSelectObject_o **)(v23 + 56);
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 56), v72, v65, v66, v67, v68, v69, v70);
  v75 = *(SupportSelectObject_o **)(v23 + 48);
  if ( !v75 )
    goto LABEL_132;
  LeaderInfo = SupportSelectObject__GetLeaderInfo(v75, v74);
  if ( !*v73 )
    goto LABEL_132;
  v78 = LeaderInfo;
  v79 = SupportSelectObject__GetLeaderInfo(*v73, v77);
  *(_QWORD *)actMaxRarity = 0LL;
  v204 = (System_String_o *)StringLiteral_1;
  skillName = (System_String_o *)StringLiteral_1;
  if ( !v78 )
    goto LABEL_132;
  v84 = v79;
  if ( v78->fields.userServantEntity && v78->fields.svtId >= 1 )
  {
    if ( !v79 )
      goto LABEL_132;
    equipTarget1 = v79->fields.equipTarget1;
    if ( equipTarget1 )
    {
      v86 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v87 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v206.fields.currentCryptoKey = v86;
      *(_QWORD *)&v206.fields.fakeValue = v87;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v206, 0LL) >= 1 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        v88 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        userServantEntity = v78->fields.userServantEntity;
        v196 = (PartyOrganizationUtility_o *)v88;
        if ( !userServantEntity )
          goto LABEL_132;
        v90 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v91 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v207.fields.currentCryptoKey = v90;
        *(_QWORD *)&v207.fields.fakeValue = v91;
        v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v207, 0LL);
        if ( !v78->fields.userServantEntity )
          goto LABEL_132;
        v93 = v92;
        Rarity = UserServantEntity__getRarity(v78->fields.userServantEntity, 0LL);
        v95 = v84->fields.equipTarget1;
        if ( !v95 )
          goto LABEL_132;
        v96 = Rarity;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95->fields.svtId, 0LL);
        if ( !v196 )
          goto LABEL_132;
        IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                                v196,
                                &skillName,
                                &actMaxRarity[1],
                                v93,
                                v96,
                                v97,
                                -1,
                                0LL);
        goto LABEL_38;
      }
    }
  }
  else if ( !v79 )
  {
    goto LABEL_132;
  }
  IsRarityRestriction = 0;
LABEL_38:
  if ( v84->fields.userServantEntity && v84->fields.svtId >= 1 && (v99 = v78->fields.equipTarget1) != 0LL )
  {
    v197 = IsRarityRestriction;
    v100 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
    v101 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v208.fields.currentCryptoKey = v100;
    *(_QWORD *)&v208.fields.fakeValue = v101;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v208, 0LL) < 1 )
    {
      v112 = 0;
    }
    else
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v102 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v103 = v84->fields.userServantEntity;
      v194 = (PartyOrganizationUtility_o *)v102;
      if ( !v103 )
        goto LABEL_132;
      v104 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v209.fields.currentCryptoKey = v104;
      *(_QWORD *)&v209.fields.fakeValue = v105;
      v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v209, 0LL);
      if ( !v84->fields.userServantEntity )
        goto LABEL_132;
      v107 = v106;
      v108 = UserServantEntity__getRarity(v84->fields.userServantEntity, 0LL);
      v109 = v78->fields.equipTarget1;
      if ( !v109 )
        goto LABEL_132;
      v110 = v108;
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109->fields.svtId, 0LL);
      if ( !v194 )
        goto LABEL_132;
      v112 = PartyOrganizationUtility__IsRarityRestriction(v194, &v204, actMaxRarity, v107, v110, v111, -1, 0LL);
    }
    IsRarityRestriction = v197;
  }
  else
  {
    v112 = 0;
  }
  if ( IsRarityRestriction || v112 )
  {
    v113 = IsRarityRestriction;
    v114 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v80, v81, v82, v83);
    System_Text_StringBuilder___ctor(v114, 0LL);
    v119 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v115, v116, v117, v118);
    System_Text_StringBuilder___ctor(v119, 0LL);
    v124 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v120, v121, v122, v123);
    System_Text_StringBuilder___ctor(v124, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v198 = v113;
    v193 = v124;
    v195 = v119;
    if ( v113 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_132;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v78->fields.svtId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v128 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v129 = v78->fields.userServantEntity;
      if ( !v129 )
        goto LABEL_132;
      v130 = (PartyOrganizationUtility_o *)v128;
      v131 = *(_QWORD *)&v129->fields.limitCount.fields.currentCryptoKey;
      v132 = *(_QWORD *)&v129->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v210.fields.currentCryptoKey = v131;
      *(_QWORD *)&v210.fields.fakeValue = v132;
      v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v210, 0LL);
      if ( !Entity )
        goto LABEL_132;
      Name = ServantEntity__getName(Entity, v133, -1, 0LL);
      if ( !v78->fields.userServantEntity )
        goto LABEL_132;
      v135 = Name;
      v136 = UserServantEntity__getRarity(v78->fields.userServantEntity, 0LL);
      if ( !v84->fields.equipTarget1 )
        goto LABEL_132;
      v137 = v136;
      SvtName = EquipTargetInfo__GetSvtName(v84->fields.equipTarget1, 0LL);
      if ( !v130 )
        goto LABEL_132;
      RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                               v130,
                               &maxLength[1],
                               v135,
                               v137,
                               SvtName,
                               skillName,
                               actMaxRarity[1],
                               0LL);
      v119 = v195;
      if ( !v195 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_41914240(v195, RarityInvalidMessage, 0LL);
      v124 = v193;
    }
    if ( v112 )
    {
      v140 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v140 )
        goto LABEL_132;
      v141 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v140,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !v141 )
        goto LABEL_132;
      v142 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v141,
                                  v84->fields.svtId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v143 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v144 = v84->fields.userServantEntity;
      if ( !v144 )
        goto LABEL_132;
      v145 = (PartyOrganizationUtility_o *)v143;
      v146 = *(_QWORD *)&v144->fields.limitCount.fields.currentCryptoKey;
      v147 = *(_QWORD *)&v144->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v211.fields.currentCryptoKey = v146;
      *(_QWORD *)&v211.fields.fakeValue = v147;
      v148 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v211, 0LL);
      if ( !v142 )
        goto LABEL_132;
      v149 = ServantEntity__getName(v142, v148, -1, 0LL);
      if ( !v84->fields.userServantEntity )
        goto LABEL_132;
      v150 = v149;
      v151 = UserServantEntity__getRarity(v84->fields.userServantEntity, 0LL);
      v152 = v78->fields.equipTarget1;
      if ( !v152 )
        goto LABEL_132;
      v153 = v151;
      v154 = EquipTargetInfo__GetSvtName(v152, 0LL);
      if ( !v145 )
        goto LABEL_132;
      v155 = PartyOrganizationUtility__GetRarityInvalidMessage(
               v145,
               maxLength,
               v150,
               v153,
               v154,
               v204,
               actMaxRarity[0],
               0LL);
      v124 = v193;
      if ( !v193 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_41914240(v193, v155, 0LL);
      v119 = v195;
    }
    v157 = maxLength[0];
    v156 = maxLength[1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v158 = System_Math__Max_44463768(v156, v157, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v159 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v159 )
    {
      PartyOrganizationUtility__DecisionFontSize(v159, &maxFontSize, &minFontSize, v158, 0LL);
      if ( *v199 )
      {
        if ( *v73 && v114 )
        {
          if ( (*v199)->fields.classPos >= (*v73)->fields.classPos )
          {
            System_Text_StringBuilder__Append_41918000(v114, (Il2CppObject *)v124, 0LL);
            v160 = v114;
            v161 = (Il2CppObject *)v119;
          }
          else
          {
            System_Text_StringBuilder__Append_41918000(v114, (Il2CppObject *)v119, 0LL);
            v160 = v114;
            v161 = (Il2CppObject *)v124;
          }
          System_Text_StringBuilder__Append_41918000(v160, v161, 0LL);
          v180 = v198 && v112 ? -182.5 : -162.5;
          windowHeight = v198 && v112 ? 520 : 480;
          v182 = v198 && v112 ? 40.0 : 30.0;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v183 = LocalizationManager__Get((System_String_o *)StringLiteral_10175, 0LL);
          System_Text_StringBuilder__Append_41914240(v114, v183, 0LL);
          v184 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v185 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v114->klass->vtable._3_ToString.method)(
                                      v114,
                                      v114->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v186 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
          v187 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
          v192 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                          CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                          v188,
                                                          v189,
                                                          v190,
                                                          v191);
          CommonConfirmDialog_ClickDelegate___ctor(
            v192,
            (Il2CppObject *)v23,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( v184 )
          {
            CommonUI__OpenConfirmDialog_18237500(
              v184,
              (System_String_o *)StringLiteral_1,
              v185,
              v186,
              v187,
              v192,
              maxFontSize,
              minFontSize,
              v182,
              728,
              2,
              windowHeight,
              v180,
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
LABEL_132:
    sub_B170D4();
  }
  if ( !*v32 )
    goto LABEL_132;
  memberObject = (*v32)->fields.memberObject;
  if ( !memberObject )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(memberObject, v80);
  if ( !*v40 )
    goto LABEL_132;
  v164 = (*v40)->fields.memberObject;
  if ( !v164 )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(v164, v163);
  if ( !*v32 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj(*v32, v165);
  if ( !*v40 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj(*v40, v166);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  v168 = *v199;
  if ( !*v199 )
    goto LABEL_132;
  v169 = *(_QWORD *)(v23 + 40);
  classPos = v168->fields.classPos;
  v171 = SupportSelectObject__GetLeaderInfo(v168, v167);
  v173 = *v73;
  if ( !*v73 )
    goto LABEL_132;
  v174 = v173->fields.classPos;
  v175 = v171;
  v176 = SupportSelectObject__GetLeaderInfo(v173, v172);
  if ( !v169 )
    goto LABEL_132;
  v178 = v176;
  v179 = *(SupportSelectMenu_DragSwapCallbackFunc_o **)(v169 + 352);
  if ( v179 )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(v179, 1, classPos, v175, v174, v178, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v177);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Component_o *v22; // x0
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_Collider_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FD210 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD210 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_WebViewObject = this->fields.listViewObject;
  else
    Component_WebViewObject = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v15 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v15,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v22 = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B170D4();
  }
  transform = UnityEngine_Component__get_transform(v22, 0LL);
  this->fields.mTrans = transform;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_40FD213 & 1) == 0 )
  {
    sub_B16FFC(&UICamera_TypeInfo, method);
    byte_40FD213 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
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
  SupportSelectListViewDropObject_o *from; // x0
  SupportSelectListViewDropObject_o *to; // x0
  SupportSelectListViewDropObject_o *v7; // x0
  SupportSelectListViewDropObject_o *v8; // x0
  SupportSelectItemDrawDrop_o *_4__this; // x0
  struct SupportSelectObject_o *fromMember; // x0
  SupportSelectListViewManager_o *manager; // x20
  int32_t classPos; // w21
  UserServantLeaderEntity_o *LeaderInfo; // x0
  struct SupportSelectObject_o *toMember; // x8
  int32_t v15; // w23
  UserServantLeaderEntity_o *v16; // x22
  UserServantLeaderEntity_o *v17; // x0
  SupportSelectItemDrawDrop_o *v18; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F7A9F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7A9F = 1;
  }
  from = this->fields.from;
  if ( !from )
    goto LABEL_16;
  SupportSelectListViewDropObject__ShowEquip(from, 0LL);
  to = this->fields.to;
  if ( !to )
    goto LABEL_16;
  SupportSelectListViewDropObject__ShowEquip(to, 0LL);
  v7 = this->fields.from;
  if ( !v7 )
    goto LABEL_16;
  SupportSelectListViewDropObject__DestroyDragObj(v7, 0LL);
  v8 = this->fields.to;
  if ( !v8 )
    goto LABEL_16;
  SupportSelectListViewDropObject__DestroyDragObj(v8, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SupportSelectItemDrawDrop____n__0(_4__this, 0LL, 0LL);
  if ( isDecide )
  {
    fromMember = this->fields.fromMember;
    if ( fromMember )
    {
      manager = this->fields.manager;
      classPos = fromMember->fields.classPos;
      LeaderInfo = SupportSelectObject__GetLeaderInfo(fromMember, 0LL);
      toMember = this->fields.toMember;
      if ( toMember )
      {
        v15 = toMember->fields.classPos;
        v16 = LeaderInfo;
        v17 = SupportSelectObject__GetLeaderInfo(this->fields.toMember, 0LL);
        if ( manager )
        {
          SupportSelectListViewManager__OnSwapEquip(manager, 1, classPos, v16, v15, v17, 0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_13:
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_16;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(v18, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}