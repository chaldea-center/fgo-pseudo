void EventInfoTipsArchiveListViewItemDrawSub___ctor(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = 0x6200000062LL;
  *((_QWORD *)&v2 + 1) = 0x6200000062LL;
  *(_OWORD *)&this->fields.power = v2;
  *(_QWORD *)&this->fields.luck = 0x6200000062LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t EventInfoTipsArchiveListViewItemDrawSub__GetHeight(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frameCollider; // x20
  __int64 v4; // x1
  UnityEngine_BoxCollider_o *v5; // x0
  EventInfoTipsArchiveListViewItemDraw_c *v7; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972FEC & 1) == 0 )
  {
    sub_2213A60(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FEC = 1;
  }
  frameCollider = (UnityEngine_Object_o *)this->fields.frameCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(frameCollider, 0, 0) )
  {
    v5 = this->fields.frameCollider;
    if ( !v5 )
      sub_2213CDC(0, v4);
    size = UnityEngine_BoxCollider__get_size(v5, 0);
    if ( size.fields.y == INFINITY )
      return 0x80000000;
    else
      return (int)size.fields.y;
  }
  else
  {
    v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !*(&EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo, v4);
      v7 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v7->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void EventInfoTipsArchiveListViewItemDrawSub__OnDestroy(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_parameterObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *parameterObject; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5972FE9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FE9 = 1;
  }
  parameterObject = this->fields.parameterObject;
  p_parameterObject = (MissionNaviTransitionBoardItem_o *)&this->fields.parameterObject;
  v4 = (UnityEngine_Object_o *)parameterObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_parameterObject->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_parameterObject->klass = 0;
    sub_2213A04(p_parameterObject, 0, v8, v9, v10, v11, v12, v13);
  }
}


void EventInfoTipsArchiveListViewItemDrawSub__Setup(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventInfoTipsArchiveListViewItem_o **p_viewItem; // x20
  EventInfoTipsArchiveListViewItem_o *v11; // x0
  const MethodInfo *v12; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_array *imageInfoList; // x8
  unsigned __int64 v14; // x23
  unsigned __int64 max_length_low; // x9
  EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *v16; // x24
  UnityEngine_Object_o *Sprite; // x21
  const MethodInfo *v18; // x3

  if ( (byte_5972FEA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FEA = 1;
  }
  this->fields.viewItem = item;
  p_viewItem = &this->fields.viewItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewItem,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  imageInfoList = this->fields.imageInfoList;
  if ( !imageInfoList )
LABEL_14:
    sub_2213CDC(v11, v12);
  v14 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(imageInfoList->max_length);
    if ( (__int64)v14 >= (int)max_length_low )
      break;
    if ( v14 >= max_length_low )
      sub_2213CE4(v11);
    v16 = imageInfoList->m_Items[v14];
    if ( v16 )
    {
      Sprite = (UnityEngine_Object_o *)v16->fields.Sprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v11 = (EventInfoTipsArchiveListViewItem_o *)UnityEngine_Object__op_Equality(Sprite, 0, 0);
      if ( ((unsigned __int8)v11 & 1) == 0 )
      {
        v11 = *p_viewItem;
        if ( !*p_viewItem )
          goto LABEL_14;
        v11 = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__SetSprite(
                                                      v11,
                                                      v16->fields.Sprite,
                                                      v16->fields.SpriteName,
                                                      v18);
      }
    }
    imageInfoList = this->fields.imageInfoList;
    ++v14;
    if ( !imageInfoList )
      goto LABEL_14;
  }
  EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(this, v12);
}


void EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parameterParent; // x20
  __int64 v4; // x1
  UnityEngine_Object_o **p_parameterObject; // x20
  UnityEngine_Object_o *parameterObject; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v8; // x1
  struct EventInfoTipsArchiveListViewItem_o *viewItem; // x8
  Il2CppObject *parameterBasePrefab; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5972FEB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972FEB = 1;
  }
  parameterParent = (UnityEngine_Object_o *)this->fields.parameterParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(parameterParent, 0, 0) )
  {
    p_parameterObject = (UnityEngine_Object_o **)&this->fields.parameterObject;
    parameterObject = (UnityEngine_Object_o *)this->fields.parameterObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parameterObject, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        parameterBasePrefab = (Il2CppObject *)viewItem->fields.parameterBasePrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        v11 = UnityEngine_Object__Instantiate_object_(
                parameterBasePrefab,
                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        *p_parameterObject = (UnityEngine_Object_o *)v11;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.parameterObject,
          (int32_t)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        if ( UnityEngine_Object__op_Equality(*p_parameterObject, 0, 0) )
          return;
        GameObjectExtensions__SafeSetParent_42897308(this->fields.parameterObject, this->fields.parameterParent, 0);
        Component_object = this->fields.parameterObject;
        if ( Component_object )
        {
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
          if ( Component_object )
          {
            ServantStatusParameterComponent__Setup(
              (ServantStatusParameterComponent_o *)Component_object,
              this->fields.power,
              this->fields.defense,
              this->fields.agility,
              this->fields.magic,
              this->fields.luck,
              this->fields.np,
              0);
            return;
          }
        }
      }
      sub_2213CDC(Component_object, v8);
    }
  }
}


UnityEngine_BoxCollider_o *EventInfoTipsArchiveListViewItemDrawSub__get_FrameCollider(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  return this->fields.frameCollider;
}


void EventInfoTipsArchiveListViewItemDrawSub_ImageInfo___ctor(
        EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}