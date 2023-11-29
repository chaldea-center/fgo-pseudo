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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct WarBoardEffectData_o *effectData; // x0
  UISprite_o *effectIcon; // x0
  struct WarBoardEffectData_o *v22; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  struct UISprite_o *v27; // x0
  UnityEngine_Transform_o *transform; // x20
  WebViewManager_o *Instance; // x0
  const MethodInfo *v30; // x2
  struct WarBoardEffectData_o *v31; // x8
  int v32; // s0
  __int64 v35; // x2
  UnityEngine_Transform_array *v36; // x20
  UnityEngine_Transform_o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  const MethodInfo *v46; // x2
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F63A4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&UnityEngine_Transform___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23445, v13);
    byte_40F63A4 = 1;
  }
  this->fields.effectData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectData,
    (System_Int32_array **)data,
    (System_String_array **)itemIconAtlas,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  effectData = this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  effectData->fields.component = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&effectData->fields.component,
    (System_Int32_array **)this,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  effectIcon = this->fields.effectIcon;
  if ( !effectIcon )
    goto LABEL_17;
  UISprite__set_atlas(effectIcon, itemIconAtlas, 0LL);
  v22 = this->fields.effectData;
  if ( !v22 )
    goto LABEL_17;
  effectEntity = v22->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  v24 = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v26 = System_String__Format((System_String_o *)StringLiteral_23445, v25, 0LL);
  if ( !v24 )
    goto LABEL_17;
  UISprite__set_spriteName(v24, v26, 0LL);
  v27 = this->fields.effectIcon;
  if ( !v27 )
    goto LABEL_17;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v27->klass->vtable._33_MakePixelPerfect.method)(
    v27,
    v27->klass->vtable._34_get_minWidth.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v31 = this->fields.effectData;
  if ( !v31
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v32 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           v31->fields._squareIndex_k__BackingField,
                                           v30),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL),
        v36 = (UnityEngine_Transform_array *)sub_B17014(UnityEngine_Transform___TypeInfo, 1LL, v35),
        v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v36) )
  {
LABEL_17:
    sub_B170D4();
  }
  v45 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (UnityEngine_Transform_o *)sub_B170BC(v37, v36->obj.klass->_1.element_class);
    if ( !v37 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v36->max_length )
  {
    sub_B17100(v37, v38, v39);
    sub_B170A0();
  }
  v36->m_Items[0] = (UnityEngine_Transform_o *)v45;
  sub_B16F98((BattleServantConfConponent_o *)v36->m_Items, v45, v39, v40, v41, v42, v43, v44);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v36, v46);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v5; // x0
  void *monitor; // x8
  System_String_o *v7; // x20
  WebViewManager_o *v8; // x0
  const MethodInfo *v9; // x2
  struct WarBoardEffectData_o *effectData; // x8
  WebViewManager_o *v11; // x0
  void *v12; // x8
  System_String_o *v13; // x20
  WebViewManager_o *v14; // x0
  WarBoardEffectData_o *v15; // x20
  WarBoardManager_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v18; // x2
  int v19; // s0

  if ( (byte_40F63A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F63A7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( Instance[7].klass && this->fields.isSelectable )
  {
    v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v5 )
    {
      monitor = v5[3].monitor;
      if ( monitor )
      {
        v7 = (System_String_o *)*((_QWORD *)monitor + 3);
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v7, 0LL);
        v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( v8 )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)v8,
              effectData->fields._squareIndex_k__BackingField,
              v9);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v11 )
    goto LABEL_22;
  v12 = v11[3].monitor;
  if ( !v12 )
    goto LABEL_22;
  v13 = (System_String_o *)*((_QWORD *)v12 + 5);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v13, 0LL);
  v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v15 = this->fields.effectData;
  v16 = (WarBoardManager_o *)v14;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(transform, 0LL);
  if ( !v16 )
    goto LABEL_22;
  WarBoardManager__ShowEffectSimplePopup(v16, v15, *(UnityEngine_Vector3_o *)&v19, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  void *monitor; // x8
  System_String_o *v6; // x20
  WebViewManager_o *v7; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v9; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v11; // x2
  int v12; // s0

  if ( (byte_40F63A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F63A8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = Instance[3].monitor;
  if ( !monitor )
    goto LABEL_11;
  v6 = (System_String_o *)*((_QWORD *)monitor + 5);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v6, 0LL);
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  effectData = this->fields.effectData;
  v9 = (WarBoardManager_o *)v7;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(transform, 0LL), !v9) )
LABEL_11:
    sub_B170D4();
  WarBoardManager__ShowEffectSimplePopup(v9, effectData, *(UnityEngine_Vector3_o *)&v12, v11);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  signed int max_length; // w8
  unsigned int v17; // w24
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x8
  WarBoardControlPlayTalkUiComponent_array *v20; // x22
  unsigned __int64 v21; // x19
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct UICommonButton_o *button; // x19
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40F63A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, parents);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F63A5 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  parents,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          goto LABEL_25;
        v18 = (UnityEngine_Component_o *)parents->m_Items[v17];
        if ( !v18 )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    v18,
                                                                    1,
                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          v19 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
          v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)v19 >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_22;
      }
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        v22 = (UnityEngine_Object_o *)v20->m_Items[v21];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_26;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains((System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12, (WarBoardManager_TaskList_o *)gameObject, (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(v19) = v20->max_length;
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_21;
      }
LABEL_25:
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v14, v15);
      sub_B170A0();
    }
  }
LABEL_22:
  if ( !v12
    || (button = this->fields.button,
        v26 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B170D4();
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&button->fields.tweenTargets, v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__SetColliderEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_40F63AA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F63AA = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    if ( enable )
    {
      v7 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__SetTouchEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_40F63A6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    byte_40F63A6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_B170D4();
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
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
  System_Int32_array **ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  UIWidget_o *v16; // x0

  v4 = this;
  if ( (byte_40F63A9 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_B16FFC(
                                          &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968,
                                          *(_QWORD *)&value);
    byte_40F63A9 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Int32_array **)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                       (UnityEngine_Component_o *)v4,
                                                                                       1,
                                                                                       (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v4->fields.uIWidgets,
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
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
      {
        sub_B17100(this, *(_QWORD *)&value, method);
        sub_B170A0();
      }
      v16 = uIWidgets->m_Items[v15];
      if ( !v16 )
        break;
      UIWidget__set_depth(v16, v16->fields.mDepth + value, 0LL);
      if ( (int)++v15 >= max_length )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_B170D4();
  }
}