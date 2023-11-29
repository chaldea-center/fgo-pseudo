void __fastcall EventInfoTipsArchiveListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA1A6 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, v1);
    byte_40FA1A6 = 1;
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

  if ( (byte_40FA1A5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA1A5 = 1;
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
      sub_B170D4();
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

  if ( (byte_40FA1A4 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA1A4 = 1;
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
      sub_B170D4();
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
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o **p_stateData; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v19; // x0
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  MethodInfo *v22; // x2
  struct EventInfoTipsArchiveListViewItemDrawSub_array *subDrawList; // x8
  int32_t index; // w9
  __int64 v25; // x23
  il2cpp_array_size_t v26; // w22
  int v27; // w24
  int max_length; // w9
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v31; // x8
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v34; // x8
  EventInfoTipsArchiveListViewItemDrawSub_o *v35; // x0
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct EventInfoTipsArchiveListViewItemDrawSub_array *v41; // x8
  struct EventInfoTipsArchiveListViewItemDrawSub_o *v42; // x1
  UnityEngine_BoxCollider_o *FrameCollider; // x21
  UnityEngine_Component_o *partitionSprite; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x22
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *newIcon; // x0
  UnityEngine_GameObject_o *v50; // x20
  const MethodInfo *v51; // x1
  int32_t Height; // w0
  int v53; // w8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA1A3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_40FA1A3 = 1;
  }
  this->fields.id = id;
  this->fields.dispMode = mode;
  if ( !item )
    goto LABEL_16;
  StateData = EventInfoTipsArchiveListViewItem__GetStateData(item, id, (const MethodInfo *)item);
  this->fields.stateData = StateData;
  p_stateData = &this->fields.stateData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateData,
    (System_Int32_array **)StateData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.stateData;
  if ( v19 )
    LOBYTE(v19) = EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(v19, 0LL);
  if ( !this->fields.newIcon )
    goto LABEL_16;
  ShiningIconComponent__Set_33652660(this->fields.newIcon, (unsigned __int8)v19 & 1, 0LL);
  if ( !*p_stateData )
    goto LABEL_16;
  subDrawList = this->fields.subDrawList;
  if ( !subDrawList )
    goto LABEL_16;
  index = (*p_stateData)->fields.index;
  v25 = 4LL;
  v26 = index - 1;
  v27 = -index;
  while ( 1 )
  {
    max_length = subDrawList->max_length;
    if ( (int)v25 - 4 >= max_length )
      goto LABEL_27;
    if ( (int)v25 - 4 >= (unsigned int)max_length )
      goto LABEL_41;
    v29 = (UnityEngine_Component_o *)*((_QWORD *)&subDrawList->obj.klass + v25);
    if ( !v29 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, v27 + (_DWORD)v25 == 3, 0LL);
    if ( v27 + (_DWORD)v25 == 3 )
      break;
    subDrawList = this->fields.subDrawList;
    ++v25;
    if ( !subDrawList )
      goto LABEL_16;
  }
  v31 = this->fields.subDrawList;
  if ( !v31 )
    goto LABEL_16;
  if ( v26 >= v31->max_length )
    goto LABEL_41;
  v32 = (UnityEngine_Component_o *)*((_QWORD *)&v31->obj.klass + v25);
  if ( !v32 )
    goto LABEL_16;
  v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
  if ( !v33 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  v34 = this->fields.subDrawList;
  if ( !v34 )
    goto LABEL_16;
  if ( v26 >= v34->max_length )
    goto LABEL_41;
  v35 = (EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v34->obj.klass + v25);
  if ( !v35 )
    goto LABEL_16;
  EventInfoTipsArchiveListViewItemDrawSub__Setup(v35, item, v22);
  v41 = this->fields.subDrawList;
  if ( !v41 )
    goto LABEL_16;
  if ( v26 >= v41->max_length )
  {
LABEL_41:
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  v42 = (struct EventInfoTipsArchiveListViewItemDrawSub_o *)*((_QWORD *)&v41->obj.klass + v25);
  this->fields.currentSubDrawObject = v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentSubDrawObject,
    (System_Int32_array **)v42,
    (System_String_array **)v22,
    v36,
    v37,
    v38,
    v39,
    v40);
LABEL_27:
  FrameCollider = EventInfoTipsArchiveListViewItemDraw__GetFrameCollider(this, v21);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)FrameCollider, 0LL, 0LL) )
  {
    partitionSprite = (UnityEngine_Component_o *)this->fields.partitionSprite;
    if ( partitionSprite )
    {
      v45 = UnityEngine_Component__get_gameObject(partitionSprite, 0LL);
      if ( FrameCollider )
      {
        v46 = v45;
        size = UnityEngine_BoxCollider__get_size(FrameCollider, 0LL);
        GameObjectExtensions__SetLocalPositionY(v46, size.fields.y * -0.5, 0LL);
        v47 = (UnityEngine_Component_o *)this->fields.partitionSprite;
        if ( v47 )
        {
          v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
          if ( v48 )
          {
            UnityEngine_GameObject__SetActive(v48, !isLast, 0LL);
            goto LABEL_36;
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_36:
  newIcon = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_16;
  v50 = UnityEngine_Component__get_gameObject(newIcon, 0LL);
  Height = EventInfoTipsArchiveListViewItemDraw__GetHeight(this, v51);
  if ( Height >= 0 )
    v53 = Height;
  else
    v53 = Height + 1;
  GameObjectExtensions__SetLocalPositionY(v50, this->fields.newIconPosOffsetY + (float)(v53 >> 1), 0LL);
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