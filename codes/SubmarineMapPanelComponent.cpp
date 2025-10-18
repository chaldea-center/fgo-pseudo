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
  const MethodInfo *v3; // x3

  this->fields._OnClickPanel_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._OnClickPanel_k__BackingField, 0, v2, v3);
}


void SubmarineMapPanelComponent__OnPanelFadeOutFinished(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3F8ED & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C3F8ED = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_1C372B4(0);
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

  if ( (byte_4C3F8EB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F8EB = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1C372B4(closedPanel);
  }
}


void SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3F8E9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F8E9 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0, 0) )
  {
    v6 = this->fields.closedPanel;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v6, value, 0);
  }
}


void SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_1C372B4(this);
  SubmarineMapPanelComponent__SetSize_36020492(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void SubmarineMapPanelComponent__SetSize_36020492(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x19
  _BOOL8 v8; // x0
  int32_t v9; // w1
  int32_t v10; // w1

  if ( (byte_4C3F8EA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F8EA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      sub_1C372B4(v8);
    if ( width == INFINITY )
      v9 = 0x80000000;
    else
      v9 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v9, 0);
    if ( height == INFINITY )
      v10 = 0x80000000;
    else
      v10 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v10, 0);
  }
}


void SubmarineMapPanelComponent__ShowOpenPanelAnim(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UITweener_o *v4; // x20
  System_Collections_Generic_List_object__o *onFinished; // x20
  EventDelegate_Callback_o *v6; // x21
  EventDelegate_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C3F8EC & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__);
    byte_4C3F8EC = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v4 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
  UITweener__PlayForward(v4, 0);
  onFinished = (System_Collections_Generic_List_object__o *)v4->fields.onFinished;
  v6 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, (Il2CppObject *)this, Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, 0);
  v7 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
  EventDelegate___ctor_49273948(v7, v6, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v11 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_1C372B4(Component_object);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v7,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v7, v8, v9);
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
  const MethodInfo *v3; // x3

  this->fields._OnClickPanel_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._OnClickPanel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}