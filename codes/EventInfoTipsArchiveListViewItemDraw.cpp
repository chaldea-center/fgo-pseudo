void EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C3981F & 1) == 0 )
  {
    sub_1C32C20(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    byte_4C3981F = 1;
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
  bool v4; // w8
  UnityEngine_BoxCollider_o *result; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v6; // x8

  if ( (byte_4C3981E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3981E = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0, 0);
  result = 0;
  if ( v4 )
  {
    v6 = this->fields.currentSubDrawObject;
    if ( !v6 )
      sub_1C32E7C(0);
    return v6->fields.frameCollider;
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

  if ( (byte_4C3981D & 1) == 0 )
  {
    sub_1C32C20(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3981D = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0, 0) )
  {
    v5 = this->fields.currentSubDrawObject;
    if ( !v5 )
      sub_1C32E7C(0);
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


void EventInfoTipsArchiveListViewItemDraw__SetItem(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        int32_t id,
        EventInfoTipsArchiveListViewItem_o *item,
        bool isLast,
        int32_t mode,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItemDraw_o *v10; // x19
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o **p_stateData; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool v15; // w1
  const MethodInfo *v16; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v19; // x24
  unsigned int v20; // w23
  int v21; // w25
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v23; // x8
  const MethodInfo *v24; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v25; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v28; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v29; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  EventInfoTipsArchiveListViewItemDraw_o *v31; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v33; // x1
  int32_t Height; // w0
  int v35; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4C3981C & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3981C = 1;
  }
  v10->fields.id = id;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_17;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, id, (const MethodInfo *)item);
  v10->fields.stateData = StateData;
  p_stateData = &v10->fields.stateData;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.stateData, (int32_t)StateData, v13, v14);
  v15 = v10->fields.stateData && v10->fields.stateData->fields.state & 1;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  ShiningIconComponent__Set_40922520((ShiningIconComponent_o *)this, v15, 0);
  if ( !*p_stateData )
    goto LABEL_17;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_17;
  index = (*p_stateData)->fields.index;
  v19 = 4;
  v20 = index - 1;
  v21 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v19 - 4 >= max_length )
      goto LABEL_28;
    if ( (int)v19 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v19);
    if ( !this )
      goto LABEL_17;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21 + (_DWORD)v19 == 3, 0);
    if ( v21 + (_DWORD)v19 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v19;
    if ( !subDrawList )
      goto LABEL_17;
  }
  v23 = v10->fields.subDrawList;
  if ( !v23 )
    goto LABEL_17;
  if ( v20 >= LODWORD(v23->max_length) )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v19);
  if ( !this )
    goto LABEL_17;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v25 = v10->fields.subDrawList;
  if ( !v25 )
    goto LABEL_17;
  if ( v20 >= LODWORD(v25->max_length) )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v19);
  if ( !this )
    goto LABEL_17;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v24);
  v28 = v10->fields.subDrawList;
  if ( !v28 )
    goto LABEL_17;
  if ( v20 >= LODWORD(v28->max_length) )
LABEL_41:
    sub_1C32E84(this);
  v29 = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v28->obj.klass + v19);
  v10->fields.currentSubDrawObject = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.currentSubDrawObject, (int32_t)v29, v26, v27);
LABEL_28:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, v16);
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
        v31 = this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v31, size.fields.y * -0.5, 0);
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
    sub_1C32E7C(this);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v33);
  if ( Height >= 0 )
    v35 = Height;
  else
    v35 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v35 >> 1), 0);
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