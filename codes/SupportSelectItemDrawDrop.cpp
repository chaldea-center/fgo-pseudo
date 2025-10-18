void SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4C3F652 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectItemDrawDrop_TypeInfo);
    byte_4C3F652 = 1;
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
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *v5; // x20
  SupportSelectItemDrawDrop_c *v6; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Component_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3F651 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1C37058(&StringLiteral_9909/*"OnFinishedReturnMove"*/);
    byte_4C3F651 = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_12;
  v4 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0);
  if ( !ListViewObj )
    goto LABEL_12;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)ListViewObj, 0);
  if ( !v4 )
    goto LABEL_12;
  v5 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v4, 0);
  if ( !ListViewObj )
    goto LABEL_12;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0);
  if ( !v5 )
    goto LABEL_12;
  v19 = UnityEngine_Transform__InverseTransformPoint(v5, position, 0);
  v6 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v19.fields.x;
  y = v19.fields.y;
  z = v19.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v6 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v6->static_fields->ACTION_TIME, v20, 0);
  if ( !ListViewObj )
LABEL_12:
    sub_1C372B4(ListViewObj);
  v11 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_9909/*"OnFinishedReturnMove"*/;
  v11[3].fields.m_CachedPtr = StringLiteral_9909/*"OnFinishedReturnMove"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11[3].fields, v15, v16, v17);
}


void SupportSelectItemDrawDrop__DoSwapMove(
        SupportSelectItemDrawDrop_o *this,
        SupportSelectListViewDropObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *v6; // x21
  UnityEngine_GameObject_o *v7; // x21
  float x; // s8
  float y; // s9
  SupportSelectItemDrawDrop_c *v10; // x0
  float z; // s10
  UnityEngine_GameObject_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  SupportSelectListViewDropObject_o *v25; // x19
  const MethodInfo *v26; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3F64F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1C37058(&StringLiteral_9910/*"OnFinishedSwapMove"*/);
    byte_4C3F64F = 1;
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
    v6 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)target, 0);
    if ( !dragObject )
      goto LABEL_21;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
    if ( !v6 )
      goto LABEL_21;
    v28 = UnityEngine_Transform__InverseTransformPoint(v6, position, 0);
    v7 = this->fields.dragObject;
    x = v28.fields.x;
    y = v28.fields.y;
    v10 = SupportSelectItemDrawDrop_TypeInfo;
    z = v28.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v10 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v30.fields.x = x;
    v30.fields.y = y;
    v30.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v7, v10->static_fields->ACTION_TIME, v30, 0);
    if ( !dragObject )
      goto LABEL_21;
    v12 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12[3].monitor = gameObject;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15);
    v16 = StringLiteral_9910/*"OnFinishedSwapMove"*/;
    v12[3].fields.m_CachedPtr = StringLiteral_9910/*"OnFinishedSwapMove"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12[3].fields, v16, v17, v18);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v19);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v22 = (UnityEngine_Component_o *)ListViewObj;
    sub_1C36FFC((CGThumbnailListItem_o *)p_dropObject, (int32_t)target, v23, v24);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, 0), !v22)
      || (v25 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v22, 0)) == 0)
      || (v29 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0), !v25) )
    {
LABEL_21:
      sub_1C372B4(dragObject);
    }
    SupportSelectListViewDropObject__DoSwap(
      v25,
      v29,
      SupportSelectItemDrawDrop_TypeInfo->static_fields->ACTION_TIME,
      v26);
  }
}


SupportSelectListViewManager_o *SupportSelectItemDrawDrop__GetListViewManager(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3F64A & 1) == 0 )
  {
    sub_1C37058(&SupportSelectListViewManager_TypeInfo);
    byte_4C3F64A = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1C372B4(0);
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

  if ( (byte_4C3F649 & 1) == 0 )
  {
    sub_1C37058(&SupportSelectListViewDropObject_TypeInfo);
    byte_4C3F649 = 1;
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
  struct SupportSelectObject_o *memberObject; // x20
  struct SupportSelectObject_o *v8; // x19

  if ( (byte_4C3F64E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F64E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v5);
    if ( !ListViewObj || !obj )
      goto LABEL_18;
    memberObject = ListViewObj->fields.memberObject;
    v8 = obj->fields.memberObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)memberObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ListViewObj = (SupportSelectListViewDropObject_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v8,
                                                           0,
                                                           0);
      if ( ((unsigned __int8)ListViewObj & 1) != 0 )
      {
        if ( memberObject && v8 )
          return memberObject->fields.classPos == v8->fields.classPos;
LABEL_18:
        sub_1C372B4(ListViewObj);
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
  const MethodInfo *v3; // x3
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C3F64D & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F64D = 1;
  }
  this->fields.surface = 0;
  this->fields.isDrag = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.surface, 0, (int32_t)method, v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0, 0);
  if ( !v6 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( !v6 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1C372B4(v6);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0, 0)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v10) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v7);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v11);
}


void SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  SupportSelectListViewManager_o *v13; // x19

  if ( (byte_4C3F64C & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C3F64C = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  this->fields.isDrag = 1;
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  currentTouch = v6->static_fields->currentTouch;
  if ( currentTouch )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
      if ( !currentTouch )
LABEL_13:
        sub_1C372B4(ListViewManager);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.surface, (int32_t)dragged, v4, v5);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v3);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v11);
  if ( !ListViewManager )
    goto LABEL_13;
  v13 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v12);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_13;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, 0);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, const MethodInfo *))v13->klass->vtable._8_ItemDragStart.methodPtr)(
    v13,
    v13->klass->vtable._8_ItemDragStart.method);
}


void SupportSelectItemDrawDrop__OnFinishDragAndDrop(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v3; // x2
  SupportSelectListViewManager_o *v4; // x19

  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, method);
  if ( !ListViewManager )
    sub_1C372B4(0);
  v4 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 1, v3);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, const MethodInfo *))v4->klass->vtable._9_ItemDragEnd.methodPtr)(
    v4,
    v4->klass->vtable._9_ItemDragEnd.method);
}


void SupportSelectItemDrawDrop__OnFinishedReturnMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *ListViewObj; // x0
  SupportSelectListViewDropObject_o *v4; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  ListViewObj = (SupportSelectObject_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj
    || (v4 = (SupportSelectListViewDropObject_o *)ListViewObj,
        (ListViewObj = (SupportSelectObject_o *)ListViewObj[1].fields.supportServantData) == 0) )
  {
    sub_1C372B4(ListViewObj);
  }
  SupportSelectObject__ShowEquip(ListViewObj, 0);
  SupportSelectListViewDropObject__DestroyDragObj(v4, v5);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v6);
}


void SupportSelectItemDrawDrop__OnFinishedSwapMove(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v9; // x27
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  const MethodInfo *v18; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  __int64 v30; // x1
  SupportSelectObject_o **v31; // x20
  SupportSelectObject_o *v32; // x23
  SupportSelectObject_o *v33; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  intptr_t method_code; // x25
  intptr_t extra_arg; // x29
  intptr_t m_CachedPtr; // x8
  __int64 v38; // x25
  __int64 v39; // x29
  int32_t v40; // w25
  struct SupportSelectMenu_CallbackFunc_o *v41; // x8
  int32_t v42; // w29
  int32_t v43; // w5
  struct SupportSelectMenu_CallbackFunc_o *v44; // x8
  intptr_t v45; // x25
  intptr_t v46; // x29
  intptr_t v47; // x8
  __int64 v48; // x25
  __int64 v49; // x29
  int32_t v50; // w29
  struct SupportSelectMenu_CallbackFunc_o *v51; // x8
  int32_t v52; // w25
  int32_t v53; // w5
  _BOOL4 IsRarityRestriction; // w29
  unsigned __int8 v55; // w26
  System_Text_StringBuilder_o *v56; // x22
  System_Text_StringBuilder_o *v57; // x27
  System_Text_StringBuilder_o *v58; // x25
  Il2CppObject *Entity; // x25
  intptr_t v60; // x8
  PartyOrganizationUtility_o *v61; // x28
  __int64 v62; // x26
  __int64 v63; // x27
  System_String_o *v64; // x25
  int32_t v65; // w26
  Il2CppObject *v66; // x25
  intptr_t v67; // x8
  PartyOrganizationUtility_o *v68; // x28
  __int64 v69; // x26
  __int64 v70; // x27
  UserServantEntity_o *v71; // x8
  System_String_o *v72; // x24
  EquipTargetInfo_o *v73; // x8
  int32_t v74; // w23
  int32_t v75; // w23
  int32_t v76; // w24
  int32_t v77; // w23
  int32_t v78; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v80; // x1
  System_Text_StringBuilder_o *v81; // x20
  float v82; // s8
  int32_t windowHeight; // w25
  float v84; // s9
  System_String_o *v85; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v87; // x21
  System_String_o *v88; // x22
  System_String_o *v89; // x23
  CommonConfirmDialog_ClickDelegate_o *v90; // x24
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  __int64 v93; // x23
  unsigned int v94; // w19
  SupportSelectObject_o *v95; // x8
  unsigned int v96; // w21
  SupportSelectObject_o *v97; // x20
  const MethodInfo *v98; // x1
  __int64 v99; // x8
  System_Text_StringBuilder_o *v100; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v101; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v102; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v103; // [xsp+50h] [xbp-A0h]
  unsigned int v104; // [xsp+50h] [xbp-A0h]
  unsigned __int8 v105; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v109; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  if ( (byte_4C3F650 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__);
    sub_1C37058(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
    sub_1C37058(&StringLiteral_10101/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F650 = 1;
  }
  v109 = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  *(_QWORD *)actMaxRarity = 0;
  *(_QWORD *)maxLength = 0;
  v3 = sub_1C372A4(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_110;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v7);
  *(_QWORD *)(v3 + 16) = ListViewObj;
  v9 = v3 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)ListViewObj, v10, v11);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v3 + 24) = dropObject;
  v13 = (UnityEngine_Object_o **)(v3 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)dropObject, v14, v15);
  v16 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v16, 0, 0) )
    return;
  v17 = *v13;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v17, 0, 0) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v18);
  *(_QWORD *)(v3 + 40) = ListViewManager;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)ListViewManager, v20, v21);
  v24 = *(_QWORD *)(v3 + 16);
  if ( !v24 )
    goto LABEL_110;
  v25 = *(_QWORD *)(v24 + 120);
  *(_QWORD *)(v3 + 48) = v25;
  v26 = v3 + 48;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 48), v25, v22, v23);
  v29 = *(_QWORD *)(v3 + 24);
  if ( !v29 )
    goto LABEL_110;
  v30 = *(_QWORD *)(v29 + 120);
  *(_QWORD *)(v3 + 56) = v30;
  v31 = (SupportSelectObject_o **)(v3 + 56);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 56), v30, v27, v28);
  LeaderInfo = *(SupportSelectObject_o **)(v3 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  if ( !*v31 )
    goto LABEL_110;
  v32 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v31, 0);
  *(_QWORD *)actMaxRarity = 0;
  v109 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v32 )
    goto LABEL_110;
  v33 = LeaderInfo;
  if ( v32->fields.m_CachedPtr && SLODWORD(v32->fields.eventFriendPoints) >= 1 )
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
      *(_QWORD *)&v111.fields.currentCryptoKey = extra_arg;
      *(_QWORD *)&v111.fields.fakeValue = method_code;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v111, 0) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        m_CachedPtr = v32->fields.m_CachedPtr;
        v103 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !m_CachedPtr )
          goto LABEL_110;
        v38 = *(_QWORD *)(m_CachedPtr + 80);
        v39 = *(_QWORD *)(m_CachedPtr + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v112.fields.currentCryptoKey = v38;
        *(_QWORD *)&v112.fields.fakeValue = v39;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                v112,
                                                0);
        if ( !v32->fields.m_CachedPtr )
          goto LABEL_110;
        v40 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                (UserServantEntity_o *)v32->fields.m_CachedPtr,
                                                0);
        v41 = v33->fields.callbackFunc;
        if ( !v41 )
          goto LABEL_110;
        v42 = (int)LeaderInfo;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v41->fields.extra_arg,
                0);
        LeaderInfo = (SupportSelectObject_o *)v103;
        if ( !v103 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v103,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v40,
                                                v42,
                                                v43,
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
  if ( v33->fields.m_CachedPtr && SLODWORD(v33->fields.eventFriendPoints) >= 1 && (v44 = v32->fields.callbackFunc) != 0 )
  {
    v104 = (unsigned int)LeaderInfo;
    v46 = v44->fields.extra_arg;
    v45 = v44->fields.method_code;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v113.fields.currentCryptoKey = v46;
    *(_QWORD *)&v113.fields.fakeValue = v45;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v113, 0) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v47 = v33->fields.m_CachedPtr;
      v101 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v47 )
        goto LABEL_110;
      v49 = *(_QWORD *)(v47 + 80);
      v48 = *(_QWORD *)(v47 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v114.fields.currentCryptoKey = v49;
      *(_QWORD *)&v114.fields.fakeValue = v48;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v114, 0);
      if ( !v33->fields.m_CachedPtr )
        goto LABEL_110;
      v50 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              (UserServantEntity_o *)v33->fields.m_CachedPtr,
                                              0);
      v51 = v32->fields.callbackFunc;
      if ( !v51 )
        goto LABEL_110;
      v52 = (int)LeaderInfo;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v51->fields.extra_arg,
              0);
      LeaderInfo = (SupportSelectObject_o *)v101;
      if ( !v101 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v101,
                              &v109,
                              actMaxRarity,
                              v50,
                              v52,
                              v53,
                              -1,
                              0);
    }
    LeaderInfo = (SupportSelectObject_o *)v104;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v55 = (unsigned __int8)LeaderInfo;
    v56 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v56, 0);
    v57 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v57, 0);
    v58 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v58, 0);
    *(_QWORD *)maxLength = 0;
    v105 = v55;
    v100 = v58;
    v102 = (PartyOrganizationUtility_o *)v57;
    if ( (v55 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v32->fields.eventFriendPoints,
                 (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v60 = v32->fields.m_CachedPtr;
      if ( !v60 )
        goto LABEL_110;
      v61 = (PartyOrganizationUtility_o *)LeaderInfo;
      v63 = *(_QWORD *)(v60 + 96);
      v62 = *(_QWORD *)(v60 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v115.fields.currentCryptoKey = v63;
      *(_QWORD *)&v115.fields.fakeValue = v62;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v115, 0);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0);
      if ( !v32->fields.m_CachedPtr )
        goto LABEL_110;
      v64 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              (UserServantEntity_o *)v32->fields.m_CachedPtr,
                                              0);
      if ( !v33->fields.callbackFunc )
        goto LABEL_110;
      v65 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v33->fields.callbackFunc,
                                              0);
      if ( !v61 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v61,
                                              &maxLength[1],
                                              v64,
                                              v65,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0);
      v57 = (System_Text_StringBuilder_o *)v102;
      if ( !v102 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_63646720((System_Text_StringBuilder_o *)v102, (System_String_o *)LeaderInfo, 0);
      v58 = v100;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v66 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
              (int32_t)v33->fields.eventFriendPoints,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v67 = v33->fields.m_CachedPtr;
      if ( !v67 )
        goto LABEL_110;
      v68 = (PartyOrganizationUtility_o *)LeaderInfo;
      v70 = *(_QWORD *)(v67 + 96);
      v69 = *(_QWORD *)(v67 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v116.fields.currentCryptoKey = v70;
      *(_QWORD *)&v116.fields.fakeValue = v69;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v116, 0);
      if ( !v66 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)v66,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0,
                                              0);
      v71 = (UserServantEntity_o *)v33->fields.m_CachedPtr;
      if ( !v71 )
        goto LABEL_110;
      v72 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v71, 0);
      v73 = (EquipTargetInfo_o *)v32->fields.callbackFunc;
      if ( !v73 )
        goto LABEL_110;
      v74 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v73, 0);
      if ( !v68 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v68,
                                              maxLength,
                                              v72,
                                              v74,
                                              (System_String_o *)LeaderInfo,
                                              v109,
                                              actMaxRarity[0],
                                              0);
      v58 = v100;
      if ( !v100 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_63646720(v100, (System_String_o *)LeaderInfo, 0);
      v57 = (System_Text_StringBuilder_o *)v102;
    }
    v76 = maxLength[0];
    v75 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v77 = System_Math__Max_65085088(v75, v76, 0);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v77,
        0);
      if ( *(_QWORD *)v26 )
      {
        if ( *v31 && v56 )
        {
          v78 = *(_DWORD *)(*(_QWORD *)v26 + 60LL);
          classPos = (*v31)->fields.classPos;
          v80 = v78 >= classPos ? v58 : v57;
          v81 = v78 >= classPos ? v57 : v58;
          System_Text_StringBuilder__Append_63647348(v56, v80, 0);
          System_Text_StringBuilder__Append_63647348(v56, v81, 0);
          v82 = (v105 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v105 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v84 = (v105 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_10101/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
          System_Text_StringBuilder__Append_63646720(v56, v85, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v87 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v56->klass->vtable._3_ToString.methodPtr)(
                                     v56,
                                     v56->klass->vtable._3_ToString.method);
          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
          v90 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v90,
            (Il2CppObject *)v3,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_31208316(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v87,
              v88,
              v89,
              v90,
              minFontSize[1],
              minFontSize[0],
              v84,
              728,
              2,
              windowHeight,
              v82,
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
    sub_1C372B4(LeaderInfo);
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v9 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  if ( !*v13 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v13)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, 0);
  LeaderInfo = *(SupportSelectObject_o **)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v91);
  LeaderInfo = (SupportSelectObject_o *)*v13;
  if ( !*v13 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v92);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0, 0);
  LeaderInfo = *(SupportSelectObject_o **)v26;
  if ( !*(_QWORD *)v26 )
    goto LABEL_110;
  v93 = *(_QWORD *)(v3 + 40);
  v94 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, 0);
  v95 = *v31;
  if ( !*v31 )
    goto LABEL_110;
  v96 = v95->fields.classPos;
  v97 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v95, 0);
  if ( !v93 )
    goto LABEL_110;
  v99 = *(_QWORD *)(v93 + 360);
  if ( v99 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v99 + 24))(
      *(_QWORD *)(v99 + 64),
      1,
      v94,
      v97,
      v96,
      LeaderInfo,
      *(_QWORD *)(v99 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v98);
}


void SupportSelectItemDrawDrop__SetBaseTransform(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ListViewObject_o *Component_object; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C3F648 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F648 = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0, 0) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v4, v5);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v8 = UnityEngine_Component__GetComponent_object_(
               mListViewObject,
               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v8,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mDragScrollView, (int32_t)v8, v9, v10),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0) )
  {
    sub_1C372B4(mListViewObject);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0);
  this->fields.mTrans = transform;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v12, v13);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCollider, (int32_t)v14, v15, v16);
}


void SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4C3F64B & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C3F64B = 1;
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


void SupportSelectItemDrawDrop___c__DisplayClass13_0___OnFinishedSwapMove_b__0(
        SupportSelectItemDrawDrop___c__DisplayClass13_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v4; // x19
  struct SupportSelectListViewDropObject_o *from; // x8
  struct SupportSelectListViewDropObject_o *to; // x8
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct SupportSelectListViewManager_o *manager; // x23
  unsigned int toMember_high; // w20
  struct SupportSelectObject_o *toMember; // x8
  unsigned int classPos; // w22
  SupportSelectItemDrawDrop___c__DisplayClass13_0_o *v14; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc; // x8

  v4 = this;
  if ( (byte_4C3F653 & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F653 = 1;
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
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)this, v7);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.to;
  if ( !this )
    goto LABEL_19;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)this, v8);
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
        v14 = this,
        this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SupportSelectObject__GetLeaderInfo(
                                                                      v4->fields.toMember,
                                                                      0),
        !manager) )
  {
LABEL_19:
    sub_1C372B4(this);
  }
  dragSwapCallbackFunc = manager->fields.dragSwapCallbackFunc;
  if ( dragSwapCallbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, _QWORD, SupportSelectItemDrawDrop___c__DisplayClass13_0_o *, intptr_t))dragSwapCallbackFunc->fields.invoke_impl)(
      dragSwapCallbackFunc->fields.method_code,
      1,
      toMember_high,
      v14,
      classPos,
      this,
      dragSwapCallbackFunc->fields.method);
LABEL_16:
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_19;
  SupportSelectItemDrawDrop__OnFinishDragAndDrop((SupportSelectItemDrawDrop_o *)this, v9);
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0);
}