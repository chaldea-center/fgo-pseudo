void EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CF04AA & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    byte_4CF04AA = 1;
  }
  EventInfoTipsArchiveListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200;
}


void EventInfoTipsArchiveListViewItemDraw___ctor(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.newIconPosOffsetY = 7.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoTipsArchiveListViewItemDraw__Awake(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_BoxCollider_o *EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentSubDrawObject; // x20
  __int64 v4; // x1
  bool v5; // w8
  UnityEngine_BoxCollider_o *result; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v7; // x8

  if ( (byte_4CF04A9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF04A9 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0, 0);
  result = 0;
  if ( v5 )
  {
    v7 = this->fields.currentSubDrawObject;
    if ( !v7 )
      sub_1C7BD40(0, v4);
    return v7->fields.frameCollider;
  }
  return result;
}


int32_t EventInfoTipsArchiveListViewItemDraw__GetHeight(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentSubDrawObject; // x20
  const MethodInfo *v4; // x1
  EventInfoTipsArchiveListViewItemDrawSub_o *v5; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v7; // x0

  if ( (byte_4CF04A8 & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF04A8 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0, 0) )
  {
    v5 = this->fields.currentSubDrawObject;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    return EventInfoTipsArchiveListViewItemDrawSub__GetHeight(v5, v4);
  }
  else
  {
    v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo);
      v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v7->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


int32_t EventInfoTipsArchiveListViewItemDraw__GetKind(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveListViewItemDraw__SetItem(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *item,
        bool isLast,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t v9; // w22
  EventInfoTipsArchiveListViewItemDraw_o *v10; // x19
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o **p_stateData; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v21; // x24
  unsigned int v22; // w23
  int v23; // w25
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v25; // x8
  const MethodInfo *v26; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v34; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v35; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  EventInfoTipsArchiveListViewItemDraw_o *v37; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v39; // x1
  int32_t Height; // w0
  int v41; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v9 = id;
  v10 = this;
  if ( (byte_4CF04A7 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF04A7 = 1;
  }
  v10->fields.id = v9;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_17;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v9, (const MethodInfo *)item);
  v10->fields.stateData = StateData;
  p_stateData = &v10->fields.stateData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->fields.stateData, (int32_t)StateData, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)&id = v10->fields.stateData && v10->fields.stateData->fields.state & 1;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  ShiningIconComponent__Set_41675388((ShiningIconComponent_o *)this, id, 0);
  if ( !*p_stateData )
    goto LABEL_17;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_17;
  index = (*p_stateData)->fields.index;
  v21 = 4;
  v22 = index - 1;
  v23 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v21 - 4 >= max_length )
      goto LABEL_28;
    if ( (int)v21 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v21);
    if ( !this )
      goto LABEL_17;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23 + (_DWORD)v21 == 3, 0);
    if ( v23 + (_DWORD)v21 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v21;
    if ( !subDrawList )
      goto LABEL_17;
  }
  v25 = v10->fields.subDrawList;
  if ( !v25 )
    goto LABEL_17;
  if ( v22 >= LODWORD(v25->max_length) )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v21);
  if ( !this )
    goto LABEL_17;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v27 = v10->fields.subDrawList;
  if ( !v27 )
    goto LABEL_17;
  if ( v22 >= LODWORD(v27->max_length) )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v27->obj.klass + v21);
  if ( !this )
    goto LABEL_17;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v26);
  v34 = v10->fields.subDrawList;
  if ( !v34 )
    goto LABEL_17;
  if ( v22 >= LODWORD(v34->max_length) )
LABEL_41:
    sub_1C7BD48(this);
  v35 = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v34->obj.klass + v21);
  v10->fields.currentSubDrawObject = v35;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v10->fields.currentSubDrawObject,
    (int32_t)v35,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
LABEL_28:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, *(const MethodInfo **)&id);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)FrameCollider, 0, 0) )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.partitionSprite;
    if ( this )
    {
      this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
      if ( FrameCollider )
      {
        v37 = this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v37, size.fields.y * -0.5, 0);
        this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.partitionSprite;
        if ( this )
        {
          this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isLast, 0);
            goto LABEL_36;
          }
        }
      }
    }
LABEL_17:
    sub_1C7BD40(this, *(_QWORD *)&id);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v39);
  if ( Height >= 0 )
    v41 = Height;
  else
    v41 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v41 >> 1), 0);
}


void EventInfoTipsArchiveListViewItemDraw__SetNewState(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *stateData; // x8

  stateData = this->fields.stateData;
  if ( stateData )
    stateData->fields.state = stateData->fields.state & 0xFFFFFFFE | isActive;
}


ShiningIconComponent_o *EventInfoTipsArchiveListViewItemDraw__get_NewIcon(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.newIcon;
}


UISprite_o *EventInfoTipsArchiveListViewItemDraw__get_PartitionSprite(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.partitionSprite;
}