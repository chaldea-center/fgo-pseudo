void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4354857 & 1) == 0 )
  {
    sub_B70694(&SupportSelectItemDrawDrop_TypeInfo);
    byte_4354857 = 1;
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
  UnityEngine_Component_o *ListViewObj; // x0
  __int64 v4; // x1
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

  if ( (byte_4354856 & 1) == 0 )
  {
    sub_B70694(&SupportSelectItemDrawDrop_TypeInfo);
    sub_B70694(&StringLiteral_10129/*"OnFinishedReturnMove"*/);
    byte_4354856 = 1;
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
    sub_B7076C(ListViewObj, v4);
  v15 = ListViewObj;
  LODWORD(ListViewObj[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].klass = (UnityEngine_Component_c *)gameObject;
  sub_B70630((BattleServantConfConponent_o *)&v15[3], gameObject, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_10129/*"OnFinishedReturnMove"*/;
  v15[3].monitor = (void *)StringLiteral_10129/*"OnFinishedReturnMove"*/;
  sub_B70630((BattleServantConfConponent_o *)&v15[3].monitor, v23, v24, v25, v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  int v8; // s0
  UnityEngine_GameObject_o *v11; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v14; // x0
  float z; // s10
  UnityEngine_GameObject_o *v16; // x21
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
  const MethodInfo *v31; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  SupportSelectListViewDropObject_o *v41; // x19
  int v42; // s0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4354854 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SupportSelectItemDrawDrop_TypeInfo);
    sub_B70694(&StringLiteral_10130/*"OnFinishedSwapMove"*/);
    byte_4354854 = 1;
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
    v7 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v7 )
      goto LABEL_23;
    v45 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
    v11 = this->fields.dragObject;
    x = v45.fields.x;
    y = v45.fields.y;
    v14 = SupportSelectItemDrawDrop_TypeInfo;
    z = v45.fields.z;
    if ( (BYTE3(SupportSelectItemDrawDrop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v14 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v46.fields.x = x;
    v46.fields.y = y;
    v46.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v14->static_fields->ACTION_TIME, v46, 0LL);
    if ( !dragObject )
      goto LABEL_23;
    v16 = dragObject;
    LODWORD(dragObject[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B70630((BattleServantConfConponent_o *)&v16[3], gameObject, v18, v19, v20, v21, v22, v23);
    v24 = (System_Int32_array **)StringLiteral_10130/*"OnFinishedSwapMove"*/;
    v16[3].monitor = (void *)StringLiteral_10130/*"OnFinishedSwapMove"*/;
    sub_B70630((BattleServantConfConponent_o *)&v16[3].monitor, v24, v25, v26, v27, v28, v29, v30);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v31);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v34 = (UnityEngine_Component_o *)ListViewObj;
    sub_B70630(
      (BattleServantConfConponent_o *)p_dropObject,
      (System_Int32_array **)target,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v5), !v34)
      || (v41 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v34, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v41) )
    {
LABEL_23:
      sub_B7076C(dragObject, v5);
    }
    SupportSelectListViewDropObject__DoSwap(
      v41,
      *(UnityEngine_Vector3_o *)&v42,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v5);
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

  if ( (byte_435484F & 1) == 0 )
  {
    sub_B70694(&SupportSelectListViewManager_TypeInfo);
    byte_435484F = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_B7076C(0LL, v4);
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

  if ( (byte_435484E & 1) == 0 )
  {
    sub_B70694(&SupportSelectListViewDropObject_TypeInfo);
    byte_435484E = 1;
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

  if ( (byte_4354853 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354853 = 1;
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
        sub_B7076C(ListViewObj, v7);
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
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4354852 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354852 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_B70630(
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
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v10 )
    goto LABEL_18;
  if ( !surface )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      surface,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( !v10 )
    goto LABEL_18;
  if ( !Component_srcLineSprite )
LABEL_20:
    sub_B7076C(v10, v11);
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
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v13; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  SupportSelectListViewManager_o *v18; // x19

  if ( (byte_4354851 & 1) == 0 )
  {
    sub_B70694(&UICamera_TypeInfo);
    byte_4354851 = 1;
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
        sub_B7076C(ListViewManager, v13);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_B70630(
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
    sub_B7076C(0LL, v3);
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
    sub_B7076C(ListViewObj, v4);
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
  __int64 v3; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  System_Int32_array **ListViewObj; // x0
  __int64 v14; // x27
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **dropObject; // x1
  UnityEngine_Object_o **v22; // x26
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Object_o *v30; // x20
  const MethodInfo *v31; // x1
  System_Int32_array **ListViewManager; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x8
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  System_Int32_array **v54; // x1
  SupportSelectObject_o **v55; // x20
  UnityEngine_Object_o *v56; // x23
  UnityEngine_Object_o *v57; // x25
  struct SupportSelectItemDraw_o *itemDraw; // x8
  struct ServantClassIconComponent_o *servantClassIcon; // x21
  struct UILabel_o *levelLabel; // x28
  __int64 v61; // x8
  __int64 v62; // x21
  __int64 v63; // x28
  int32_t v64; // w21
  char *monitor; // x8
  int32_t v66; // w28
  int32_t v67; // w5
  _QWORD *v68; // x8
  __int64 v69; // x21
  __int64 v70; // x28
  __int64 v71; // x8
  __int64 v72; // x21
  __int64 v73; // x28
  int32_t v74; // w21
  char *v75; // x8
  int32_t v76; // w28
  int32_t v77; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v79; // w24
  System_Text_StringBuilder_o *v80; // x22
  System_Text_StringBuilder_o *v81; // x26
  System_Text_StringBuilder_o *v82; // x21
  ServantEntity_o *Entity; // x24
  __int64 v84; // x8
  PartyOrganizationUtility_o *v85; // x27
  __int64 v86; // x21
  __int64 v87; // x26
  System_String_o *v88; // x24
  int32_t v89; // w26
  ServantEntity_o *v90; // x24
  __int64 v91; // x8
  PartyOrganizationUtility_o *v92; // x27
  __int64 v93; // x21
  __int64 v94; // x26
  System_String_o *v95; // x24
  EquipTargetInfo_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w23
  int32_t v99; // w24
  int32_t v100; // w23
  System_Text_StringBuilder_o *v101; // x0
  Il2CppObject *v102; // x1
  __int64 v103; // x23
  int32_t classPos; // w19
  SupportSelectObject_o *v105; // x8
  int32_t v106; // w21
  UserServantLeaderEntity_o *v107; // x20
  UserServantLeaderEntity_o *v108; // x5
  SupportSelectMenu_DragSwapCallbackFunc_o *v109; // x0
  float v110; // s8
  int32_t windowHeight; // w25
  float v112; // s9
  System_String_o *v113; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v115; // x21
  System_String_o *v116; // x22
  System_String_o *v117; // x23
  CommonConfirmDialog_ClickDelegate_o *v118; // x24
  System_Text_StringBuilder_o *v119; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v120; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v121; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v122; // [xsp+50h] [xbp-A0h]
  unsigned int v123; // [xsp+50h] [xbp-A0h]
  int v124; // [xsp+50h] [xbp-A0h]
  __int64 v125; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize; // [xsp+68h] [xbp-88h] BYREF
  int32_t maxFontSize; // [xsp+6Ch] [xbp-84h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v130; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+80h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  if ( (byte_4354855 & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__);
    sub_B70694(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
    sub_B70694(&StringLiteral_10333/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_B70694(&StringLiteral_3339/*"COMMON_CONFIRM_NO"*/);
    sub_B70694(&StringLiteral_3342/*"COMMON_CONFIRM_YES"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354855 = 1;
  }
  skillName = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  v130 = 0LL;
  maxFontSize = 0;
  minFontSize = 0;
  *(_QWORD *)maxLength = 0LL;
  v3 = sub_B70764(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor((SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_132;
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  ListViewObj = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewObj(this, v12);
  v14 = v3 + 16;
  *(_QWORD *)(v3 + 16) = ListViewObj;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), ListViewObj, v15, v16, v17, v18, v19, v20);
  dropObject = (System_Int32_array **)this->fields.dropObject;
  v22 = (UnityEngine_Object_o **)(v3 + 24);
  *(_QWORD *)(v3 + 24) = dropObject;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), dropObject, v23, v24, v25, v26, v27, v28);
  v29 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
    return;
  v30 = *v22;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    return;
  ListViewManager = (System_Int32_array **)SupportSelectItemDrawDrop__GetListViewManager(this, v31);
  *(_QWORD *)(v3 + 40) = ListViewManager;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 40), ListViewManager, v33, v34, v35, v36, v37, v38);
  v45 = *(_QWORD *)(v3 + 16);
  if ( !v45 )
    goto LABEL_132;
  v46 = *(System_Int32_array ***)(v45 + 112);
  *(_QWORD *)(v3 + 48) = v46;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 48), v46, v39, v40, v41, v42, v43, v44);
  v53 = *(_QWORD *)(v3 + 24);
  v125 = v3 + 48;
  if ( !v53 )
    goto LABEL_132;
  v54 = *(System_Int32_array ***)(v53 + 112);
  *(_QWORD *)(v3 + 56) = v54;
  v55 = (SupportSelectObject_o **)(v3 + 56);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 56), v54, v47, v48, v49, v50, v51, v52);
  LeaderInfo = *(SupportSelectObject_o **)(v3 + 48);
  if ( !LeaderInfo )
    goto LABEL_132;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v5);
  if ( !*v55 )
    goto LABEL_132;
  v56 = (UnityEngine_Object_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v55, v5);
  *(_QWORD *)actMaxRarity = 0LL;
  v130 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v56 )
    goto LABEL_132;
  v57 = (UnityEngine_Object_o *)LeaderInfo;
  if ( *(_QWORD *)&v56->fields.m_CachedPtr && v56[2].fields.m_CachedPtr >= 1 )
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
      *(_QWORD *)&v132.fields.currentCryptoKey = servantClassIcon;
      *(_QWORD *)&v132.fields.fakeValue = levelLabel;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v132, 0LL) >= 1 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v61 = *(_QWORD *)&v56->fields.m_CachedPtr;
        v122 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v61 )
          goto LABEL_132;
        v62 = *(_QWORD *)(v61 + 80);
        v63 = *(_QWORD *)(v61 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v133.fields.currentCryptoKey = v62;
        *(_QWORD *)&v133.fields.fakeValue = v63;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                v133,
                                                0LL);
        if ( !*(_QWORD *)&v56->fields.m_CachedPtr )
          goto LABEL_132;
        v64 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v56->fields.m_CachedPtr,
                                                0LL);
        monitor = (char *)v57[1].monitor;
        if ( !monitor )
          goto LABEL_132;
        v66 = (int)LeaderInfo;
        v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(monitor + 56),
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v122;
        if ( !v122 )
          goto LABEL_132;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v122,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v64,
                                                v66,
                                                v67,
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
  if ( *(_QWORD *)&v57->fields.m_CachedPtr && v57[2].fields.m_CachedPtr >= 1 && (v68 = v56[1].monitor) != 0LL )
  {
    v123 = (unsigned int)LeaderInfo;
    v69 = v68[7];
    v70 = v68[8];
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v134.fields.currentCryptoKey = v69;
    *(_QWORD *)&v134.fields.fakeValue = v70;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v134, 0LL) < 1 )
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
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v71 = *(_QWORD *)&v57->fields.m_CachedPtr;
      v120 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v71 )
        goto LABEL_132;
      v72 = *(_QWORD *)(v71 + 80);
      v73 = *(_QWORD *)(v71 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v135.fields.currentCryptoKey = v72;
      *(_QWORD *)&v135.fields.fakeValue = v73;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                              v135,
                                              0LL);
      if ( !*(_QWORD *)&v57->fields.m_CachedPtr )
        goto LABEL_132;
      v74 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v57->fields.m_CachedPtr,
                                              0LL);
      v75 = (char *)v56[1].monitor;
      if ( !v75 )
        goto LABEL_132;
      v76 = (int)LeaderInfo;
      v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v75 + 56),
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v120;
      if ( !v120 )
        goto LABEL_132;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v120,
                              &v130,
                              actMaxRarity,
                              v74,
                              v76,
                              v77,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v123;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v79 = (int)LeaderInfo;
    v80 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v80, 0LL);
    v81 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v81, 0LL);
    v82 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v82, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v124 = v79;
    v119 = v82;
    v121 = v81;
    if ( (v79 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                    v56[2].fields.m_CachedPtr,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v84 = *(_QWORD *)&v56->fields.m_CachedPtr;
      if ( !v84 )
        goto LABEL_132;
      v85 = (PartyOrganizationUtility_o *)LeaderInfo;
      v86 = *(_QWORD *)(v84 + 96);
      v87 = *(_QWORD *)(v84 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v136.fields.currentCryptoKey = v86;
      *(_QWORD *)&v136.fields.fakeValue = v87;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                              v136,
                                              0LL);
      if ( !Entity )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(Entity, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v56->fields.m_CachedPtr )
        goto LABEL_132;
      v88 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v56->fields.m_CachedPtr,
                                              0LL);
      if ( !v57[1].monitor )
        goto LABEL_132;
      v89 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName((EquipTargetInfo_o *)v57[1].monitor, 0LL);
      if ( !v85 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v85,
                                              &maxLength[1],
                                              v88,
                                              v89,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v81 = v121;
      if ( !v121 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42601980(v121, (System_String_o *)LeaderInfo, 0LL);
      v82 = v119;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_132;
      v90 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)LeaderInfo,
                                 v57[2].fields.m_CachedPtr,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v91 = *(_QWORD *)&v57->fields.m_CachedPtr;
      if ( !v91 )
        goto LABEL_132;
      v92 = (PartyOrganizationUtility_o *)LeaderInfo;
      v93 = *(_QWORD *)(v91 + 96);
      v94 = *(_QWORD *)(v91 + 104);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v137.fields.currentCryptoKey = v93;
      *(_QWORD *)&v137.fields.fakeValue = v94;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                              v137,
                                              0LL);
      if ( !v90 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(v90, (int32_t)LeaderInfo, -1, 0LL);
      if ( !*(_QWORD *)&v57->fields.m_CachedPtr )
        goto LABEL_132;
      v95 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v57->fields.m_CachedPtr,
                                              0LL);
      v96 = (EquipTargetInfo_o *)v56[1].monitor;
      if ( !v96 )
        goto LABEL_132;
      v97 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v96, 0LL);
      if ( !v92 )
        goto LABEL_132;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v92,
                                              maxLength,
                                              v95,
                                              v97,
                                              (System_String_o *)LeaderInfo,
                                              v130,
                                              actMaxRarity[0],
                                              0LL);
      v82 = v119;
      if ( !v119 )
        goto LABEL_132;
      System_Text_StringBuilder__Append_42601980(v119, (System_String_o *)LeaderInfo, 0LL);
      v81 = v121;
    }
    v99 = maxLength[0];
    v98 = maxLength[1];
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v100 = System_Math__Max_45601072(v98, v99, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &maxFontSize,
        &minFontSize,
        v100,
        0LL);
      if ( *(_QWORD *)v125 )
      {
        if ( *v55 && v80 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v125 + 52LL) >= (*v55)->fields.classPos )
          {
            System_Text_StringBuilder__Append_42605740(v80, (Il2CppObject *)v82, 0LL);
            v101 = v80;
            v102 = (Il2CppObject *)v81;
          }
          else
          {
            System_Text_StringBuilder__Append_42605740(v80, (Il2CppObject *)v81, 0LL);
            v101 = v80;
            v102 = (Il2CppObject *)v82;
          }
          System_Text_StringBuilder__Append_42605740(v101, v102, 0LL);
          v110 = (v124 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v124 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v112 = (v124 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_10333/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_42601980(v80, v113, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v115 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v80->klass->vtable._3_ToString.method)(
                                      v80,
                                      v80->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_CONFIRM_YES"*/, 0LL);
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_CONFIRM_NO"*/, 0LL);
          v118 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v118,
            (Il2CppObject *)v3,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_17904224(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v115,
              v116,
              v117,
              v118,
              maxFontSize,
              minFontSize,
              v112,
              728,
              2,
              windowHeight,
              v110,
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
    sub_B7076C(LeaderInfo, v5);
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v14 + 112LL);
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v5);
  if ( !*v22 )
    goto LABEL_132;
  LeaderInfo = *(SupportSelectObject_o **)&(*v22)[4].fields.m_CachedPtr;
  if ( !LeaderInfo )
    goto LABEL_132;
  SupportSelectObject__ShowEquip(LeaderInfo, v5);
  LeaderInfo = *(SupportSelectObject_o **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  LeaderInfo = (SupportSelectObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_132;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v125;
  if ( !*(_QWORD *)v125 )
    goto LABEL_132;
  v103 = *(_QWORD *)(v3 + 40);
  classPos = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v5);
  v105 = *v55;
  if ( !*v55 )
    goto LABEL_132;
  v106 = v105->fields.classPos;
  v107 = (UserServantLeaderEntity_o *)LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v105, v5);
  if ( !v103 )
    goto LABEL_132;
  v108 = (UserServantLeaderEntity_o *)LeaderInfo;
  v109 = *(SupportSelectMenu_DragSwapCallbackFunc_o **)(v103 + 352);
  if ( v109 )
    SupportSelectMenu_DragSwapCallbackFunc__Invoke(v109, 1, classPos, v107, v106, v108, 0LL);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v5);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ListViewObject_o *Component_WebViewObject; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  WebViewObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UnityEngine_Collider_o *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_435484D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435484D = 1;
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
                                                           (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v13 = UnityEngine_Component__GetComponent_WebViewObject_(
                mListViewObject,
                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v13,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.mDragScrollView,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_B7076C(mListViewObject, v11);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mTrans,
    (System_Int32_array **)transform,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (struct UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = v27;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mCollider,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4354850 & 1) == 0 )
  {
    sub_B70694(&UICamera_TypeInfo);
    byte_4354850 = 1;
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

  if ( (byte_434F0F5 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434F0F5 = 1;
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
    sub_B7076C(from, isDecide);
  }
LABEL_13:
  from = this->fields.__4__this;
  if ( !from )
    goto LABEL_16;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)from, 0LL);
  from = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !from )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)from, 0LL);
}