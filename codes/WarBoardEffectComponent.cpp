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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  char *effectData; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct WarBoardEffectData_o *v14; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v17; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardEffectData_o *v19; // x8
  UnityEngine_Transform_array *v20; // x20
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  UnityEngine_Transform_o *v23; // x21
  const MethodInfo *v24; // x2
  __int64 v25; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24AE0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&UnityEngine_Transform___TypeInfo);
    sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    byte_4C24AE0 = 1;
  }
  this->fields.effectData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.effectData, (int32_t)data, (int32_t)itemIconAtlas, method);
  effectData = (char *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  *((_QWORD *)effectData + 5) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(effectData + 40), (int32_t)this, v8, v9);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas((UISprite_o *)effectData, itemIconAtlas, 0);
  v14 = this->fields.effectData;
  if ( !v14 )
    goto LABEL_17;
  effectEntity = v14->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v11, v12, v13);
  effectData = (char *)System_String__Format((System_String_o *)StringLiteral_25078/*"{0}"*/, v17, 0);
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
  effectData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = this->fields.effectData;
  if ( !v19
    || !effectData
    || (SquarePosition = WarBoardManager__GetSquarePosition(
                           (WarBoardManager_o *)effectData,
                           v19->fields._squareIndex_k__BackingField,
                           0),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0),
        v20 = (UnityEngine_Transform_array *)sub_1C2D538(UnityEngine_Transform___TypeInfo, 1),
        effectData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
        !v20) )
  {
LABEL_17:
    sub_1C2D6EC(effectData, v7);
  }
  v23 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (char *)sub_1C2D5CC(effectData, v20->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v25 = sub_1C2D710();
      sub_1C2D5B8(v25, 0);
    }
  }
  if ( !LODWORD(v20->max_length) )
    sub_1C2D6F4(effectData, v7, v21);
  v20->m_Items[0] = v23;
  sub_1C2D434((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v23, v21, v22);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v20, v24);
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

  if ( (byte_4C24AE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardEffectComponent_OnClick__);
    byte_4C24AE3 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( WarBoardManager__get_isSelectedPiece(Instance, 0) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardEffectComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_WarBoardEffectComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        OverwriteAssetSoundName__PlaySe(v6, seSetting->fields.SelectSe, 0, 0);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v4);
  }
  v9 = Method_WarBoardEffectComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C2D4A8(Method_WarBoardEffectComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  v11 = Instance->fields.seSetting;
  if ( !v11 )
    goto LABEL_20;
  OverwriteAssetSoundName__PlaySe(v10, v11->fields.OpenSimpleInfoSe, 0, 0);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4C24AE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardEffectComponent_OnLongClick__);
    byte_4C24AE4 = 1;
  }
  v3 = Method_WarBoardEffectComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnLongClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_WarBoardEffectComponent_OnLongClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[14].klass) == 0
    || (OverwriteAssetSoundName__PlaySe(v4, *(System_String_o **)&klass->_1.byval_arg.bits, 0, 0),
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        effectData = this->fields.effectData,
        v10 = (WarBoardManager_o *)v8,
        (Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (position = UnityEngine_Transform__get_position(Instance, 0), !v10) )
  {
    sub_1C2D6EC(Instance, v6);
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
  __int64 v7; // x2
  int max_length; // w8
  unsigned int v9; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v19; // x1
  Il2CppClass **v20; // x0
  struct UICommonButton_o *button; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C24AE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AE1 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v9];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v13,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v17 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v19 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C2D434((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v22, v23);
}


void WarBoardEffectComponent__SetColliderEnable(WarBoardEffectComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4C24AE6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AE6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C24AE2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AE2 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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
  const MethodInfo *v9; // x3
  int max_length; // w21
  unsigned int v11; // w22

  v4 = this;
  if ( (byte_4C24AE5 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    byte_4C24AE5 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.uIWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= LODWORD(uIWidgets->max_length) )
        sub_1C2D6F4(this, *(_QWORD *)&value, method);
      this = (WarBoardEffectComponent_o *)uIWidgets->m_Items[v11];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.effectIcon) + value, 0);
      if ( max_length == ++v11 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1C2D6EC(this, *(_QWORD *)&value);
  }
}