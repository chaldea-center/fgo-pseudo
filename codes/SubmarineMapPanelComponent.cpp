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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickPanel_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapPanelComponent__OnPanelFadeOutFinished(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_5934DDB & 1) == 0 )
  {
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_5934DDB = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_21FFECC(0, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_object, 1.0, 0);
}


void SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closedPanel; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20
  float X_k__BackingField; // s8
  int v12; // w22
  int v13; // w0
  float Y_k__BackingField; // s9
  int v15; // w23
  int v16; // w24
  int v17; // w0
  float Width_k__BackingField; // s10
  int v19; // w25
  int v20; // w0
  float Height_k__BackingField; // s11
  int v22; // w21
  int v23; // w8
  float v24; // s0
  int v25; // w8
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934DD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DD9 = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
        v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        Y_k__BackingField = objDomain->fields._Y_k__BackingField;
        v15 = v13;
        v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                texture,
                texture->klass->vtable._6_get_height.method);
        v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                texture,
                texture->klass->vtable._6_get_height.method);
        Width_k__BackingField = objDomain->fields._Width_k__BackingField;
        v19 = v17;
        v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                texture,
                texture->klass->vtable._4_get_width.method);
        Height_k__BackingField = objDomain->fields._Height_k__BackingField;
        v22 = v20;
        closedPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                                                    texture,
                                                    texture->klass->vtable._6_get_height.method);
        if ( Component_object )
        {
          if ( v16 >= 0 )
            v23 = v16;
          else
            v23 = v16 + 1;
          v24 = (float)(v23 >> 1);
          if ( v12 >= 0 )
            v25 = v12;
          else
            v25 = v12 + 1;
          v26.fields.m_YMin = (float)(Y_k__BackingField + v24) / (float)v19;
          v26.fields.m_XMin = (float)(X_k__BackingField + (float)(v25 >> 1)) / (float)v15;
          v26.fields.m_Width = Width_k__BackingField / (float)v22;
          v26.fields.m_Height = Height_k__BackingField / (float)(int)closedPanel;
          UITexture__set_uvRect((UITexture_o *)Component_object, v26, 0);
          ((void (__fastcall *)(Il2CppObject *, UnityEngine_Texture2D_o *, const MethodInfo *))Component_object->klass->vtable[27].methodPtr)(
            Component_object,
            texture,
            Component_object->klass->vtable[27].method);
          return;
        }
      }
    }
LABEL_17:
    sub_21FFECC(closedPanel, objDomain);
  }
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5934DD7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DD7 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, method);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0, 0) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0);
  }
}


void SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_21FFECC(this, 0);
  SubmarineMapPanelComponent__SetSize_42765004(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void SubmarineMapPanelComponent__SetSize_42765004(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w1

  if ( (byte_5934DD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934DD8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v10 )
  {
    if ( !Component_object )
      sub_21FFECC(v10, v11);
    if ( width == INFINITY )
      v12 = 0x80000000;
    else
      v12 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v12, 0);
    if ( height == INFINITY )
      v13 = 0x80000000;
    else
      v13 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v13, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5934DDA & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__);
    byte_5934DDA = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v5 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
  UITweener__PlayForward(v5, 0);
  onFinished = (System_Collections_Generic_List_object__o *)v5->fields.onFinished;
  v7 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, 0);
  v8 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
  EventDelegate___ctor_56132624(v8, v7, 0);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_21FFECC(Component_object, v4);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickPanel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}