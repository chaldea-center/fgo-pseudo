void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FAF25 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectItemDrawDrop_TypeInfo, v1);
    byte_49FAF25 = 1;
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FAF24 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectItemDrawDrop_TypeInfo, method);
    sub_1B64870(&StringLiteral_9858/*"OnFinishedReturnMove"*/, v3);
    byte_49FAF24 = 1;
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
  v23 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
  v11 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v23.fields.x;
  y = v23.fields.y;
  z = v23.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v11 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v11->static_fields->ACTION_TIME, v24, 0LL);
  if ( !ListViewObj )
LABEL_12:
    sub_1B64ACC(ListViewObj, v5);
  v16 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v16[3].monitor = gameObject;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v16[3].monitor, (int32_t)gameObject, v18, v19);
  v20 = StringLiteral_9858/*"OnFinishedReturnMove"*/;
  *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_9858/*"OnFinishedReturnMove"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v16[3].fields, v20, v21, v22);
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  SupportSelectListViewDropObject_o *v31; // x19
  int v32; // s0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FAF22 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, target);
    sub_1B64870(&SupportSelectItemDrawDrop_TypeInfo, v5);
    sub_1B64870(&StringLiteral_9859/*"OnFinishedSwapMove"*/, v6);
    byte_49FAF22 = 1;
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
    v35 = UnityEngine_Transform__InverseTransformPoint(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
    v13 = this->fields.dragObject;
    x = v35.fields.x;
    y = v35.fields.y;
    v16 = SupportSelectItemDrawDrop_TypeInfo;
    z = v35.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v16 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->ACTION_TIME, v36, 0LL);
    if ( !dragObject )
      goto LABEL_21;
    v18 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v18[3].monitor = gameObject;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v18[3].monitor, (int32_t)gameObject, v20, v21);
    v22 = StringLiteral_9859/*"OnFinishedSwapMove"*/;
    *(_QWORD *)&v18[3].fields.m_CachedPtr = StringLiteral_9859/*"OnFinishedSwapMove"*/;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v18[3].fields, v22, v23, v24);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v25);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v28 = (UnityEngine_Component_o *)ListViewObj;
    sub_1B64814((ServantStatusBattleListViewItem_o *)p_dropObject, (int32_t)target, v29, v30);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v7), !v28)
      || (v31 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v28, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v31) )
    {
LABEL_21:
      sub_1B64ACC(dragObject, v7);
    }
    SupportSelectListViewDropObject__DoSwap(
      v31,
      *(UnityEngine_Vector3_o *)&v32,
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

  if ( (byte_49FAF1D & 1) == 0 )
  {
    sub_1B64870(&SupportSelectListViewManager_TypeInfo, method);
    byte_49FAF1D = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1B64ACC(0LL, v4);
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

  if ( (byte_49FAF1C & 1) == 0 )
  {
    sub_1B64870(&SupportSelectListViewDropObject_TypeInfo, method);
    byte_49FAF1C = 1;
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

  if ( (byte_49FAF21 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, obj);
    byte_49FAF21 = 1;
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
        sub_1B64ACC(ListViewObj, v7);
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
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_49FAF20 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___, surface);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    byte_49FAF20 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.surface, 0, (int32_t)method, v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v7 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( !v7 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1B64ACC(v7, v8);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v11) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v8);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v12);
}


void __fastcall SupportSelectItemDrawDrop__OnDragDropStart(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  SupportSelectListViewManager_o *ListViewManager; // x0
  const MethodInfo *v9; // x1
  struct UnityEngine_GameObject_o *dragged; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  SupportSelectListViewManager_o *v14; // x19

  if ( (byte_49FAF1F & 1) == 0 )
  {
    sub_1B64870(&UICamera_TypeInfo, method);
    byte_49FAF1F = 1;
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
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
        sub_1B64ACC(ListViewManager, v9);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.surface, (int32_t)dragged, v4, v5);
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v3);
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v12);
  if ( !ListViewManager )
    goto LABEL_13;
  v14 = ListViewManager;
  SupportSelectListViewManager__SetActiveDragSwapGuide(ListViewManager, 0, v13);
  if ( !ListViewObj )
    goto LABEL_13;
  ListViewManager = (SupportSelectListViewManager_o *)ListViewObj->fields.memberObject;
  if ( !ListViewManager )
    goto LABEL_13;
  SupportSelectObject__HideEquip((SupportSelectObject_o *)ListViewManager, v9);
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v14->klass->vtable._7_ItemDragStart.method)(
    v14,
    v14->klass->vtable._8_ItemDragEnd.methodPtr);
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
    sub_1B64ACC(0LL, v3);
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
    sub_1B64ACC(ListViewObj, v4);
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
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v26; // x27
  int32_t v27; // w2
  int32_t v28; // w3
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Object_o *v33; // x20
  UnityEngine_Object_o *v34; // x20
  const MethodInfo *v35; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  __int64 v42; // x1
  __int64 v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  __int64 v47; // x1
  SupportSelectObject_o **v48; // x20
  SupportSelectObject_o *v49; // x23
  SupportSelectObject_o *v50; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct System_Reflection_MethodInfo_o *original_method_info; // x25
  struct System_Reflection_MethodInfo_o *method_info; // x28
  __int64 v54; // x8
  __int64 v55; // x25
  __int64 v56; // x28
  int32_t v57; // w25
  struct SupportSelectMenu_CallbackFunc_o *v58; // x8
  int32_t v59; // w28
  int32_t v60; // w5
  struct SupportSelectMenu_CallbackFunc_o *v61; // x8
  struct System_Reflection_MethodInfo_o *v62; // x25
  struct System_Reflection_MethodInfo_o *v63; // x28
  __int64 v64; // x8
  __int64 v65; // x25
  __int64 v66; // x28
  int32_t v67; // w28
  struct SupportSelectMenu_CallbackFunc_o *v68; // x8
  int32_t v69; // w25
  int32_t v70; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v72; // w26
  System_Text_StringBuilder_o *v73; // x22
  System_Text_StringBuilder_o *v74; // x27
  System_Text_StringBuilder_o *v75; // x25
  Il2CppObject *Entity; // x25
  __int64 v77; // x8
  PartyOrganizationUtility_o *v78; // x29
  __int64 v79; // x26
  __int64 v80; // x27
  System_String_o *v81; // x25
  int32_t v82; // w26
  Il2CppObject *v83; // x25
  __int64 v84; // x8
  PartyOrganizationUtility_o *v85; // x29
  __int64 v86; // x26
  __int64 v87; // x27
  UserServantEntity_o *v88; // x8
  System_String_o *v89; // x24
  EquipTargetInfo_o *v90; // x8
  int32_t v91; // w23
  int32_t v92; // w23
  int32_t v93; // w24
  int32_t v94; // w23
  int32_t v95; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v97; // x1
  System_Text_StringBuilder_o *v98; // x20
  float v99; // s8
  int32_t windowHeight; // w25
  float v101; // s9
  System_String_o *v102; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v104; // x21
  System_String_o *v105; // x22
  System_String_o *v106; // x23
  CommonConfirmDialog_ClickDelegate_o *v107; // x24
  __int64 v108; // x23
  unsigned int v109; // w19
  SupportSelectObject_o *v110; // x8
  unsigned int v111; // w21
  SupportSelectObject_o *v112; // x20
  __int64 v113; // x8
  System_Text_StringBuilder_o *v114; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v115; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v116; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v117; // [xsp+50h] [xbp-A0h]
  unsigned int v118; // [xsp+50h] [xbp-A0h]
  int v119; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v123; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_49FAF23 & 1) == 0 )
  {
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B64870(&LocalizationManager_TypeInfo, v5);
    sub_1B64870(&System_Math_TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B64870(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__, v13);
    sub_1B64870(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo, v14);
    sub_1B64870(&StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v15);
    sub_1B64870(&StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, v16);
    sub_1B64870(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v17);
    sub_1B64870(&StringLiteral_1/*""*/, v18);
    byte_49FAF23 = 1;
  }
  v123 = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  *(_QWORD *)maxLength = 0LL;
  v19 = sub_1B64ABC(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_110;
  *(_QWORD *)(v19 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)this, v22, v23);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v24);
  *(_QWORD *)(v19 + 16) = ListViewObj;
  v26 = v19 + 16;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)ListViewObj, v27, v28);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v19 + 24) = dropObject;
  v30 = (UnityEngine_Object_o **)(v19 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)dropObject, v31, v32);
  v33 = *(UnityEngine_Object_o **)(v19 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    return;
  v34 = *v30;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v35);
  *(_QWORD *)(v19 + 40) = ListViewManager;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)ListViewManager, v37, v38);
  v41 = *(_QWORD *)(v19 + 16);
  if ( !v41 )
    goto LABEL_110;
  v42 = *(_QWORD *)(v41 + 120);
  *(_QWORD *)(v19 + 48) = v42;
  v43 = v19 + 48;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 48), v42, v39, v40);
  v46 = *(_QWORD *)(v19 + 24);
  if ( !v46 )
    goto LABEL_110;
  v47 = *(_QWORD *)(v46 + 120);
  *(_QWORD *)(v19 + 56) = v47;
  v48 = (SupportSelectObject_o **)(v19 + 56);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 56), v47, v44, v45);
  LeaderInfo = *(SupportSelectObject_o **)(v19 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v21);
  if ( !*v48 )
    goto LABEL_110;
  v49 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v48, v21);
  *(_QWORD *)actMaxRarity = 0LL;
  v123 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v49 )
    goto LABEL_110;
  v50 = LeaderInfo;
  if ( *(_QWORD *)&v49->fields.m_CachedPtr && SLODWORD(v49->fields.eventFriendPoints) >= 1 )
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
      *(_QWORD *)&v125.fields.currentCryptoKey = method_info;
      *(_QWORD *)&v125.fields.fakeValue = original_method_info;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v125, 0LL) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v54 = *(_QWORD *)&v49->fields.m_CachedPtr;
        v117 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v54 )
          goto LABEL_110;
        v55 = *(_QWORD *)(v54 + 80);
        v56 = *(_QWORD *)(v54 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v126.fields.currentCryptoKey = v55;
        *(_QWORD *)&v126.fields.fakeValue = v56;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                v126,
                                                0LL);
        if ( !*(_QWORD *)&v49->fields.m_CachedPtr )
          goto LABEL_110;
        v57 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v49->fields.m_CachedPtr,
                                                0LL);
        v58 = v50->fields.callbackFunc;
        if ( !v58 )
          goto LABEL_110;
        v59 = (int)LeaderInfo;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v58->fields.method_info,
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v117;
        if ( !v117 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v117,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v57,
                                                v59,
                                                v60,
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
  if ( *(_QWORD *)&v50->fields.m_CachedPtr
    && SLODWORD(v50->fields.eventFriendPoints) >= 1
    && (v61 = v49->fields.callbackFunc) != 0LL )
  {
    v118 = (unsigned int)LeaderInfo;
    v63 = v61->fields.method_info;
    v62 = v61->fields.original_method_info;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v127.fields.currentCryptoKey = v63;
    *(_QWORD *)&v127.fields.fakeValue = v62;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v127, 0LL) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v64 = *(_QWORD *)&v50->fields.m_CachedPtr;
      v115 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v64 )
        goto LABEL_110;
      v66 = *(_QWORD *)(v64 + 80);
      v65 = *(_QWORD *)(v64 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v128.fields.currentCryptoKey = v66;
      *(_QWORD *)&v128.fields.fakeValue = v65;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v128,
                                              0LL);
      if ( !*(_QWORD *)&v50->fields.m_CachedPtr )
        goto LABEL_110;
      v67 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v50->fields.m_CachedPtr,
                                              0LL);
      v68 = v49->fields.callbackFunc;
      if ( !v68 )
        goto LABEL_110;
      v69 = (int)LeaderInfo;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v68->fields.method_info,
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v115;
      if ( !v115 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v115,
                              &v123,
                              actMaxRarity,
                              v67,
                              v69,
                              v70,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v118;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v72 = (int)LeaderInfo;
    v73 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v73, 0LL);
    v74 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v74, 0LL);
    v75 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v75, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v119 = v72;
    v114 = v75;
    v116 = (PartyOrganizationUtility_o *)v74;
    if ( (v72 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v49->fields.eventFriendPoints,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v77 = *(_QWORD *)&v49->fields.m_CachedPtr;
      if ( !v77 )
        goto LABEL_110;
      v78 = (PartyOrganizationUtility_o *)LeaderInfo;
      v80 = *(_QWORD *)(v77 + 96);
      v79 = *(_QWORD *)(v77 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v129.fields.currentCryptoKey = v80;
      *(_QWORD *)&v129.fields.fakeValue = v79;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v129,
                                              0LL);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0LL);
      if ( !*(_QWORD *)&v49->fields.m_CachedPtr )
        goto LABEL_110;
      v81 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v49->fields.m_CachedPtr,
                                              0LL);
      if ( !v50->fields.callbackFunc )
        goto LABEL_110;
      v82 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v50->fields.callbackFunc,
                                              0LL);
      if ( !v78 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v78,
                                              &maxLength[1],
                                              v81,
                                              v82,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v74 = (System_Text_StringBuilder_o *)v116;
      if ( !v116 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_60545472(
        (System_Text_StringBuilder_o *)v116,
        (System_String_o *)LeaderInfo,
        0LL);
      v75 = v114;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v83 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
              (int32_t)v50->fields.eventFriendPoints,
              (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v84 = *(_QWORD *)&v50->fields.m_CachedPtr;
      if ( !v84 )
        goto LABEL_110;
      v85 = (PartyOrganizationUtility_o *)LeaderInfo;
      v87 = *(_QWORD *)(v84 + 96);
      v86 = *(_QWORD *)(v84 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v130.fields.currentCryptoKey = v87;
      *(_QWORD *)&v130.fields.fakeValue = v86;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v130,
                                              0LL);
      if ( !v83 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName((ServantEntity_o *)v83, (int32_t)LeaderInfo, -1, 0LL);
      v88 = *(UserServantEntity_o **)&v50->fields.m_CachedPtr;
      if ( !v88 )
        goto LABEL_110;
      v89 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v88, 0LL);
      v90 = (EquipTargetInfo_o *)v49->fields.callbackFunc;
      if ( !v90 )
        goto LABEL_110;
      v91 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v90, 0LL);
      if ( !v85 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v85,
                                              maxLength,
                                              v89,
                                              v91,
                                              (System_String_o *)LeaderInfo,
                                              v123,
                                              actMaxRarity[0],
                                              0LL);
      v75 = v114;
      if ( !v114 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_60545472(v114, (System_String_o *)LeaderInfo, 0LL);
      v74 = (System_Text_StringBuilder_o *)v116;
    }
    v93 = maxLength[0];
    v92 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v94 = System_Math__Max_62202216(v92, v93, 0LL);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v94,
        0LL);
      if ( *(_QWORD *)v43 )
      {
        if ( *v48 && v73 )
        {
          v95 = *(_DWORD *)(*(_QWORD *)v43 + 60LL);
          classPos = (*v48)->fields.classPos;
          v97 = v95 >= classPos ? v75 : v74;
          v98 = v95 >= classPos ? v74 : v75;
          System_Text_StringBuilder__Append_60546100(v73, v97, 0LL);
          System_Text_StringBuilder__Append_60546100(v73, v98, 0LL);
          v99 = (v119 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v119 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v101 = (v119 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_60545472(v73, v102, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v104 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                                      v73,
                                      v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, 0LL);
          v107 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v107,
            (Il2CppObject *)v19,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_30347368(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v104,
              v105,
              v106,
              v107,
              minFontSize[1],
              minFontSize[0],
              v101,
              728,
              2,
              windowHeight,
              v99,
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
    sub_1B64ACC(LeaderInfo, v21);
  }
  if ( !*(_QWORD *)v26 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v26 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v21);
  if ( !*v30 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v30)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v21);
  LeaderInfo = *(SupportSelectObject_o **)v26;
  if ( !*(_QWORD *)v26 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v21);
  LeaderInfo = (SupportSelectObject_o *)*v30;
  if ( !*v30 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v21);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v43;
  if ( !*(_QWORD *)v43 )
    goto LABEL_110;
  v108 = *(_QWORD *)(v19 + 40);
  v109 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v21);
  v110 = *v48;
  if ( !*v48 )
    goto LABEL_110;
  v111 = v110->fields.classPos;
  v112 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v110, v21);
  if ( !v108 )
    goto LABEL_110;
  v113 = *(_QWORD *)(v108 + 360);
  if ( v113 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v113 + 24))(
      *(_QWORD *)(v113 + 64),
      1LL,
      v109,
      v112,
      v111,
      LeaderInfo,
      *(_QWORD *)(v113 + 40));
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct ListViewObject_o *Component_object; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FAF1B & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_ListViewObject___, v3);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FAF1B = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v7, v8);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v12 = UnityEngine_Component__GetComponent_object_(
                mListViewObject,
                (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v12,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mDragScrollView, (int32_t)v12, v13, v14),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1B64ACC(mListViewObject, v10);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mTrans, (int32_t)transform, v16, v17);
  v18 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mCollider, (int32_t)v18, v19, v20);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_49FAF1E & 1) == 0 )
  {
    sub_1B64870(&UICamera_TypeInfo, method);
    byte_49FAF1E = 1;
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
  if ( (byte_49FAF26 & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1B64870(
                                                                  &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                                  isDecide);
    byte_49FAF26 = 1;
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
    sub_1B64ACC(this, isDecide);
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
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}