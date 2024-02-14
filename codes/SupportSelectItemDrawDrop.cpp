void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42170A0 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectItemDrawDrop_TypeInfo, v1);
    byte_42170A0 = 1;
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
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v13; // x0
  float z; // s10
  UnityEngine_Component_o *v15; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_421709F & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectItemDrawDrop_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10030/*"OnFinishedReturnMove"*/, v3);
    byte_421709F = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_13;
  v5 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v5 )
    goto LABEL_13;
  v6 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v5, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v6 )
    goto LABEL_13;
  v30 = UnityEngine_Transform__InverseTransformPoint(v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
  dragObject = this->fields.dragObject;
  x = v30.fields.x;
  y = v30.fields.y;
  v13 = SupportSelectItemDrawDrop_TypeInfo;
  z = v30.fields.z;
  if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v13 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v13->static_fields->ACTION_TIME, v31, 0LL);
  if ( !ListViewObj )
LABEL_13:
    sub_B0D97C(ListViewObj);
  v15 = ListViewObj;
  LODWORD(ListViewObj[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].klass = (UnityEngine_Component_c *)gameObject;
  sub_B0D840((BattleServantConfConponent_o *)&v15[3], gameObject, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_10030/*"OnFinishedReturnMove"*/;
  v15[3].monitor = (void *)StringLiteral_10030/*"OnFinishedReturnMove"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v15[3].monitor, v23, v24, v25, v26, v27, v28, v29);
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
  UnityEngine_Transform_o *v8; // x21
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v15; // x0
  float z; // s10
  UnityEngine_GameObject_o *v17; // x21
  System_Int32_array **gameObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  SupportSelectListViewDropObject_o *v43; // x19
  const MethodInfo *v44; // x1
  int v45; // s0
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_421709D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, target);
    sub_B0D8A4(&SupportSelectItemDrawDrop_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_10031/*"OnFinishedSwapMove"*/, v6);
    byte_421709D = 1;
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
    v8 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v8 )
      goto LABEL_23;
    v48 = UnityEngine_Transform__InverseTransformPoint(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = this->fields.dragObject;
    x = v48.fields.x;
    y = v48.fields.y;
    v15 = SupportSelectItemDrawDrop_TypeInfo;
    z = v48.fields.z;
    if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v15 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v49.fields.x = x;
    v49.fields.y = y;
    v49.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v12, v15->static_fields->ACTION_TIME, v49, 0LL);
    if ( !dragObject )
      goto LABEL_23;
    v17 = dragObject;
    LODWORD(dragObject[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v17[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B0D840((BattleServantConfConponent_o *)&v17[3], gameObject, v19, v20, v21, v22, v23, v24);
    v25 = (System_Int32_array **)StringLiteral_10031/*"OnFinishedSwapMove"*/;
    v17[3].monitor = (void *)StringLiteral_10031/*"OnFinishedSwapMove"*/;
    sub_B0D840((BattleServantConfConponent_o *)&v17[3].monitor, v25, v26, v27, v28, v29, v30, v31);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v32);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v35 = (UnityEngine_Component_o *)ListViewObj;
    sub_B0D840(
      (BattleServantConfConponent_o *)p_dropObject,
      (System_Int32_array **)target,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v42), !v35)
      || (v43 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v35, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v45 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v43) )
    {
LABEL_23:
      sub_B0D97C(dragObject);
    }
    SupportSelectListViewDropObject__DoSwap(
      v43,
      *(UnityEngine_Vector3_o *)&v45,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v44);
  }
}


SupportSelectListViewManager_o *__fastcall SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11

  if ( (byte_4217098 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectListViewManager_TypeInfo, method);
    byte_4217098 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_B0D97C(0LL);
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

  if ( (byte_4217097 & 1) == 0 )
  {
    sub_B0D8A4(&SupportSelectListViewDropObject_TypeInfo, method);
    byte_4217097 = 1;
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

  if ( (byte_421709C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, obj);
    byte_421709C = 1;
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
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v8,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v8 )
          return memberObject->fields.classPos == v8->fields.classPos;
LABEL_21:
        sub_B0D97C(ListViewObj);
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
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_421709B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_421709B = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B0D840(
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
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_18;
  if ( !surface )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( !v11 )
    goto LABEL_18;
  if ( !Component_srcLineSprite )
LABEL_20:
    sub_B0D97C(v11);
  klass = (UnityEngine_Object_o *)Component_srcLineSprite[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)klass, v15) )
  {
LABEL_18:
    SupportSelectItemDrawDrop__DoReturnMove(this, v12);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)klass, v16);
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
  SupportSelectListViewManager_o *ListViewManager; // x0
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  SupportSelectListViewManager_o *v17; // x19
  const MethodInfo *v18; // x1

  if ( (byte_421709A & 1) == 0 )
  {
    sub_B0D8A4(&UICamera_TypeInfo, method);
    byte_421709A = 1;
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
        sub_B0D97C(ListViewManager);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B0D840(
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
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v15);
  if ( !ListViewManager )
    goto LABEL_15;
  v17 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v16);
  if ( !ListViewObj )
    goto LABEL_15;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_15;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v18);
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
    sub_B0D97C(0LL);
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
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj
    || (v5 = ListViewObj, (ListViewObj = (SupportSelectListViewDropObject_o *)ListViewObj->fields.memberObject) == 0LL) )
  {
    sub_B0D97C(ListViewObj);
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
  __int64 v2; // x2
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  System_Int32_array **ListViewObj; // x0
  __int64 v31; // x27
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **dropObject; // x1
  UnityEngine_Object_o **v39; // x26
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *v46; // x20
  UnityEngine_Object_o *v47; // x20
  const MethodInfo *v48; // x1
  System_Int32_array **ListViewManager; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x8
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x8
  System_Int32_array **v71; // x1
  SupportSelectObject_o **v72; // x20
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x1
  UnityEngine_Object_o *v75; // x23
  const MethodInfo *v76; // x1
  __int64 v77; // x2
  UnityEngine_Object_o *v78; // x25
  struct SupportSelectItemDraw_o *itemDraw; // x8
  struct ServantClassIconComponent_o *servantClassIcon; // x21
  struct UILabel_o *levelLabel; // x28
  __int64 v82; // x8
  __int64 v83; // x21
  __int64 v84; // x28
  int32_t v85; // w21
  char *monitor; // x8
  int32_t v87; // w28
  int32_t v88; // w5
  _QWORD *v89; // x8
  __int64 v90; // x21
  __int64 v91; // x28
  __int64 v92; // x8
  __int64 v93; // x21
  __int64 v94; // x28
  int32_t v95; // w21
  char *v96; // x8
  int32_t v97; // w28
  int32_t v98; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v100; // w24
  System_Text_StringBuilder_o *v101; // x22
  __int64 v102; // x1
  __int64 v103; // x2
  System_Text_StringBuilder_o *v104; // x26
  __int64 v105; // x1
  __int64 v106; // x2
  System_Text_StringBuilder_o *v107; // x21
  ServantEntity_o *Entity; // x24
  __int64 v109; // x8
  PartyOrganizationUtility_o *v110; // x27
  __int64 v111; // x21
  __int64 v112; // x26
  System_String_o *v113; // x24
  int32_t v114; // w26
  ServantEntity_o *v115; // x24
  __int64 v116; // x8
  PartyOrganizationUtility_o *v117; // x27
  __int64 v118; // x21
  __int64 v119; // x26
  System_String_o *v120; // x24
  EquipTargetInfo_o *v121; // x8
  int32_t v122; // w23
  int32_t v123; // w23
  int32_t v124; // w24
  int32_t v125; // w23
  System_Text_StringBuilder_o *v126; // x0
  Il2CppObject *v127; // x1
  const MethodInfo *v128; // x1
  const MethodInfo *v129; // x1
  const MethodInfo *v130; // x1
  const MethodInfo *v131; // x1
  __int64 v132; // x23
  int32_t classPos; // w19
  const MethodInfo *v134; // x1
  SupportSelectObject_o *v135; // x8
  int32_t v136; // w21
  UserServantLeaderEntity_o *v137; // x20
  const MethodInfo *v138; // x1
  UserServantLeaderEntity_o *v139; // x5
  SupportSelectMenu_DragSwapCallbackFunc_o *v140; // x0
  float v141; // s8
  int32_t windowHeight; // w25
  float v143; // s9
  System_String_o *v144; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v146; // x21
  System_String_o *v147; // x22
  System_String_o *v148; // x23
  __int64 v149; // x1
  __int64 v150; // x2
  CommonConfirmDialog_ClickDelegate_o *v151; // x24
  System_Text_StringBuilder_o *v152; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v153; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v154; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v155; // [xsp+50h] [xbp-A0h]
  unsigned int v156; // [xsp+50h] [xbp-A0h]
  int v157; // [xsp+50h] [xbp-A0h]
  __int64 v158; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+68h] [xbp-88h] BYREF
  int32_t maxFontSize; // [xsp+6Ch] [xbp-84h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v163; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16

  if ( (byte_421709E & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&System_Math_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v14);
    sub_B0D8A4(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v15);
    sub_B0D8A4(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v17);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v18);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_421709E = 1;
  }
  skillName = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  v163 = 0LL;
  maxFontSize = 0;
  minFontSize = 0;
  *(_QWORD *)maxLength = 0LL;
  v21 = sub_B0D974(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, method, v2);
  SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor((SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_132;
  *(_QWORD *)(v21 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  ListViewObj = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewObj(this, v29);
  v31 = v21 + 16;
  *(_QWORD *)(v21 + 16) = ListViewObj;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), ListViewObj, v32, v33, v34, v35, v36, v37);
  dropObject = (System_Int32_array **)this->fields.dropObject;
  v39 = (UnityEngine_Object_o **)(v21 + 24);
  *(_QWORD *)(v21 + 24) = dropObject;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 24), dropObject, v40, v41, v42, v43, v44, v45);
  v46 = *(UnityEngine_Object_o **)(v21 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
    return;
  v47 = *v39;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    return;
  ListViewManager = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewManager(this, v48);
  *(_QWORD *)(v21 + 40) = ListViewManager;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 40), ListViewManager, v50, v51, v52, v53, v54, v55);
  v62 = *(_QWORD *)(v21 + 16);
  if ( !v62 )
    goto LABEL_132;
  v63 = *(System_Int32_array ***)(v62 + 112);
  *(_QWORD *)(v21 + 48) = v63;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 48), v63, v56, v57, v58, v59, v60, v61);
  v70 = *(_QWORD *)(v21 + 24);
  v158 = v21 + 48;
  if ( !v70 )
    goto LABEL_132;
  v71 = *(System_Int32_array ***)(v70 + 112);
  *(_QWORD *)(v21 + 56) = v71;
  v72 = (SupportSelectObject_o **)(v21 + 56);
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 56), v71, v64, v65, v66, v67, v68, v69);
  LeaderInfo = *(SupportSelectObject_o **)(v21 + 48);
  if ( !LeaderInfo )
    goto LABEL_132;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v73);
  if ( !*v72 )
    goto LABEL_132;
  v75 = (UnityEngine_Object_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v72, v74);
  *(_QWORD *)actMaxRarity = 0LL;
  v163 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v75 )
    goto LABEL_132;
  v78 = (UnityEngine_Object_o *)LeaderInfo;
  if ( *(_QWORD *)&v75->fields.m_CachedPtr && v75[2].fields.m_CachedPtr >= 1 )
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
      *(_QWORD *)&v165.fields.currentCryptoKey = servantClassIcon;
      *(_QWORD *)&v165.fields.fakeValue = levelLabel;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v165, 0LL) >= 1 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v82 = *(_QWORD *)&v75->fields.m_CachedPtr;
        v155 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v82 )
          goto LABEL_132;
        v83 = *(_QWORD *)(v82 + 80);
        v84 = *(_QWORD *)(v82 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v166.fields.currentCryptoKey = v83;
        *(_QWORD *)&v166.fields.fakeValue = v84;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v166,
                                                0LL);
        if ( !*(_QWORD *)&v75->fields.m_CachedPtr )
          goto LABEL_132;
        v85 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v75->fields.m_CachedPtr,
                                                0LL);
        monitor = (char *)v78[1].monitor;
        if ( !monitor )
          goto LABEL_132;
        v87 = (int)LeaderInfo;
        v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(monitor + 56),
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v155;
        if ( !v155 )
          goto LABEL_132;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v155,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v85,
                                                v87,
                                                v88,
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
  if ( *(_QWORD *)&v78->fields.m_CachedPtr && v78[2].fields.m_CachedPtr >= 1 && (v89 = v75[1].monitor) != 0LL )
  {
    v156 = (unsigned int)LeaderInfo;
    v90 = v89[7];
    v91 = v89[8];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v167.fields.currentCryptoKey = v90;
    *(_QWORD *)&v167.fields.fakeValue = v91;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v167, 0LL) < 1 )
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
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v92 = *(_QWORD *)&v78->fields.m_CachedPtr;
      v153 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v92 )
        goto LABEL_132;
      v93 = *(_QWORD *)(v92 + 80);
      v94 = *(_QWORD *)(v92 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v168.fields.currentCryptoKey = v93;
      *(_QWORD *)&v168.fields.fakeValue = v94;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v168,
                                              0LL);
      if ( !*(_QWORD *)&v78->fields.m_CachedPtr )
        goto LABEL_132;
      v95 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v78->fields.m_CachedPtr,
                                              0LL);
      v96 = (char *)v75[1].monitor;
      if ( !v96 )
        goto LABEL_132;
      v97 = (int)LeaderInfo;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v96 + 56),
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v153;
      if ( !v153 )
        goto LABEL_132;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v153,
                              &v163,
                              actMaxRarity,
                              v95,
                              v97,
                              v98,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v156;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v100 = (int)LeaderInfo;
    v101 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v76, v77);
    System_Text_StringBuilder___ctor(v101, 0LL);
    v104 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v102, v103);
    System_Text_StringBuilder___ctor(v104, 0LL);
    v107 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v105, v106);
    System_Text_StringBuilder___ctor(v107, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v157 = v100;
    v152 = v107;
    v154 = v104;
    if ( (v100 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                    v75[2].fields.m_CachedPtr,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v109 = *(_QWORD *)&v75->fields.m_CachedPtr;
      if ( !v109 )
        goto LABEL_132;
      v110 = (PartyOrganizationUtility_o *)LeaderInfo;
      v111 = *(_QWORD *)(v109 + 96);
      v112 = *(_QWORD *)(v109 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v169.fields.currentCryptoKey = v111;
      *(_QWORD *)&v169.fields.fakeValue = v112;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v169,
                                              0LL);
      if ( !Entity )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(Entity, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v75->fields.m_CachedPtr )
        goto LABEL_132;
      v113 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v75->fields.m_CachedPtr,
                                              0LL);
      if ( !v78[1].monitor )
        goto LABEL_132;
      v114 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName((EquipTargetInfo_o *)v78[1].monitor, 0LL);
      if ( !v110 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v110,
                                              &maxLength[1],
                                              v113,
                                              v114,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v104 = v154;
      if ( !v154 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42155400(v154, (System_String_o *)LeaderInfo, 0LL);
      v107 = v152;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      v115 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                  v78[2].fields.m_CachedPtr,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v116 = *(_QWORD *)&v78->fields.m_CachedPtr;
      if ( !v116 )
        goto LABEL_132;
      v117 = (PartyOrganizationUtility_o *)LeaderInfo;
      v118 = *(_QWORD *)(v116 + 96);
      v119 = *(_QWORD *)(v116 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v170.fields.currentCryptoKey = v118;
      *(_QWORD *)&v170.fields.fakeValue = v119;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v170,
                                              0LL);
      if ( !v115 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(v115, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v78->fields.m_CachedPtr )
        goto LABEL_132;
      v120 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v78->fields.m_CachedPtr,
                                              0LL);
      v121 = (EquipTargetInfo_o *)v75[1].monitor;
      if ( !v121 )
        goto LABEL_132;
      v122 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v121, 0LL);
      if ( !v117 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v117,
                                              maxLength,
                                              v120,
                                              v122,
                                              (System_String_o *)LeaderInfo,
                                              v163,
                                              actMaxRarity[0],
                                              0LL);
      v107 = v152;
      if ( !v152 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42155400(v152, (System_String_o *)LeaderInfo, 0LL);
      v104 = v154;
    }
    v124 = maxLength[0];
    v123 = maxLength[1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v125 = System_Math__Max_44559528(v123, v124, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &maxFontSize,
        &minFontSize,
        v125,
        0LL);
      if ( *(_QWORD *)v158 )
      {
        if ( *v72 && v101 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v158 + 52LL) >= (*v72)->fields.classPos )
          {
            System_Text_StringBuilder__Append_42159160(v101, (Il2CppObject *)v107, 0LL);
            v126 = v101;
            v127 = (Il2CppObject *)v104;
          }
          else
          {
            System_Text_StringBuilder__Append_42159160(v101, (Il2CppObject *)v104, 0LL);
            v126 = v101;
            v127 = (Il2CppObject *)v107;
          }
          System_Text_StringBuilder__Append_42159160(v126, v127, 0LL);
          v141 = (v157 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v157 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v143 = (v157 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_42155400(v101, v144, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v146 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v101->klass->vtable._3_ToString.method)(
                                      v101,
                                      v101->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v147 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
          v148 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
          v151 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                          CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                          v149,
                                                          v150);
          CommonConfirmDialog_ClickDelegate___ctor(
            v151,
            (Il2CppObject *)v21,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_17016836(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v146,
              v147,
              v148,
              v151,
              maxFontSize,
              minFontSize,
              v143,
              728,
              2,
              windowHeight,
              v141,
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
    sub_B0D97C(LeaderInfo);
  }
  if ( !*(_QWORD *)v31 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v31 + 112LL);
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v76);
  if ( !*v39 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)&(*v39)[4].fields.m_CachedPtr;
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v128);
  LeaderInfo = *(SupportSelectObject_o **)v31;
  if ( !*(_QWORD *)v31 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v129);
  LeaderInfo = (SupportSelectObject_o *)*v39;
  if ( !*v39 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v130);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v158;
  if ( !*(_QWORD *)v158 )
    goto LABEL_132;
  v132 = *(_QWORD *)(v21 + 40);
  classPos = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v131);
  v135 = *v72;
  if ( !*v72 )
    goto LABEL_132;
  v136 = v135->fields.classPos;
  v137 = (UserServantLeaderEntity_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v135, v134);
  if ( !v132 )
    goto LABEL_132;
  v139 = (UserServantLeaderEntity_o *)LeaderInfo;
  v140 = *(SupportSelectMenu_DragSwapCallbackFunc_o **)(v132 + 352);
  if ( v140 )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(v140, 1, classPos, v137, v136, v139, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v138);
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
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_Collider_o *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4217096 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4217096 = 1;
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
                                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B0D840(
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
                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v15,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B0D97C(mListViewObject);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4217099 & 1) == 0 )
  {
    sub_B0D8A4(&UICamera_TypeInfo, method);
    byte_4217099 = 1;
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
  void *from; // x0
  SupportSelectListViewManager_o *manager; // x20
  int32_t v7; // w21
  struct SupportSelectObject_o *toMember; // x8
  int32_t classPos; // w23
  UserServantLeaderEntity_o *v10; // x22

  if ( (byte_4211765 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4211765 = 1;
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
      v7 = *((_DWORD *)from + 13);
      from = SupportSelectObject__GetLeaderInfo((SupportSelectObject_o *)from, 0LL);
      toMember = this->fields.toMember;
      if ( toMember )
      {
        classPos = toMember->fields.classPos;
        v10 = (UserServantLeaderEntity_o *)from;
        from = SupportSelectObject__GetLeaderInfo(this->fields.toMember, 0LL);
        if ( manager )
        {
          SupportSelectListViewManager__OnSwapEquip(
            manager,
            1,
            v7,
            v10,
            classPos,
            (UserServantLeaderEntity_o *)from,
            0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_16:
    sub_B0D97C(from);
  }
LABEL_13:
  from = this->fields.__4__this;
  if ( !from )
    goto LABEL_16;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)from, 0LL);
  from = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !from )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)from, 0LL);
}