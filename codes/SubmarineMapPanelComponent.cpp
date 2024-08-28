void __fastcall SubmarineMapPanelComponent___ctor(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineMapPanelComponent__ClickPanel(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  System_Action_o *OnClickPanel_k__BackingField; // x0

  OnClickPanel_k__BackingField = this->fields._OnClickPanel_k__BackingField;
  if ( OnClickPanel_k__BackingField )
    ActionExtensions__Call(OnClickPanel_k__BackingField, 0LL);
}


void __fastcall SubmarineMapPanelComponent__Initialize(SubmarineMapPanelComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields._OnClickPanel_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField, 0, v2, v3);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4A058AF & 1) == 0 )
  {
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    byte_4A058AF = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_1B68930(0LL, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_object, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *closedPanel; // x0
  Il2CppObject *Component_object; // x20
  float X_k__BackingField; // s8
  int v11; // w22
  int v12; // w0
  float Y_k__BackingField; // s9
  int v14; // w23
  int v15; // w24
  int v16; // w0
  float Width_k__BackingField; // s10
  int v18; // w25
  int v19; // w0
  float Height_k__BackingField; // s11
  int v21; // w21
  int v22; // w8
  float v23; // s0
  int v24; // w8
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A058AD & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, objDomain);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A058AD = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  closedPanel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)closedPanel & 1) == 0 )
  {
    if ( objDomain )
    {
      if ( texture )
      {
        X_k__BackingField = objDomain->fields._X_k__BackingField;
        v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Y_k__BackingField = objDomain->fields._Y_k__BackingField;
        v14 = v12;
        v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        Width_k__BackingField = objDomain->fields._Width_k__BackingField;
        v18 = v16;
        v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Height_k__BackingField = objDomain->fields._Height_k__BackingField;
        v21 = v19;
        closedPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                                                    texture,
                                                    texture->klass->vtable._7_set_height.methodPtr);
        if ( Component_object )
        {
          if ( v15 >= 0 )
            v22 = v15;
          else
            v22 = v15 + 1;
          v23 = (float)(v22 >> 1);
          if ( v11 >= 0 )
            v24 = v11;
          else
            v24 = v11 + 1;
          v25.fields.m_YMin = (float)(Y_k__BackingField + v23) / (float)v18;
          v25.fields.m_XMin = (float)(X_k__BackingField + (float)(v24 >> 1)) / (float)v14;
          v25.fields.m_Width = Width_k__BackingField / (float)v21;
          v25.fields.m_Height = Height_k__BackingField / (float)(int)closedPanel;
          UITexture__set_uvRect((UITexture_o *)Component_object, v25, 0LL);
          ((void (__fastcall *)(Il2CppObject *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))Component_object->klass->vtable[27].method)(
            Component_object,
            texture,
            Component_object->klass->vtable[28].methodPtr);
          return;
        }
      }
    }
LABEL_17:
    sub_1B68930(closedPanel, objDomain);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A058AB & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, value);
    byte_4A058AB = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_1B68930(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_1B68930(this, 0LL);
  SubmarineMapPanelComponent__SetSize_33303992(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_33303992(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  int32_t v12; // w1

  if ( (byte_4A058AC & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A058AC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( !Component_object )
      sub_1B68930(v9, v10);
    if ( width == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v11, 0LL);
    if ( height == INFINITY )
      v12 = 0x80000000;
    else
      v12 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v12, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__ShowOpenPanelAnim(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  UITweener_o *v9; // x20
  System_Collections_Generic_List_object__o *onFinished; // x20
  EventDelegate_Callback_o *v11; // x21
  EventDelegate_o *v12; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A058AE & 1) == 0 )
  {
    sub_1B686D4(&EventDelegate_Callback_TypeInfo, method);
    sub_1B686D4(&EventDelegate_TypeInfo, v3);
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v5);
    sub_1B686D4(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, v6);
    byte_4A058AE = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v9 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0LL);
  UITweener__PlayForward(v9, 0LL);
  onFinished = (System_Collections_Generic_List_object__o *)v9->fields.onFinished;
  v11 = (EventDelegate_Callback_o *)sub_1B68920(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v12 = (EventDelegate_o *)sub_1B68920(EventDelegate_TypeInfo);
  EventDelegate___ctor_46576352(v12, v11, 0LL);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_1B68930(Component_object, v8);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v12,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
}


System_Action_o *__fastcall SubmarineMapPanelComponent__get_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickPanel_k__BackingField;
}


void __fastcall SubmarineMapPanelComponent__set_OnClickPanel(
        SubmarineMapPanelComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickPanel_k__BackingField = value;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}