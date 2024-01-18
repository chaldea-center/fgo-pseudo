void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41886D9 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1);
    byte_41886D9 = 1;
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

  if ( (byte_41886D8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41886D8 = 1;
  }
  currentSubDrawObject = (UnityEngine_Object_o *)this->fields.currentSubDrawObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(currentSubDrawObject, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.currentSubDrawObject;
    if ( !v7 )
      sub_B2C434(0LL, v4);
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
  __int64 v5; // x1
  EventInfoTipsArchiveListViewItemDrawSub_o *v6; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v8; // x0

  if ( (byte_41886D7 & 1) == 0 )
  {
    sub_B2C35C(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41886D7 = 1;
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
      sub_B2C434(0LL, v5);
    return EventInfoTipsArchiveListViewItemDrawSub__GetHeight(v6, 0LL);
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
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v21; // x23
  il2cpp_array_size_t v22; // w22
  int v23; // w24
  int max_length; // w9
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v25; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v26; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v33; // x8
  System_Int32_array **v34; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v38; // x1
  int32_t Height; // w0
  int v40; // w8
  __int64 v41; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_41886D6 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_41886D6 = 1;
  }
  v10->fields.id = id;
  v10->fields.dispMode = mode;
  if ( !item )
    goto LABEL_16;
  StateData = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetStateData(item, id, (const MethodInfo *)item);
  v10->fields.stateData = (struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)StateData;
  p_stateData = &v10->fields.stateData;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.stateData, StateData, v13, v14, v15, v16, v17, v18);
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.stateData;
  if ( this )
    this = (EventInfoTipsArchiveListViewItemDraw_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                       (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)this,
                                                       0LL);
  if ( !v10->fields.newIcon )
    goto LABEL_16;
  ShiningIconComponent__Set_32979912(v10->fields.newIcon, (unsigned __int8)this & 1, 0LL);
  if ( !*p_stateData )
    goto LABEL_16;
  subDrawList = v10->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_16;
  index = (*p_stateData)->fields.index;
  v21 = 4LL;
  v22 = index - 1;
  v23 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v21 - 4 >= max_length )
      goto LABEL_27;
    if ( (int)v21 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&subDrawList->obj.klass + v21);
    if ( !this )
      goto LABEL_16;
    this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23 + (_DWORD)v21 == 3, 0LL);
    if ( v23 + (_DWORD)v21 == 3 )
      break;
    subDrawList = v10->fields.subDrawList;
    ++v21;
    if ( !subDrawList )
      goto LABEL_16;
  }
  v25 = v10->fields.subDrawList;
  if ( !v25 )
    goto LABEL_16;
  if ( v22 >= v25->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v21);
  if ( !this )
    goto LABEL_16;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v26 = v10->fields.subDrawList;
  if ( !v26 )
    goto LABEL_16;
  if ( v22 >= v26->max_length )
    goto LABEL_41;
  this = (EventInfoTipsArchiveListViewItemDraw_o *)*((_QWORD *)&v26->obj.klass + v21);
  if ( !this )
    goto LABEL_16;
  EventInfoTipsArchiveListViewItemDrawSub__Setup((EventInfoTipsArchiveListViewItemDrawSub_o *)this, item, 0LL);
  v33 = v10->fields.subDrawList;
  if ( !v33 )
    goto LABEL_16;
  if ( v22 >= v33->max_length )
  {
LABEL_41:
    v41 = sub_B2C460(this);
    sub_B2C400(v41, 0LL);
  }
  v34 = (System_Int32_array **)*((_QWORD *)&v33->obj.klass + v21);
  v10->fields.currentSubDrawObject = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)v34;
  sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.currentSubDrawObject, v34, v27, v28, v29, v30, v31, v32);
LABEL_27:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(v10, *(const MethodInfo **)&id);
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
        v36 = (UnityEngine_GameObject_o *)this;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY(v36, size.fields.y * -0.5, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&id);
  }
LABEL_36:
  this = (EventInfoTipsArchiveListViewItemDraw_o *)v10->fields.newIcon;
  if ( !this )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(v10, v38);
  if ( Height >= 0 )
    v40 = Height;
  else
    v40 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(gameObject, v10->fields.newIconPosOffsetY + (float)(v40 >> 1), 0LL);
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