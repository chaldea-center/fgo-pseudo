void __fastcall SupportSelectItemDrawDrop___cctor(const MethodInfo *method)
{
  if ( (byte_4A57B07 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectItemDrawDrop_TypeInfo);
    byte_4A57B07 = 1;
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
  SupportSelectItemDrawDrop_c *v10; // x0
  UnityEngine_GameObject_o *dragObject; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Component_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A57B06 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1B885B0(&StringLiteral_9902/*"OnFinishedReturnMove"*/);
    byte_4A57B06 = 1;
  }
  ListViewObj = (UnityEngine_Component_o *)SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !this->fields.dragObject )
    goto LABEL_12;
  v5 = ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.dragObject, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)ListViewObj,
                                             0LL);
  if ( !v5 )
    goto LABEL_12;
  v6 = (UnityEngine_Transform_o *)ListViewObj;
  ListViewObj = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v5, 0LL);
  if ( !ListViewObj )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)ListViewObj, 0LL);
  if ( !v6 )
    goto LABEL_12;
  v22 = UnityEngine_Transform__InverseTransformPoint(v6, *(UnityEngine_Vector3_o *)&v7, 0LL);
  v10 = SupportSelectItemDrawDrop_TypeInfo;
  dragObject = this->fields.dragObject;
  x = v22.fields.x;
  y = v22.fields.y;
  z = v22.fields.z;
  if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
    v10 = SupportSelectItemDrawDrop_TypeInfo;
  }
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  ListViewObj = (UnityEngine_Component_o *)TweenPosition__Begin(dragObject, v10->static_fields->ACTION_TIME, v23, 0LL);
  if ( !ListViewObj )
LABEL_12:
    sub_1B8880C(ListViewObj, v4);
  v15 = ListViewObj;
  LODWORD(ListViewObj[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15[3].monitor = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15[3].monitor, (int32_t)gameObject, v17, v18);
  v19 = StringLiteral_9902/*"OnFinishedReturnMove"*/;
  *(_QWORD *)&v15[3].fields.m_CachedPtr = StringLiteral_9902/*"OnFinishedReturnMove"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15[3].fields, v19, v20, v21);
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  struct SupportSelectListViewDropObject_o **p_dropObject; // x19
  UnityEngine_Component_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  SupportSelectListViewDropObject_o *v29; // x19
  int v30; // s0
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A57B04 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectItemDrawDrop_TypeInfo);
    sub_1B885B0(&StringLiteral_9903/*"OnFinishedSwapMove"*/);
    byte_4A57B04 = 1;
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
    v7 = (UnityEngine_Transform_o *)dragObject;
    dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)target,
                                               0LL);
    if ( !dragObject )
      goto LABEL_21;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
    if ( !v7 )
      goto LABEL_21;
    v33 = UnityEngine_Transform__InverseTransformPoint(v7, *(UnityEngine_Vector3_o *)&v8, 0LL);
    v11 = this->fields.dragObject;
    x = v33.fields.x;
    y = v33.fields.y;
    v14 = SupportSelectItemDrawDrop_TypeInfo;
    z = v33.fields.z;
    if ( !SupportSelectItemDrawDrop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDrawDrop_TypeInfo);
      v14 = SupportSelectItemDrawDrop_TypeInfo;
    }
    v34.fields.x = x;
    v34.fields.y = y;
    v34.fields.z = z;
    dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v11, v14->static_fields->ACTION_TIME, v34, 0LL);
    if ( !dragObject )
      goto LABEL_21;
    v16 = dragObject;
    LODWORD(dragObject[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v16[3].monitor = gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16[3].monitor, (int32_t)gameObject, v18, v19);
    v20 = StringLiteral_9903/*"OnFinishedSwapMove"*/;
    *(_QWORD *)&v16[3].fields.m_CachedPtr = StringLiteral_9903/*"OnFinishedSwapMove"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16[3].fields, v20, v21, v22);
    ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v23);
    this->fields.dropObject = target;
    p_dropObject = &this->fields.dropObject;
    v26 = (UnityEngine_Component_o *)ListViewObj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_dropObject, (int32_t)target, v27, v28);
    if ( !*p_dropObject
      || (dragObject = (UnityEngine_GameObject_o *)(*p_dropObject)->fields.memberObject) == 0LL
      || (SupportSelectObject__HideEquip((SupportSelectObject_o *)dragObject, v5), !v26)
      || (v29 = *p_dropObject,
          (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v26, 0LL)) == 0LL)
      || (*(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position(
                                             (UnityEngine_Transform_o *)dragObject,
                                             0LL),
          !v29) )
    {
LABEL_21:
      sub_1B8880C(dragObject, v5);
    }
    SupportSelectListViewDropObject__DoSwap(
      v29,
      *(UnityEngine_Vector3_o *)&v30,
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
  __int64 methodPtr_low; // x11

  if ( (byte_4A57AFF & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectListViewManager_TypeInfo);
    byte_4A57AFF = 1;
  }
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, method);
  if ( !ListViewObj )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A57AFE & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectListViewDropObject_TypeInfo);
    byte_4A57AFE = 1;
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

  if ( (byte_4A57B03 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B03 = 1;
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
        sub_1B8880C(ListViewObj, v7);
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
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *monitor; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4A57B02 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57B02 = 1;
  }
  this->fields.surface = 0LL;
  this->fields.isDrag = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.surface, 0, (int32_t)method, v3);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)surface, 0LL, 0LL);
  if ( !v6 )
    goto LABEL_15;
  if ( !surface )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               surface,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectUIDragDropListViewSurface___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
  if ( !v6 )
    goto LABEL_15;
  if ( !Component_object )
LABEL_17:
    sub_1B8880C(v6, v7);
  monitor = (UnityEngine_Object_o *)Component_object[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL)
    || SupportSelectItemDrawDrop__IsSameObject(this, (SupportSelectListViewDropObject_o *)monitor, v10) )
  {
LABEL_15:
    SupportSelectItemDrawDrop__DoReturnMove(this, v7);
    return;
  }
  SupportSelectItemDrawDrop__DoSwapMove(this, (SupportSelectListViewDropObject_o *)monitor, v11);
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

  if ( (byte_4A57B01 & 1) == 0 )
  {
    sub_1B885B0(&UICamera_TypeInfo);
    byte_4A57B01 = 1;
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
        sub_1B8880C(ListViewManager, v9);
    }
    dragged = currentTouch->fields.dragged;
    this->fields.surface = dragged;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.surface, (int32_t)dragged, v4, v5);
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
  ((void (__fastcall *)(SupportSelectListViewManager_o *, Il2CppMethodPointer))v14->klass->vtable._8_ItemDragStart.method)(
    v14,
    v14->klass->vtable._9_ItemDragEnd.methodPtr);
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
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(ListViewObj, v4);
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
  __int64 v3; // x19
  SupportSelectObject_o *LeaderInfo; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  SupportSelectListViewDropObject_o *ListViewObj; // x0
  __int64 v10; // x27
  int32_t v11; // w2
  int32_t v12; // w3
  struct SupportSelectListViewDropObject_o *dropObject; // x1
  UnityEngine_Object_o **v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x1
  SupportSelectListViewManager_o *ListViewManager; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  __int64 v31; // x1
  SupportSelectObject_o **v32; // x20
  SupportSelectObject_o *v33; // x23
  SupportSelectObject_o *v34; // x24
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct System_Reflection_MethodInfo_o *original_method_info; // x25
  struct System_Reflection_MethodInfo_o *method_info; // x28
  __int64 v38; // x8
  __int64 v39; // x25
  __int64 v40; // x28
  int32_t v41; // w25
  struct SupportSelectMenu_CallbackFunc_o *v42; // x8
  int32_t v43; // w28
  int32_t v44; // w5
  struct SupportSelectMenu_CallbackFunc_o *v45; // x8
  struct System_Reflection_MethodInfo_o *v46; // x25
  struct System_Reflection_MethodInfo_o *v47; // x28
  __int64 v48; // x8
  __int64 v49; // x25
  __int64 v50; // x28
  int32_t v51; // w28
  struct SupportSelectMenu_CallbackFunc_o *v52; // x8
  int32_t v53; // w25
  int32_t v54; // w5
  _BOOL4 IsRarityRestriction; // w28
  int v56; // w26
  System_Text_StringBuilder_o *v57; // x22
  System_Text_StringBuilder_o *v58; // x27
  System_Text_StringBuilder_o *v59; // x25
  Il2CppObject *Entity; // x25
  __int64 v61; // x8
  PartyOrganizationUtility_o *v62; // x29
  __int64 v63; // x26
  __int64 v64; // x27
  System_String_o *v65; // x25
  int32_t v66; // w26
  Il2CppObject *v67; // x25
  __int64 v68; // x8
  PartyOrganizationUtility_o *v69; // x29
  __int64 v70; // x26
  __int64 v71; // x27
  UserServantEntity_o *v72; // x8
  System_String_o *v73; // x24
  EquipTargetInfo_o *v74; // x8
  int32_t v75; // w23
  int32_t v76; // w23
  int32_t v77; // w24
  int32_t v78; // w23
  int32_t v79; // w8
  int32_t classPos; // w9
  System_Text_StringBuilder_o *v81; // x1
  System_Text_StringBuilder_o *v82; // x20
  float v83; // s8
  int32_t windowHeight; // w25
  float v85; // s9
  System_String_o *v86; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v88; // x21
  System_String_o *v89; // x22
  System_String_o *v90; // x23
  CommonConfirmDialog_ClickDelegate_o *v91; // x24
  __int64 v92; // x23
  unsigned int v93; // w19
  SupportSelectObject_o *v94; // x8
  unsigned int v95; // w21
  SupportSelectObject_o *v96; // x20
  __int64 v97; // x8
  System_Text_StringBuilder_o *v98; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v99; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v100; // [xsp+48h] [xbp-A8h]
  PartyOrganizationUtility_o *v101; // [xsp+50h] [xbp-A0h]
  unsigned int v102; // [xsp+50h] [xbp-A0h]
  int v103; // [xsp+50h] [xbp-A0h]
  int32_t maxLength[2]; // [xsp+58h] [xbp-98h] BYREF
  int32_t minFontSize[2]; // [xsp+60h] [xbp-90h] BYREF
  int32_t actMaxRarity[2]; // [xsp+68h] [xbp-88h] BYREF
  System_String_o *v107; // [xsp+70h] [xbp-80h] BYREF
  System_String_o *skillName; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4A57B05 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__);
    sub_1B885B0(&SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57B05 = 1;
  }
  v107 = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  *(_QWORD *)actMaxRarity = 0LL;
  *(_QWORD *)maxLength = 0LL;
  v3 = sub_1B887FC(SupportSelectItemDrawDrop___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_110;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  ListViewObj = SupportSelectItemDrawDrop__GetListViewObj(this, v8);
  *(_QWORD *)(v3 + 16) = ListViewObj;
  v10 = v3 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)ListViewObj, v11, v12);
  dropObject = this->fields.dropObject;
  *(_QWORD *)(v3 + 24) = dropObject;
  v14 = (UnityEngine_Object_o **)(v3 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)dropObject, v15, v16);
  v17 = *(UnityEngine_Object_o **)(v3 + 16);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    return;
  v18 = *v14;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    return;
  ListViewManager = SupportSelectItemDrawDrop__GetListViewManager(this, v19);
  *(_QWORD *)(v3 + 40) = ListViewManager;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)ListViewManager, v21, v22);
  v25 = *(_QWORD *)(v3 + 16);
  if ( !v25 )
    goto LABEL_110;
  v26 = *(_QWORD *)(v25 + 120);
  *(_QWORD *)(v3 + 48) = v26;
  v27 = v3 + 48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 48), v26, v23, v24);
  v30 = *(_QWORD *)(v3 + 24);
  if ( !v30 )
    goto LABEL_110;
  v31 = *(_QWORD *)(v30 + 120);
  *(_QWORD *)(v3 + 56) = v31;
  v32 = (SupportSelectObject_o **)(v3 + 56);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 56), v31, v28, v29);
  LeaderInfo = *(SupportSelectObject_o **)(v3 + 48);
  if ( !LeaderInfo )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v5);
  if ( !*v32 )
    goto LABEL_110;
  v33 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(*v32, v5);
  *(_QWORD *)actMaxRarity = 0LL;
  v107 = (System_String_o *)StringLiteral_1/*""*/;
  skillName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !v33 )
    goto LABEL_110;
  v34 = LeaderInfo;
  if ( *(_QWORD *)&v33->fields.m_CachedPtr && SLODWORD(v33->fields.eventFriendPoints) >= 1 )
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
      *(_QWORD *)&v109.fields.currentCryptoKey = method_info;
      *(_QWORD *)&v109.fields.fakeValue = original_method_info;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v109, 0LL) >= 1 )
      {
        LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v38 = *(_QWORD *)&v33->fields.m_CachedPtr;
        v101 = (PartyOrganizationUtility_o *)LeaderInfo;
        if ( !v38 )
          goto LABEL_110;
        v39 = *(_QWORD *)(v38 + 80);
        v40 = *(_QWORD *)(v38 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = v39;
        *(_QWORD *)&v110.fields.fakeValue = v40;
        LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v110,
                                                0LL);
        if ( !*(_QWORD *)&v33->fields.m_CachedPtr )
          goto LABEL_110;
        v41 = (int)LeaderInfo;
        LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                                *(UserServantEntity_o **)&v33->fields.m_CachedPtr,
                                                0LL);
        v42 = v34->fields.callbackFunc;
        if ( !v42 )
          goto LABEL_110;
        v43 = (int)LeaderInfo;
        v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v42->fields.method_info,
                0LL);
        LeaderInfo = (SupportSelectObject_o *)v101;
        if ( !v101 )
          goto LABEL_110;
        LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__IsRarityRestriction(
                                                v101,
                                                &skillName,
                                                &actMaxRarity[1],
                                                v41,
                                                v43,
                                                v44,
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
  if ( *(_QWORD *)&v34->fields.m_CachedPtr
    && SLODWORD(v34->fields.eventFriendPoints) >= 1
    && (v45 = v33->fields.callbackFunc) != 0LL )
  {
    v102 = (unsigned int)LeaderInfo;
    v47 = v45->fields.method_info;
    v46 = v45->fields.original_method_info;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v111.fields.currentCryptoKey = v47;
    *(_QWORD *)&v111.fields.fakeValue = v46;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v111, 0LL) < 1 )
    {
      IsRarityRestriction = 0;
    }
    else
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v48 = *(_QWORD *)&v34->fields.m_CachedPtr;
      v99 = (PartyOrganizationUtility_o *)LeaderInfo;
      if ( !v48 )
        goto LABEL_110;
      v50 = *(_QWORD *)(v48 + 80);
      v49 = *(_QWORD *)(v48 + 88);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v50;
      *(_QWORD *)&v112.fields.fakeValue = v49;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v112,
                                              0LL);
      if ( !*(_QWORD *)&v34->fields.m_CachedPtr )
        goto LABEL_110;
      v51 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v34->fields.m_CachedPtr,
                                              0LL);
      v52 = v33->fields.callbackFunc;
      if ( !v52 )
        goto LABEL_110;
      v53 = (int)LeaderInfo;
      v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v52->fields.method_info,
              0LL);
      LeaderInfo = (SupportSelectObject_o *)v99;
      if ( !v99 )
        goto LABEL_110;
      IsRarityRestriction = PartyOrganizationUtility__IsRarityRestriction(
                              v99,
                              &v107,
                              actMaxRarity,
                              v51,
                              v53,
                              v54,
                              -1,
                              0LL);
    }
    LeaderInfo = (SupportSelectObject_o *)v102;
  }
  else
  {
    IsRarityRestriction = 0;
  }
  if ( (((unsigned int)LeaderInfo | IsRarityRestriction) & 1) != 0 )
  {
    v56 = (int)LeaderInfo;
    v57 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v57, 0LL);
    v58 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v58, 0LL);
    v59 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v59, 0LL);
    *(_QWORD *)maxLength = 0LL;
    v103 = v56;
    v98 = v59;
    v100 = (PartyOrganizationUtility_o *)v58;
    if ( (v56 & 1) != 0 )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
                 (int32_t)v33->fields.eventFriendPoints,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v61 = *(_QWORD *)&v33->fields.m_CachedPtr;
      if ( !v61 )
        goto LABEL_110;
      v62 = (PartyOrganizationUtility_o *)LeaderInfo;
      v64 = *(_QWORD *)(v61 + 96);
      v63 = *(_QWORD *)(v61 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v113.fields.currentCryptoKey = v64;
      *(_QWORD *)&v113.fields.fakeValue = v63;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v113,
                                              0LL);
      if ( !Entity )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              (int32_t)LeaderInfo,
                                              -1,
                                              0LL);
      if ( !*(_QWORD *)&v33->fields.m_CachedPtr )
        goto LABEL_110;
      v65 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(
                                              *(UserServantEntity_o **)&v33->fields.m_CachedPtr,
                                              0LL);
      if ( !v34->fields.callbackFunc )
        goto LABEL_110;
      v66 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(
                                              (EquipTargetInfo_o *)v34->fields.callbackFunc,
                                              0LL);
      if ( !v62 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v62,
                                              &maxLength[1],
                                              v65,
                                              v66,
                                              (System_String_o *)LeaderInfo,
                                              skillName,
                                              actMaxRarity[1],
                                              0LL);
      v58 = (System_Text_StringBuilder_o *)v100;
      if ( !v100 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_60868928(
        (System_Text_StringBuilder_o *)v100,
        (System_String_o *)LeaderInfo,
        0LL);
      v59 = v98;
    }
    if ( IsRarityRestriction )
    {
      LeaderInfo = (SupportSelectObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !LeaderInfo )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)LeaderInfo,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !LeaderInfo )
        goto LABEL_110;
      v67 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)LeaderInfo,
              (int32_t)v34->fields.eventFriendPoints,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v68 = *(_QWORD *)&v34->fields.m_CachedPtr;
      if ( !v68 )
        goto LABEL_110;
      v69 = (PartyOrganizationUtility_o *)LeaderInfo;
      v71 = *(_QWORD *)(v68 + 96);
      v70 = *(_QWORD *)(v68 + 104);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v114.fields.currentCryptoKey = v71;
      *(_QWORD *)&v114.fields.fakeValue = v70;
      LeaderInfo = (SupportSelectObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v114,
                                              0LL);
      if ( !v67 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)ServantEntity__getName((ServantEntity_o *)v67, (int32_t)LeaderInfo, -1, 0LL);
      v72 = *(UserServantEntity_o **)&v34->fields.m_CachedPtr;
      if ( !v72 )
        goto LABEL_110;
      v73 = (System_String_o *)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)UserServantEntity__getRarity(v72, 0LL);
      v74 = (EquipTargetInfo_o *)v33->fields.callbackFunc;
      if ( !v74 )
        goto LABEL_110;
      v75 = (int)LeaderInfo;
      LeaderInfo = (SupportSelectObject_o *)EquipTargetInfo__GetSvtName(v74, 0LL);
      if ( !v69 )
        goto LABEL_110;
      LeaderInfo = (SupportSelectObject_o *)PartyOrganizationUtility__GetRarityInvalidMessage(
                                              v69,
                                              maxLength,
                                              v73,
                                              v75,
                                              (System_String_o *)LeaderInfo,
                                              v107,
                                              actMaxRarity[0],
                                              0LL);
      v59 = v98;
      if ( !v98 )
        goto LABEL_110;
      System_Text_StringBuilder__Append_60868928(v98, (System_String_o *)LeaderInfo, 0LL);
      v58 = (System_Text_StringBuilder_o *)v100;
    }
    v77 = maxLength[0];
    v76 = maxLength[1];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v78 = System_Math__Max_62525680(v76, v77, 0LL);
    LeaderInfo = (SupportSelectObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( LeaderInfo )
    {
      PartyOrganizationUtility__DecisionFontSize(
        (PartyOrganizationUtility_o *)LeaderInfo,
        &minFontSize[1],
        minFontSize,
        v78,
        0LL);
      if ( *(_QWORD *)v27 )
      {
        if ( *v32 && v57 )
        {
          v79 = *(_DWORD *)(*(_QWORD *)v27 + 60LL);
          classPos = (*v32)->fields.classPos;
          v81 = v79 >= classPos ? v59 : v58;
          v82 = v79 >= classPos ? v58 : v59;
          System_Text_StringBuilder__Append_60869556(v57, v81, 0LL);
          System_Text_StringBuilder__Append_60869556(v57, v82, 0LL);
          v83 = (v103 & IsRarityRestriction & 1) != 0 ? -182.5 : -162.5;
          windowHeight = (v103 & IsRarityRestriction & 1) != 0 ? 520 : 480;
          v85 = (v103 & IsRarityRestriction & 1) != 0 ? 40.0 : 30.0;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
          System_Text_StringBuilder__Append_60868928(v57, v86, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v88 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                                     v57,
                                     v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
          v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v91,
            (Il2CppObject *)v3,
            Method_SupportSelectItemDrawDrop___c__DisplayClass13_0__OnFinishedSwapMove_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenConfirmDialog_30494344(
              (CommonUI_o *)Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v88,
              v89,
              v90,
              v91,
              minFontSize[1],
              minFontSize[0],
              v85,
              728,
              2,
              windowHeight,
              v83,
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
    sub_1B8880C(LeaderInfo, v5);
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_110;
  LeaderInfo = *(SupportSelectObject_o **)(*(_QWORD *)v10 + 120LL);
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v5);
  if ( !*v14 )
    goto LABEL_110;
  LeaderInfo = (SupportSelectObject_o *)(*v14)[5].klass;
  if ( !LeaderInfo )
    goto LABEL_110;
  SupportSelectObject__ShowEquip(LeaderInfo, v5);
  LeaderInfo = *(SupportSelectObject_o **)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  LeaderInfo = (SupportSelectObject_o *)*v14;
  if ( !*v14 )
    goto LABEL_110;
  SupportSelectListViewDropObject__DestroyDragObj((SupportSelectListViewDropObject_o *)LeaderInfo, v5);
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  LeaderInfo = *(SupportSelectObject_o **)v27;
  if ( !*(_QWORD *)v27 )
    goto LABEL_110;
  v92 = *(_QWORD *)(v3 + 40);
  v93 = LeaderInfo->fields.classPos;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(LeaderInfo, v5);
  v94 = *v32;
  if ( !*v32 )
    goto LABEL_110;
  v95 = v94->fields.classPos;
  v96 = LeaderInfo;
  LeaderInfo = (SupportSelectObject_o *)SupportSelectObject__GetLeaderInfo(v94, v5);
  if ( !v92 )
    goto LABEL_110;
  v97 = *(_QWORD *)(v92 + 360);
  if ( v97 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, SupportSelectObject_o *, _QWORD, SupportSelectObject_o *, _QWORD))(v97 + 24))(
      *(_QWORD *)(v97 + 64),
      1LL,
      v93,
      v96,
      v95,
      LeaderInfo,
      *(_QWORD *)(v97 + 40));
  SupportSelectItemDrawDrop__OnFinishDragAndDrop(this, v5);
}


void __fastcall SupportSelectItemDrawDrop__SetBaseTransform(
        SupportSelectItemDrawDrop_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewObject; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  struct ListViewObject_o *Component_object; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *mListViewObject; // x0
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A57AFD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_ListViewObject___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AFD = 1;
  }
  listViewObject = (UnityEngine_Object_o *)this->fields.listViewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(listViewObject, 0LL, 0LL) )
    Component_object = this->fields.listViewObject;
  else
    Component_object = (struct ListViewObject_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_ListViewObject___);
  this->fields.mListViewObject = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject, (int32_t)Component_object, v4, v5);
  mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject;
  if ( !mListViewObject
    || (v9 = UnityEngine_Component__GetComponent_object_(
               mListViewObject,
               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___),
        this->fields.mDragScrollView = (struct UIDragScrollView_o *)v9,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDragScrollView, (int32_t)v9, v10, v11),
        (mListViewObject = (UnityEngine_Component_o *)this->fields.mListViewObject) == 0LL) )
  {
    sub_1B8880C(mListViewObject, v7);
  }
  transform = UnityEngine_Component__get_transform(mListViewObject, 0LL);
  this->fields.mTrans = transform;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mTrans, (int32_t)transform, v13, v14);
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mCollider, (int32_t)v15, v16, v17);
}


void __fastcall SupportSelectItemDrawDrop__Update(SupportSelectItemDrawDrop_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *surface; // x20

  if ( (byte_4A57B00 & 1) == 0 )
  {
    sub_1B885B0(&UICamera_TypeInfo);
    byte_4A57B00 = 1;
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
  if ( (byte_4A57B08 & 1) == 0 )
  {
    this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57B08 = 1;
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
    sub_1B8880C(this, isDecide);
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
  this = (SupportSelectItemDrawDrop___c__DisplayClass13_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_19;
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}