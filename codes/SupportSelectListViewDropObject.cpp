void SupportSelectListViewDropObject___ctor(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0);
}


void SupportSelectListViewDropObject__ActivateEquipOnly(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_21FFECC(0, method);
  SupportSelectObject__ActivateEquipOnly(memberObject, 0);
}


UnityEngine_GameObject_o *SupportSelectListViewDropObject__CreateDragObject(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x5
  struct SupportSelectObject_o *memberObject; // x8
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_5934B35 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    byte_5934B35 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
        (memberObject = this->fields.memberObject) == 0)
    || (v8 = DragObject) == 0
    || (SupportSelectListViewDropObject__SetData(
          (SupportSelectListViewDropObject_o *)DragObject,
          memberObject->fields.supportServantData,
          memberObject->fields.deckNum,
          memberObject->fields.classPos,
          memberObject->fields.eventFriendPoints,
          v6),
        (DragObject = (UnityEngine_GameObject_o *)v8[5].klass) == 0) )
  {
    sub_21FFECC(DragObject, v4);
  }
  SupportSelectObject__ActivateEquipOnly((SupportSelectObject_o *)DragObject, 0);
  return v5;
}


UnityEngine_GameObject_o *SupportSelectListViewDropObject__CreateDragObject_42464004(
        SupportSelectListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_c *klass; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *Component_object; // x21
  const MethodInfo *v13; // x5
  UnityEngine_Object_c *v14; // x8

  if ( (byte_5934B36 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B36 = 1;
  }
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(SupportSelectListViewDropObject_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                 this,
                                 this->klass->vtable._8_CreateDragObject.method,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_16;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v7,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( Component_object )
      {
        klass = Component_object[5].klass;
        if ( klass )
        {
          SupportSelectObject__AddDepth((SupportSelectObject_o *)klass, addDepth, 0);
          v14 = Component_object[5].klass;
          if ( v14 )
          {
            SupportSelectListViewDropObject__SetData(
              (SupportSelectListViewDropObject_o *)Component_object,
              (SupportServantData_o *)v14->_1.this_arg.data,
              v14->_1.this_arg.bits,
              *(&v14->_1.this_arg.bits + 1),
              (EventCampaignEntity_array *)v14->_1.element_class,
              v13);
            klass = Component_object[5].klass;
            if ( klass )
            {
              SupportSelectObject__ActivateEquipOnly((SupportSelectObject_o *)klass, 0);
              return (UnityEngine_GameObject_o *)v7;
            }
          }
        }
      }
LABEL_16:
      sub_21FFECC(klass, v9);
    }
  }
  return (UnityEngine_GameObject_o *)v7;
}


void SupportSelectListViewDropObject__DestroyDragObj(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934B34 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B34 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewDropObject__DoSwap(
        SupportSelectListViewDropObject_o *this,
        UnityEngine_Vector3_o targetPosition,
        float duration,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  float z; // s9
  float y; // s10
  float x; // s11
  MissionNaviTransitionBoardItem_o *v9; // x19
  UnityEngine_GameObject_o *DragObject_42464004; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *klass; // x19
  float v20; // s4
  float v21; // s5
  float v22; // s3
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  v9 = (MissionNaviTransitionBoardItem_o *)this;
  DragObject_42464004 = SupportSelectListViewDropObject__CreateDragObject_42464004(this, -100, v4);
  v9->fields._Name_k__BackingField = (struct System_String_o *)DragObject_42464004;
  v9 = (MissionNaviTransitionBoardItem_o *)((char *)v9 + 128);
  sub_21FFBF4(v9, (int32_t)DragObject_42464004, v11, v12, v13, v14, v15, v16);
  klass = (UnityEngine_GameObject_o *)v9->klass;
  if ( !klass )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(klass, 0);
  if ( !transform )
    goto LABEL_6;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_6;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v24 = UnityEngine_Transform__InverseTransformPoint(transform, v23, 0);
  v20 = v24.fields.y;
  v21 = v24.fields.z;
  v24.fields.y = v24.fields.x;
  v24.fields.z = v20;
  v22 = v21;
  transform = (UnityEngine_Transform_o *)TweenPosition__Begin(
                                           klass,
                                           duration,
                                           *(UnityEngine_Vector3_o *)&v24.fields.y,
                                           0);
  if ( !transform )
LABEL_6:
    sub_21FFECC(transform, v18);
  LODWORD(transform[1].monitor) = 3;
}


SupportSelectObject_o *SupportSelectListViewDropObject__GetMemberObject(
        SupportSelectListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.memberObject;
}


void SupportSelectListViewDropObject__HideEquip(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_21FFECC(0, method);
  SupportSelectObject__HideEquip(memberObject, 0);
}


bool SupportSelectListViewDropObject__IsCanDrag(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewManager_o *manager; // x9
  __int64 naturalAligment; // x12
  struct ListViewManager_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5934B33 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SupportSelectListViewManager_TypeInfo);
    byte_5934B33 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (naturalAligment = SupportSelectListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewManager_TypeInfo )
      v6 = this->fields.manager;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( !v7 )
    return 0;
  if ( !v6 )
    sub_21FFECC(v7, v8);
  return LOBYTE(v6[1].fields.sortKindLabel) && this->fields.isEquipPress;
}


void SupportSelectListViewDropObject__OnDestroy(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934B32 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B32 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SupportSelectListViewDropObject__OnPressEquip(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  this->fields.isEquipPress = 1;
}


void SupportSelectListViewDropObject__OnPressItem(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  this->fields.isEquipPress = 0;
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewDropObject__SetData(
        SupportSelectListViewDropObject_o *this,
        SupportServantData_o *supportServantData,
        int32_t deckNum,
        int32_t classPos,
        EventCampaignEntity_array *friendPointCampaigns,
        const MethodInfo *method)
{
  UnityEngine_Object_o *memberObject; // x24
  __int64 v12; // x1
  SupportSelectObject_o *v13; // x0

  if ( (byte_5934B37 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934B37 = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, supportServantData, *(_QWORD *)&deckNum);
  if ( UnityEngine_Object__op_Inequality(memberObject, 0, 0) )
  {
    v13 = this->fields.memberObject;
    if ( !v13 )
      sub_21FFECC(0, v12);
    SupportSelectObject__SetItem(v13, supportServantData, deckNum, classPos, friendPointCampaigns, 0, 0);
  }
}


void SupportSelectListViewDropObject__ShowEquip(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_21FFECC(0, method);
  SupportSelectObject__ShowEquip(memberObject, 0);
}