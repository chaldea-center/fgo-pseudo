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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField, 0, v2, v3);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4A57D87 & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4A57D87 = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_1B8880C(0LL, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_object, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
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

  if ( (byte_4A57D85 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57D85 = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
        v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Y_k__BackingField = objDomain->fields._Y_k__BackingField;
        v13 = v11;
        v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        Width_k__BackingField = objDomain->fields._Width_k__BackingField;
        v17 = v15;
        v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Height_k__BackingField = objDomain->fields._Height_k__BackingField;
        v20 = v18;
        closedPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                                                    texture,
                                                    texture->klass->vtable._7_set_height.methodPtr);
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
          UITexture__set_uvRect((UITexture_o *)Component_object, v24, 0LL);
          ((void (__fastcall *)(Il2CppObject *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))Component_object->klass->vtable[27].method)(
            Component_object,
            texture,
            Component_object->klass->vtable[28].methodPtr);
          return;
        }
      }
    }
LABEL_17:
    sub_1B8880C(closedPanel, objDomain);
  }
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelVisible(
        SubmarineMapPanelComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closedPanel; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A57D83 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57D83 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_1B8880C(this, 0LL);
  SubmarineMapPanelComponent__SetSize_33543676(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_33543676(
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

  if ( (byte_4A57D84 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57D84 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v8 )
  {
    if ( !Component_object )
      sub_1B8880C(v8, v9);
    if ( width == INFINITY )
      v10 = 0x80000000;
    else
      v10 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v10, 0LL);
    if ( height == INFINITY )
      v11 = 0x80000000;
    else
      v11 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v11, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__ShowOpenPanelAnim(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  UITweener_o *v5; // x20
  System_Collections_Generic_List_object__o *onFinished; // x20
  EventDelegate_Callback_o *v7; // x21
  EventDelegate_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A57D86 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__);
    byte_4A57D86 = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v5 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0LL);
  UITweener__PlayForward(v5, 0LL);
  onFinished = (System_Collections_Generic_List_object__o *)v5->fields.onFinished;
  v7 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v8 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
  EventDelegate___ctor_46786736(v8, v7, 0LL);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v12 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_1B8880C(Component_object, v4);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}