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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  UISprite_o *effectData; // x0
  struct WarBoardEffectData_o *v18; // x8
  struct WarBoardEffectEntity_o *effectEntity; // x8
  UISprite_o *effectIcon; // x20
  Il2CppObject *v21; // x0
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v23; // x2
  struct WarBoardEffectData_o *v24; // x8
  int v25; // s0
  UnityEngine_Transform_array *v28; // x20
  UnityEngine_Transform_o *v29; // x21
  const MethodInfo *v30; // x2
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E51DA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)data, (_DWORD)itemIconAtlas, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Transform___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v13, v14, v15);
    byte_42E51DA = 1;
  }
  this->fields.effectData = data;
  sub_B5D560(&this->fields.effectData);
  effectData = (UISprite_o *)this->fields.effectData;
  if ( !effectData )
    goto LABEL_17;
  effectData->fields.bottomAnchor = (struct UIRect_AnchorPoint_o *)this;
  sub_B5D560(&effectData->fields.bottomAnchor);
  effectData = this->fields.effectIcon;
  if ( !effectData )
    goto LABEL_17;
  UISprite__set_atlas(effectData, itemIconAtlas, 0LL);
  v18 = this->fields.effectData;
  if ( !v18 )
    goto LABEL_17;
  effectEntity = v18->fields.effectEntity;
  if ( !effectEntity )
    goto LABEL_17;
  effectIcon = this->fields.effectIcon;
  iconId = effectEntity->fields.iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  effectData = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, v21, 0LL);
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
  effectData = (UISprite_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v24 = this->fields.effectData;
  if ( !v24
    || !effectData
    || (*(UnityEngine_Vector3_o *)&v25 = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)effectData,
                                           v24->fields._squareIndex_k__BackingField,
                                           v23),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL),
        v28 = (UnityEngine_Transform_array *)sub_B5D5DC(UnityEngine_Transform___TypeInfo, 1LL),
        effectData = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        !v28) )
  {
LABEL_17:
    sub_B5D69C(effectData, v16);
  }
  v29 = (UnityEngine_Transform_o *)effectData;
  if ( effectData )
  {
    effectData = (UISprite_o *)sub_B5D684(effectData, v28->obj.klass->_1.element_class);
    if ( !effectData )
    {
      v32 = sub_B5D6BC();
      sub_B5D668(v32, 0LL);
    }
  }
  if ( !v28->max_length )
  {
    v31 = sub_B5D6C8(effectData);
    sub_B5D668(v31, 0LL);
  }
  v28->m_Items[0] = v29;
  sub_B5D560(v28->m_Items);
  WarBoardEffectComponent__SetButtonTweenTarget(this, v28, v30);
  this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardManager_o *Instance; // x0
  __int64 v9; // x1
  struct WarBoardSeSetting_o *seSetting; // x8
  System_String_o *SelectSe; // x20
  const MethodInfo *v12; // x2
  struct WarBoardEffectData_o *effectData; // x8
  struct WarBoardSeSetting_o *v14; // x8
  System_String_o *OpenSimpleInfoSe; // x20
  WebViewManager_o *v16; // x0
  WarBoardEffectData_o *v17; // x20
  WarBoardManager_o *v18; // x21
  const MethodInfo *v19; // x2
  int v20; // s0

  if ( (byte_42E51DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E51DD = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  if ( Instance->fields.selectPiece && this->fields.isSelectable )
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        effectData = this->fields.effectData;
        if ( effectData )
        {
          if ( Instance )
          {
            WarBoardManager__SelectedPieceAction(Instance, effectData->fields._squareIndex_k__BackingField, v12);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(Instance, v9);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  v14 = Instance->fields.seSetting;
  if ( !v14 )
    goto LABEL_22;
  OpenSimpleInfoSe = v14->fields.OpenSimpleInfoSe;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(OpenSimpleInfoSe, 0LL);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v17 = this->fields.effectData;
  v18 = (WarBoardManager_o *)v16;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v18 )
    goto LABEL_22;
  WarBoardManager__ShowEffectSimplePopup(v18, v17, *(UnityEngine_Vector3_o *)&v20, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEffectComponent__OnLongClick(WarBoardEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  System_String_o *v11; // x20
  WebViewManager_o *v12; // x0
  WarBoardEffectData_o *effectData; // x20
  WarBoardManager_o *v14; // x21
  const MethodInfo *v15; // x2
  int v16; // s0

  if ( (byte_42E51DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E51DE = 1;
  }
  Instance = (UnityEngine_Transform_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = *(_QWORD *)&Instance[13].fields.m_CachedPtr;
  if ( !v10 )
    goto LABEL_11;
  v11 = *(System_String_o **)(v10 + 40);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSe(v11, 0LL);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  effectData = this->fields.effectData;
  v14 = (WarBoardManager_o *)v12;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(Instance, 0LL), !v14) )
LABEL_11:
    sub_B5D69C(Instance, v9);
  WarBoardManager__ShowEffectSimplePopup(v14, effectData, *(UnityEngine_Vector3_o *)&v16, v15);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  UnityEngine_Component_o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v25; // x1
  signed int max_length; // w8
  unsigned int v27; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v29; // x22
  unsigned __int64 v30; // x19
  UnityEngine_Object_o *v31; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *button; // x19
  __int64 v34; // x0

  if ( (byte_42E51DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
      (_DWORD)parents,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Contains__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E51DB = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
          goto LABEL_25;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)parents->m_Items[v27];
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_26;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                               ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                               1,
                                                                                               (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
        if ( ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        {
          klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent[1].klass;
          v29 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_21:
        max_length = parents->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_22;
      }
      v30 = 0LL;
      while ( v30 < (unsigned int)klass )
      {
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v29[1].monitor + v30);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                                                               v31,
                                                                                               0LL,
                                                                                               0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                                 (UnityEngine_Component_o *)v31,
                                                                                                 0LL);
          if ( !v23 )
            goto LABEL_26;
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                                 (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
                                                                                                 (WarBoardManager_TaskList_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
                                                                                                 (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
        LODWORD(klass) = v29[1].klass;
        if ( (__int64)++v30 >= (int)klass )
          goto LABEL_21;
      }
LABEL_25:
      v34 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
      sub_B5D668(v34, 0LL);
    }
  }
LABEL_22:
  if ( !v23
    || (button = this->fields.button,
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (UnityEngine_Component_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                                                               (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_26:
    sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v25);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B5D560(&button->fields.tweenTargets);
}


void __fastcall WarBoardEffectComponent__SetColliderEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  struct UICommonButton_o *v8; // x0
  bool v9; // w1

  if ( (byte_42E51E0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E51E0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    if ( enable )
    {
      v9 = 1;
LABEL_12:
      UICommonButton__SetButtonEnableAndKeepState(v8, v9, 0, 0LL);
      return;
    }
    if ( v8->fields.mState )
    {
      v9 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v8, 0, 1, 0LL);
  }
}


void __fastcall WarBoardEffectComponent__SetTouchEnable(
        WarBoardEffectComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *button; // x21
  __int64 v7; // x1
  UICommonButton_o *v8; // x0

  if ( (byte_42E51DC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enable, (_DWORD)method, v3);
    byte_42E51DC = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v8 = this->fields.button;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UICommonButton__SetButtonEnableAndKeepState(v8, enable, 0, 0LL);
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
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x21
  _DWORD *monitor; // x8
  void **p_monitor; // x20
  int v8; // w21
  unsigned int v9; // w22
  __int64 v10; // x0

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42E51DF & 1) == 0 )
  {
    this = (WarBoardEffectComponent_o *)sub_B5D5C4(
                                          &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880,
                                          value,
                                          (_DWORD)method,
                                          v3);
    byte_42E51DF = 1;
  }
  p_monitor = &v5[2].monitor;
  monitor = v5[2].monitor;
  if ( !monitor )
  {
    v5[2].monitor = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                      v5,
                      1,
                      (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
    sub_B5D560(&v5[2].monitor);
    monitor = v5[2].monitor;
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
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&value);
  }
}