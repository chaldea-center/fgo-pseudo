void SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  if ( (byte_596CC5F & 1) == 0 )
  {
    sub_2213A60(&SupportSelectItemDrawDrop_TypeInfo);
    byte_596CC5F = 1;
  }
  LODWORD(SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME) = (struct SupportSelectItemDrawDrop_StaticFields)1045220557;
}


void SupportSelectItemDrawDrop___ctor(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SupportSelectItemDrawDrop__DoReturnMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ListViewObj; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x21
  UnityEngine_Transform_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v11; // x0
  float z; // s10
  UnityEngine_GameObject_o *dragObject; // x20
  UnityEngine_Component_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596CC5E & 1) == 0 )
  {
    sub_2213A60(&SupportSelectItemDrawDrop_TypeInfo);
    sub_2213A60(&StringLiteral_10311/*"OnFinishedReturnMove"*/);
    byte_596CC5E = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_12;
  v5 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0);
  if ( !ListViewObj )
    goto LABEL_12;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)ListViewObj, 0);
  if ( !v5 )
    goto LABEL_12;
  v6 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v5, 0);
  if ( !ListViewObj )
    goto LABEL_12;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0);
  if ( !v6 )
    goto LABEL_12;
  v30 = UnityEngine_Transform__InverseTransformPoint(v6, position, 0);
  x = v30.fields.x;
  y = v30.fields.y;
  v11 = SupportSelectItemDrawDrop_TypeInfo;
  z = v30.fields.z;
  dragObject = this->fields.dragObject;
  if ( !*(&SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo, v7, v8);
    v11 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v11->static_fields->ACTION_TIME, v31, 0);
  if ( !ListViewObj )
LABEL_12:
    sub_2213CDC(ListViewObj, v4);
  v14 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v14[3].monitor = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[3].monitor, (int32_t)gameObject, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_10311/*"OnFinishedReturnMove"*/;
  v14[3].fields.m_CachedPtr = StringLiteral_10311/*"OnFinishedReturnMove"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[3].fields, v22, v23, v24, v25, v26, v27, v28);
}


void SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v13; // x21
  SupportSelectItemDrawDrop_c *v14; // x0
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x1
  UnityEngine_Component_o *ListViewObj; // x21
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  SupportSelectListViewDropObject_o *v39; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596CC5C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportSelectItemDrawDrop_TypeInfo);
    sub_2213A60(&StringLiteral_10312/*"OnFinishedSwapMove"*/);
    byte_596CC5C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0) )
  {
    dragObject = this->fields.dragObject;
    if ( !dragObject )
      goto LABEL_21;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
    if ( !dragObject )
      goto LABEL_21;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
    if ( !target )
      goto LABEL_21;
    v7 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)target, 0);
    if ( !dragObject )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
    if ( !v7 )
      goto LABEL_21;
    v41 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
    x = v41.fields.x;
    y = v41.fields.y;
    z = v41.fields.z;
    v13 = this->fields.dragObject;
    v14 = SupportSelectItemDrawDrop_TypeInfo;
    if ( !*(&SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo, v8, v9);
      v14 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v43.fields.x = x;
    v43.fields.y = y;
    v43.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v14->static_fields->ACTION_TIME, v43, 0);
    if ( !dragObject )
      goto LABEL_21;
    v15 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v15[3].monitor = gameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18, v19, v20, v21, v22);
    v23 = StringLiteral_10312/*"OnFinishedSwapMove"*/;
    v15[3].fields.m_CachedPtr = StringLiteral_10312/*"OnFinishedSwapMove"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15[3].fields, v23, v24, v25, v26, v27, v28, v29);
    ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, v30);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_dropObject, (int32_t)target, v33, v34, v35, v36, v37, v38);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, 0), !ListViewObj)
      || (v39 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(ListViewObj, 0)) == 0)
      || (v42 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !v39) )
    {
LABEL_21:
      sub_2213CDC(dragObject, v5);
    }
    SupportSelectListViewDropObject__DoSwap(
      v39,
      v42,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v5);
  }
}


SupportSelectListViewManager_o *SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v4; // x1
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596CC57 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectListViewManager_TypeInfo);
    byte_596CC57 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_2213CDC(0, v4);
  manager = ListViewObj->fields.manager;
  if ( !manager )
    return 0;
  naturalAligment = SupportSelectListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewManager_TypeInfo )
    return (SupportSelectListViewManager_o *)ListViewObj->fields.manager;
  return 0;
}


SupportSelectListViewDropObject_o *SupportSelectItemDrawDrop__GetListViewObj(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596CC56 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectListViewDropObject_TypeInfo);
    byte_596CC56 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    return 0;
  naturalAligment = SupportSelectListViewDropObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SupportSelectListViewDropObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewDropObject_TypeInfo )
    return (SupportSelectListViewDropObject_o *)this->fields.mListViewObject;
  return 0;
}


bool SupportSelectItemDrawDrop__IsSameObject(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596CC5B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC5B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_18;
    memberObject = ListViewObj->fields.memberObject;
    v10 = obj->fields.memberObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v10,
                                                           0,
                                                           0);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v10 )
          return memberObject->fields.classPos == v10->fields.classPos;
LABEL_18:
        sub_2213CDC(ListViewObj, v7);
      }
    }
  }
  return 0;
}


void SupportSelectItemDrawDrop__OnDragDropRelease(
        SupportSelectItemDrawDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *Component_object; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_596CC5A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC5A = 1;
  }
  this->fields.surface = 0;
  this->fields.isDrag = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.surface,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( !v12 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  v12 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( !v12 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_2213CDC(v12, v13);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v17);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v19) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v13);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v20);
}


void SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  __int64 v13; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  SupportSelectListViewManager_o *v18; // x19

  if ( (byte_596CC59 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_596CC59 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  v10 = UICamera_TypeInfo;
  this->fields.isDrag = 1;
  if ( !*(&v10->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v10, v3, v4);
    v10 = UICamera_TypeInfo;
  }
  currentTouch = v10->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v3, v4);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_13:
        sub_2213CDC(ListViewManager, v13);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.surface, (int32_t)dragged, v4, v5, v6, v7, v8, v9);
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
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, 0);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, const MethodInfo *))v18->klass->vtable._8_ItemDragStart.methodPtr)(
    v18,
    v18->klass->vtable._8_ItemDragStart.method);
}


void SupportSelectItemDrawDrop__OnFinishDragAndDrop(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *ListViewManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  SupportSelectListViewManager_o *v5; // x19

  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, method);
  if ( !ListViewManager )
    sub_2213CDC(0, v3);
  v5 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 1, v4);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, const MethodInfo *))v5->klass->vtable._9_ItemDragEnd.methodPtr)(
    v5,
    v5->klass->vtable._9_ItemDragEnd.method);
}


void SupportSelectItemDrawDrop__OnFinishedReturnMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *ListViewObj; // x0
  __int64 v4; // x1
  SupportSelectListViewDropObject_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  ListViewObj = (SupportSelectObject_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj
    || (v5 = (SupportSelectListViewDropObject_o *)ListViewObj,
        (ListViewObj = (SupportSelectObject_o *)ListViewObj[1].fields.supportServantData) == 0) )
  {
    sub_2213CDC(ListViewObj, v4);
  }
  SupportSelectObject__ShowEquip(ListViewObj, 0);
  SupportSelectListViewDropObject__DestroyDragObj(v5, v6);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v7);
}


void SupportSelectItemDrawDrop__OnFinishedSwapMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  System_Text_StringBuilder_o *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v22; // x25
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x8
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x8
  __int64 v58; // x1
  SupportSelectObject_o **v59; // x20
  SupportSelectObject_o *v60; // x23
  __int64 v61; // x2
  SupportSelectObject_o *v62; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  intptr_t extra_arg; // x28
  intptr_t method_code; // x29
  __int64 v66; // x2
  intptr_t m_CachedPtr; // x8
  __int64 v68; // x28
  __int64 v69; // x29
  int32_t v70; // w21
  struct SupportSelectMenu_CallbackFunc_o *v71; // x8
  int32_t v72; // w29
  int32_t v73; // w5
  bool IsRarityRestriction; // w28
  struct SupportSelectMenu_CallbackFunc_o *v75; // x8
  intptr_t v76; // x21
  intptr_t v77; // x29
  __int64 v78; // x2
  intptr_t v79; // x8
  __int64 v80; // x21
  __int64 v81; // x29
  int32_t v82; // w21
  struct SupportSelectMenu_CallbackFunc_o *v83; // x8
  int32_t v84; // w29
  int32_t v85; // w5
  int v86; // w29
  System_Text_StringBuilder_o *v87; // x22
  System_Text_StringBuilder_o *v88; // x26
  System_Text_StringBuilder_o *v89; // x25
  __int64 v90; // x1
  __int64 v91; // x2
  Il2CppObject *Entity; // x28
  __int64 v93; // x2
  intptr_t v94; // x8
  PartyOrganizationUtility_o *v95; // x27
  __int64 v96; // x21
  __int64 v97; // x29
  System_String_o *v98; // x28
  int32_t v99; // w29
  int v100; // w26
  Il2CppObject *v101; // x28
  __int64 v102; // x2
  intptr_t v103; // x8
  PartyOrganizationUtility_o *v104; // x27
  __int64 v105; // x21
  __int64 v106; // x29
  UserServantEntity_o *v107; // x8
  System_String_o *v108; // x24
  __int64 v109; // x28
  EquipTargetInfo_o *v110; // x8
  int32_t v111; // w23
  int32_t v112; // w23
  __int64 v113; // x23
  unsigned int classPos; // w19
  SupportSelectObject_o *v115; // x8
  SupportSelectObject_o *v116; // x20
  unsigned int v117; // w21
  __int64 v118; // x8
  int32_t v119; // w21
  int32_t v120; // w23
  __int64 v121; // x1
  __int64 v122; // x2
  float v123; // s8
  int32_t windowHeight; // w25
  System_String_o *v125; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v127; // x21
  System_String_o *v128; // x22
  System_String_o *v129; // x23
  CommonConfirmDialog_ClickDelegate_o *v130; // x24
  int v131; // [xsp+48h] [xbp-A8h]
  System_Text_StringBuilder_o *v132; // [xsp+48h] [xbp-A8h]
  SupportSelectObject_o **v133; // [xsp+50h] [xbp-A0h]
  PartyOrganizationUtility_o *v134; // [xsp+58h] [xbp-98h]
  PartyOrganizationUtility_o *v135; // [xsp+58h] [xbp-98h]
  int v136; // [xsp+58h] [xbp-98h]
  int32_t maxLength[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t minFontSize[2]; // [xsp+68h] [xbp-88h] BYREF
  int32_t actMaxRarity[2]; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *v140; // [xsp+78h] [xbp-78h] BYREF
  System_String_o *skillName; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  if ( (byte_596CC5D & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__);
    sub_2213A60(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
    sub_2213A60(&StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CC5D = 1;
  }
  skillName = 0;
  *(_QWORD *)actMaxRarity = 0;
  v140 = 0;
  *(_QWORD *)maxLength = 0;
  *(_QWORD *)minFontSize = 0;
  v3 = sub_2213CCC(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_103;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v12);
  *(_QWORD *)(v3 + 16) = ListViewObj;
  v14 = v3 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)ListViewObj, v15, v16, v17, v18, v19, v20);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v3 + 24) = dropObject;
  v22 = (UnityEngine_Object_o **)(v3 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)dropObject, v23, v24, v25, v26, v27, v28);
  v31 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( !UnityEngine_Object__op_Inequality(v31, 0, 0) )
    return;
  v34 = *v22;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( !UnityEngine_Object__op_Inequality(v34, 0, 0) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v35);
  *(_QWORD *)(v3 + 40) = ListViewManager;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)ListViewManager, v37, v38, v39, v40, v41, v42);
  v49 = *(_QWORD *)(v3 + 16);
  if ( !v49 )
    goto LABEL_103;
  v50 = *(_QWORD *)(v49 + 120);
  *(_QWORD *)(v3 + 48) = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), v50, v43, v44, v45, v46, v47, v48);
  v57 = *(_QWORD *)(v3 + 24);
  if ( !v57 )
    goto LABEL_103;
  v58 = *(_QWORD *)(v57 + 120);
  *(_QWORD *)(v3 + 56) = v58;
  v59 = (SupportSelectObject_o **)(v3 + 56);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), v58, v51, v52, v53, v54, v55, v56);
  LeaderInfo = *(SupportSelectObject_o **)(v3 + 48);
  if ( !LeaderInfo )
    goto LABEL_103;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  if ( !*v59 )
    goto LABEL_103;
  v60 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v59, 0);
  *(_QWORD *)actMaxRarity = 0;
  v140 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v60 )
    goto LABEL_103;
  v62 = LeaderInfo;
  v133 = (SupportSelectObject_o **)(v3 + 48);
  if ( v60->fields.m_CachedPtr && SLODWORD(v60->fields.eventFriendPoints) >= 1 )
  {
    if ( !LeaderInfo )
      goto LABEL_103;
    callbackFunc = LeaderInfo->fields.callbackFunc;
    if ( callbackFunc )
    {
      extra_arg = callbackFunc->fields.extra_arg;
      method_code = callbackFunc->fields.method_code;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v61);
      *(_QWORD *)&v142.fields.currentCryptoKey = extra_arg;
      *(_QWORD *)&v142.fields.fakeValue = method_code;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v142, 0) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        m_CachedPtr = v60->fields.m_CachedPtr;
        v134 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !m_CachedPtr )
          goto LABEL_103;
        v69 = *(_QWORD *)(m_CachedPtr + 80);
        v68 = *(_QWORD *)(m_CachedPtr + 88);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v66);
        *(_QWORD *)&v143.fields.currentCryptoKey = v69;
        *(_QWORD *)&v143.fields.fakeValue = v68;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v143,
                                                0);
        if ( !v60->fields.m_CachedPtr )
          goto LABEL_103;
        v70 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                (UserServantEntity_o *)v60->fields.m_CachedPtr,
                                                0);
        v71 = v62->fields.callbackFunc;
        if ( !v71 )
          goto LABEL_103;
        v72 = (int)LeaderInfo;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v71->fields.extra_arg,
                0);
        LeaderInfo = (SupportSelectObject_o *)v134;
        if ( !v134 )
          goto LABEL_103;
        IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                                v134,
                                &skillName,
                                &actMaxRarity[1],
                                v70,
                                v72,
                                v73,
                                -1,
                                0);
        goto LABEL_31;
      }
    }
  }
  else if ( !LeaderInfo )
  {
    goto LABEL_103;
  }
  IsRarityRestriction = 0;
LABEL_31:
  if ( !v62->fields.m_CachedPtr )
    goto LABEL_44;
  if ( SLODWORD(v62->fields.eventFriendPoints) < 1 )
    goto LABEL_44;
  v75 = v60->fields.callbackFunc;
  if ( !v75 )
    goto LABEL_44;
  v77 = v75->fields.extra_arg;
  v76 = v75->fields.method_code;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v61);
  *(_QWORD *)&v144.fields.currentCryptoKey = v77;
  *(_QWORD *)&v144.fields.fakeValue = v76;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v144, 0) >= 1 )
  {
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v79 = v62->fields.m_CachedPtr;
    v135 = (PartyOrganizationUtility_o *)LeaderInfo;
    if ( !v79 )
      goto LABEL_103;
    v80 = *(_QWORD *)(v79 + 80);
    v81 = *(_QWORD *)(v79 + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v78);
    *(_QWORD *)&v145.fields.currentCryptoKey = v80;
    *(_QWORD *)&v145.fields.fakeValue = v81;
    LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v145, 0);
    if ( !v62->fields.m_CachedPtr )
      goto LABEL_103;
    v82 = (int)LeaderInfo;
    LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                            (UserServantEntity_o *)v62->fields.m_CachedPtr,
                                            0);
    v83 = v60->fields.callbackFunc;
    if ( !v83 )
      goto LABEL_103;
    v84 = (int)LeaderInfo;
    v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v83->fields.extra_arg,
            0);
    LeaderInfo = (SupportSelectObject_o *)v135;
    if ( !v135 )
      goto LABEL_103;
    LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                            v135,
                                            &v140,
                                            actMaxRarity,
                                            v82,
                                            v84,
                                            v85,
                                            -1,
                                            0);
  }
  else
  {
LABEL_44:
    LeaderInfo = 0;
  }
  v86 = IsRarityRestriction;
  v136 = (unsigned __int8)LeaderInfo & 1;
  if ( v136 | v86 )
  {
    v87 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v87, 0);
    v88 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v88, 0);
    v89 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v89, 0);
    *(_QWORD *)maxLength = 0;
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_103;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_103;
      v131 = IsRarityRestriction;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v60->fields.eventFriendPoints,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v94 = v60->fields.m_CachedPtr;
      if ( !v94 )
        goto LABEL_103;
      v95 = (PartyOrganizationUtility_o *)LeaderInfo;
      v96 = *(_QWORD *)(v94 + 96);
      v97 = *(_QWORD *)(v94 + 104);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v93);
      *(_QWORD *)&v146.fields.currentCryptoKey = v96;
      *(_QWORD *)&v146.fields.fakeValue = v97;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v146, 0);
      if ( !Entity )
        goto LABEL_103;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0,
                                              0);
      if ( !v60->fields.m_CachedPtr )
        goto LABEL_103;
      v98 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              (UserServantEntity_o *)v60->fields.m_CachedPtr,
                                              0);
      if ( !v62->fields.callbackFunc )
        goto LABEL_103;
      v99 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v62->fields.callbackFunc,
                                              0);
      if ( !v95 )
        goto LABEL_103;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v95,
                                              &maxLength[1],
                                              v98,
                                              v99,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0);
      if ( !v88 )
        goto LABEL_103;
      System_Text_StringBuilder__Append_75735064(v88, (System_String_o *)LeaderInfo, 0);
      v86 = v131;
    }
    if ( v136 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_103;
      v132 = v88;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_103;
      v100 = v86;
      v101 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
               (int32_t)v62->fields.eventFriendPoints,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v103 = v62->fields.m_CachedPtr;
      if ( !v103 )
        goto LABEL_103;
      v104 = (PartyOrganizationUtility_o *)LeaderInfo;
      v105 = *(_QWORD *)(v103 + 96);
      v106 = *(_QWORD *)(v103 + 104);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v102);
      *(_QWORD *)&v147.fields.currentCryptoKey = v105;
      *(_QWORD *)&v147.fields.fakeValue = v106;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v147, 0);
      if ( !v101 )
        goto LABEL_103;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)v101,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0,
                                              0);
      v107 = (UserServantEntity_o *)v62->fields.m_CachedPtr;
      if ( !v107 )
        goto LABEL_103;
      v108 = (System_String_o *)LeaderInfo;
      v86 = v100;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v107, 0);
      v88 = v132;
      v109 = v3 + 48;
      v110 = (EquipTargetInfo_o *)v60->fields.callbackFunc;
      if ( !v110 )
        goto LABEL_103;
      v111 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v110, 0);
      if ( !v104 )
        goto LABEL_103;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v104,
                                              maxLength,
                                              v108,
                                              v111,
                                              (System_String_o *)LeaderInfo,
                                              v140,
                                              actMaxRarity[0],
                                              0);
      if ( !v89 )
        goto LABEL_103;
      System_Text_StringBuilder__Append_75735064(v89, (System_String_o *)LeaderInfo, 0);
      v112 = maxLength[0];
    }
    else
    {
      v109 = v3 + 48;
      v112 = 0;
    }
    v119 = maxLength[1];
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v90, v91);
    v120 = System_Math__Max_77153260(v119, v112, 0);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v120,
        0);
      if ( *(_QWORD *)v109 )
      {
        if ( *v59 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v109 + 60LL) >= (*v59)->fields.classPos )
          {
            v5 = v89;
            v89 = v88;
            if ( !v87 )
              goto LABEL_103;
          }
          else
          {
            v5 = v88;
            if ( !v87 )
              goto LABEL_103;
          }
          System_Text_StringBuilder__Append_75735696(v87, v5, 0);
          System_Text_StringBuilder__Append_75735696(v87, v89, 0);
          v123 = (v136 & v86) != 0 ? 40.0 : 30.0;
          windowHeight = (v136 & v86) != 0 ? 520 : 480;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121, v122);
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
          System_Text_StringBuilder__Append_75735064(v87, v125, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v127 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v87->klass->vtable._3_ToString.methodPtr)(
                                      v87,
                                      v87->klass->vtable._3_ToString.method);
          v128 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
          v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v130,
            (Il2CppObject *)v3,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_37373584(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v127,
              v128,
              v129,
              v130,
              minFontSize[1],
              minFontSize[0],
              v123,
              728,
              2,
              windowHeight,
              flt_E9A4A8[(v136 & v86) == 0],
              0,
              0,
              240,
              1,
              0);
            return;
          }
        }
      }
    }
LABEL_103:
    sub_2213CDC(LeaderInfo, v5);
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_103;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v14 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_103;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  if ( !*v22 )
    goto LABEL_103;
  LeaderInfo = (SupportSelectObject_o *)(*v22)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_103;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  LeaderInfo = *(SupportSelectObject_o **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_103;
  SupportSelectListViewDropObject__DestroyDragObj(
    (SupportSelectListViewDropObject_o *)LeaderInfo,
    (const MethodInfo *)v5);
  LeaderInfo = (SupportSelectObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_103;
  SupportSelectListViewDropObject__DestroyDragObj(
    (SupportSelectListViewDropObject_o *)LeaderInfo,
    (const MethodInfo *)v5);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  LeaderInfo = *v133;
  if ( !*v133 )
    goto LABEL_103;
  v113 = *(_QWORD *)(v3 + 40);
  classPos = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  v115 = *v59;
  if ( !*v59 )
    goto LABEL_103;
  v116 = LeaderInfo;
  v117 = v115->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v115, 0);
  if ( !v113 )
    goto LABEL_103;
  v118 = *(_QWORD *)(v113 + 360);
  if ( v118 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v118 + 24))(
      *(_QWORD *)(v118 + 64),
      1,
      classPos,
      v116,
      v117,
      LeaderInfo,
      *(_QWORD *)(v118 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, (const MethodInfo *)v5);
}


void SupportSelectItemDrawDrop__SetBaseTransform(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *listViewObject; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct ListViewObject_o *Component_object; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_596CC55 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC55 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0, 0) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mListViewObject,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v14 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v14,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mDragScrollView,
          (int32_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0) )
  {
    sub_2213CDC(mListViewObject, v12);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0);
  this->fields.mTrans = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
    (int32_t)transform,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCollider, (int32_t)v28, v29, v30, v31, v32, v33, v34);
}


void SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_596CC58 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_596CC58 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method, v2);
    if ( !UICamera__IsPressed(surface, 0) )
      ((void (__fastcall *)(SupportSelectItemDrawDrop_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.surface,
        this->klass->vtable._8_OnDragDropRelease.method);
  }
}


void SupportSelectItemDrawDrop____n__0(
        SupportSelectItemDrawDrop_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, surface, 0);
}


void SupportSelectItemDrawDrop___c__DisplayClass13_0___ctor(
        SupportSelectItemDrawDrop___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDrawDrop___c__DisplayClass13_0___OnFinishedSwapMove_b__0(
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
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v10; // x21
  unsigned int classPos; // w22
  struct SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x8

  v4 = this;
  if ( (byte_596CC60 & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CC60 = 1;
  }
  from = v4->fields.from;
  if ( !from )
    goto LABEL_19;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)from->fields.memberObject;
  if ( !this )
    goto LABEL_19;
  SupportSelectObject__ShowEquip((SupportSelectObject_o *)this, 0);
  to = v4->fields.to;
  if ( !to )
    goto LABEL_19;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)to->fields.memberObject;
  if ( !this )
    goto LABEL_19;
  SupportSelectObject__ShowEquip((SupportSelectObject_o *)this, 0);
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
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  if ( !isDecide )
    goto LABEL_16;
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.fromMember;
  if ( !this
    || (manager = v4->fields.manager,
        toMember_high = HIDWORD(this->fields.toMember),
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      (SupportSelectObject_o *)this,
                                                                      0),
        (toMember = v4->fields.toMember) == 0)
    || (v10 = this,
        classPos = toMember->fields.classPos,
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      v4->fields.toMember,
                                                                      0),
        !manager) )
  {
LABEL_19:
    sub_2213CDC(this, isDecide);
  }
  dragSwapCallbackFunc = manager->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, intptr_t))dragSwapCallbackFunc->fields.invoke_impl)(
      dragSwapCallbackFunc->fields.method_code,
      1,
      toMember_high,
      v10,
      classPos,
      this,
      dragSwapCallbackFunc->fields.method);
LABEL_16:
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_19;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)this, (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}