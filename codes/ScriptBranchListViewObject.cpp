void __fastcall ScriptBranchListViewObject___ctor(ScriptBranchListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B64302 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B64302 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ScriptBranchListViewObject__Awake(ScriptBranchListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B642FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewItemDraw___, method);
    byte_4B642FD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BE4D28(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewItemDraw___);
  this->fields.itemDraw = (struct ScriptBranchListViewItemDraw_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall ScriptBranchListViewObject__CreateDragObject(
        ScriptBranchListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4B642FF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___, method);
    byte_4B642FF = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScriptBranchListViewObject___)) == 0LL) )
  {
    sub_1BE4D28(DragObject, v4);
  }
  ScriptBranchListViewObject__Init_35708292((ScriptBranchListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewObject__Init(
        ScriptBranchListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // w9
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4B64300 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptBranchListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B64300 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ScriptBranchListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ScriptBranchListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptBranchListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(ScriptBranchListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BE4D28(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (unsigned int)v11 <= 3 )
  {
    v30 = dword_BE14E0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BE2100 + v11);
    this->fields.state = v30;
  }
  if ( !state || dispMode != this->fields.dispMode )
    ScriptBranchListViewObject__SetupDisp(this, v23);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptBranchListViewObject__Init_35708292(
        ScriptBranchListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B612E1 = 1;
  }
  ScriptBranchListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ScriptBranchListViewObject__OnDestroy(ScriptBranchListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B642FE & 1) == 0 )
  {
    sub_1BE4ACC(&NGUITools_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B642FE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BE4A70(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ScriptBranchListViewObject__SetItem(
        ScriptBranchListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41717728((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ScriptBranchListViewObject__SetupDisp(ScriptBranchListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptBranchListViewItemDraw_o *v10; // x0

  if ( (byte_4B64301 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    sub_1BE4ACC(&ScriptBranchListViewItem_TypeInfo, v3);
    byte_4B64301 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ScriptBranchListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ScriptBranchListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptBranchListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BE4D28(0LL, v8);
    ScriptBranchListViewItemDraw__SetItem(v10, (ScriptBranchListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall ScriptBranchListViewObject__Start(ScriptBranchListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.state )
    ScriptBranchListViewObject__Init_35708292(this, 2, 0LL, v2);
}


void __fastcall ScriptBranchListViewObject__add_callbackFunc(
        ScriptBranchListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B642FB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B642FB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptBranchListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptBranchListViewObject__remove_callbackFunc(
        ScriptBranchListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptBranchListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B642FC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, value);
    byte_4B642FC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptBranchListViewObject__Awake(v11, v12);
}