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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickPanel_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._OnClickPanel_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SubmarineMapPanelComponent__OnPanelFadeOutFinished(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Component_object; // x0
  __int64 v5; // x1

  if ( (byte_4B12D8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method, v2);
    byte_4B12D8A = 1;
  }
  SubmarineMapPanelComponent__SetClosedPanelVisible(this, 0, v2);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v5);
  TweenAlpha__set_value((TweenAlpha_o *)Component_object, 1.0, 0LL);
}


void __fastcall SubmarineMapPanelComponent__SetClosedPanelTexture(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        UnityEngine_Texture2D_o *texture,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *closedPanel; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  float X_k__BackingField; // s8
  int v13; // w22
  int v14; // w0
  float Y_k__BackingField; // s9
  int v16; // w23
  int v17; // w24
  int v18; // w0
  float Width_k__BackingField; // s10
  int v20; // w25
  int v21; // w0
  float Height_k__BackingField; // s11
  int v23; // w21
  int v24; // w8
  float v25; // s0
  int v26; // w8
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, objDomain, texture);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B12D88 = 1;
  }
  closedPanel = this->fields.closedPanel;
  if ( !closedPanel )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closedPanel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
        v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Y_k__BackingField = objDomain->fields._Y_k__BackingField;
        v16 = v14;
        v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                texture,
                texture->klass->vtable._7_set_height.methodPtr);
        Width_k__BackingField = objDomain->fields._Width_k__BackingField;
        v20 = v18;
        v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                texture,
                texture->klass->vtable._5_set_width.methodPtr);
        Height_k__BackingField = objDomain->fields._Height_k__BackingField;
        v23 = v21;
        closedPanel = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                                                    texture,
                                                    texture->klass->vtable._7_set_height.methodPtr);
        if ( Component_object )
        {
          if ( v17 >= 0 )
            v24 = v17;
          else
            v24 = v17 + 1;
          v25 = (float)(v24 >> 1);
          if ( v13 >= 0 )
            v26 = v13;
          else
            v26 = v13 + 1;
          v27.fields.m_YMin = (float)(Y_k__BackingField + v25) / (float)v20;
          v27.fields.m_XMin = (float)(X_k__BackingField + (float)(v26 >> 1)) / (float)v16;
          v27.fields.m_Width = Width_k__BackingField / (float)v23;
          v27.fields.m_Height = Height_k__BackingField / (float)(int)closedPanel;
          UITexture__set_uvRect((UITexture_o *)Component_object, v27, 0LL);
          ((void (__fastcall *)(Il2CppObject *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))Component_object->klass->vtable[27].method)(
            Component_object,
            texture,
            Component_object->klass->vtable[28].methodPtr);
          return;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(closedPanel, objDomain);
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

  if ( (byte_4B12D86 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, method);
    byte_4B12D86 = 1;
  }
  closedPanel = (UnityEngine_Object_o *)this->fields.closedPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(closedPanel, 0LL, 0LL) )
  {
    v7 = this->fields.closedPanel;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, value, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__SetSize(
        SubmarineMapPanelComponent_o *this,
        ObjectDomain_o *objDomain,
        const MethodInfo *method)
{
  if ( !objDomain )
    sub_1BCAA3C(this, 0LL);
  SubmarineMapPanelComponent__SetSize_34219452(
    this,
    objDomain->fields._Width_k__BackingField,
    objDomain->fields._Height_k__BackingField,
    (const MethodInfo *)objDomain);
}


void __fastcall SubmarineMapPanelComponent__SetSize_34219452(
        SubmarineMapPanelComponent_o *this,
        float width,
        float height,
        const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Component_object; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w1
  int32_t v15; // w1

  if ( (byte_4B12D87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B12D87 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v12 )
  {
    if ( !Component_object )
      sub_1BCAA3C(v12, v13);
    if ( width == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)width;
    UIWidget__set_width((UIWidget_o *)Component_object, v14, 0LL);
    if ( height == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)height;
    UIWidget__set_height((UIWidget_o *)Component_object, v15, 0LL);
  }
}


void __fastcall SubmarineMapPanelComponent__ShowOpenPanelAnim(
        SubmarineMapPanelComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1
  UITweener_o *v14; // x20
  System_Collections_Generic_List_object__o *onFinished; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  EventDelegate_Callback_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  EventDelegate_o *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B12D89 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8, v9);
    sub_1BCA7E0(&Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__, v10, v11);
    byte_4B12D89 = 1;
  }
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.closedPanel,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
  if ( !Component_object )
    goto LABEL_9;
  v14 = (UITweener_o *)Component_object;
  Component_object[8].klass = (Il2CppClass *)1065353216;
  LODWORD(Component_object[3].monitor) = 1056964608;
  UITweener__ResetToBeginning((UITweener_o *)Component_object, 0LL);
  UITweener__PlayForward(v14, 0LL);
  onFinished = (System_Collections_Generic_List_object__o *)v14->fields.onFinished;
  v19 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v16, v17, v18);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SubmarineMapPanelComponent_OnPanelFadeOutFinished__,
    0LL);
  v23 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v20, v21, v22);
  EventDelegate___ctor_47348668(v23, v19, 0LL);
  if ( !onFinished
    || (items = onFinished->fields._items,
        v31 = Method_System_Collections_Generic_List_EventDelegate__Add__,
        ++onFinished->fields._version,
        !items) )
  {
LABEL_9:
    sub_1BCAA3C(Component_object, v13);
  }
  size = onFinished->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      onFinished,
      (Il2CppObject *)v23,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    onFinished->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickPanel_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickPanel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}