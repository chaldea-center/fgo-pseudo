void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421597A & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1);
    byte_421597A = 1;
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
  bool v4; // w8
  UnityEngine_BoxCollider_o *result; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v6; // x8

  if ( (byte_4215979 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215979 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL);
  result = 0LL;
  if ( v4 )
  {
    v6 = this->fields.currentSubDrawObject;
    if ( !v6 )
      sub_B0D97C(0LL);
    return v6->fields.frameCollider;
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

  if ( (byte_4215978 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215978 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL) )
  {
    v6 = this->fields.currentSubDrawObject;
    if ( !v6 )
      sub_B0D97C(0LL);
    return EventInfoTipsArchiveListViewItemDrawSub__GetHeight(v6, v5);
  }
  else
  {
    v8 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( (BYTE3(EventInfoTipsArchiveListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
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
  EventInfoTipsArchiveListViewItemDraw_o *v10; // x19
  System_Int32_array **StateData; // x0
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o **p_stateData; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v22; // x23
  il2cpp_array_size_t v23; // w22
  int v24; // w24
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v26; // x8
  const MethodInfo *v27; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v28; // x8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v35; // x8
  System_Int32_array **v36; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v40; // x1
  int32_t Height; // w0
  int v42; // w8
  __int64 v43; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4215977 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4215977 = 1;
  }
  v10->fields.id = id;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_16;
  StateData = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetStateData(item, id, (const MethodInfo *)item);
  v10->fields.stateData = (struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)StateData;
  p_stateData = &v10->fields.stateData;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.stateData, StateData, v13, v14, v15, v16, v17, v18);
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.stateData;
  if ( this )
    this = (EventInfoTipsArchiveListViewItemDraw_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                       (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)this,
                                                       0LL);
  if ( !v10->fields.newIcon )
    goto LABEL_16;
  ShiningIconComponent__Set_32504684(v10->fields.newIcon, (unsigned __int8)this & 1, 0LL);
  if ( !*p_stateData )
    goto LABEL_16;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_16;
  index = (*p_stateData)->fields.index;
  v22 = 4LL;
  v23 = index - 1;
  v24 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v22 - 4 >= max_length )
      goto LABEL_27;
    if ( (int)v22 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v22);
    if ( !this )
      goto LABEL_16;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24 + (_DWORD)v22 == 3, 0LL);
    if ( v24 + (_DWORD)v22 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v22;
    if ( !subDrawList )
      goto LABEL_16;
  }
  v26 = v10->fields.subDrawList;
  if ( !v26 )
    goto LABEL_16;
  if ( v23 >= v26->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v26->obj.klass + v22);
  if ( !this )
    goto LABEL_16;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v28 = v10->fields.subDrawList;
  if ( !v28 )
    goto LABEL_16;
  if ( v23 >= v28->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v28->obj.klass + v22);
  if ( !this )
    goto LABEL_16;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, v27);
  v35 = v10->fields.subDrawList;
  if ( !v35 )
    goto LABEL_16;
  if ( v23 >= v35->max_length )
  {
LABEL_41:
    v43 = sub_B0D9A8(this);
    sub_B0D948(v43, 0LL);
  }
  v36 = (System_Int32_array **)*((_QWORD *)&v35->obj.klass + v22);
  v10->fields.currentSubDrawObject = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.currentSubDrawObject, v36, v29, v30, v31, v32, v33, v34);
LABEL_27:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, v19);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        v38 = (UnityEngine_GameObject_o *)this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY(v38, size.fields.y * -0.5, 0LL);
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
LABEL_16:
    sub_B0D97C(this);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_16;
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
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *stateData; // x0

  stateData = this->fields.stateData;
  if ( stateData )
    EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(stateData, isActive, 0LL);
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