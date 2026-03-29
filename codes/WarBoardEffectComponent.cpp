void WarBoardEffectComponent___ctor(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardEffectComponent__Initialize(
        WarBoardEffectComponent_o *this,
        WarBoardEffectData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  char *effectData; // x0
  struct WarBoardEffectData_o *v19; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v22; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardEffectData_o *v24; // x8
  UnityEngine_Transform_array *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  UnityEngine_Transform_o *v32; // x21
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E19C & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&UnityEngine_Transform___TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    byte_4D2E19C = 1;
  }
  this->fields.effectData = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  effectData = (char *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  *((_QWORD *)effectData + 5) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(effectData + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas((UISprite_o *)effectData, itemIconAtlas, 0);
  v19 = this->fields.effectData;
  if ( !v19 )
    goto LABEL_17;
  effectEntity = v19->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  effectData = (char *)System_String__Format((System_String_o *)StringLiteral_25426/*"{0}"*/, v22, 0);
  if ( !effectIcon )
    goto LABEL_17;
  UISprite__set_spriteName(effectIcon, (System_String_o *)effectData, 0);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)effectData + 840LL))(
    effectData,
    *(_QWORD *)(*(_QWORD *)effectData + 848LL));
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  effectData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v24 = this->fields.effectData;
  if ( !v24
    || !effectData
    || (SquarePosition = WarBoardManager__GetSquarePosition(
                           (WarBoardManager_o *)effectData,
                           v24->fields._squareIndex_k__BackingField,
                           0),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0),
        v25 = (UnityEngine_Transform_array *)sub_1C93B7C(UnityEngine_Transform___TypeInfo, 1),
        effectData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
        !v25) )
  {
LABEL_17:
    sub_1C93D2C(effectData, v11);
  }
  v32 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (char *)sub_1C93C10(effectData, v25->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v34 = sub_1C93D50();
      sub_1C93BFC(v34, 0);
    }
  }
  if ( !LODWORD(v25->max_length) )
    sub_1C93D34(effectData);
  v25->m_Items[0] = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v25->m_Items, (int32_t)v32, v26, v27, v28, v29, v30, v31);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v25, v33);
  this->fields.isSelectable = 0;
}


void WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  struct WarBoardSeSetting_o *seSetting; // x8
  struct WarBoardEffectData_o *effectData; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  struct WarBoardSeSetting_o *v11; // x8
  Il2CppObject *v12; // x0
  WarBoardEffectData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E19F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardEffectComponent_OnClick__);
    byte_4D2E19F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( WarBoardManager__get_isSelectedPiece(Instance, 0) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardEffectComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_WarBoardEffectComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        OverwriteAssetSoundName__PlaySe(v6, seSetting->fields.SelectSe, 0, 0);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( Instance )
          {
            WarBoardManager__SelectedPieceAction(Instance, effectData->fields._squareIndex_k__BackingField, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C93D2C(Instance, v4);
  }
  v9 = Method_WarBoardEffectComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C93AEC(Method_WarBoardEffectComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  v11 = Instance->fields.seSetting;
  if ( !v11 )
    goto LABEL_20;
  OverwriteAssetSoundName__PlaySe(v10, v11->fields.OpenSimpleInfoSe, 0, 0);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = this->fields.effectData;
  v14 = (WarBoardManager_o *)v12;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_20;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0);
  if ( !v14 )
    goto LABEL_20;
  WarBoardManager__ShowEffectSimplePopup(v14, v13, position, 0);
}


void WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x20
  UnityEngine_Transform_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_Transform_c *klass; // x8
  Il2CppObject *v8; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v10; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E1A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardEffectComponent_OnLongClick__);
    byte_4D2E1A0 = 1;
  }
  v3 = Method_WarBoardEffectComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnLongClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_WarBoardEffectComponent_OnLongClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[14].klass) == 0
    || (OverwriteAssetSoundName__PlaySe(v4, *(System_String_o **)&klass->_1.byval_arg.bits, 0, 0),
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        effectData = this->fields.effectData,
        v10 = (WarBoardManager_o *)v8,
        (Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (position = UnityEngine_Transform__get_position(Instance, 0), !v10) )
  {
    sub_1C93D2C(Instance, v6);
  }
  WarBoardManager__ShowEffectSimplePopup(v10, effectData, position, 0);
}


void WarBoardEffectComponent__Selectable(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void WarBoardEffectComponent__SetButtonTweenTarget(
        WarBoardEffectComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2E19D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E19D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v10 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C93D34(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C93D2C(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardEffectComponent__SetColliderEnable(WarBoardEffectComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4D2E1A2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E1A2 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


void WarBoardEffectComponent__SetTouchEnable(WarBoardEffectComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4D2E19E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E19E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardEffectComponent__Unselectable(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardEffectComponent__WidgetDepthIncrement(
        WarBoardEffectComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardEffectComponent_o *v4; // x21
  struct UIWidget_array *uIWidgets; // x8
  struct UIWidget_array **p_uIWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int max_length; // w21
  unsigned int v15; // w22

  v4 = this;
  if ( (byte_4D2E1A1 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    byte_4D2E1A1 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v4->fields.uIWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= LODWORD(uIWidgets->max_length) )
        sub_1C93D34(this);
      this = (WarBoardEffectComponent_o *)uIWidgets->m_Items[v15];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, *((_DWORD *)this + 44) + value, 0);
      if ( max_length == ++v15 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1C93D2C(this, *(_QWORD *)&value);
  }
}