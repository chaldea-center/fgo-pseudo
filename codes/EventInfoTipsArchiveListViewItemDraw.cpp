void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1812B & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1, v2);
    byte_4B1812B = 1;
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
  __int64 v2; // x2
  UnityEngine_Object_o *currentSubDrawObject; // x20
  __int64 v5; // x1
  bool v6; // w8
  UnityEngine_BoxCollider_o *result; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v8; // x8

  if ( (byte_4B1812A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1812A = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL);
  result = 0LL;
  if ( v6 )
  {
    v8 = this->fields.currentSubDrawObject;
    if ( !v8 )
      sub_1BCAA3C(0LL, v5);
    return v8->fields.frameCollider;
  }
  return result;
}


int32_t __fastcall EventInfoTipsArchiveListViewItemDraw__GetHeight(
        EventInfoTipsArchiveListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *currentSubDrawObject; // x20
  const MethodInfo *v7; // x1
  EventInfoTipsArchiveListViewItemDrawSub_o *v8; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v10; // x0

  if ( (byte_4B18129 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18129 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL) )
  {
    v8 = this->fields.currentSubDrawObject;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    return EventInfoTipsArchiveListViewItemDrawSub__GetHeight(v8, v7);
  }
  else
  {
    v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo, v7);
      v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v10->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v21; // x24
  il2cpp_array_size_t v22; // w23
  int v23; // w25
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v25; // x8
  const MethodInfo *v26; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v27; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v34; // x8
  int64_t v35; // x1
  __int64 v36; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  EventInfoTipsArchiveListViewItemDraw_o *v38; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v40; // x1
  int32_t Height; // w0
  int v42; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v9 = id;
  v10 = this;
  if ( (byte_4B18128 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id, item);
    byte_4B18128 = 1;
  }
  v10->fields.id = v9;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_17;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, v9, (const MethodInfo *)item);
  v10->fields.stateData = StateData;
  p_stateData = &v10->fields.stateData;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.stateData, (int64_t)StateData, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)&id = v10->fields.stateData && v10->fields.stateData->fields.state & 1;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)this, id, 0LL);
  if ( !*p_stateData )
    goto LABEL_17;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_17;
  index = (*p_stateData)->fields.index;
  v21 = 4LL;
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
                                                       0LL);
    if ( !this )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23 + (_DWORD)v21 == 3, 0LL);
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
  if ( v22 >= v25->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v21);
  if ( !this )
    goto LABEL_17;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v27 = v10->fields.subDrawList;
  if ( !v27 )
    goto LABEL_17;
  if ( v22 >= v27->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v27->obj.klass + v21);
  if ( !this )
    goto LABEL_17;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v26);
  v34 = v10->fields.subDrawList;
  if ( !v34 )
    goto LABEL_17;
  if ( v22 >= v34->max_length )
LABEL_41:
    sub_1BCAA44(this, *(_QWORD *)&id);
  v35 = *((_QWORD *)&v34->obj.klass + v21);
  v10->fields.currentSubDrawObject = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.currentSubDrawObject, v35, v28, v29, v30, v31, v32, v33);
LABEL_28:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, *(const MethodInfo **)&id);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
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
        v38 = this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v38, size.fields.y * -0.5, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&id);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v40);
  if ( Height >= 0 )
    v42 = Height;
  else
    v42 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v42 >> 1), 0LL);
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