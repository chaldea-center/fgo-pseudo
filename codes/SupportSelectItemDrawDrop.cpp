void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AB9C & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectItemDrawDrop_TypeInfo, v1);
    byte_418AB9C = 1;
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
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v14; // x0
  float z; // s10
  UnityEngine_Component_o *v16; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418AB9B & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectItemDrawDrop_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10006/*"OnFinishedReturnMove"*/, v3);
    byte_418AB9B = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_13;
  v6 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v6 )
    goto LABEL_13;
  v7 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v6, 0LL);
  if ( !ListViewObj )
    goto LABEL_13;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v31 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  dragObject = this->fields.dragObject;
  x = v31.fields.x;
  y = v31.fields.y;
  v14 = SupportSelectItemDrawDrop_TypeInfo;
  z = v31.fields.z;
  if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v14 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v14->static_fields->ACTION_TIME, v32, 0LL);
  if ( !ListViewObj )
LABEL_13:
    sub_B2C434(ListViewObj, v5);
  v16 = ListViewObj;
  LODWORD(ListViewObj[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].klass = (UnityEngine_Component_c *)gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16[3], gameObject, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_10006/*"OnFinishedReturnMove"*/;
  v16[3].monitor = (void *)StringLiteral_10006/*"OnFinishedReturnMove"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16[3].monitor, v24, v25, v26, v27, v28, v29, v30);
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
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SupportSelectListViewDropObject_o *v43; // x19
  int v44; // s0
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_418AB99 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, target);
    sub_B2C35C(&SupportSelectItemDrawDrop_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_10007/*"OnFinishedSwapMove"*/, v6);
    byte_418AB99 = 1;
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
    v9 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v9 )
      goto LABEL_23;
    v47 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
    v13 = this->fields.dragObject;
    x = v47.fields.x;
    y = v47.fields.y;
    v16 = SupportSelectItemDrawDrop_TypeInfo;
    z = v47.fields.z;
    if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v16 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v48.fields.x = x;
    v48.fields.y = y;
    v48.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->ACTION_TIME, v48, 0LL);
    if ( !dragObject )
      goto LABEL_23;
    v18 = dragObject;
    LODWORD(dragObject[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B2C2F8((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
    v26 = (System_Int32_array **)StringLiteral_10007/*"OnFinishedSwapMove"*/;
    v18[3].monitor = (void *)StringLiteral_10007/*"OnFinishedSwapMove"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v33);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v36 = (UnityEngine_Component_o *)ListViewObj;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_dropObject,
      (System_Int32_array **)target,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
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
LABEL_23:
      sub_B2C434(dragObject, v7);
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
  __int64 v6; // x11

  if ( (byte_418AB94 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectListViewManager_TypeInfo, method);
    byte_418AB94 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_B2C434(0LL, v4);
  manager = ListViewObj->fields.manager;
  if ( !manager )
    return 0LL;
  v6 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == SupportSelectListViewManager_TypeInfo )
    return (SupportSelectListViewManager_o *)ListViewObj->fields.manager;
  return 0LL;
}


SupportSelectListViewDropObject_o *__fastcall SupportSelectItemDrawDrop__GetListViewObj(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 v4; // x11

  if ( (byte_418AB93 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectListViewDropObject_TypeInfo, method);
    byte_418AB93 = 1;
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
  __int64 v7; // x1
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v9; // x19

  if ( (byte_418AB98 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, obj);
    byte_418AB98 = 1;
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
    v9 = obj->fields.memberObject;
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
                                                           (UnityEngine_Object_o *)v9,
                                                           0LL,
                                                           0LL);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v9 )
          return memberObject->fields.classPos == v9->fields.classPos;
LABEL_21:
        sub_B2C434(ListViewObj, v7);
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

  if ( (byte_418AB97 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418AB97 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B2C2F8(
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
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
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
    sub_B2C434(v11, v12);
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
  const MethodInfo *v13; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  SupportSelectListViewManager_o *v18; // x19

  if ( (byte_418AB96 & 1) == 0 )
  {
    sub_B2C35C(&UICamera_TypeInfo, method);
    byte_418AB96 = 1;
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
        sub_B2C434(ListViewManager, v13);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B2C2F8(
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
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v16);
  if ( !ListViewManager )
    goto LABEL_15;
  v18 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v17);
  if ( !ListViewObj )
    goto LABEL_15;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_15;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v13);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v18->klass->vtable._7_ItemDragStart.method)(
    v18,
    v18->klass->vtable._8_ItemDragEnd.methodPtr);
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
    sub_B2C434(0LL, v3);
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
    sub_B2C434(ListViewObj, v4);
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
  __int64 v19; // x1
  __int64 v20; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v22; // x1
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
  UnityEngine_Object_o *v73; // x23
  UnityEngine_Object_o *v74; // x25
  struct SupportSelectItemDraw_o *itemDraw; // x8
  struct ServantClassIconComponent_o *servantClassIcon; // x21
  struct UILabel_o *levelLabel; // x28
  __int64 v78; // x8
  __int64 v79; // x21
  __int64 v80; // x28
  int32_t v81; // w21
  char *monitor; // x8
  int32_t v83; // w28
  int32_t v84; // w5
  _QWORD *v85; // x8
  __int64 v86; // x21
  __int64 v87; // x28
  __int64 v88; // x8
  __int64 v89; // x21
  __int64 v90; // x28
  int32_t v91; // w21
  char *v92; // x8
  int32_t v93; // w28
  int32_t v94; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v96; // w24
  System_Text_StringBuilder_o *v97; // x22
  System_Text_StringBuilder_o *v98; // x26
  System_Text_StringBuilder_o *v99; // x21
  ServantEntity_o *Entity; // x24
  __int64 v101; // x8
  PartyOrganizationUtility_o *v102; // x27
  __int64 v103; // x21
  __int64 v104; // x26
  System_String_o *v105; // x24
  int32_t v106; // w26
  ServantEntity_o *v107; // x24
  __int64 v108; // x8
  PartyOrganizationUtility_o *v109; // x27
  __int64 v110; // x21
  __int64 v111; // x26
  System_String_o *v112; // x24
  EquipTargetInfo_o *v113; // x8
  int32_t v114; // w23
  int32_t v115; // w23
  int32_t v116; // w24
  int32_t v117; // w23
  System_Text_StringBuilder_o *v118; // x0
  Il2CppObject *v119; // x1
  __int64 v120; // x23
  int32_t classPos; // w19
  SupportSelectObject_o *v122; // x8
  int32_t v123; // w21
  UserServantLeaderEntity_o *v124; // x20
  UserServantLeaderEntity_o *v125; // x5
  SupportSelectMenu_DragSwapCallbackFunc_o *v126; // x0
  float v127; // s8
  int32_t windowHeight; // w25
  float v129; // s9
  System_String_o *v130; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v132; // x21
  System_String_o *v133; // x22
  System_String_o *v134; // x23
  CommonConfirmDialog_ClickDelegate_o *v135; // x24
  System_Text_StringBuilder_o *v136; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v137; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v138; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v139; // [xsp+50h] [xbp-A0h]
  unsigned int v140; // [xsp+50h] [xbp-A0h]
  int v141; // [xsp+50h] [xbp-A0h]
  __int64 v142; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+68h] [xbp-88h] BYREF
  int32_t maxFontSize; // [xsp+6Ch] [xbp-84h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v147; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_418AB9A & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&System_Math_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v12);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v13);
    sub_B2C35C(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v14);
    sub_B2C35C(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v16);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v17);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_418AB9A = 1;
  }
  skillName = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  v147 = 0LL;
  maxFontSize = 0;
  minFontSize = 0;
  *(_QWORD *)maxLength = 0LL;
  v20 = sub_B2C42C(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor((SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_132;
  *(_QWORD *)(v20 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  ListViewObj = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewObj(this, v29);
  v31 = v20 + 16;
  *(_QWORD *)(v20 + 16) = ListViewObj;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), ListViewObj, v32, v33, v34, v35, v36, v37);
  dropObject = (System_Int32_array **)this->fields.dropObject;
  v39 = (UnityEngine_Object_o **)(v20 + 24);
  *(_QWORD *)(v20 + 24) = dropObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 24), dropObject, v40, v41, v42, v43, v44, v45);
  v46 = *(UnityEngine_Object_o **)(v20 + 16);
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
  *(_QWORD *)(v20 + 40) = ListViewManager;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 40), ListViewManager, v50, v51, v52, v53, v54, v55);
  v62 = *(_QWORD *)(v20 + 16);
  if ( !v62 )
    goto LABEL_132;
  v63 = *(System_Int32_array ***)(v62 + 112);
  *(_QWORD *)(v20 + 48) = v63;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 48), v63, v56, v57, v58, v59, v60, v61);
  v70 = *(_QWORD *)(v20 + 24);
  v142 = v20 + 48;
  if ( !v70 )
    goto LABEL_132;
  v71 = *(System_Int32_array ***)(v70 + 112);
  *(_QWORD *)(v20 + 56) = v71;
  v72 = (SupportSelectObject_o **)(v20 + 56);
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 56), v71, v64, v65, v66, v67, v68, v69);
  LeaderInfo = *(SupportSelectObject_o **)(v20 + 48);
  if ( !LeaderInfo )
    goto LABEL_132;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v22);
  if ( !*v72 )
    goto LABEL_132;
  v73 = (UnityEngine_Object_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v72, v22);
  *(_QWORD *)actMaxRarity = 0LL;
  v147 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v73 )
    goto LABEL_132;
  v74 = (UnityEngine_Object_o *)LeaderInfo;
  if ( *(_QWORD *)&v73->fields.m_CachedPtr && v73[2].fields.m_CachedPtr >= 1 )
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
      *(_QWORD *)&v149.fields.currentCryptoKey = servantClassIcon;
      *(_QWORD *)&v149.fields.fakeValue = levelLabel;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v149, 0LL) >= 1 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v78 = *(_QWORD *)&v73->fields.m_CachedPtr;
        v139 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v78 )
          goto LABEL_132;
        v79 = *(_QWORD *)(v78 + 80);
        v80 = *(_QWORD *)(v78 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v150.fields.currentCryptoKey = v79;
        *(_QWORD *)&v150.fields.fakeValue = v80;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v150,
                                                0LL);
        if ( !*(_QWORD *)&v73->fields.m_CachedPtr )
          goto LABEL_132;
        v81 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v73->fields.m_CachedPtr,
                                                0LL);
        monitor = (char *)v74[1].monitor;
        if ( !monitor )
          goto LABEL_132;
        v83 = (int)LeaderInfo;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(monitor + 56),
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v139;
        if ( !v139 )
          goto LABEL_132;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v139,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v81,
                                                v83,
                                                v84,
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
  if ( *(_QWORD *)&v74->fields.m_CachedPtr && v74[2].fields.m_CachedPtr >= 1 && (v85 = v73[1].monitor) != 0LL )
  {
    v140 = (unsigned int)LeaderInfo;
    v86 = v85[7];
    v87 = v85[8];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v151.fields.currentCryptoKey = v86;
    *(_QWORD *)&v151.fields.fakeValue = v87;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v151, 0LL) < 1 )
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
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v88 = *(_QWORD *)&v74->fields.m_CachedPtr;
      v137 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v88 )
        goto LABEL_132;
      v89 = *(_QWORD *)(v88 + 80);
      v90 = *(_QWORD *)(v88 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v152.fields.currentCryptoKey = v89;
      *(_QWORD *)&v152.fields.fakeValue = v90;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v152,
                                              0LL);
      if ( !*(_QWORD *)&v74->fields.m_CachedPtr )
        goto LABEL_132;
      v91 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v74->fields.m_CachedPtr,
                                              0LL);
      v92 = (char *)v73[1].monitor;
      if ( !v92 )
        goto LABEL_132;
      v93 = (int)LeaderInfo;
      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v92 + 56),
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v137;
      if ( !v137 )
        goto LABEL_132;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v137,
                              &v147,
                              actMaxRarity,
                              v91,
                              v93,
                              v94,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v140;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v96 = (int)LeaderInfo;
    v97 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v97, 0LL);
    v98 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v98, 0LL);
    v99 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v99, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v141 = v96;
    v136 = v99;
    v138 = v98;
    if ( (v96 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                    v73[2].fields.m_CachedPtr,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v101 = *(_QWORD *)&v73->fields.m_CachedPtr;
      if ( !v101 )
        goto LABEL_132;
      v102 = (PartyOrganizationUtility_o *)LeaderInfo;
      v103 = *(_QWORD *)(v101 + 96);
      v104 = *(_QWORD *)(v101 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v153.fields.currentCryptoKey = v103;
      *(_QWORD *)&v153.fields.fakeValue = v104;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v153,
                                              0LL);
      if ( !Entity )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(Entity, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v73->fields.m_CachedPtr )
        goto LABEL_132;
      v105 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v73->fields.m_CachedPtr,
                                              0LL);
      if ( !v74[1].monitor )
        goto LABEL_132;
      v106 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName((EquipTargetInfo_o *)v74[1].monitor, 0LL);
      if ( !v102 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v102,
                                              &maxLength[1],
                                              v105,
                                              v106,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v98 = v138;
      if ( !v138 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42408700(v138, (System_String_o *)LeaderInfo, 0LL);
      v99 = v136;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      v107 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                  v74[2].fields.m_CachedPtr,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v108 = *(_QWORD *)&v74->fields.m_CachedPtr;
      if ( !v108 )
        goto LABEL_132;
      v109 = (PartyOrganizationUtility_o *)LeaderInfo;
      v110 = *(_QWORD *)(v108 + 96);
      v111 = *(_QWORD *)(v108 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v154.fields.currentCryptoKey = v110;
      *(_QWORD *)&v154.fields.fakeValue = v111;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v154,
                                              0LL);
      if ( !v107 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(v107, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v74->fields.m_CachedPtr )
        goto LABEL_132;
      v112 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v74->fields.m_CachedPtr,
                                              0LL);
      v113 = (EquipTargetInfo_o *)v73[1].monitor;
      if ( !v113 )
        goto LABEL_132;
      v114 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v113, 0LL);
      if ( !v109 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v109,
                                              maxLength,
                                              v112,
                                              v114,
                                              (System_String_o *)LeaderInfo,
                                              v147,
                                              actMaxRarity[0],
                                              0LL);
      v99 = v136;
      if ( !v136 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42408700(v136, (System_String_o *)LeaderInfo, 0LL);
      v98 = v138;
    }
    v116 = maxLength[0];
    v115 = maxLength[1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v117 = System_Math__Max_45012344(v115, v116, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &maxFontSize,
        &minFontSize,
        v117,
        0LL);
      if ( *(_QWORD *)v142 )
      {
        if ( *v72 && v97 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v142 + 52LL) >= (*v72)->fields.classPos )
          {
            System_Text_StringBuilder__Append_42412460(v97, (Il2CppObject *)v99, 0LL);
            v118 = v97;
            v119 = (Il2CppObject *)v98;
          }
          else
          {
            System_Text_StringBuilder__Append_42412460(v97, (Il2CppObject *)v98, 0LL);
            v118 = v97;
            v119 = (Il2CppObject *)v99;
          }
          System_Text_StringBuilder__Append_42412460(v118, v119, 0LL);
          v127 = (v141 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v141 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v129 = (v141 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_10208/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_42408700(v97, v130, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v132 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                                      v97,
                                      v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
          v134 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
          v135 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v135,
            (Il2CppObject *)v20,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_17971264(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v132,
              v133,
              v134,
              v135,
              maxFontSize,
              minFontSize,
              v129,
              728,
              2,
              windowHeight,
              v127,
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
    sub_B2C434(LeaderInfo, v22);
  }
  if ( !*(_QWORD *)v31 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v31 + 112LL);
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v22);
  if ( !*v39 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)&(*v39)[4].fields.m_CachedPtr;
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v22);
  LeaderInfo = *(SupportSelectObject_o **)v31;
  if ( !*(_QWORD *)v31 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v22);
  LeaderInfo = (SupportSelectObject_o *)*v39;
  if ( !*v39 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v22);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v142;
  if ( !*(_QWORD *)v142 )
    goto LABEL_132;
  v120 = *(_QWORD *)(v20 + 40);
  classPos = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v22);
  v122 = *v72;
  if ( !*v72 )
    goto LABEL_132;
  v123 = v122->fields.classPos;
  v124 = (UserServantLeaderEntity_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v122, v22);
  if ( !v120 )
    goto LABEL_132;
  v125 = (UserServantLeaderEntity_o *)LeaderInfo;
  v126 = *(SupportSelectMenu_DragSwapCallbackFunc_o **)(v120 + 352);
  if ( v126 )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(v126, 1, classPos, v124, v123, v125, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v22);
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
  __int64 v14; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
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

  if ( (byte_418AB92 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418AB92 = 1;
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
                                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B2C2F8(
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
    || (v16 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v16,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B2C434(mListViewObject, v14);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B2C2F8(
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
                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v30;
  sub_B2C2F8(
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

  if ( (byte_418AB95 & 1) == 0 )
  {
    sub_B2C35C(&UICamera_TypeInfo, method);
    byte_418AB95 = 1;
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

  if ( (byte_41847D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41847D0 = 1;
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
    sub_B2C434(from, isDecide);
  }
LABEL_13:
  from = this->fields.__4__this;
  if ( !from )
    goto LABEL_16;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)from, 0LL);
  from = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !from )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)from, 0LL);
}