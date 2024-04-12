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
  UISprite_o *effectData; // x0
  struct WarBoardEffectData_o *v9; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v12; // x0
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v14; // x2
  struct WarBoardEffectData_o *v15; // x8
  int v16; // s0
  UnityEngine_Transform_array *v19; // x20
  UnityEngine_Transform_o *v20; // x21
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AC7C0 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&UnityEngine_Transform___TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    byte_42AC7C0 = 1;
  }
  this->fields.effectData = data;
  sub_B52920(&this->fields.effectData);
  effectData = (UISprite_o *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  effectData->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)this;
  sub_B52920(&effectData->fields.bottomAnchor);
  effectData = this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas(effectData, itemIconAtlas, 0LL);
  v9 = this->fields.effectData;
  if ( !v9 )
    goto LABEL_17;
  effectEntity = v9->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  effectData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23732/*"{0}"*/, v12, 0LL);
  if ( !effectIcon )
    goto LABEL_17;
  UISprite__set_spriteName(effectIcon, (System_String_o *)effectData, 0LL);
  effectData = this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))effectData->klass->vtable._33_MakePixelPerfect.method)(
    effectData,
    effectData->klass->vtable._34_get_minWidth.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  effectData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v15 = this->fields.effectData;
  if ( !v15
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v16 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v15->fields._squareIndex_k__BackingField,
                                           v14),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL),
        v19 = (UnityEngine_Transform_array *)sub_B5299C(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v19) )
  {
LABEL_17:
    sub_B52A5C(effectData, v7);
  }
  v20 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (UISprite_o *)sub_B52A44(effectData, v19->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v23 = sub_B52A7C();
      sub_B52A28(v23, 0LL);
    }
  }
  if ( !v19->max_length )
  {
    v22 = sub_B52A88(effectData);
    sub_B52A28(v22, 0LL);
  }
  v19->m_Items[0] = v20;
  sub_B52920(v19->m_Items);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v19, v21);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *SelectSe; // x20
  const MethodInfo *v7; // x2
  struct WarBoardEffectData_o *effectData; // x8
  struct WarBoardSeSetting_o *v9; // x8
  System_String_o *OpenSimpleInfoSe; // x20
  WebViewManager_o *v11; // x0
  WarBoardEffectData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  const MethodInfo *v14; // x2
  int v15; // s0

  if ( (byte_42AC7C3 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC7C3 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( Instance->fields.selectPiece && this->fields.isSelectable )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      seSetting = Instance->fields.seSetting;
      if ( seSetting )
      {
        SelectSe = seSetting->fields.SelectSe;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(SelectSe, 0LL);
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( Instance )
          {
            WarBoardManager__SelectedPieceAction(Instance, effectData->fields._squareIndex_k__BackingField, v7);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B52A5C(Instance, v4);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v9 = Instance->fields.seSetting;
  if ( !v9 )
    goto LABEL_22;
  OpenSimpleInfoSe = v9->fields.OpenSimpleInfoSe;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(OpenSimpleInfoSe, 0LL);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = this->fields.effectData;
  v13 = (WarBoardManager_o *)v11;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v13 )
    goto LABEL_22;
  WarBoardManager__ShowEffectSimplePopup(v13, v12, *(UnityEngine_Vector3_o *)&v15, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  System_String_o *v6; // x20
  WebViewManager_o *v7; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v9; // x21
  const MethodInfo *v10; // x2
  int v11; // s0

  if ( (byte_42AC7C4 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AC7C4 = 1;
  }
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v5 = *(_QWORD *)&Instance[13].fields.m_CachedPtr;
  if ( !v5 )
    goto LABEL_11;
  v6 = *(System_String_o **)(v5 + 40);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v6, 0LL);
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  effectData = this->fields.effectData;
  v9 = (WarBoardManager_o *)v7;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(Instance, 0LL), !v9) )
LABEL_11:
    sub_B52A5C(Instance, v4);
  WarBoardManager__ShowEffectSimplePopup(v9, effectData, *(UnityEngine_Vector3_o *)&v11, v10);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x19
  UnityEngine_Object_o *v12; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v15; // x0

  if ( (byte_42AC7C1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC7C1 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_22;
      }
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v12,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v12,
                                                                                                 0LL);
          if ( !v4 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v4,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v15 = sub_B52A88(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B52A28(v15, 0LL);
    }
  }
LABEL_22:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                                                                               (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B52A5C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B52920(&button->fields.tweenTargets);
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

  if ( (byte_42AC7C6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC7C6 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
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

  if ( (byte_42AC7C2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AC7C2 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_B52A5C(0LL, v6);
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
  UnityEngine_Component_o *v4; // x21
  _DWORD *monitor; // x8
  void **p_monitor; // x20
  int v7; // w21
  unsigned int v8; // w22
  __int64 v9; // x0

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_42AC7C5 & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    byte_42AC7C5 = 1;
  }
  p_monitor = &v4[2].monitor;
  monitor = v4[2].monitor;
  if ( !monitor )
  {
    v4[2].monitor = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                      v4,
                      1,
                      (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68597984);
    sub_B52920(&v4[2].monitor);
    monitor = v4[2].monitor;
    if ( !monitor )
      goto LABEL_11;
  }
  v7 = monitor[6];
  if ( v7 >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= monitor[6] )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      this = *(WarBoardEffectComponent_o **)&monitor[2 * v8 + 8];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.effectData) + value, 0LL);
      if ( (int)++v8 >= v7 )
        return;
      monitor = *p_monitor;
    }
    while ( *p_monitor );
LABEL_11:
    sub_B52A5C(this, *(_QWORD *)&value);
  }
}