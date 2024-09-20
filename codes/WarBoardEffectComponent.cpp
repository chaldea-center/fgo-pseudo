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
  int32_t v8; // w2
  int32_t v9; // w3
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
  int v20; // s0
  UnityEngine_Transform_array *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58C4C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&UnityEngine_Transform___TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A58C4C = 1;
  }
  this->fields.effectData = data;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.effectData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method);
  effectData = (char *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  *((_QWORD *)effectData + 5) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(effectData + 40), (int32_t)this, v8, v9);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas((UISprite_o *)effectData, itemIconAtlas, 0LL);
  v14 = this->fields.effectData;
  if ( !v14 )
    goto LABEL_17;
  effectEntity = v14->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v11, v12, v13);
  effectData = (char *)System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v17, 0LL);
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
  effectData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = this->fields.effectData;
  if ( !v19
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v20 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v19->fields._squareIndex_k__BackingField,
                                           0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = (UnityEngine_Transform_array *)sub_1B88658(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v23) )
  {
LABEL_17:
    sub_1B8880C(effectData, v7);
  }
  v26 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (char *)sub_1B886EC(effectData, v23->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v28 = sub_1B88830(0LL);
      sub_1B886D8(v28, 0LL);
    }
  }
  if ( !v23->max_length )
    sub_1B88814(effectData, v7);
  v23->m_Items[0] = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v23->m_Items, (int32_t)v26, v24, v25);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v23, v27);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
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
  int v15; // s0

  if ( (byte_4A58C4F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardEffectComponent_OnClick__);
    byte_4A58C4F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardEffectComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_WarBoardEffectComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        OverwriteAssetSoundName__PlaySe(v6, seSetting->fields.SelectSe, 0LL);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  }
  v9 = Method_WarBoardEffectComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B885C8(Method_WarBoardEffectComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  v11 = Instance->fields.seSetting;
  if ( !v11 )
    goto LABEL_20;
  OverwriteAssetSoundName__PlaySe(v10, v11->fields.OpenSimpleInfoSe, 0LL);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = this->fields.effectData;
  v14 = (WarBoardManager_o *)v12;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v14 )
    goto LABEL_20;
  WarBoardManager__ShowEffectSimplePopup(v14, v13, *(UnityEngine_Vector3_o *)&v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x20
  UnityEngine_Transform_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_Transform_c *klass; // x8
  Il2CppObject *v8; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v10; // x21
  int v11; // s0

  if ( (byte_4A58C50 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardEffectComponent_OnLongClick__);
    byte_4A58C50 = 1;
  }
  v3 = Method_WarBoardEffectComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnLongClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_WarBoardEffectComponent_OnLongClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[14].klass) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v4, *(System_String_o **)&klass->_1.byval_arg.bits, 0LL),
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        effectData = this->fields.effectData,
        v10 = (WarBoardManager_o *)v8,
        (Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(Instance, 0LL), !v10) )
  {
    sub_1B8880C(Instance, v6);
  }
  WarBoardManager__ShowEffectSimplePopup(v10, effectData, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v18; // x1
  Il2CppClass **v19; // x0
  struct UICommonButton_o *button; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A58C4D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C4D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0LL);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0LL);
            items = v4->fields._items;
            v16 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v18 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v18;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B88814(ComponentsInChildren_object, v6);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B8880C(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v21,
    v22);
}


void __fastcall WarBoardEffectComponent__SetColliderEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4A58C52 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C52 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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


void __fastcall WarBoardEffectComponent__SetTouchEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4A58C4E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C4E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  int32_t v9; // w3
  int max_length; // w21
  il2cpp_array_size_t v11; // w22

  v4 = this;
  if ( (byte_4A58C51 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    byte_4A58C51 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v4->fields.uIWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9);
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
        sub_1B88814(this, *(_QWORD *)&value);
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
    sub_1B8880C(this, *(_QWORD *)&value);
  }
}