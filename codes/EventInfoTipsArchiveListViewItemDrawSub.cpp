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

  if ( (byte_4CC9281 & 1) == 0 )
  {
    sub_1C713B0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9281 = 1;
  }
  frameCollider = (UnityEngine_Object_o *)this->fields.frameCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameCollider, 0, 0) )
  {
    v5 = this->fields.frameCollider;
    if ( !v5 )
      sub_1C71608(0, v4);
    size = UnityEngine_BoxCollider__get_size(v5, 0);
    if ( size.fields.y == INFINITY )
      return 0x80000000;
    else
      return (int)size.fields.y;
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


void EventInfoTipsArchiveListViewItemDrawSub__OnDestroy(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_parameterObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *parameterObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC927E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC927E = 1;
  }
  parameterObject = this->fields.parameterObject;
  p_parameterObject = (GrandQuestFolderBoardItem_o *)&this->fields.parameterObject;
  v4 = (UnityEngine_Object_o *)parameterObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_parameterObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(klass, 0);
    p_parameterObject->klass = 0;
    sub_1C71354(p_parameterObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void EventInfoTipsArchiveListViewItemDrawSub__Setup(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventInfoTipsArchiveListViewItem_o **p_viewItem; // x20
  EventInfoTipsArchiveListViewItem_o *v11; // x0
  const MethodInfo *v12; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_array *imageInfoList; // x8
  unsigned __int64 v14; // x22
  unsigned __int64 max_length_low; // x9
  EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *v16; // x24
  UnityEngine_Object_o *Sprite; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4CC927F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC927F = 1;
  }
  this->fields.viewItem = item;
  p_viewItem = &this->fields.viewItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.viewItem, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
  imageInfoList = this->fields.imageInfoList;
  if ( !imageInfoList )
LABEL_14:
    sub_1C71608(v11, v12);
  v14 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(imageInfoList->max_length);
    if ( (__int64)v14 >= (int)max_length_low )
      break;
    if ( v14 >= max_length_low )
      sub_1C71610(v11);
    v16 = imageInfoList->m_Items[v14];
    if ( v16 )
    {
      Sprite = (UnityEngine_Object_o *)v16->fields.Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Object_o **p_parameterObject; // x20
  UnityEngine_Object_o *parameterObject; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v7; // x1
  struct EventInfoTipsArchiveListViewItem_o *viewItem; // x8
  Il2CppObject *parameterBasePrefab; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC9280 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9280 = 1;
  }
  parameterParent = (UnityEngine_Object_o *)this->fields.parameterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterParent, 0, 0) )
  {
    p_parameterObject = (UnityEngine_Object_o **)&this->fields.parameterObject;
    parameterObject = (UnityEngine_Object_o *)this->fields.parameterObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parameterObject, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        parameterBasePrefab = (Il2CppObject *)viewItem->fields.parameterBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object_(
                parameterBasePrefab,
                (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        *p_parameterObject = (UnityEngine_Object_o *)v10;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.parameterObject,
          (int32_t)v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        if ( UnityEngine_Object__op_Equality(*p_parameterObject, 0, 0) )
          return;
        GameObjectExtensions__SafeSetParent_36395768(this->fields.parameterObject, this->fields.parameterParent, 0);
        Component_object = this->fields.parameterObject;
        if ( Component_object )
        {
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
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
      sub_1C71608(Component_object, v7);
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