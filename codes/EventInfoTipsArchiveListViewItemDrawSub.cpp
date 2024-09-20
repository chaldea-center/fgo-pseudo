void __fastcall EventInfoTipsArchiveListViewItemDrawSub___ctor(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  __int128 v2; // q0

  *(_QWORD *)&v2 = 0x6200000062LL;
  *((_QWORD *)&v2 + 1) = 0x6200000062LL;
  *(_OWORD *)&this->fields.power = v2;
  *(_QWORD *)&this->fields.luck = 0x6200000062LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoTipsArchiveListViewItemDrawSub__GetHeight(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frameCollider; // x20
  __int64 v4; // x1
  UnityEngine_BoxCollider_o *v5; // x0
  float v6; // s1
  EventInfoTipsArchiveListViewItemDraw_c *v8; // x0

  if ( (byte_4A5D126 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D126 = 1;
  }
  frameCollider = (UnityEngine_Object_o *)this->fields.frameCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameCollider, 0LL, 0LL) )
  {
    v5 = this->fields.frameCollider;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    *(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_BoxCollider__get_size(v5, 0LL);
    if ( v6 == INFINITY )
      return 0x80000000;
    else
      return (int)v6;
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


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__OnDestroy(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_parameterObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *parameterObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D123 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D123 = 1;
  }
  parameterObject = this->fields.parameterObject;
  p_parameterObject = (ServantStatusBattleListViewItem_o *)&this->fields.parameterObject;
  v4 = (UnityEngine_Object_o *)parameterObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_parameterObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_parameterObject->klass = 0LL;
    sub_1B88554(p_parameterObject, 0, v7, v8);
  }
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__Setup(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventInfoTipsArchiveListViewItem_o **p_viewItem; // x20
  EventInfoTipsArchiveListViewItem_o *v7; // x0
  const MethodInfo *v8; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_array *imageInfoList; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *v12; // x24
  UnityEngine_Object_o *Sprite; // x21

  if ( (byte_4A5D124 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D124 = 1;
  }
  this->fields.viewItem = item;
  p_viewItem = &this->fields.viewItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.viewItem, (int32_t)item, (int32_t)method, v3);
  imageInfoList = this->fields.imageInfoList;
  if ( !imageInfoList )
LABEL_14:
    sub_1B8880C(v7, v8);
  v10 = 0LL;
  while ( 1 )
  {
    max_length = imageInfoList->max_length;
    if ( (__int64)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1B88814(v7, v8);
    v12 = imageInfoList->m_Items[v10];
    if ( v12 )
    {
      Sprite = (UnityEngine_Object_o *)v12->fields.Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = (EventInfoTipsArchiveListViewItem_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        v7 = *p_viewItem;
        if ( !*p_viewItem )
          goto LABEL_14;
        v7 = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__SetSprite(
                                                     v7,
                                                     v12->fields.Sprite,
                                                     v12->fields.SpriteName,
                                                     0LL);
      }
    }
    imageInfoList = this->fields.imageInfoList;
    ++v10;
    if ( !imageInfoList )
      goto LABEL_14;
  }
  EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(this, v8);
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(
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

  if ( (byte_4A5D125 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D125 = 1;
  }
  parameterParent = (UnityEngine_Object_o *)this->fields.parameterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterParent, 0LL, 0LL) )
  {
    p_parameterObject = (UnityEngine_Object_o **)&this->fields.parameterObject;
    parameterObject = (UnityEngine_Object_o *)this->fields.parameterObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parameterObject, 0LL, 0LL);
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
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        *p_parameterObject = (UnityEngine_Object_o *)v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.parameterObject, (int32_t)v10, v11, v12);
        if ( UnityEngine_Object__op_Equality(*p_parameterObject, 0LL, 0LL) )
          return;
        GameObjectExtensions__SafeSetParent_33730068(this->fields.parameterObject, this->fields.parameterParent, 0LL);
        Component_object = this->fields.parameterObject;
        if ( Component_object )
        {
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
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
              0LL);
            return;
          }
        }
      }
      sub_1B8880C(Component_object, v7);
    }
  }
}


UnityEngine_BoxCollider_o *__fastcall EventInfoTipsArchiveListViewItemDrawSub__get_FrameCollider(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  return this->fields.frameCollider;
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub_ImageInfo___ctor(
        EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}