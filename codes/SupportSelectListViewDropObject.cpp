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

  memberObject = this->fields.memberObject;
  if ( !memberObject || (this = (SupportSelectListViewDropObject_o *)memberObject->fields.itemDraw) == 0LL )
    sub_1B64C5C(this, method);
  SupportSelectItemDraw__ActivateEquipOnly((SupportSelectItemDraw_o *)this, method);
}


UnityEngine_GameObject_o *__fastcall SupportSelectListViewDropObject__CreateDragObject(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x5
  struct SupportSelectObject_o *memberObject; // x8
  SupportSelectListViewDropObject_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_49FB54A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___, method);
    byte_49FB54A = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
        (memberObject = this->fields.memberObject) == 0LL)
    || (v8 = (SupportSelectListViewDropObject_o *)DragObject) == 0LL )
  {
    sub_1B64C5C(DragObject, v4);
  }
  SupportSelectListViewDropObject__SetData(
    (SupportSelectListViewDropObject_o *)DragObject,
    memberObject->fields.supportServantData,
    memberObject->fields.deckNum,
    memberObject->fields.classPos,
    memberObject->fields.eventFriendPoints,
    v6);
  SupportSelectListViewDropObject__ActivateEquipOnly(v8, v9);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall SupportSelectListViewDropObject__CreateDragObject_32993476(
        SupportSelectListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *Component_object; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  UnityEngine_Object_c *v12; // x8
  const MethodInfo *v13; // x1

  if ( (byte_49FB54B & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___, *(_QWORD *)&addDepth);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_49FB54B = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(SupportSelectListViewDropObject_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._8_CreateDragObject.method)(
                                 this,
                                 this->klass->vtable._9_SetInput.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_15;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v6,
                                                 (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( Component_object )
      {
        klass = Component_object[5].klass;
        if ( klass )
        {
          SupportSelectObject__AddDepth((SupportSelectObject_o *)klass, addDepth, v10);
          v12 = Component_object[5].klass;
          if ( v12 )
          {
            SupportSelectListViewDropObject__SetData(
              (SupportSelectListViewDropObject_o *)Component_object,
              (SupportServantData_o *)v12->_1.this_arg.data,
              v12->_1.this_arg.bits,
              *(&v12->_1.this_arg.bits + 1),
              (EventCampaignEntity_array *)v12->_1.element_class,
              v11);
            SupportSelectListViewDropObject__ActivateEquipOnly(
              (SupportSelectListViewDropObject_o *)Component_object,
              v13);
            return (UnityEngine_GameObject_o *)v6;
          }
        }
      }
LABEL_15:
      sub_1B64C5C(klass, v8);
    }
  }
  return (UnityEngine_GameObject_o *)v6;
}


void __fastcall SupportSelectListViewDropObject__DestroyDragObj(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB549 & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB549 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B649A4(p_dragObject, 0, v8, v9);
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
  SupportSelectListViewDropObject_o *v9; // x19
  UnityEngine_GameObject_o *DragObject_32993476; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *klass; // x19
  float v16; // s4
  float v17; // s5
  float v18; // s3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  v9 = this;
  DragObject_32993476 = SupportSelectListViewDropObject__CreateDragObject_32993476(this, -100, v4);
  v9->fields.dragObject = DragObject_32993476;
  v9 = (SupportSelectListViewDropObject_o *)((char *)v9 + 128);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v9, (int32_t)DragObject_32993476, v11, v12);
  klass = (UnityEngine_GameObject_o *)v9->klass;
  if ( !klass )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(klass, 0LL);
  if ( !transform )
    goto LABEL_6;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_6;
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  v20 = UnityEngine_Transform__InverseTransformPoint(transform, v19, 0LL);
  v16 = v20.fields.y;
  v17 = v20.fields.z;
  v20.fields.y = v20.fields.x;
  v20.fields.z = v16;
  v18 = v17;
  transform = (UnityEngine_Transform_o *)TweenPosition__Begin(
                                           klass,
                                           duration,
                                           *(UnityEngine_Vector3_o *)&v20.fields.y,
                                           0LL);
  if ( !transform )
LABEL_6:
    sub_1B64C5C(transform, v14);
  LODWORD(transform[1].monitor) = 3;
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
    sub_1B64C5C(0LL, method);
  SupportSelectObject__HideEquip(memberObject, method);
}


bool __fastcall SupportSelectListViewDropObject__IsCanDrag(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewManager_o *manager; // x9
  __int64 methodPtr_low; // x12
  struct ListViewManager_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_49FB548 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&SupportSelectListViewManager_TypeInfo, v3);
    byte_49FB548 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(SupportSelectListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewManager_TypeInfo )
      v6 = this->fields.manager;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_1B64C5C(v7, v8);
  return LOBYTE(v6[1].fields.sortKindLabel) && this->fields.isEquipPress;
}


void __fastcall SupportSelectListViewDropObject__OnDestroy(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FB547 & 1) == 0 )
  {
    sub_1B64A00(&NGUITools_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB547 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B649A4(p_dragObject, 0, v8, v9);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x6
  SupportSelectObject_o *v14; // x0

  if ( (byte_49FB54C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, supportServantData);
    byte_49FB54C = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberObject, 0LL, 0LL) )
  {
    v14 = this->fields.memberObject;
    if ( !v14 )
      sub_1B64C5C(0LL, v12);
    SupportSelectObject__SetItem(v14, supportServantData, deckNum, classPos, friendPointCampaigns, 0LL, v13);
  }
}


void __fastcall SupportSelectListViewDropObject__ShowEquip(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_1B64C5C(0LL, method);
  SupportSelectObject__ShowEquip(memberObject, method);
}