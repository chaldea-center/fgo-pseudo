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
  UISprite_o *effectData; // x0
  struct WarBoardEffectData_o *v12; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v15; // x0
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v17; // x2
  struct WarBoardEffectData_o *v18; // x8
  int v19; // s0
  UnityEngine_Transform_array *v22; // x20
  UnityEngine_Transform_o *v23; // x21
  const MethodInfo *v24; // x2
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4183FF7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, data);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B2C35C(&UnityEngine_Transform___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v9);
    byte_4183FF7 = 1;
  }
  this->fields.effectData = data;
  sub_B2C2F8(&this->fields.effectData, data);
  effectData = (UISprite_o *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  effectData->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)this;
  sub_B2C2F8(&effectData->fields.bottomAnchor, this);
  effectData = this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas(effectData, itemIconAtlas, 0LL);
  v12 = this->fields.effectData;
  if ( !v12 )
    goto LABEL_17;
  effectEntity = v12->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  effectData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v15, 0LL);
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
  effectData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v18 = this->fields.effectData;
  if ( !v18
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v19 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v18->fields._squareIndex_k__BackingField,
                                           v17),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL),
        v22 = (UnityEngine_Transform_array *)sub_B2C374(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v22) )
  {
LABEL_17:
    sub_B2C434(effectData, v10);
  }
  v23 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (UISprite_o *)sub_B2C41C(effectData, v22->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v26 = sub_B2C454();
      sub_B2C400(v26, 0LL);
    }
  }
  if ( !v22->max_length )
  {
    v25 = sub_B2C460(effectData);
    sub_B2C400(v25, 0LL);
  }
  v22->m_Items[0] = v23;
  sub_B2C2F8(v22->m_Items, v23);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v22, v24);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *SelectSe; // x20
  const MethodInfo *v8; // x2
  struct WarBoardEffectData_o *effectData; // x8
  struct WarBoardSeSetting_o *v10; // x8
  System_String_o *OpenSimpleInfoSe; // x20
  WebViewManager_o *v12; // x0
  WarBoardEffectData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  const MethodInfo *v15; // x2
  int v16; // s0

  if ( (byte_4183FFA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4183FFA = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( Instance->fields.selectPiece && this->fields.isSelectable )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( Instance )
          {
            WarBoardManager__SelectedPieceAction(Instance, effectData->fields._squareIndex_k__BackingField, v8);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(Instance, v5);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v10 = Instance->fields.seSetting;
  if ( !v10 )
    goto LABEL_22;
  OpenSimpleInfoSe = v10->fields.OpenSimpleInfoSe;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(OpenSimpleInfoSe, 0LL);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = this->fields.effectData;
  v14 = (WarBoardManager_o *)v12;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v14 )
    goto LABEL_22;
  WarBoardManager__ShowEffectSimplePopup(v14, v13, *(UnityEngine_Vector3_o *)&v16, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  System_String_o *v7; // x20
  WebViewManager_o *v8; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v10; // x21
  const MethodInfo *v11; // x2
  int v12; // s0

  if ( (byte_4183FFB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4183FFB = 1;
  }
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = *(_QWORD *)&Instance[13].fields.m_CachedPtr;
  if ( !v6 )
    goto LABEL_11;
  v7 = *(System_String_o **)(v6 + 40);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v7, 0LL);
  v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  effectData = this->fields.effectData;
  v10 = (WarBoardManager_o *)v8;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance || (*(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(Instance, 0LL), !v10) )
LABEL_11:
    sub_B2C434(Instance, v5);
  WarBoardManager__ShowEffectSimplePopup(v10, effectData, *(UnityEngine_Vector3_o *)&v12, v11);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x19
  UnityEngine_Object_o *v18; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v21; // x0

  if ( (byte_4183FF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, parents);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4183FF8 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v16 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_22;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v18,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v18,
                                                                                                 0LL);
          if ( !v10 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v10,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v21 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B2C400(v21, 0LL);
    }
  }
LABEL_22:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                                               (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B2C2F8(&button->fields.tweenTargets, ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
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

  if ( (byte_4183FFD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_4183FFD = 1;
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
      sub_B2C434(0LL, v6);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__SetTouchEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4183FF9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enable);
    byte_4183FF9 = 1;
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
      sub_B2C434(0LL, v6);
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
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  int v8; // w21
  unsigned int v9; // w22
  __int64 v10; // x0

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4183FFC & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_B2C35C(
                                          &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072,
                                          *(_QWORD *)&value);
    byte_4183FFC = 1;
  }
  p_monitor = &v4[2].monitor;
  monitor = v4[2].monitor;
  if ( !monitor )
  {
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                v4,
                                                                1,
                                                                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
    v4[2].monitor = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    sub_B2C2F8(&v4[2].monitor, ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
    monitor = v4[2].monitor;
    if ( !monitor )
      goto LABEL_11;
  }
  v8 = monitor[6];
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= monitor[6] )
      {
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      this = *(WarBoardEffectComponent_o **)&monitor[2 * v9 + 8];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.effectData) + value, 0LL);
      if ( (int)++v9 >= v8 )
        return;
      monitor = *p_monitor;
    }
    while ( *p_monitor );
LABEL_11:
    sub_B2C434(this, *(_QWORD *)&value);
  }
}