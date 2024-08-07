void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00386 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1);
    byte_4A00386 = 1;
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

  if ( (byte_4A00385 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A00385 = 1;
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
      sub_1B64C5C(0LL, v4);
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

  if ( (byte_4A00384 & 1) == 0 )
  {
    sub_1B64A00(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A00384 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL) )
  {
    v6 = this->fields.currentSubDrawObject;
    if ( !v6 )
      sub_1B64C5C(0LL, v5);
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
  int32_t v14; // w3
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v17; // x24
  il2cpp_array_size_t v18; // w23
  int v19; // w25
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v21; // x8
  const MethodInfo *v22; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v26; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v27; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  EventInfoTipsArchiveListViewItemDraw_o *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v31; // x1
  int32_t Height; // w0
  int v33; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v9 = id;
  v10 = this;
  if ( (byte_4A00383 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4A00383 = 1;
  }
  v10->fields.id = v9;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_17;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v9, (const MethodInfo *)item);
  v10->fields.stateData = StateData;
  p_stateData = &v10->fields.stateData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->fields.stateData, (int32_t)StateData, v13, v14);
  *(_QWORD *)&id = v10->fields.stateData && v10->fields.stateData->fields.state & 1;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  ShiningIconComponent__Set_37924600((ShiningIconComponent_o *)this, id, 0LL);
  if ( !*p_stateData )
    goto LABEL_17;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_17;
  index = (*p_stateData)->fields.index;
  v17 = 4LL;
  v18 = index - 1;
  v19 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v17 - 4 >= max_length )
      goto LABEL_28;
    if ( (int)v17 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v17);
    if ( !this )
      goto LABEL_17;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19 + (_DWORD)v17 == 3, 0LL);
    if ( v19 + (_DWORD)v17 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v17;
    if ( !subDrawList )
      goto LABEL_17;
  }
  v21 = v10->fields.subDrawList;
  if ( !v21 )
    goto LABEL_17;
  if ( v18 >= v21->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v21->obj.klass + v17);
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
  if ( v18 >= v23->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v17);
  if ( !this )
    goto LABEL_17;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v22);
  v26 = v10->fields.subDrawList;
  if ( !v26 )
    goto LABEL_17;
  if ( v18 >= v26->max_length )
LABEL_41:
    sub_1B64C64(this, *(_QWORD *)&id);
  v27 = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v26->obj.klass + v17);
  v10->fields.currentSubDrawObject = v27;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->fields.currentSubDrawObject, (int32_t)v27, v24, v25);
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
        v29 = this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v29, size.fields.y * -0.5, 0LL);
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
    sub_1B64C5C(this, *(_QWORD *)&id);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v31);
  if ( Height >= 0 )
    v33 = Height;
  else
    v33 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v33 >> 1), 0LL);
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