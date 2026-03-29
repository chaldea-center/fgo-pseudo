void SubmarineMapPanelComponent___ctor(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineMapPanelComponent__ClickPanel(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  System_Action_o *OnClickPanel_k__BackingField; // x0

  OnClickPanel_k__BackingField = this->fields._OnClickPanel_k__BackingField;
  if ( OnClickPanel_k__BackingField )
    ActionExtensions__Call(OnClickPanel_k__BackingField, 0);
}


void SubmarineMapPanelComponent__Initialize(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickPanel_k__BackingField = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields._OnClickPanel_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
}


void SubmarineMapPanelComponent__OnPanelFadeOutFinished(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4D2D24A & 1) == 0 )
  {
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4D2D24A = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_1C93D2C(0, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_object, 1.0, 0);
}


void SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closedPanel; // x0
  Il2CppObject *Component_object; // x20
  float X_k__BackingField; // s8
  int v10; // w22
  int v11; // w0
  float Y_k__BackingField; // s9
  int v13; // w23
  int v14; // w24
  int v15; // w0
  float Width_k__BackingField; // s10
  int v17; // w25
  int v18; // w0
  float Height_k__BackingField; // s11
  int v20; // w21
  int v21; // w8
  float v22; // s0
  int v23; // w8
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D248 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D248 = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  closedPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
  if ( ((unsigned __int8)closedPanel & 1) == 0 )
  {
    if ( objDomain )
    {
      if ( texture )
      {
        X_k__BackingField = objDomain->fields._X_k__BackingField;
        v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        Y_k__BackingField = objDomain->fields._Y_k__BackingField;
        v13 = v11;
        v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                texture,
                texture->klass->vtable._6_get_height.method);
        v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                texture,
                texture->klass->vtable._6_get_height.method);
        Width_k__BackingField = objDomain->fields._Width_k__BackingField;
        v17 = v15;
        v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        Height_k__BackingField = objDomain->fields._Height_k__BackingField;
        v20 = v18;
        closedPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                                                    texture,
                                                    texture->klass->vtable._6_get_height.method);
        if ( Component_object )
        {
          if ( v14 >= 0 )
            v21 = v14;
          else
            v21 = v14 + 1;
          v22 = (float)(v21 >> 1);
          if ( v10 >= 0 )
            v23 = v10;
          else
            v23 = v10 + 1;
          v24.fields.m_YMin = (float)(Y_k__BackingField + v22) / (float)v17;
          v24.fields.m_XMin = (float)(X_k__BackingField + (float)(v23 >> 1)) / (float)v13;
          v24.fields.m_Width = Width_k__BackingField / (float)v20;
          v24.fields.m_Height = Height_k__BackingField / (float)(int)closedPanel;
          UITexture__set_uvRect((UITexture_o *)Component_object, v24, 0);
          ((void (__fastcall *)(Il2CppObject *, UnityEngine_Texture2D_o *, const MethodInfo *))Component_object->klass->vtable[27].methodPtr)(
            Component_object,
            texture,
            Component_object->klass->vtable[27].method);
          return;
        }
      }
    }
LABEL_17:
    sub_1C93D2C(closedPanel, objDomain);
  }
}


void SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D2D246 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D246 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0, 0) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0);
  }
}


void SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_1C93D2C(this, 0);
  SubmarineMapPanelComponent__SetSize_36633244(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void SubmarineMapPanelComponent__SetSize_36633244(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1

  if ( (byte_4D2D247 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D247 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      sub_1C93D2C(v8, v9);
    if ( width == INFINITY )
      v10 = 0x80000000;
    else
      v10 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v10, 0);
    if ( height == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v11, 0);
  }
}


void SubmarineMapPanelComponent__ShowOpenPanelAnim(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  UITweener_o *v5; // x20
  System_Collections_Generic_List_object__o *onFinished; // x20
  EventDelegate_Callback_o *v7; // x21
  EventDelegate_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2D249 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C93AD4(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__);
    byte_4D2D249 = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v5 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
  UITweener__PlayForward(v5, 0);
  onFinished = (System_Collections_Generic_List_object__o *)v5->fields.onFinished;
  v7 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, 0);
  v8 = (EventDelegate_o *)sub_1C93D20(EventDelegate_TypeInfo);
  EventDelegate___ctor_49997180(v8, v7, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_1C93D2C(Component_object, v4);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v8,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


System_Action_o *SubmarineMapPanelComponent__get_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void SubmarineMapPanelComponent__set_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickPanel_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}