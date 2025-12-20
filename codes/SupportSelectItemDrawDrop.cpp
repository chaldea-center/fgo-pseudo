void SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4D28D88 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectItemDrawDrop_TypeInfo);
    byte_4D28D88 = 1;
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
  SupportSelectItemDrawDrop_c *v7; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Component_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D28D87 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1C94098(&StringLiteral_9931/*"OnFinishedReturnMove"*/);
    byte_4D28D87 = 1;
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
  v28 = UnityEngine_Transform__InverseTransformPoint(v6, position, 0);
  v7 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v28.fields.x;
  y = v28.fields.y;
  z = v28.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v7 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v7->static_fields->ACTION_TIME, v29, 0);
  if ( !ListViewObj )
LABEL_12:
    sub_1C942F0(ListViewObj, v4);
  v12 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12[3].monitor = gameObject;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_9931/*"OnFinishedReturnMove"*/;
  v12[3].fields.m_CachedPtr = StringLiteral_9931/*"OnFinishedReturnMove"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[3].fields, v20, v21, v22, v23, v24, v25, v26);
}


void SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v11; // x0
  float z; // s10
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  SupportSelectListViewDropObject_o *v38; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D28D85 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1C94098(&StringLiteral_9932/*"OnFinishedSwapMove"*/);
    byte_4D28D85 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v40 = UnityEngine_Transform__InverseTransformPoint(v7, position, 0);
    v8 = this->fields.dragObject;
    x = v40.fields.x;
    y = v40.fields.y;
    v11 = SupportSelectItemDrawDrop_TypeInfo;
    z = v40.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v11 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v42.fields.x = x;
    v42.fields.y = y;
    v42.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v11->static_fields->ACTION_TIME, v42, 0);
    if ( !dragObject )
      goto LABEL_21;
    v13 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v13[3].monitor = gameObject;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
    v21 = StringLiteral_9932/*"OnFinishedSwapMove"*/;
    v13[3].fields.m_CachedPtr = StringLiteral_9932/*"OnFinishedSwapMove"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[3].fields, v21, v22, v23, v24, v25, v26, v27);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v28);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v31 = (UnityEngine_Component_o *)ListViewObj;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_dropObject, (int32_t)target, v32, v33, v34, v35, v36, v37);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, 0), !v31)
      || (v38 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v31, 0)) == 0)
      || (v41 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !v38) )
    {
LABEL_21:
      sub_1C942F0(dragObject, v5);
    }
    SupportSelectListViewDropObject__DoSwap(
      v38,
      v41,
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

  if ( (byte_4D28D80 & 1) == 0 )
  {
    sub_1C94098(&SupportSelectListViewManager_TypeInfo);
    byte_4D28D80 = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1C942F0(0, v4);
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

  if ( (byte_4D28D7F & 1) == 0 )
  {
    sub_1C94098(&SupportSelectListViewDropObject_TypeInfo);
    byte_4D28D7F = 1;
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
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v9; // x19

  if ( (byte_4D28D84 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D84 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_18;
    memberObject = ListViewObj->fields.memberObject;
    v9 = obj->fields.memberObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v9,
                                                           0,
                                                           0);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v9 )
          return memberObject->fields.classPos == v9->fields.classPos;
LABEL_18:
        sub_1C942F0(ListViewObj, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4D28D83 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D83 = 1;
  }
  this->fields.surface = 0;
  this->fields.isDrag = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.surface, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( !v10 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( !v10 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1C942F0(v10, v11);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v14) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v11);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v15);
}


void SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  __int64 v13; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  SupportSelectListViewManager_o *v18; // x19

  if ( (byte_4D28D82 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D28D82 = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
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
        sub_1C942F0(ListViewManager, v13);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.surface, (int32_t)dragged, v4, v5, v6, v7, v8, v9);
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
    sub_1C942F0(0, v3);
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
    sub_1C942F0(ListViewObj, v4);
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
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v14; // x27
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v22; // x26
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Object_o *v30; // x20
  const MethodInfo *v31; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  __int64 v45; // x8
  __int64 v46; // x1
  __int64 v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x8
  __int64 v55; // x1
  SupportSelectObject_o **v56; // x20
  SupportSelectObject_o *v57; // x23
  SupportSelectObject_o *v58; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  intptr_t method_code; // x25
  intptr_t extra_arg; // x29
  intptr_t m_CachedPtr; // x8
  __int64 v63; // x25
  __int64 v64; // x29
  int32_t v65; // w25
  struct SupportSelectMenu_CallbackFunc_o *v66; // x8
  int32_t v67; // w29
  int32_t v68; // w5
  struct SupportSelectMenu_CallbackFunc_o *v69; // x8
  intptr_t v70; // x25
  intptr_t v71; // x29
  intptr_t v72; // x8
  __int64 v73; // x25
  __int64 v74; // x29
  int32_t v75; // w29
  struct SupportSelectMenu_CallbackFunc_o *v76; // x8
  int32_t v77; // w25
  int32_t v78; // w5
  _BOOL4 IsRarityRestriction; // w29
  unsigned __int8 v80; // w26
  System_Text_StringBuilder_o *v81; // x22
  System_Text_StringBuilder_o *v82; // x27
  System_Text_StringBuilder_o *v83; // x25
  Il2CppObject *Entity; // x25
  intptr_t v85; // x8
  PartyOrganizationUtility_o *v86; // x28
  __int64 v87; // x26
  __int64 v88; // x27
  System_String_o *v89; // x25
  int32_t v90; // w26
  Il2CppObject *v91; // x25
  intptr_t v92; // x8
  PartyOrganizationUtility_o *v93; // x28
  __int64 v94; // x26
  __int64 v95; // x27
  UserServantEntity_o *v96; // x8
  System_String_o *v97; // x24
  EquipTargetInfo_o *v98; // x8
  int32_t v99; // w23
  int32_t v100; // w23
  int32_t v101; // w24
  int32_t v102; // w23
  int32_t v103; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v105; // x1
  System_Text_StringBuilder_o *v106; // x20
  float v107; // s8
  int32_t windowHeight; // w25
  float v109; // s9
  System_String_o *v110; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v112; // x21
  System_String_o *v113; // x22
  System_String_o *v114; // x23
  CommonConfirmDialog_ClickDelegate_o *v115; // x24
  __int64 v116; // x23
  unsigned int v117; // w19
  SupportSelectObject_o *v118; // x8
  unsigned int v119; // w21
  SupportSelectObject_o *v120; // x20
  __int64 v121; // x8
  System_Text_StringBuilder_o *v122; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v123; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v124; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v125; // [xsp+50h] [xbp-A0h]
  unsigned int v126; // [xsp+50h] [xbp-A0h]
  unsigned __int8 v127; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v131; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_4D28D86 & 1) == 0 )
  {
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__);
    sub_1C94098(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
    sub_1C94098(&StringLiteral_10130/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_3698/*"COMMON_CONFIRM_YES"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28D86 = 1;
  }
  v131 = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  *(_QWORD *)actMaxRarity = 0;
  *(_QWORD *)maxLength = 0;
  v3 = sub_1C942E4(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_110;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v12);
  *(_QWORD *)(v3 + 16) = ListViewObj;
  v14 = v3 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)ListViewObj, v15, v16, v17, v18, v19, v20);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v3 + 24) = dropObject;
  v22 = (UnityEngine_Object_o **)(v3 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)dropObject, v23, v24, v25, v26, v27, v28);
  v29 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
    return;
  v30 = *v22;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v30, 0, 0) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v31);
  *(_QWORD *)(v3 + 40) = ListViewManager;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)ListViewManager, v33, v34, v35, v36, v37, v38);
  v45 = *(_QWORD *)(v3 + 16);
  if ( !v45 )
    goto LABEL_110;
  v46 = *(_QWORD *)(v45 + 120);
  *(_QWORD *)(v3 + 48) = v46;
  v47 = v3 + 48;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 48), v46, v39, v40, v41, v42, v43, v44);
  v54 = *(_QWORD *)(v3 + 24);
  if ( !v54 )
    goto LABEL_110;
  v55 = *(_QWORD *)(v54 + 120);
  *(_QWORD *)(v3 + 56) = v55;
  v56 = (SupportSelectObject_o **)(v3 + 56);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 56), v55, v48, v49, v50, v51, v52, v53);
  LeaderInfo = *(SupportSelectObject_o **)(v3 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  if ( !*v56 )
    goto LABEL_110;
  v57 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v56, 0);
  *(_QWORD *)actMaxRarity = 0;
  v131 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v57 )
    goto LABEL_110;
  v58 = LeaderInfo;
  if ( v57->fields.m_CachedPtr && SLODWORD(v57->fields.eventFriendPoints) >= 1 )
  {
    if ( !LeaderInfo )
      goto LABEL_110;
    callbackFunc = LeaderInfo->fields.callbackFunc;
    if ( callbackFunc )
    {
      extra_arg = callbackFunc->fields.extra_arg;
      method_code = callbackFunc->fields.method_code;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v133.fields.currentCryptoKey = extra_arg;
      *(_QWORD *)&v133.fields.fakeValue = method_code;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v133, 0) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        m_CachedPtr = v57->fields.m_CachedPtr;
        v125 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !m_CachedPtr )
          goto LABEL_110;
        v63 = *(_QWORD *)(m_CachedPtr + 80);
        v64 = *(_QWORD *)(m_CachedPtr + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v134.fields.currentCryptoKey = v63;
        *(_QWORD *)&v134.fields.fakeValue = v64;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                v134,
                                                0);
        if ( !v57->fields.m_CachedPtr )
          goto LABEL_110;
        v65 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                (UserServantEntity_o *)v57->fields.m_CachedPtr,
                                                0);
        v66 = v58->fields.callbackFunc;
        if ( !v66 )
          goto LABEL_110;
        v67 = (int)LeaderInfo;
        v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v66->fields.extra_arg,
                0);
        LeaderInfo = (SupportSelectObject_o *)v125;
        if ( !v125 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v125,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v65,
                                                v67,
                                                v68,
                                                -1,
                                                0);
        goto LABEL_31;
      }
    }
  }
  else if ( !LeaderInfo )
  {
    goto LABEL_110;
  }
  LeaderInfo = 0;
LABEL_31:
  if ( v58->fields.m_CachedPtr && SLODWORD(v58->fields.eventFriendPoints) >= 1 && (v69 = v57->fields.callbackFunc) != 0 )
  {
    v126 = (unsigned int)LeaderInfo;
    v71 = v69->fields.extra_arg;
    v70 = v69->fields.method_code;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v135.fields.currentCryptoKey = v71;
    *(_QWORD *)&v135.fields.fakeValue = v70;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v135, 0) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v72 = v58->fields.m_CachedPtr;
      v123 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v72 )
        goto LABEL_110;
      v74 = *(_QWORD *)(v72 + 80);
      v73 = *(_QWORD *)(v72 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v136.fields.currentCryptoKey = v74;
      *(_QWORD *)&v136.fields.fakeValue = v73;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v136, 0);
      if ( !v58->fields.m_CachedPtr )
        goto LABEL_110;
      v75 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              (UserServantEntity_o *)v58->fields.m_CachedPtr,
                                              0);
      v76 = v57->fields.callbackFunc;
      if ( !v76 )
        goto LABEL_110;
      v77 = (int)LeaderInfo;
      v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v76->fields.extra_arg,
              0);
      LeaderInfo = (SupportSelectObject_o *)v123;
      if ( !v123 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v123,
                              &v131,
                              actMaxRarity,
                              v75,
                              v77,
                              v78,
                              -1,
                              0);
    }
    LeaderInfo = (SupportSelectObject_o *)v126;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v80 = (unsigned __int8)LeaderInfo;
    v81 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v81, 0);
    v82 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v82, 0);
    v83 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v83, 0);
    *(_QWORD *)maxLength = 0;
    v127 = v80;
    v122 = v83;
    v124 = (PartyOrganizationUtility_o *)v82;
    if ( (v80 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v57->fields.eventFriendPoints,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v85 = v57->fields.m_CachedPtr;
      if ( !v85 )
        goto LABEL_110;
      v86 = (PartyOrganizationUtility_o *)LeaderInfo;
      v88 = *(_QWORD *)(v85 + 96);
      v87 = *(_QWORD *)(v85 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v137.fields.currentCryptoKey = v88;
      *(_QWORD *)&v137.fields.fakeValue = v87;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v137, 0);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0);
      if ( !v57->fields.m_CachedPtr )
        goto LABEL_110;
      v89 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              (UserServantEntity_o *)v57->fields.m_CachedPtr,
                                              0);
      if ( !v58->fields.callbackFunc )
        goto LABEL_110;
      v90 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v58->fields.callbackFunc,
                                              0);
      if ( !v86 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v86,
                                              &maxLength[1],
                                              v89,
                                              v90,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0);
      v82 = (System_Text_StringBuilder_o *)v124;
      if ( !v124 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_64501704((System_Text_StringBuilder_o *)v124, (System_String_o *)LeaderInfo, 0);
      v83 = v122;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v91 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
              (int32_t)v58->fields.eventFriendPoints,
              (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v92 = v58->fields.m_CachedPtr;
      if ( !v92 )
        goto LABEL_110;
      v93 = (PartyOrganizationUtility_o *)LeaderInfo;
      v95 = *(_QWORD *)(v92 + 96);
      v94 = *(_QWORD *)(v92 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v138.fields.currentCryptoKey = v95;
      *(_QWORD *)&v138.fields.fakeValue = v94;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v138, 0);
      if ( !v91 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)v91,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0);
      v96 = (UserServantEntity_o *)v58->fields.m_CachedPtr;
      if ( !v96 )
        goto LABEL_110;
      v97 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v96, 0);
      v98 = (EquipTargetInfo_o *)v57->fields.callbackFunc;
      if ( !v98 )
        goto LABEL_110;
      v99 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v98, 0);
      if ( !v93 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v93,
                                              maxLength,
                                              v97,
                                              v99,
                                              (System_String_o *)LeaderInfo,
                                              v131,
                                              actMaxRarity[0],
                                              0);
      v83 = v122;
      if ( !v122 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_64501704(v122, (System_String_o *)LeaderInfo, 0);
      v82 = (System_Text_StringBuilder_o *)v124;
    }
    v101 = maxLength[0];
    v100 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v102 = System_Math__Max_65939564(v100, v101, 0);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v102,
        0);
      if ( *(_QWORD *)v47 )
      {
        if ( *v56 && v81 )
        {
          v103 = *(_DWORD *)(*(_QWORD *)v47 + 60LL);
          classPos = (*v56)->fields.classPos;
          v105 = v103 >= classPos ? v83 : v82;
          v106 = v103 >= classPos ? v82 : v83;
          System_Text_StringBuilder__Append_64502332(v81, v105, 0);
          System_Text_StringBuilder__Append_64502332(v81, v106, 0);
          v107 = (v127 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v127 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v109 = (v127 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v110 = LocalizationManager__Get((System_String_o *)StringLiteral_10130/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
          System_Text_StringBuilder__Append_64501704(v81, v110, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v112 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v81->klass->vtable._3_ToString.methodPtr)(
                                      v81,
                                      v81->klass->vtable._3_ToString.method);
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONFIRM_YES"*/, 0);
          v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0);
          v115 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v115,
            (Il2CppObject *)v3,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_31583464(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v112,
              v113,
              v114,
              v115,
              minFontSize[1],
              minFontSize[0],
              v109,
              728,
              2,
              windowHeight,
              v107,
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
LABEL_110:
    sub_1C942F0(LeaderInfo, v5);
  }
  if ( !*(_QWORD *)v14 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v14 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  if ( !*v22 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v22)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  LeaderInfo = *(SupportSelectObject_o **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  LeaderInfo = (SupportSelectObject_o *)*v22;
  if ( !*v22 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  LeaderInfo = *(SupportSelectObject_o **)v47;
  if ( !*(_QWORD *)v47 )
    goto LABEL_110;
  v116 = *(_QWORD *)(v3 + 40);
  v117 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  v118 = *v56;
  if ( !*v56 )
    goto LABEL_110;
  v119 = v118->fields.classPos;
  v120 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v118, 0);
  if ( !v116 )
    goto LABEL_110;
  v121 = *(_QWORD *)(v116 + 360);
  if ( v121 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v121 + 24))(
      *(_QWORD *)(v121 + 64),
      1,
      v117,
      v120,
      v119,
      LeaderInfo,
      *(_QWORD *)(v121 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v5);
}


void SupportSelectItemDrawDrop__SetBaseTransform(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct ListViewObject_o *Component_object; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D28D7E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28D7E = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0, 0) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mListViewObject,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v13 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v13,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mDragScrollView,
          (int32_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0) )
  {
    sub_1C942F0(mListViewObject, v11);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0);
  this->fields.mTrans = transform;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v21, v22, v23, v24, v25, v26);
  v27 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v27;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mCollider, (int32_t)v27, v28, v29, v30, v31, v32, v33);
}


void SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4D28D81 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D28D81 = 1;
  }
  if ( this->fields.isDrag )
  {
    surface = this->fields.surface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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
  unsigned int classPos; // w22
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v11; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x8

  v4 = this;
  if ( (byte_4D28D89 & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28D89 = 1;
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
    || (classPos = toMember->fields.classPos,
        v11 = this,
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      v4->fields.toMember,
                                                                      0),
        !manager) )
  {
LABEL_19:
    sub_1C942F0(this, isDecide);
  }
  dragSwapCallbackFunc = manager->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, intptr_t))dragSwapCallbackFunc->fields.invoke_impl)(
      dragSwapCallbackFunc->fields.method_code,
      1,
      toMember_high,
      v11,
      classPos,
      this,
      dragSwapCallbackFunc->fields.method);
LABEL_16:
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_19;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)this, (const MethodInfo *)isDecide);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}