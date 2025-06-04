void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B03F8A & 1) == 0 )
  {
    sub_1BC3008(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1);
    byte_4B03F8A = 1;
  }
  EventInfoTipsArchiveListViewItemDraw_TypeInfo->static_fields->DEFAULT_FRAME_SIZE_HEIGHT = 200;
}


void __fastcall EventInfoTipsArchiveListViewItemDraw___ctor(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.newIconPosOffsetY = 7.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveListViewItemDraw__Awake(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_BoxCollider_o *__fastcall EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentSubDrawObject; // x20
  __int64 v4; // x1
  bool v5; // w8
  UnityEngine_BoxCollider_o *result; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v7; // x8

  if ( (byte_4B03F89 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03F89 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.currentSubDrawObject;
    if ( !v7 )
      sub_1BC3264(0LL, v4);
    return v7->fields.frameCollider;
  }
  return result;
}


int32_t __fastcall EventInfoTipsArchiveListViewItemDraw__GetHeight(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *currentSubDrawObject; // x20
  const MethodInfo *v5; // x1
  EventInfoTipsArchiveListViewItemDrawSub_o *v6; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v8; // x0

  if ( (byte_4B03F88 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B03F88 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL) )
  {
    v6 = this->fields.currentSubDrawObject;
    if ( !v6 )
      sub_1BC3264(0LL, v5);
    return EventInfoTipsArchiveListViewItemDrawSub__GetHeight(v6, v5);
  }
  else
  {
    v8 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo);
      v8 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v8->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewItemDraw__GetKind(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewItemDraw__SetItem(
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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v18; // x24
  il2cpp_array_size_t v19; // w23
  int v20; // w25
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v22; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v23; // x8
  const MethodInfo *v24; // x3
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v25; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v26; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  EventInfoTipsArchiveListViewItemDraw_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v30; // x1
  int32_t Height; // w0
  int v32; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v9 = id;
  v10 = this;
  if ( (byte_4B03F87 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4B03F87 = 1;
  }
  v10->fields.id = v9;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_17;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v9, (const MethodInfo *)item);
  v10->fields.stateData = StateData;
  p_stateData = &v10->fields.stateData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10->fields.stateData, (int32_t)StateData, v13, v14);
  *(_QWORD *)&id = v10->fields.stateData && v10->fields.stateData->fields.state & 1;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)this, id, 0LL);
  if ( !*p_stateData )
    goto LABEL_17;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_17;
  index = (*p_stateData)->fields.index;
  v18 = 4LL;
  v19 = index - 1;
  v20 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v18 - 4 >= max_length )
      goto LABEL_28;
    if ( (int)v18 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v18);
    if ( !this )
      goto LABEL_17;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20 + (_DWORD)v18 == 3, 0LL);
    if ( v20 + (_DWORD)v18 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v18;
    if ( !subDrawList )
      goto LABEL_17;
  }
  v22 = v10->fields.subDrawList;
  if ( !v22 )
    goto LABEL_17;
  if ( v19 >= v22->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v22->obj.klass + v18);
  if ( !this )
    goto LABEL_17;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v23 = v10->fields.subDrawList;
  if ( !v23 )
    goto LABEL_17;
  if ( v19 >= v23->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v18);
  if ( !this )
    goto LABEL_17;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v15);
  v25 = v10->fields.subDrawList;
  if ( !v25 )
    goto LABEL_17;
  if ( v19 >= v25->max_length )
LABEL_41:
    sub_1BC326C(this, *(_QWORD *)&id, v15);
  v26 = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v25->obj.klass + v18);
  v10->fields.currentSubDrawObject = v26;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10->fields.currentSubDrawObject, (int32_t)v26, (int32_t)v15, v24);
LABEL_28:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, *(const MethodInfo **)&id);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)FrameCollider, 0LL, 0LL) )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.partitionSprite;
    if ( this )
    {
      this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
      if ( FrameCollider )
      {
        v28 = this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v28, size.fields.y * -0.5, 0LL);
        this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.partitionSprite;
        if ( this )
        {
          this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isLast, 0LL);
            goto LABEL_36;
          }
        }
      }
    }
LABEL_17:
    sub_1BC3264(this, *(_QWORD *)&id);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v30);
  if ( Height >= 0 )
    v32 = Height;
  else
    v32 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v32 >> 1), 0LL);
}


void __fastcall EventInfoTipsArchiveListViewItemDraw__SetNewState(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *stateData; // x8

  stateData = this->fields.stateData;
  if ( stateData )
    stateData->fields.state = stateData->fields.state & 0xFFFFFFFE | isActive;
}


ShiningIconComponent_o *__fastcall EventInfoTipsArchiveListViewItemDraw__get_NewIcon(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.newIcon;
}


UISprite_o *__fastcall EventInfoTipsArchiveListViewItemDraw__get_PartitionSprite(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.partitionSprite;
}