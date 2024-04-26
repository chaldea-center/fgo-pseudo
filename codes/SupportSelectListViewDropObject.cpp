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
    sub_B7076C(this, method);
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

  if ( (byte_435485B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    byte_435485B = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   DragObject,
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
        (memberObject = this->fields.memberObject) == 0LL)
    || (v8 = (SupportSelectListViewDropObject_o *)DragObject) == 0LL )
  {
    sub_B7076C(DragObject, v4);
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


UnityEngine_GameObject_o *__fastcall SupportSelectListViewDropObject__CreateDragObject_30353912(
        SupportSelectListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  SupportSelectObject_o *msSpriteName; // x0
  __int64 v7; // x1
  srcLineSprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x5
  struct System_String_o *v11; // x8
  const MethodInfo *v12; // x1

  if ( (byte_435485C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435485C = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(SupportSelectListViewDropObject_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._8_CreateDragObject.method)(
                                 this,
                                 this->klass->vtable._9_SetInput.methodPtr,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  msSpriteName = (SupportSelectObject_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)msSpriteName & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_17;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v5,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    msSpriteName = (SupportSelectObject_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_srcLineSprite,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)msSpriteName & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        msSpriteName = (SupportSelectObject_o *)Component_srcLineSprite->fields.msSpriteName;
        if ( msSpriteName )
        {
          SupportSelectObject__AddDepth(msSpriteName, addDepth, v9);
          v11 = Component_srcLineSprite->fields.msSpriteName;
          if ( v11 )
          {
            SupportSelectListViewDropObject__SetData(
              (SupportSelectListViewDropObject_o *)Component_srcLineSprite,
              *(SupportServantData_o **)&v11[1].fields,
              (int32_t)v11[2].klass,
              HIDWORD(v11[2].klass),
              (EventCampaignEntity_array *)v11[2].monitor,
              v10);
            SupportSelectListViewDropObject__ActivateEquipOnly(
              (SupportSelectListViewDropObject_o *)Component_srcLineSprite,
              v12);
            return (UnityEngine_GameObject_o *)v5;
          }
        }
      }
LABEL_17:
      sub_B7076C(msSpriteName, v7);
    }
  }
  return (UnityEngine_GameObject_o *)v5;
}


void __fastcall SupportSelectListViewDropObject__DestroyDragObj(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_435485A & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435485A = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B70630(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
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
  struct UnityEngine_GameObject_o *DragObject_30353912; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *dragObject; // x19
  float v20; // s4
  float v21; // s5
  float v22; // s3
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  DragObject_30353912 = SupportSelectListViewDropObject__CreateDragObject_30353912(this, -100, v4);
  this->fields.dragObject = DragObject_30353912;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)DragObject_30353912,
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
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_6;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v24 = UnityEngine_Transform__InverseTransformPoint(transform, v23, 0LL);
  v20 = v24.fields.y;
  v21 = v24.fields.z;
  v24.fields.y = v24.fields.x;
  v24.fields.z = v20;
  v22 = v21;
  transform = (UnityEngine_Transform_o *)TweenPosition__Begin(
                                           dragObject,
                                           duration,
                                           *(UnityEngine_Vector3_o *)&v24.fields.y,
                                           0LL);
  if ( !transform )
LABEL_6:
    sub_B7076C(transform, v18);
  LODWORD(transform[1].klass) = 3;
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
    sub_B7076C(0LL, method);
  SupportSelectObject__HideEquip(memberObject, method);
}


bool __fastcall SupportSelectListViewDropObject__IsCanDrag(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x8
  __int64 v4; // x11
  struct ListViewManager_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4354859 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SupportSelectListViewManager_TypeInfo);
    byte_4354859 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (v4 = *(&SupportSelectListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[v4 - 1] == SupportSelectListViewManager_TypeInfo )
      v5 = this->fields.manager;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_B7076C(v6, v7);
  return LOBYTE(v5[1].fields.sortOrderSprite) && this->fields.isEquipPress;
}


void __fastcall SupportSelectListViewDropObject__OnDestroy(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4354858 & 1) == 0 )
  {
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354858 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B70630(p_dragObject, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_435485D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435485D = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(memberObject, 0LL, 0LL) )
  {
    v14 = this->fields.memberObject;
    if ( !v14 )
      sub_B7076C(0LL, v12);
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
    sub_B7076C(0LL, method);
  SupportSelectObject__ShowEquip(memberObject, method);
}