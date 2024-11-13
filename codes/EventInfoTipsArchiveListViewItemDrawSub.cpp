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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *frameCollider; // x20
  __int64 v7; // x1
  UnityEngine_BoxCollider_o *v8; // x0
  float v9; // s1
  EventInfoTipsArchiveListViewItemDraw_c *v11; // x0

  if ( (byte_4B1812F & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1812F = 1;
  }
  frameCollider = (UnityEngine_Object_o *)this->fields.frameCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(frameCollider, 0LL, 0LL) )
  {
    v8 = this->fields.frameCollider;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_BoxCollider__get_size(v8, 0LL);
    if ( v9 == INFINITY )
      return 0x80000000;
    else
      return (int)v9;
  }
  else
  {
    v11 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo, v7);
      v11 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v11->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__OnDestroy(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_parameterObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *parameterObject; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1812C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1812C = 1;
  }
  parameterObject = this->fields.parameterObject;
  p_parameterObject = (PartyOrganizationUtility_o *)&this->fields.parameterObject;
  v5 = (UnityEngine_Object_o *)parameterObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_parameterObject->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_parameterObject->klass = 0LL;
    sub_1BCA784(p_parameterObject, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__Setup(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoTipsArchiveListViewItem_o **p_viewItem; // x20
  EventInfoTipsArchiveListViewItem_o *v11; // x0
  const MethodInfo *v12; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_array *imageInfoList; // x8
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *v16; // x24
  UnityEngine_Object_o *Sprite; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4B1812D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B1812D = 1;
  }
  this->fields.viewItem = item;
  p_viewItem = &this->fields.viewItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.viewItem, (int64_t)item, (int64_t)method, v3, v4, v5, v6, v7);
  imageInfoList = this->fields.imageInfoList;
  if ( !imageInfoList )
LABEL_14:
    sub_1BCAA3C(v11, v12);
  v14 = 0LL;
  while ( 1 )
  {
    max_length = imageInfoList->max_length;
    if ( (__int64)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
      sub_1BCAA44(v11, v12);
    v16 = imageInfoList->m_Items[v14];
    if ( v16 )
    {
      Sprite = (UnityEngine_Object_o *)v16->fields.Sprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v11 = (EventInfoTipsArchiveListViewItem_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
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


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *parameterParent; // x20
  __int64 v9; // x1
  UnityEngine_Object_o **p_parameterObject; // x20
  UnityEngine_Object_o *parameterObject; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v13; // x1
  struct EventInfoTipsArchiveListViewItem_o *viewItem; // x8
  Il2CppObject *parameterBasePrefab; // x21
  Il2CppObject *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1812E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1812E = 1;
  }
  parameterParent = (UnityEngine_Object_o *)this->fields.parameterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(parameterParent, 0LL, 0LL) )
  {
    p_parameterObject = (UnityEngine_Object_o **)&this->fields.parameterObject;
    parameterObject = (UnityEngine_Object_o *)this->fields.parameterObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parameterObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) == 0 )
    {
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        parameterBasePrefab = (Il2CppObject *)viewItem->fields.parameterBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        v16 = UnityEngine_Object__Instantiate_object_(
                parameterBasePrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        *p_parameterObject = (UnityEngine_Object_o *)v16;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.parameterObject,
          (int64_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        if ( UnityEngine_Object__op_Equality(*p_parameterObject, 0LL, 0LL) )
          return;
        GameObjectExtensions__SafeSetParent_34336992(this->fields.parameterObject, this->fields.parameterParent, 0LL);
        Component_object = this->fields.parameterObject;
        if ( Component_object )
        {
          Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
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
      sub_1BCAA3C(Component_object, v13);
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