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
    sub_1C3E7C0(0, method);
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

  if ( (byte_4C533F2 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    byte_4C533F2 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
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
    sub_1C3E7C0(DragObject, v4);
  }
  SupportSelectObject__ActivateEquipOnly((SupportSelectObject_o *)DragObject, 0);
  return v5;
}


UnityEngine_GameObject_o *SupportSelectListViewDropObject__CreateDragObject_35767416(
        SupportSelectListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x19
  UnityEngine_Object_c *klass; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Component_object; // x21
  const MethodInfo *v9; // x5
  UnityEngine_Object_c *v10; // x8

  if ( (byte_4C533F3 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C533F3 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(SupportSelectListViewDropObject_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                 this,
                                 this->klass->vtable._8_CreateDragObject.method,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_16;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)v5,
                                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( ((unsigned __int8)klass & 1) != 0 )
    {
      if ( Component_object )
      {
        klass = Component_object[5].klass;
        if ( klass )
        {
          SupportSelectObject__AddDepth((SupportSelectObject_o *)klass, addDepth, 0);
          v10 = Component_object[5].klass;
          if ( v10 )
          {
            SupportSelectListViewDropObject__SetData(
              (SupportSelectListViewDropObject_o *)Component_object,
              (SupportServantData_o *)v10->_1.this_arg.data,
              v10->_1.this_arg.bits,
              *(&v10->_1.this_arg.bits + 1),
              (EventCampaignEntity_array *)v10->_1.element_class,
              v9);
            klass = Component_object[5].klass;
            if ( klass )
            {
              SupportSelectObject__ActivateEquipOnly((SupportSelectObject_o *)klass, 0);
              return (UnityEngine_GameObject_o *)v5;
            }
          }
        }
      }
LABEL_16:
      sub_1C3E7C0(klass, v7);
    }
  }
  return (UnityEngine_GameObject_o *)v5;
}


void SupportSelectListViewDropObject__DestroyDragObj(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C533F1 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C533F1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C3E508(p_dragObject, 0, v7, v8);
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
  SupportSelectListViewDropObject_o *v9; // x19
  UnityEngine_GameObject_o *DragObject_35767416; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
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
  DragObject_35767416 = SupportSelectListViewDropObject__CreateDragObject_35767416(this, -100, v4);
  v9->fields.dragObject = DragObject_35767416;
  v9 = (SupportSelectListViewDropObject_o *)((char *)v9 + 128);
  sub_1C3E508((CGThumbnailListItem_o *)v9, (int32_t)DragObject_35767416, v11, v12);
  klass = (UnityEngine_GameObject_o *)v9->klass;
  if ( !klass )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(klass, 0);
  if ( !transform )
    goto LABEL_6;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_6;
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  v20 = UnityEngine_Transform__InverseTransformPoint(transform, v19, 0);
  v16 = v20.fields.y;
  v17 = v20.fields.z;
  v20.fields.y = v20.fields.x;
  v20.fields.z = v16;
  v18 = v17;
  transform = (UnityEngine_Transform_o *)TweenPosition__Begin(
                                           klass,
                                           duration,
                                           *(UnityEngine_Vector3_o *)&v20.fields.y,
                                           0);
  if ( !transform )
LABEL_6:
    sub_1C3E7C0(transform, v14);
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
    sub_1C3E7C0(0, method);
  SupportSelectObject__HideEquip(memberObject, 0);
}


bool SupportSelectListViewDropObject__IsCanDrag(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x9
  __int64 naturalAligment; // x12
  struct ListViewManager_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C533F0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SupportSelectListViewManager_TypeInfo);
    byte_4C533F0 = 1;
  }
  manager = this->fields.manager;
  if ( manager
    && (naturalAligment = SupportSelectListViewManager_TypeInfo->_2.naturalAligment,
        manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SupportSelectListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewManager_TypeInfo )
      v5 = this->fields.manager;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  return LOBYTE(v5[1].fields.sortKindLabel) && this->fields.isEquipPress;
}


void SupportSelectListViewDropObject__OnDestroy(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C533EF & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C533EF = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C3E508(p_dragObject, 0, v7, v8);
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

  if ( (byte_4C533F4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C533F4 = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberObject, 0, 0) )
  {
    v13 = this->fields.memberObject;
    if ( !v13 )
      sub_1C3E7C0(0, v12);
    SupportSelectObject__SetItem(v13, supportServantData, deckNum, classPos, friendPointCampaigns, 0, 0);
  }
}


void SupportSelectListViewDropObject__ShowEquip(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_1C3E7C0(0, method);
  SupportSelectObject__ShowEquip(memberObject, 0);
}