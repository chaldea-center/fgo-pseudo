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
    sub_1C93D2C(0, method);
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

  if ( (byte_4D2CEE1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    byte_4D2CEE1 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   DragObject,
                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___),
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
    sub_1C93D2C(DragObject, v4);
  }
  SupportSelectObject__ActivateEquipOnly((SupportSelectObject_o *)DragObject, 0);
  return v5;
}


UnityEngine_GameObject_o *SupportSelectListViewDropObject__CreateDragObject_36230132(
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

  if ( (byte_4D2CEE2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEE2 = 1;
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
                                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SupportSelectListViewDropObject___);
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
      sub_1C93D2C(klass, v7);
    }
  }
  return (UnityEngine_GameObject_o *)v5;
}


void SupportSelectListViewDropObject__DestroyDragObj(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2CEE0 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEE0 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
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
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


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
  GrandQuestFolderBoardItem_o *v9; // x19
  UnityEngine_GameObject_o *DragObject_36230132; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *klass; // x19
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s1.4,4:s2.4,8:s3.4

  z = targetPosition.fields.z;
  y = targetPosition.fields.y;
  x = targetPosition.fields.x;
  v9 = (GrandQuestFolderBoardItem_o *)this;
  DragObject_36230132 = SupportSelectListViewDropObject__CreateDragObject_36230132(this, -100, v4);
  v9->fields._Name_k__BackingField = (struct System_String_o *)DragObject_36230132;
  v9 = (GrandQuestFolderBoardItem_o *)((char *)v9 + 128);
  sub_1C93A78(v9, (int32_t)DragObject_36230132, v11, v12, v13, v14, v15, v16);
  klass = (UnityEngine_GameObject_o *)v9->klass;
  if ( !klass
    || (transform = UnityEngine_GameObject__get_transform(klass, 0)) == 0
    || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0
    || (v20.fields.x = x,
        v20.fields.y = y,
        v20.fields.z = z,
        v21 = UnityEngine_Transform__InverseTransformPoint(transform, v20, 0),
        (transform = (UnityEngine_Transform_o *)TweenPosition__Begin(klass, duration, v21, 0)) == 0) )
  {
    sub_1C93D2C(transform, v18);
  }
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
    sub_1C93D2C(0, method);
  SupportSelectObject__HideEquip(memberObject, 0);
}


bool SupportSelectListViewDropObject__IsCanDrag(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x9
  __int64 naturalAligment; // x12
  struct ListViewManager_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2CEDF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SupportSelectListViewManager_TypeInfo);
    byte_4D2CEDF = 1;
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
    sub_1C93D2C(v6, v7);
  return LOBYTE(v5[1].fields.sortKindLabel) && this->fields.isEquipPress;
}


void SupportSelectListViewDropObject__OnDestroy(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2CEDE & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEDE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
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
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2CEE3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEE3 = 1;
  }
  memberObject = (UnityEngine_Object_o *)this->fields.memberObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(memberObject, 0, 0) )
  {
    v13 = this->fields.memberObject;
    if ( !v13 )
      sub_1C93D2C(0, v12);
    SupportSelectObject__SetItem(v13, supportServantData, deckNum, classPos, friendPointCampaigns, 0, 0);
  }
}


void SupportSelectListViewDropObject__ShowEquip(SupportSelectListViewDropObject_o *this, const MethodInfo *method)
{
  SupportSelectObject_o *memberObject; // x0

  memberObject = this->fields.memberObject;
  if ( !memberObject )
    sub_1C93D2C(0, method);
  SupportSelectObject__ShowEquip(memberObject, 0);
}