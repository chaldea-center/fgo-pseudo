void __fastcall SupportSelectListViewDropObject___ctor(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0LL);
}


void __fastcall SupportSelectListViewDropObject__ActivateEquipOnly(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct SupportSelectObject_o *memberObject; // x8
  SupportSelectItemDraw_o *itemDraw; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject || (itemDraw = memberObject->fields.itemDraw) == 0LL )
    sub_B170D4();
  SupportSelectItemDraw__ActivateEquipOnly(itemDraw, 0LL);
}


UnityEngine_GameObject_o *__fastcall SupportSelectListViewDropObject__CreateDragObject(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  SupportSelectListViewDropObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v6; // x5
  struct SupportSelectObject_o *memberObject; // x8
  SupportSelectListViewDropObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_40FD21E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___, method);
    byte_40FD21E = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        Component_srcLineSprite = (SupportSelectListViewDropObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         DragObject,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
        (memberObject = this->fields.memberObject) == 0LL)
    || (v8 = Component_srcLineSprite) == 0LL )
  {
    sub_B170D4();
  }
  SupportSelectListViewDropObject__SetData(
    Component_srcLineSprite,
    memberObject->fields.supportServantData,
    memberObject->fields.deckNum,
    memberObject->fields.classPos,
    memberObject->fields.eventFriendPoints,
    v6);
  SupportSelectListViewDropObject__ActivateEquipOnly(v8, v9);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SupportSelectListViewDropObject__CreateDragObject_30827704(
        SupportSelectListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  SupportSelectListViewDropObject_o *Component_srcLineSprite; // x21
  const MethodInfo *v8; // x2
  SupportSelectObject_o *memberObject; // x0
  const MethodInfo *v10; // x5
  struct SupportSelectObject_o *v11; // x8
  const MethodInfo *v12; // x1

  if ( (byte_40FD21F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___, *(_QWORD *)&addDepth);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD21F = 1;
  }
  v6 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(SupportSelectListViewDropObject_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._8_CreateDragObject.method)(
                                     this,
                                     this->klass->vtable._9_SetInput.methodPtr,
                                     method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    if ( !v6 )
      goto LABEL_17;
    Component_srcLineSprite = (SupportSelectListViewDropObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v6,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        memberObject = Component_srcLineSprite->fields.memberObject;
        if ( memberObject )
        {
          SupportSelectObject__AddDepth(memberObject, addDepth, v8);
          v11 = Component_srcLineSprite->fields.memberObject;
          if ( v11 )
          {
            SupportSelectListViewDropObject__SetData(
              Component_srcLineSprite,
              v11->fields.supportServantData,
              v11->fields.deckNum,
              v11->fields.classPos,
              v11->fields.eventFriendPoints,
              v10);
            SupportSelectListViewDropObject__ActivateEquipOnly(Component_srcLineSprite, v12);
            return v6;
          }
        }
      }
LABEL_17:
      sub_B170D4();
    }
  }
  return v6;
}


void __fastcall SupportSelectListViewDropObject__DestroyDragObj(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD21D & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD21D = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewDropObject__DoSwap(
        SupportSelectListViewDropObject_o *this,
        UnityEngine_Vector3_o targetPosition,
        float duration,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  float z; // s9
  float y; // s10
  float x; // s11
  struct UnityEngine_GameObject_o *DragObject_30827704; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *dragObject; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  float v20; // s4
  float v21; // s5
  float v22; // s3
  TweenPosition_o *v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  DragObject_30827704 = SupportSelectListViewDropObject__CreateDragObject_30827704(this, -100, v4);
  this->fields.dragObject = DragObject_30827704;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)DragObject_30827704,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !transform )
    goto LABEL_6;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_6;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v25 = UnityEngine_Transform__InverseTransformPoint(parent, v24, 0LL);
  v20 = v25.fields.y;
  v21 = v25.fields.z;
  v25.fields.y = v25.fields.x;
  v25.fields.z = v20;
  v22 = v21;
  v23 = TweenPosition__Begin(dragObject, duration, *(UnityEngine_Vector3_o *)&v25.fields.y, 0LL);
  if ( !v23 )
LABEL_6:
    sub_B170D4();
  v23->fields.style = 3;
}


SupportSelectObject_o *__fastcall SupportSelectListViewDropObject__GetMemberObject(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.memberObject;
}


void __fastcall SupportSelectListViewDropObject__HideEquip(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_B170D4();
  SupportSelectObject__HideEquip(memberObject, method);
}


bool __fastcall SupportSelectListViewDropObject__IsCanDrag(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x8
  __int64 v5; // x11
  struct ListViewManager_o *v6; // x20

  if ( (byte_40FD21C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SupportSelectListViewManager_TypeInfo, v3);
    byte_40FD21C = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (v5 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v5 - 1] == SupportSelectListViewManager_TypeInfo )
      v6 = this->fields.manager;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    return 0;
  if ( !v6 )
    sub_B170D4();
  return LOBYTE(v6[1].fields.sortOrderSprite) && this->fields.isEquipPress;
}


void __fastcall SupportSelectListViewDropObject__OnDestroy(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD21B & 1) == 0 )
  {
    sub_B16FFC(&NGUITools_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD21B = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B16F98(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall SupportSelectListViewDropObject__OnPressEquip(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  this->fields.isEquipPress = 1;
}


void __fastcall SupportSelectListViewDropObject__OnPressItem(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  this->fields.isEquipPress = 0;
}


void __fastcall SupportSelectListViewDropObject__SetData(
        SupportSelectListViewDropObject_o *this,
        SupportServantData_o *supportServantData,
        int32_t deckNum,
        int32_t classPos,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  UnityEngine_Object_o *memberObject; // x24
  const MethodInfo *v12; // x6
  SupportSelectObject_o *v13; // x0

  if ( (byte_40FD220 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, supportServantData);
    byte_40FD220 = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberObject, 0LL, 0LL) )
  {
    v13 = this->fields.memberObject;
    if ( !v13 )
      sub_B170D4();
    SupportSelectObject__SetItem(v13, supportServantData, deckNum, classPos, friendPointCampaigns, 0LL, v12);
  }
}


void __fastcall SupportSelectListViewDropObject__ShowEquip(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_B170D4();
  SupportSelectObject__ShowEquip(memberObject, method);
}