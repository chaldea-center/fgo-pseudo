void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB3CA & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectItemDrawDrop_TypeInfo, v1, v2, v3);
    byte_42EB3CA = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *ListViewObj; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x21
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v18; // x0
  float z; // s10
  UnityEngine_Component_o *v20; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EB3C9 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectItemDrawDrop_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10112/*"OnFinishedReturnMove"*/, v5, v6, v7);
    byte_42EB3C9 = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_13;
  v10 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v10 )
    goto LABEL_13;
  v11 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v10, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v35 = UnityEngine_Transform__InverseTransformPoint(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
  dragObject = this->fields.dragObject;
  x = v35.fields.x;
  y = v35.fields.y;
  v18 = SupportSelectItemDrawDrop_TypeInfo;
  z = v35.fields.z;
  if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v18 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v18->static_fields->ACTION_TIME, v36, 0LL);
  if ( !ListViewObj )
LABEL_13:
    sub_B5D69C(ListViewObj, v9);
  v20 = ListViewObj;
  LODWORD(ListViewObj[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20[3].klass = (UnityEngine_Component_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v20[3], gameObject, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_10112/*"OnFinishedReturnMove"*/;
  v20[3].monitor = (void *)StringLiteral_10112/*"OnFinishedReturnMove"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v20[3].monitor, v28, v29, v30, v31, v32, v33, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v21; // x0
  float z; // s10
  UnityEngine_GameObject_o *v23; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  SupportSelectListViewDropObject_o *v48; // x19
  int v49; // s0
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EB3C7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)target, (_DWORD)method, v3);
    sub_B5D5C4(&SupportSelectItemDrawDrop_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10113/*"OnFinishedSwapMove"*/, v9, v10, v11);
    byte_42EB3C7 = 1;
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
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
    if ( !dragObject )
      goto LABEL_23;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                               (UnityEngine_Transform_o *)dragObject,
                                               0LL);
    if ( !target )
      goto LABEL_23;
    v14 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v14 )
      goto LABEL_23;
    v52 = UnityEngine_Transform__InverseTransformPoint(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
    v18 = this->fields.dragObject;
    x = v52.fields.x;
    y = v52.fields.y;
    v21 = SupportSelectItemDrawDrop_TypeInfo;
    z = v52.fields.z;
    if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v21 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v53.fields.x = x;
    v53.fields.y = y;
    v53.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v21->static_fields->ACTION_TIME, v53, 0LL);
    if ( !dragObject )
      goto LABEL_23;
    v23 = dragObject;
    LODWORD(dragObject[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_10113/*"OnFinishedSwapMove"*/;
    v23[3].monitor = (void *)StringLiteral_10113/*"OnFinishedSwapMove"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v38);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v41 = (UnityEngine_Component_o *)ListViewObj;
    sub_B5D560(
      (BattleServantConfConponent_o *)p_dropObject,
      (System_Int32_array **)target,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v12), !v41)
      || (v48 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v41, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v49 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v48) )
    {
LABEL_23:
      sub_B5D69C(dragObject, v12);
    }
    SupportSelectListViewDropObject__DoSwap(
      v48,
      *(UnityEngine_Vector3_o *)&v49,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v12);
  }
}


SupportSelectListViewManager_o *__fastcall SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v6; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v8; // x11

  if ( (byte_42EB3C2 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3C2 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_B5D69C(0LL, v6);
  manager = ListViewObj->fields.manager;
  if ( !manager )
    return 0LL;
  v8 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == SupportSelectListViewManager_TypeInfo )
    return (SupportSelectListViewManager_o *)ListViewObj->fields.manager;
  return 0LL;
}


SupportSelectListViewDropObject_o *__fastcall SupportSelectItemDrawDrop__GetListViewObj(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v6; // x11

  if ( (byte_42EB3C1 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectListViewDropObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3C1 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    return 0LL;
  v6 = *(&SupportSelectListViewDropObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (SupportSelectListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] == SupportSelectListViewDropObject_TypeInfo )
    return (SupportSelectListViewDropObject_o *)this->fields.mListViewObject;
  return 0LL;
}


bool __fastcall SupportSelectItemDrawDrop__IsSameObject(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v8; // x1
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v10; // x19

  if ( (byte_42EB3C6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42EB3C6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v6);
    if ( !ListViewObj || !obj )
      goto LABEL_21;
    memberObject = ListViewObj->fields.memberObject;
    v10 = obj->fields.memberObject;
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
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v10,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v10 )
          return memberObject->fields.classPos == v10->fields.classPos;
LABEL_21:
        sub_B5D69C(ListViewObj, v8);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_42EB3C5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___,
      (_DWORD)surface,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42EB3C5 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B5D560(
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
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v13 )
    goto LABEL_18;
  if ( !surface )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( !v13 )
    goto LABEL_18;
  if ( !Component_srcLineSprite )
LABEL_20:
    sub_B5D69C(v13, v14);
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)klass, v17) )
  {
LABEL_18:
    SupportSelectItemDrawDrop__DoReturnMove(this, v14);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)klass, v18);
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UICamera_c *v12; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v15; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  SupportSelectListViewManager_o *v20; // x19

  if ( (byte_42EB3C4 & 1) == 0 )
  {
    sub_B5D5C4(&UICamera_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3C4 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  this->fields.isDrag = 1;
  v12 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v12 = UICamera_TypeInfo;
  }
  currentTouch = v12->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_15:
        sub_B5D69C(ListViewManager, v15);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.surface,
      (System_Int32_array **)dragged,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v18);
  if ( !ListViewManager )
    goto LABEL_15;
  v20 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v19);
  if ( !ListViewObj )
    goto LABEL_15;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_15;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v15);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v20->klass->vtable._7_ItemDragStart.method)(
    v20,
    v20->klass->vtable._8_ItemDragEnd.methodPtr);
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
    sub_B5D69C(0LL, v3);
  v5 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 1, v4);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v5->klass->vtable._8_ItemDragEnd.method)(
    v5,
    v5->klass->vtable._9_SetSortKind.methodPtr);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedReturnMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  const MethodInfo *v4; // x1
  SupportSelectListViewDropObject_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj
    || (v5 = ListViewObj, (ListViewObj = (SupportSelectListViewDropObject_o *)ListViewObj->fields.memberObject) == 0LL) )
  {
    sub_B5D69C(ListViewObj, v4);
  }
  SupportSelectObject__ShowEquip((SupportSelectObject_o *)ListViewObj, v4);
  SupportSelectListViewDropObject__DestroyDragObj(v5, v6);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v7);
}


void __fastcall SupportSelectItemDrawDrop__OnFinishedSwapMove(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  __int64 v56; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x1
  System_Int32_array **ListViewObj; // x0
  __int64 v67; // x27
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **dropObject; // x1
  UnityEngine_Object_o **v75; // x26
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Object_o *v82; // x20
  UnityEngine_Object_o *v83; // x20
  const MethodInfo *v84; // x1
  System_Int32_array **ListViewManager; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x8
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x8
  System_Int32_array **v107; // x1
  SupportSelectObject_o **v108; // x20
  UnityEngine_Object_o *v109; // x23
  UnityEngine_Object_o *v110; // x25
  struct SupportSelectItemDraw_o *itemDraw; // x8
  struct ServantClassIconComponent_o *servantClassIcon; // x21
  struct UILabel_o *levelLabel; // x28
  __int64 v114; // x8
  __int64 v115; // x21
  __int64 v116; // x28
  int32_t v117; // w21
  char *monitor; // x8
  int32_t v119; // w28
  int32_t v120; // w5
  _QWORD *v121; // x8
  __int64 v122; // x21
  __int64 v123; // x28
  __int64 v124; // x8
  __int64 v125; // x21
  __int64 v126; // x28
  int32_t v127; // w21
  char *v128; // x8
  int32_t v129; // w28
  int32_t v130; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v132; // w24
  System_Text_StringBuilder_o *v133; // x22
  System_Text_StringBuilder_o *v134; // x26
  System_Text_StringBuilder_o *v135; // x21
  ServantEntity_o *Entity; // x24
  __int64 v137; // x8
  PartyOrganizationUtility_o *v138; // x27
  __int64 v139; // x21
  __int64 v140; // x26
  System_String_o *v141; // x24
  int32_t v142; // w26
  ServantEntity_o *v143; // x24
  __int64 v144; // x8
  PartyOrganizationUtility_o *v145; // x27
  __int64 v146; // x21
  __int64 v147; // x26
  System_String_o *v148; // x24
  EquipTargetInfo_o *v149; // x8
  int32_t v150; // w23
  int32_t v151; // w23
  int32_t v152; // w24
  int32_t v153; // w23
  System_Text_StringBuilder_o *v154; // x0
  Il2CppObject *v155; // x1
  __int64 v156; // x23
  int32_t classPos; // w19
  SupportSelectObject_o *v158; // x8
  int32_t v159; // w21
  UserServantLeaderEntity_o *v160; // x20
  UserServantLeaderEntity_o *v161; // x5
  SupportSelectMenu_DragSwapCallbackFunc_o *v162; // x0
  float v163; // s8
  int32_t windowHeight; // w25
  float v165; // s9
  System_String_o *v166; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v168; // x21
  System_String_o *v169; // x22
  System_String_o *v170; // x23
  CommonConfirmDialog_ClickDelegate_o *v171; // x24
  System_Text_StringBuilder_o *v172; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v173; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v174; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v175; // [xsp+50h] [xbp-A0h]
  unsigned int v176; // [xsp+50h] [xbp-A0h]
  int v177; // [xsp+50h] [xbp-A0h]
  __int64 v178; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+68h] [xbp-88h] BYREF
  int32_t maxFontSize; // [xsp+6Ch] [xbp-84h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v183; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  if ( (byte_42EB3C8 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Math_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v38, v39, v40);
    sub_B5D5C4(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_1/*""*/, v53, v54, v55);
    byte_42EB3C8 = 1;
  }
  skillName = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  v183 = 0LL;
  maxFontSize = 0;
  minFontSize = 0;
  *(_QWORD *)maxLength = 0LL;
  v56 = sub_B5D694(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor((SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v56, 0LL);
  if ( !v56 )
    goto LABEL_132;
  *(_QWORD *)(v56 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 32), (System_Int32_array **)this, v59, v60, v61, v62, v63, v64);
  ListViewObj = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewObj(this, v65);
  v67 = v56 + 16;
  *(_QWORD *)(v56 + 16) = ListViewObj;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 16), ListViewObj, v68, v69, v70, v71, v72, v73);
  dropObject = (System_Int32_array **)this->fields.dropObject;
  v75 = (UnityEngine_Object_o **)(v56 + 24);
  *(_QWORD *)(v56 + 24) = dropObject;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 24), dropObject, v76, v77, v78, v79, v80, v81);
  v82 = *(UnityEngine_Object_o **)(v56 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
    return;
  v83 = *v75;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
    return;
  ListViewManager = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewManager(this, v84);
  *(_QWORD *)(v56 + 40) = ListViewManager;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 40), ListViewManager, v86, v87, v88, v89, v90, v91);
  v98 = *(_QWORD *)(v56 + 16);
  if ( !v98 )
    goto LABEL_132;
  v99 = *(System_Int32_array ***)(v98 + 112);
  *(_QWORD *)(v56 + 48) = v99;
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 48), v99, v92, v93, v94, v95, v96, v97);
  v106 = *(_QWORD *)(v56 + 24);
  v178 = v56 + 48;
  if ( !v106 )
    goto LABEL_132;
  v107 = *(System_Int32_array ***)(v106 + 112);
  *(_QWORD *)(v56 + 56) = v107;
  v108 = (SupportSelectObject_o **)(v56 + 56);
  sub_B5D560((BattleServantConfConponent_o *)(v56 + 56), v107, v100, v101, v102, v103, v104, v105);
  LeaderInfo = *(SupportSelectObject_o **)(v56 + 48);
  if ( !LeaderInfo )
    goto LABEL_132;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v58);
  if ( !*v108 )
    goto LABEL_132;
  v109 = (UnityEngine_Object_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v108, v58);
  *(_QWORD *)actMaxRarity = 0LL;
  v183 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v109 )
    goto LABEL_132;
  v110 = (UnityEngine_Object_o *)LeaderInfo;
  if ( *(_QWORD *)&v109->fields.m_CachedPtr && v109[2].fields.m_CachedPtr >= 1 )
  {
    if ( !LeaderInfo )
      goto LABEL_132;
    itemDraw = LeaderInfo->fields.itemDraw;
    if ( itemDraw )
    {
      servantClassIcon = itemDraw->fields.servantClassIcon;
      levelLabel = itemDraw->fields.levelLabel;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v185.fields.currentCryptoKey = servantClassIcon;
      *(_QWORD *)&v185.fields.fakeValue = levelLabel;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v185, 0LL) >= 1 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v114 = *(_QWORD *)&v109->fields.m_CachedPtr;
        v175 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v114 )
          goto LABEL_132;
        v115 = *(_QWORD *)(v114 + 80);
        v116 = *(_QWORD *)(v114 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v186.fields.currentCryptoKey = v115;
        *(_QWORD *)&v186.fields.fakeValue = v116;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v186,
                                                0LL);
        if ( !*(_QWORD *)&v109->fields.m_CachedPtr )
          goto LABEL_132;
        v117 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v109->fields.m_CachedPtr,
                                                0LL);
        monitor = (char *)v110[1].monitor;
        if ( !monitor )
          goto LABEL_132;
        v119 = (int)LeaderInfo;
        v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(monitor + 56),
                 0LL);
        LeaderInfo = (SupportSelectObject_o *)v175;
        if ( !v175 )
          goto LABEL_132;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v175,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v117,
                                                v119,
                                                v120,
                                                -1,
                                                0LL);
        goto LABEL_38;
      }
    }
  }
  else if ( !LeaderInfo )
  {
    goto LABEL_132;
  }
  LeaderInfo = 0LL;
LABEL_38:
  if ( *(_QWORD *)&v110->fields.m_CachedPtr && v110[2].fields.m_CachedPtr >= 1 && (v121 = v109[1].monitor) != 0LL )
  {
    v176 = (unsigned int)LeaderInfo;
    v122 = v121[7];
    v123 = v121[8];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v187.fields.currentCryptoKey = v122;
    *(_QWORD *)&v187.fields.fakeValue = v123;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v187, 0LL) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v124 = *(_QWORD *)&v110->fields.m_CachedPtr;
      v173 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v124 )
        goto LABEL_132;
      v125 = *(_QWORD *)(v124 + 80);
      v126 = *(_QWORD *)(v124 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v188.fields.currentCryptoKey = v125;
      *(_QWORD *)&v188.fields.fakeValue = v126;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v188,
                                              0LL);
      if ( !*(_QWORD *)&v110->fields.m_CachedPtr )
        goto LABEL_132;
      v127 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v110->fields.m_CachedPtr,
                                              0LL);
      v128 = (char *)v109[1].monitor;
      if ( !v128 )
        goto LABEL_132;
      v129 = (int)LeaderInfo;
      v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v128 + 56),
               0LL);
      LeaderInfo = (SupportSelectObject_o *)v173;
      if ( !v173 )
        goto LABEL_132;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v173,
                              &v183,
                              actMaxRarity,
                              v127,
                              v129,
                              v130,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v176;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v132 = (int)LeaderInfo;
    v133 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v133, 0LL);
    v134 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v134, 0LL);
    v135 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v135, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v177 = v132;
    v172 = v135;
    v174 = v134;
    if ( (v132 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                    v109[2].fields.m_CachedPtr,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v137 = *(_QWORD *)&v109->fields.m_CachedPtr;
      if ( !v137 )
        goto LABEL_132;
      v138 = (PartyOrganizationUtility_o *)LeaderInfo;
      v139 = *(_QWORD *)(v137 + 96);
      v140 = *(_QWORD *)(v137 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v189.fields.currentCryptoKey = v139;
      *(_QWORD *)&v189.fields.fakeValue = v140;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v189,
                                              0LL);
      if ( !Entity )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(Entity, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v109->fields.m_CachedPtr )
        goto LABEL_132;
      v141 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v109->fields.m_CachedPtr,
                                              0LL);
      if ( !v110[1].monitor )
        goto LABEL_132;
      v142 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName((EquipTargetInfo_o *)v110[1].monitor, 0LL);
      if ( !v138 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v138,
                                              &maxLength[1],
                                              v141,
                                              v142,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v134 = v174;
      if ( !v174 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42953744(v174, (System_String_o *)LeaderInfo, 0LL);
      v135 = v172;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      v143 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                  v110[2].fields.m_CachedPtr,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v144 = *(_QWORD *)&v110->fields.m_CachedPtr;
      if ( !v144 )
        goto LABEL_132;
      v145 = (PartyOrganizationUtility_o *)LeaderInfo;
      v146 = *(_QWORD *)(v144 + 96);
      v147 = *(_QWORD *)(v144 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v190.fields.currentCryptoKey = v146;
      *(_QWORD *)&v190.fields.fakeValue = v147;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v190,
                                              0LL);
      if ( !v143 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(v143, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v110->fields.m_CachedPtr )
        goto LABEL_132;
      v148 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v110->fields.m_CachedPtr,
                                              0LL);
      v149 = (EquipTargetInfo_o *)v109[1].monitor;
      if ( !v149 )
        goto LABEL_132;
      v150 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v149, 0LL);
      if ( !v145 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v145,
                                              maxLength,
                                              v148,
                                              v150,
                                              (System_String_o *)LeaderInfo,
                                              v183,
                                              actMaxRarity[0],
                                              0LL);
      v135 = v172;
      if ( !v172 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42953744(v172, (System_String_o *)LeaderInfo, 0LL);
      v134 = v174;
    }
    v152 = maxLength[0];
    v151 = maxLength[1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v153 = System_Math__Max_45149472(v151, v152, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &maxFontSize,
        &minFontSize,
        v153,
        0LL);
      if ( *(_QWORD *)v178 )
      {
        if ( *v108 && v133 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v178 + 52LL) >= (*v108)->fields.classPos )
          {
            System_Text_StringBuilder__Append_42957504(v133, (Il2CppObject *)v135, 0LL);
            v154 = v133;
            v155 = (Il2CppObject *)v134;
          }
          else
          {
            System_Text_StringBuilder__Append_42957504(v133, (Il2CppObject *)v134, 0LL);
            v154 = v133;
            v155 = (Il2CppObject *)v135;
          }
          System_Text_StringBuilder__Append_42957504(v154, v155, 0LL);
          v163 = (v177 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v177 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v165 = (v177 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v166 = LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_42953744(v133, v166, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v168 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v133->klass->vtable._3_ToString.method)(
                                      v133,
                                      v133->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v169 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
          v171 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v171,
            (Il2CppObject *)v56,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_18202048(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v168,
              v169,
              v170,
              v171,
              maxFontSize,
              minFontSize,
              v165,
              728,
              2,
              windowHeight,
              v163,
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
    sub_B5D69C(LeaderInfo, v58);
  }
  if ( !*(_QWORD *)v67 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v67 + 112LL);
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v58);
  if ( !*v75 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)&(*v75)[4].fields.m_CachedPtr;
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v58);
  LeaderInfo = *(SupportSelectObject_o **)v67;
  if ( !*(_QWORD *)v67 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v58);
  LeaderInfo = (SupportSelectObject_o *)*v75;
  if ( !*v75 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v58);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v178;
  if ( !*(_QWORD *)v178 )
    goto LABEL_132;
  v156 = *(_QWORD *)(v56 + 40);
  classPos = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v58);
  v158 = *v108;
  if ( !*v108 )
    goto LABEL_132;
  v159 = v158->fields.classPos;
  v160 = (UserServantLeaderEntity_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v158, v58);
  if ( !v156 )
    goto LABEL_132;
  v161 = (UserServantLeaderEntity_o *)LeaderInfo;
  v162 = *(SupportSelectMenu_DragSwapCallbackFunc_o **)(v156 + 352);
  if ( v162 )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(v162, 1, classPos, v160, v159, v161, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v58);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  __int64 v22; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct UnityEngine_Collider_o *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42EB3C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EB3C0 = 1;
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
                                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v24 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v24,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B5D69C(mListViewObject, v22);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_42EB3C3 & 1) == 0 )
  {
    sub_B5D5C4(&UICamera_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB3C3 = 1;
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
  __int64 v3; // x3
  void *from; // x0
  SupportSelectListViewManager_o *manager; // x20
  int32_t v8; // w21
  struct SupportSelectObject_o *toMember; // x8
  int32_t classPos; // w23
  UserServantLeaderEntity_o *v11; // x22

  if ( (byte_42E6486 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E6486 = 1;
  }
  from = this->fields.from;
  if ( !from )
    goto LABEL_16;
  SupportSelectListViewDropObject__ShowEquip((SupportSelectListViewDropObject_o *)from, 0LL);
  from = this->fields.to;
  if ( !from )
    goto LABEL_16;
  SupportSelectListViewDropObject__ShowEquip((SupportSelectListViewDropObject_o *)from, 0LL);
  from = this->fields.from;
  if ( !from )
    goto LABEL_16;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)from, 0LL);
  from = this->fields.to;
  if ( !from )
    goto LABEL_16;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)from, 0LL);
  from = this->fields.__4__this;
  if ( !from )
    goto LABEL_16;
  SupportSelectItemDrawDrop____n__0((SupportSelectItemDrawDrop_o *)from, 0LL, 0LL);
  if ( isDecide )
  {
    from = this->fields.fromMember;
    if ( from )
    {
      manager = this->fields.manager;
      v8 = *((_DWORD *)from + 13);
      from = SupportSelectObject__GetLeaderInfo((SupportSelectObject_o *)from, 0LL);
      toMember = this->fields.toMember;
      if ( toMember )
      {
        classPos = toMember->fields.classPos;
        v11 = (UserServantLeaderEntity_o *)from;
        from = SupportSelectObject__GetLeaderInfo(this->fields.toMember, 0LL);
        if ( manager )
        {
          SupportSelectListViewManager__OnSwapEquip(
            manager,
            1,
            v8,
            v11,
            classPos,
            (UserServantLeaderEntity_o *)from,
            0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_B5D69C(from, isDecide);
  }
LABEL_13:
  from = this->fields.__4__this;
  if ( !from )
    goto LABEL_16;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)from, 0LL);
  from = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !from )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)from, 0LL);
}