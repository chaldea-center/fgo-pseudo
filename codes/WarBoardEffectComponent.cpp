void __fastcall WarBoardEffectComponent___ctor(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__Initialize(
        WarBoardEffectComponent_o *this,
        WarBoardEffectData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  char *effectData; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct WarBoardEffectData_o *v17; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v20; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardEffectData_o *v22; // x8
  int v23; // s0
  UnityEngine_Transform_array *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Transform_o *v29; // x21
  const MethodInfo *v30; // x2
  __int64 v31; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A4BD9E & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, data);
    sub_1B863B8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B863B8(&UnityEngine_Transform___TypeInfo, v8);
    sub_1B863B8(&StringLiteral_24817/*"{0}"*/, v9);
    byte_4A4BD9E = 1;
  }
  this->fields.effectData = data;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effectData, (int32_t)data, (int32_t)itemIconAtlas, method);
  effectData = (char *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  *((_QWORD *)effectData + 5) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(effectData + 40), (int32_t)this, v11, v12);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas((UISprite_o *)effectData, itemIconAtlas, 0LL);
  v17 = this->fields.effectData;
  if ( !v17 )
    goto LABEL_17;
  effectEntity = v17->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v14, v15, v16);
  effectData = (char *)System_String__Format((System_String_o *)StringLiteral_24817/*"{0}"*/, v20, 0LL);
  if ( !effectIcon )
    goto LABEL_17;
  UISprite__set_spriteName(effectIcon, (System_String_o *)effectData, 0LL);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)effectData + 840LL))(
    effectData,
    *(_QWORD *)(*(_QWORD *)effectData + 848LL));
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  effectData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = this->fields.effectData;
  if ( !v22
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v23 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v22->fields._squareIndex_k__BackingField,
                                           0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL),
        v26 = (UnityEngine_Transform_array *)sub_1B86460(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v26) )
  {
LABEL_17:
    sub_1B86614(effectData, v10);
  }
  v29 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (char *)sub_1B864F4(effectData, v26->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v31 = sub_1B86638();
      sub_1B864E0(v31, 0LL);
    }
  }
  if ( !v26->max_length )
    sub_1B8661C(effectData, v10);
  v26->m_Items[0] = v29;
  sub_1B8635C((CGThumbnailListItem_o *)v26->m_Items, (int32_t)v29, v27, v28);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v26, v30);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x20
  struct WarBoardSeSetting_o *seSetting; // x8
  struct WarBoardEffectData_o *effectData; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x20
  struct WarBoardSeSetting_o *v12; // x8
  Il2CppObject *v13; // x0
  WarBoardEffectData_o *v14; // x20
  WarBoardManager_o *v15; // x21
  int v16; // s0

  if ( (byte_4A4BDA1 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B863B8(&Method_WarBoardEffectComponent_OnClick__, v3);
    byte_4A4BDA1 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL) && this->fields.isSelectable )
  {
    v6 = Method_WarBoardEffectComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B863D0(Method_WarBoardEffectComponent_OnClick__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        OverwriteAssetSoundName__PlaySe(v7, seSetting->fields.SelectSe, 0, 0LL);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( Instance )
          {
            WarBoardManager__SelectedPieceAction(Instance, effectData->fields._squareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1B86614(Instance, v5);
  }
  v10 = Method_WarBoardEffectComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B863D0(Method_WarBoardEffectComponent_OnClick__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  v12 = Instance->fields.seSetting;
  if ( !v12 )
    goto LABEL_20;
  OverwriteAssetSoundName__PlaySe(v11, v12->fields.OpenSimpleInfoSe, 0, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v14 = this->fields.effectData;
  v15 = (WarBoardManager_o *)v13;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v15 )
    goto LABEL_20;
  WarBoardManager__ShowEffectSimplePopup(v15, v14, *(UnityEngine_Vector3_o *)&v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  UnityEngine_Transform_o *Instance; // x0
  __int64 v7; // x1
  UnityEngine_Transform_c *klass; // x8
  Il2CppObject *v9; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v11; // x21
  int v12; // s0

  if ( (byte_4A4BDA2 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B863B8(&Method_WarBoardEffectComponent_OnLongClick__, v3);
    byte_4A4BDA2 = 1;
  }
  v4 = Method_WarBoardEffectComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_WarBoardEffectComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[14].klass) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&klass->_1.byval_arg.bits, 0, 0LL),
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        effectData = this->fields.effectData,
        v11 = (WarBoardManager_o *)v9,
        (Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(Instance, 0LL), !v11) )
  {
    sub_1B86614(Instance, v7);
  }
  WarBoardManager__ShowEffectSimplePopup(v11, effectData, *(UnityEngine_Vector3_o *)&v12, 0LL);
}


void __fastcall WarBoardEffectComponent__Selectable(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void __fastcall WarBoardEffectComponent__SetButtonTweenTarget(
        WarBoardEffectComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4A4BD9F & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128, parents);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A4BD9F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B8635C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B8661C(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B86614(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B8635C((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__SetColliderEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4A4BDA4 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, enable);
    byte_4A4BDA4 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B86614(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__SetTouchEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4A4BDA0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, enable);
    byte_4A4BDA0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B86614(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardEffectComponent__Unselectable(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__WidgetDepthIncrement(
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
  il2cpp_array_size_t v11; // w22

  v4 = this;
  if ( (byte_4A4BDA3 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_1B863B8(
                                          &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128,
                                          *(_QWORD *)&value);
    byte_4A4BDA3 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107128);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.uIWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
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
      if ( v11 >= uIWidgets->max_length )
        sub_1B8661C(this, *(_QWORD *)&value);
      this = (WarBoardEffectComponent_o *)uIWidgets->m_Items[v11];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.effectIcon) + value, 0LL);
      if ( max_length == ++v11 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1B86614(this, *(_QWORD *)&value);
  }
}