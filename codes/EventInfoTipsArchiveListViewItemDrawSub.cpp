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
  __int64 v3; // x1
  UnityEngine_Object_o *frameCollider; // x20
  __int64 v5; // x1
  UnityEngine_BoxCollider_o *v6; // x0
  float v7; // s1
  EventInfoTipsArchiveListViewItemDraw_c *v10; // x0

  if ( (byte_4188CDF & 1) == 0 )
  {
    sub_B2C35C(&EventInfoTipsArchiveListViewItemDraw_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4188CDF = 1;
  }
  frameCollider = (UnityEngine_Object_o *)this->fields.frameCollider;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameCollider, 0LL, 0LL) )
  {
    v6 = this->fields.frameCollider;
    if ( !v6 )
      sub_B2C434(0LL, v5);
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_BoxCollider__get_size(v6, 0LL);
    if ( v7 == INFINITY )
      return (int)-v7;
    else
      return (int)v7;
  }
  else
  {
    v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    if ( (BYTE3(EventInfoTipsArchiveListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoTipsArchiveListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItemDraw_TypeInfo);
      v10 = EventInfoTipsArchiveListViewItemDraw_TypeInfo;
    }
    return v10->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__OnDestroy(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_parameterObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *parameterObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4188CDC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188CDC = 1;
  }
  parameterObject = this->fields.parameterObject;
  p_parameterObject = (BattleServantConfConponent_o *)&this->fields.parameterObject;
  v4 = (UnityEngine_Object_o *)parameterObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_parameterObject->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_parameterObject->klass = 0LL;
    sub_B2C2F8(p_parameterObject, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__Setup(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        EventInfoTipsArchiveListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventInfoTipsArchiveListViewItem_o **p_viewItem; // x20
  EventInfoTipsArchiveListViewItem_o *v11; // x0
  const MethodInfo *v12; // x1
  struct EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_array *imageInfoList; // x8
  unsigned __int64 v14; // x22
  unsigned __int64 max_length; // x9
  EventInfoTipsArchiveListViewItemDrawSub_ImageInfo_o *v16; // x24
  UnityEngine_Object_o *Sprite; // x21
  __int64 v18; // x0

  if ( (byte_4188CDD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4188CDD = 1;
  }
  this->fields.viewItem = item;
  p_viewItem = &this->fields.viewItem;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.viewItem,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  imageInfoList = this->fields.imageInfoList;
  if ( !imageInfoList )
LABEL_15:
    sub_B2C434(v11, v12);
  v14 = 0LL;
  while ( 1 )
  {
    max_length = imageInfoList->max_length;
    if ( (__int64)v14 >= (int)max_length )
      break;
    if ( v14 >= max_length )
    {
      v18 = sub_B2C460(v11);
      sub_B2C400(v18, 0LL);
    }
    v16 = imageInfoList->m_Items[v14];
    if ( v16 )
    {
      Sprite = (UnityEngine_Object_o *)v16->fields.Sprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (EventInfoTipsArchiveListViewItem_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) == 0 )
      {
        v11 = *p_viewItem;
        if ( !*p_viewItem )
          goto LABEL_15;
        v11 = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__SetSprite(
                                                      v11,
                                                      v16->fields.Sprite,
                                                      v16->fields.SpriteName,
                                                      0LL);
      }
    }
    imageInfoList = this->fields.imageInfoList;
    ++v14;
    if ( !imageInfoList )
      goto LABEL_15;
  }
  EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(this, v12);
}


void __fastcall EventInfoTipsArchiveListViewItemDrawSub__SetupParameterBoard(
        EventInfoTipsArchiveListViewItemDrawSub_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *parameterParent; // x20
  UnityEngine_Object_o **p_parameterObject; // x20
  UnityEngine_Object_o *parameterObject; // x21
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v9; // x1
  struct EventInfoTipsArchiveListViewItem_o *viewItem; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *parameterBasePrefab; // x21
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188CDE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4188CDE = 1;
  }
  parameterParent = (UnityEngine_Object_o *)this->fields.parameterParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(parameterParent, 0LL, 0LL) )
  {
    p_parameterObject = (UnityEngine_Object_o **)&this->fields.parameterObject;
    parameterObject = (UnityEngine_Object_o *)this->fields.parameterObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(parameterObject, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      viewItem = this->fields.viewItem;
      if ( viewItem )
      {
        parameterBasePrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)viewItem->fields.parameterBasePrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v12 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       parameterBasePrefab,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        *p_parameterObject = (UnityEngine_Object_o *)v12;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.parameterObject, v12, v13, v14, v15, v16, v17, v18);
        if ( UnityEngine_Object__op_Equality(*p_parameterObject, 0LL, 0LL) )
          return;
        GameObjectExtensions__SafeSetParent_31331952(this->fields.parameterObject, this->fields.parameterParent, 0LL);
        Component_srcLineSprite = this->fields.parameterObject;
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusParameterComponent___);
          if ( Component_srcLineSprite )
          {
            ServantStatusParameterComponent__Setup(
              (ServantStatusParameterComponent_o *)Component_srcLineSprite,
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
      sub_B2C434(Component_srcLineSprite, v9);
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