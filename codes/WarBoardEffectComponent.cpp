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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  char *effectData; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct WarBoardEffectData_o *v25; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v28; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardEffectData_o *v30; // x8
  int v31; // s0
  UnityEngine_Transform_array *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x21
  const MethodInfo *v42; // x2
  __int64 v43; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B34B3C & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, data);
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1BD3458(&UnityEngine_Transform___TypeInfo, v12);
    sub_1BD3458(&StringLiteral_25273/*"{0}"*/, v13);
    byte_4B34B3C = 1;
  }
  this->fields.effectData = data;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.effectData,
    (int64_t)data,
    (int64_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  effectData = (char *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  *((_QWORD *)effectData + 5) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(effectData + 40), (int64_t)this, v15, v16, v17, v18, v19, v20);
  effectData = (char *)this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas((UISprite_o *)effectData, itemIconAtlas, 0LL);
  v25 = this->fields.effectData;
  if ( !v25 )
    goto LABEL_17;
  effectEntity = v25->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v22, v23, v24);
  effectData = (char *)System_String__Format((System_String_o *)StringLiteral_25273/*"{0}"*/, v28, 0LL);
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
  effectData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v30 = this->fields.effectData;
  if ( !v30
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v30->fields._squareIndex_k__BackingField,
                                           0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL),
        v34 = (UnityEngine_Transform_array *)sub_1BD3500(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v34) )
  {
LABEL_17:
    sub_1BD36B4(effectData, v14);
  }
  v41 = (int64_t)effectData;
  if ( effectData )
  {
    effectData = (char *)sub_1BD3594(effectData, v34->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v43 = sub_1BD36D8();
      sub_1BD3580(v43, 0LL);
    }
  }
  if ( !v34->max_length )
    sub_1BD36BC(effectData, v14);
  v34->m_Items[0] = (UnityEngine_Transform_o *)v41;
  sub_1BD33FC((PartyOrganizationUtility_o *)v34->m_Items, v41, v35, v36, v37, v38, v39, v40);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v34, v42);
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

  if ( (byte_4B34B3F & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BD3458(&Method_WarBoardEffectComponent_OnClick__, v3);
    byte_4B34B3F = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL) && this->fields.isSelectable )
  {
    v6 = Method_WarBoardEffectComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BD3470(Method_WarBoardEffectComponent_OnClick__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BD343C(v6, v6[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        OverwriteAssetSoundName__PlaySe(v7, seSetting->fields.SelectSe, 0LL);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BD36B4(Instance, v5);
  }
  v10 = Method_WarBoardEffectComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnClick__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BD3470(Method_WarBoardEffectComponent_OnClick__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BD343C(v10, v10[4]);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  v12 = Instance->fields.seSetting;
  if ( !v12 )
    goto LABEL_20;
  OverwriteAssetSoundName__PlaySe(v11, v12->fields.OpenSimpleInfoSe, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4B34B40 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BD3458(&Method_WarBoardEffectComponent_OnLongClick__, v3);
    byte_4B34B40 = 1;
  }
  v4 = Method_WarBoardEffectComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardEffectComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_WarBoardEffectComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (klass = Instance[14].klass) == 0LL
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)&klass->_1.byval_arg.bits, 0LL),
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        effectData = this->fields.effectData,
        v11 = (WarBoardManager_o *)v9,
        (Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(Instance, 0LL), !v11) )
  {
    sub_1BD36B4(Instance, v7);
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
  int64_t ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *v15; // x8
  int64_t v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  struct UICommonButton_o *button; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B34B3D & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76991624, parents);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B34B3D = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (int64_t)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76991624);
        if ( ComponentsInChildren_object )
        {
          v15 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v16 = ComponentsInChildren_object;
          if ( (int)v15 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        v18 = *(UnityEngine_Object_o **)(v16 + 32 + 8 * v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v10,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35C1120 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v28 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BD36BC(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BD36B4(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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

  if ( (byte_4B34B42 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, enable);
    byte_4B34B42 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BD36B4(0LL, v6);
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

  if ( (byte_4B34B3E & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, enable);
    byte_4B34B3E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BD36B4(0LL, v6);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int max_length; // w21
  il2cpp_array_size_t v15; // w22

  v4 = this;
  if ( (byte_4B34B41 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_1BD3458(
                                          &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76991624,
                                          *(_QWORD *)&value);
    byte_4B34B41 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76991624);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v4->fields.uIWidgets,
      (int64_t)ComponentsInChildren_object,
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
      if ( v15 >= uIWidgets->max_length )
        sub_1BD36BC(this, *(_QWORD *)&value);
      this = (WarBoardEffectComponent_o *)uIWidgets->m_Items[v15];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.effectIcon) + value, 0LL);
      if ( max_length == ++v15 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1BD36B4(this, *(_QWORD *)&value);
  }
}