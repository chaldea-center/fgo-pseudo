void QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  if ( (byte_4C3FD84 & 1) == 0 )
  {
    sub_1C37058(&QuestRewardTokenAction_TypeInfo);
    byte_4C3FD84 = 1;
  }
  *QuestRewardTokenAction_TypeInfo->static_fields = (struct QuestRewardTokenAction_StaticFields)0x59B0DD404C90D48LL;
}


void QuestRewardTokenAction___ctor(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestRewardTokenAction__Awake(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  CStateManager_T__o *v10; // x21
  Il2CppObject *v11; // x22
  CStateManager_T__o *v12; // x20
  Il2CppObject *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4C3FD77 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardTokenAction___ctor__);
    sub_1C37058(&Method_CStateManager_QuestRewardTokenAction__add__);
    sub_1C37058(&CStateManager_QuestRewardTokenAction__TypeInfo);
    sub_1C37058(&QuestRewardTokenAction_StateNone_TypeInfo);
    sub_1C37058(&QuestRewardTokenAction_StatePlay_TypeInfo);
    sub_1C37058(&QuestRewardTokenAction_StateTouchWait_TypeInfo);
    byte_4C3FD77 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C372A4(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_332CF70 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C372A4(QuestRewardTokenAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v10 = (CStateManager_T__o *)*p_fsm;
    v11 = (Il2CppObject *)sub_1C372A4(QuestRewardTokenAction_StatePlay_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !v10
      || (CStateManager_object___add(
            v10,
            1,
            (IState_T__o *)v11,
            (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v12 = (CStateManager_T__o *)*p_fsm,
          v13 = (Il2CppObject *)sub_1C372A4(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v13, 0),
          !v12) )
    {
LABEL_8:
      sub_1C372B4(v9);
    }
    CStateManager_object___add(
      v12,
      2,
      (IState_T__o *)v13,
      (const MethodInfo_332D018 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v14);
  }
}


UIAtlas_o *QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4C3FD7C & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    this = (QuestRewardTokenAction_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4C3FD7C = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__51154888(
                                         assetData,
                                         name,
                                         (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C372B4(this);
  }
  return 0;
}


// attributes: thunk
void QuestRewardTokenAction__DestroyData(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction__ReleaseEventUI(this, method);
}


int32_t QuestRewardTokenAction__GetState(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4C3FD82 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_1C37058(&Method_CStateManager_QuestRewardTokenAction__getState__);
    byte_4C3FD82 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C372B4(this);
  return fsm->fields.m_state;
}


void QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  struct UISprite_array *v7; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v10; // x21
  __int64 v11; // x22
  UnityEngine_Object_o *v12; // x20
  struct UILabel_array *v13; // x8
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  UnityEngine_Animation_o **p_animation; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v23; // x20
  System_String_o *v24; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v26; // x20
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  UnityEngine_Animation_o *v30; // x21
  UnityEngine_Animation_o *v31; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v33; // x20
  System_String_o *v34; // x0
  struct SimpleAnimation_o *v35; // x20
  System_String_o *v36; // x0
  QuestRewardTokenAction_c *v37; // x8
  QuestRewardTokenAction_o *v38; // x20
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0

  v2 = this;
  if ( (byte_4C3FD7F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FD7F = 1;
  }
  tokenSprite = v2->fields.tokenSprite;
  if ( tokenSprite && (int)tokenSprite->max_length >= 1 )
  {
    v4 = 0;
    v5 = (unsigned int)tokenSprite->max_length - 1LL;
    while ( v4 < LODWORD(tokenSprite->max_length) )
    {
      v6 = (UnityEngine_Object_o *)tokenSprite->m_Items[v4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v7 = v2->fields.tokenSprite;
        if ( !v7 )
          goto LABEL_70;
        if ( v4 >= LODWORD(v7->max_length) )
          break;
        this = (QuestRewardTokenAction_o *)v7->m_Items[v4];
        if ( !this )
          goto LABEL_70;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (QuestRewardTokenAction_o *)GameObjectExtensions__GetParent(gameObject, 0);
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      if ( v5 == v4 )
        goto LABEL_19;
      tokenSprite = v2->fields.tokenSprite;
      ++v4;
      if ( !tokenSprite )
        goto LABEL_70;
    }
LABEL_71:
    sub_1C372BC(this);
  }
LABEL_19:
  tokenName = v2->fields.tokenName;
  if ( tokenName && (int)tokenName->max_length >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)tokenName->max_length - 1LL;
    while ( v10 < LODWORD(tokenName->max_length) )
    {
      v12 = (UnityEngine_Object_o *)tokenName->m_Items[v10];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = v2->fields.tokenName;
        if ( !v13 )
          goto LABEL_70;
        if ( v10 >= LODWORD(v13->max_length) )
          goto LABEL_71;
        this = (QuestRewardTokenAction_o *)v13->m_Items[v10];
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      if ( v11 == v10 )
        goto LABEL_34;
      tokenName = v2->fields.tokenName;
      ++v10;
      if ( !tokenName )
        goto LABEL_70;
    }
    goto LABEL_71;
  }
LABEL_34:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_70;
  ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51242636;
  p_animation = &v2->fields.animation;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.animation, (int32_t)ComponentInChildren_object__51242636, v16, v17);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_70;
  v18 = UnityEngine_Component__GetComponentInChildren_object__51242636(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v18;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.simpleAnimation, (int32_t)v18, v20, v21);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v30 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_68;
    v31 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v31, name, 0);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0);
          v33 = *p_animation;
          if ( v33 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v33, 0);
            if ( this )
            {
              v34 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v33, v34, 0);
              if ( this )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
                goto LABEL_68;
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_1C372B4(this);
  }
  v23 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v23->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v23, v24, 0);
  if ( !this )
    goto LABEL_70;
  klass = this->klass;
  v26 = this;
  v27 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_46;
    }
    v29 = (__int64)(&klass[1]._1.element_class + 2 * *p_offset);
  }
  else
  {
LABEL_46:
    v29 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 8);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v29)(
                                       v26,
                                       *(_QWORD *)(v29 + 8),
                                       0.0);
  v35 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v35->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v36 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v35, v36, 0);
  if ( !this )
    goto LABEL_70;
  v37 = this->klass;
  v38 = this;
  v39 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_65;
    }
    v41 = (__int64)(&v37[1]._1.byval_arg + *(_DWORD *)v40);
  }
  else
  {
LABEL_65:
    v41 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v41)(v38, *(_QWORD *)(v41 + 8), 0.0);
LABEL_68:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3

  if ( (byte_4C3FD79 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__);
    sub_1C37058(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
    byte_4C3FD79 = 1;
  }
  v5 = sub_1C372A4(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = endAct;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)endAct, v7, v8);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v5, Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__, 0);
  QuestRewardTokenAction__LoadEventUI(this, v9, 1, v10);
}


void QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x0
  long double v8; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_c *v13; // x1
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4C3FD7A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_QuestRewardTokenAction_LoadEventUIEnd__);
    sub_1C37058(&StringLiteral_6269/*"EventUI/Prefabs/80285"*/);
    byte_4C3FD7A = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0);
  if ( v10 )
  {
    v13 = System_Action_TypeInfo;
    if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v13) )
    {
      v8 = sub_1C37574(v10);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t, long double))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method,
          v8);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v10, v11, v12);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_QuestRewardTokenAction_LoadEventUIEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6269/*"EventUI/Prefabs/80285"*/, v14, loadParallelMax, 0) )
    {
      this->fields.isEventUILoad = 0;
      QuestRewardTokenAction__LoadEventUIEnd(this, 0, v15);
    }
  }
}


void QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestRewardTokenAction_o *v6; // x0
  const MethodInfo *v7; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CGThumbnailListItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4C3FD7B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5345/*"DownloadEventUIAtlas8028500"*/);
    byte_4C3FD7B = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v6,
                             assetData,
                             (System_String_o *)StringLiteral_5345/*"DownloadEventUIAtlas8028500"*/,
                             v7);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, (int32_t)UIAtlasFromAssetData, v9, v10);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc;
  v12 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_1C36FFC(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x0
  System_Action_o *v11; // x21

  if ( (byte_4C3FD81 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_QuestRewardTokenAction__Play_b__25_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD81 = 1;
  }
  this->fields.endAct = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v10->static_fields->DEFAULT_FADE_TIME;
  }
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C372B4(gameObject);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v11, 0);
}


void QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetData_o *eventUIAssetData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3FD7D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_6269/*"EventUI/Prefabs/80285"*/);
    byte_4C3FD7D = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6269/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v6, v7);
}


bool QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v9; // w21

  if ( (byte_4C3FD7E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FD7E = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          spriteName = 0;
          v9 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v9 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v9;
}


void QuestRewardTokenAction__SetState(QuestRewardTokenAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3FD83 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardTokenAction__setState__);
    byte_4C3FD83 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  void *transform; // x0
  QuestRewardTokenAction___c_c *v6; // x0
  System_Comparison_T__o *_9__24_0; // x21
  Il2CppObject *v8; // x22
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x24
  __int64 v13; // x25
  __int64 v14; // x9
  int v15; // w21
  uint32_t cctor_finished; // w8
  struct QuestRewardTokenAction_StaticFields *v17; // x9
  int v18; // w21
  int32_t TOKEN_IMAGE_ID; // w8
  int v20; // w9
  unsigned __int64 v21; // x26
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v24; // x21
  struct UISprite_array *v25; // x8
  UISprite_o *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v30; // x9
  UnityEngine_Object_o *v31; // x21
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x21
  unsigned __int64 v34; // x9
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3FD80 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_1C37058(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestRewardTokenAction_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_QuestRewardTokenAction___c__Setup_b__24_0__);
    sub_1C37058(&QuestRewardTokenAction___c_TypeInfo);
    byte_4C3FD80 = 1;
  }
  v41 = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_54;
  transform = UnityEngine_Component__GetComponentInChildren_object__51242636(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_54;
  *((_BYTE *)transform + 109) = 1;
  v6 = QuestRewardTokenAction___c_TypeInfo;
  if ( !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v6 = QuestRewardTokenAction___c_TypeInfo;
  }
  _9__24_0 = (System_Comparison_T__o *)v6->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestRewardTokenAction___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v8, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0);
    static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v10, v11);
  }
  System_Array__Sort_object__51069808(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_54;
  if ( (int)infos->max_length >= 1 )
  {
    v12 = 1LL - (unsigned int)infos->max_length;
    v13 = 4;
    while ( 1 )
    {
      v14 = *((_QWORD *)&infos->obj.klass + v13);
      if ( v14 && *(_DWORD *)(v14 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v15 = *(_DWORD *)(v14 + 20);
        cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
          transform = QuestRewardTokenAction_TypeInfo;
          cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        }
        v17 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v18 = v15 - v17->TOKEN_EVENT_ID;
        HIDWORD(v41) = v18;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(transform);
          v17 = QuestRewardTokenAction_TypeInfo->static_fields;
        }
        TOKEN_IMAGE_ID = v17->TOKEN_IMAGE_ID;
        if ( v18 <= 26 )
          v20 = v18;
        else
          v20 = v18 + 1;
        v21 = v13 - 4;
        LODWORD(v41) = v20 + TOKEN_IMAGE_ID;
        tokenSprite = this->fields.tokenSprite;
        if ( tokenSprite )
        {
          max_length_low = LODWORD(tokenSprite->max_length);
          if ( (__int64)v21 < (int)max_length_low )
          {
            if ( v21 >= max_length_low )
              goto LABEL_44;
            v24 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v13);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v24, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v25 = this->fields.tokenSprite;
              if ( !v25 )
                goto LABEL_54;
              if ( v21 >= LODWORD(v25->max_length) )
                goto LABEL_44;
              v26 = (UISprite_o *)*((_QWORD *)&v25->obj.klass + v13);
              v27 = System_Int32__ToString((int32_t)&v41, 0);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v26, v27, v28);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v30 = LODWORD(tokenName->max_length);
          if ( (__int64)v21 < (int)v30 )
          {
            if ( v21 >= v30 )
              goto LABEL_44;
            v31 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v13);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v31, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v32 = this->fields.tokenName;
              if ( !v32 )
                goto LABEL_54;
              if ( v21 >= LODWORD(v32->max_length) )
                goto LABEL_44;
              v33 = (UILabel_o *)*((_QWORD *)&v32->obj.klass + v13);
              transform = System_Int32__ToString((int32_t)&v41 + 4, 0);
              if ( !v33 )
                goto LABEL_54;
              UILabel__set_text(v33, (System_String_o *)transform, 0);
            }
          }
        }
      }
      if ( v12 + v13 == 4 )
        break;
      v34 = v13 - 3;
      ++v13;
      if ( v34 >= LODWORD(infos->max_length) )
LABEL_44:
        sub_1C372BC(transform);
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v39, v40);
        goto LABEL_51;
      }
    }
LABEL_54:
    sub_1C372B4(transform);
  }
LABEL_51:
  transform = *p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_54;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void QuestRewardTokenAction__Update(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C3FD78 & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_QuestRewardTokenAction__update__);
    sub_1C37058(&CTouch_TypeInfo);
    byte_4C3FD78 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_332D080 *)Method_CStateManager_QuestRewardTokenAction__update__);
}


void QuestRewardTokenAction___Play_b__25_0(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardTokenAction__SetState(this, 1, v2);
}


void QuestRewardTokenAction_StateNone___ctor(QuestRewardTokenAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardTokenAction_StateNone__begin(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardTokenAction_StateNone__end(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardTokenAction_StateNone__update(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardTokenAction_StatePlay___ctor(QuestRewardTokenAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardTokenAction_StatePlay__begin(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *v6; // x0
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v12; // x20
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v17; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v19; // x20
  System_String_o *v20; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x19
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x19
  System_String_o *v26; // x0
  QuestRewardTokenAction_StatePlay_c *v27; // x8
  QuestRewardTokenAction_StatePlay_o *v28; // x19
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C3FD85 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C37058(&SimpleAnimation_State_TypeInfo);
    byte_4C3FD85 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v17 = that->fields.animation;
    if ( v17 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v17, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v19 = that->fields.animation;
          if ( !v19 )
            goto LABEL_49;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( !this )
            goto LABEL_49;
          v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_71012036(v19, v20, 0);
        }
        v21 = that->fields.animation;
        if ( v21 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( this )
          {
            v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v21, v22, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v23 = that->fields.animation;
              if ( v23 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v23, 0);
                if ( this )
                {
                  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C372B4(this);
  }
  v5 = that->fields.simpleAnimation;
  if ( !v5 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v5->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v5, v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_49;
    this = (QuestRewardTokenAction_StatePlay_o *)v7->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_66507412(v7, v8, 0);
  }
  v9 = that->fields.simpleAnimation;
  if ( !v9 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v9->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v9, v10, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_20;
    }
    v15 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v15 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v15)(
                                                 v12,
                                                 *(_QWORD *)(v15 + 8),
                                                 0.0);
  v25 = that->fields.simpleAnimation;
  if ( !v25 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v25->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v25, v26, 0);
  if ( !this )
    goto LABEL_49;
  v27 = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_46;
    }
    v31 = (__int64)(&v27[1]._1.name + 2 * *v30);
  }
  else
  {
LABEL_46:
    v31 = sub_1C87870(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 1.0);
}


void QuestRewardTokenAction_StatePlay__end(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardTokenAction_StatePlay__update(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4C3FD86 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3FD86 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.simpleAnimation;
    if ( !v5 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)v5->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v5, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardTokenAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C372B4(this);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = that->fields.animation;
    if ( !v8 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
    if ( !this )
      goto LABEL_21;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v8, v9, 0) )
      return;
    goto LABEL_17;
  }
}


void QuestRewardTokenAction_StateTouchWait___ctor(
        QuestRewardTokenAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardTokenAction_StateTouchWait__begin(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void QuestRewardTokenAction_StateTouchWait__end(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestRewardTokenAction_StateTouchWait__update(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x2

  if ( (byte_4C3FD87 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&CTouch_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_QuestRewardTokenAction_StateTouchWait_update__);
    sub_1C37058(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C37058(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C3FD87 = 1;
  }
  v4 = sub_1C372A4(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v8 = v4 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v6, v7);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v8 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v8 + 112LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v9 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C37070(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v12 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
          v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v8;
            if ( *(_QWORD *)v8 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C372B4(isTouchPush);
  }
}


void QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardTokenAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C372B4(this);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3FD88 & 1) == 0 )
  {
    sub_1C37058(&QuestRewardTokenAction___c_TypeInfo);
    byte_4C3FD88 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestRewardTokenAction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestRewardTokenAction___c___ctor(QuestRewardTokenAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestRewardTokenAction___c___Setup_b__24_0(
        QuestRewardTokenAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C372B4(this);
  return x->fields.objectId - y->fields.objectId;
}


void QuestRewardTokenAction___c__DisplayClass17_0___ctor(
        QuestRewardTokenAction___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestRewardTokenAction___c__DisplayClass17_0___LoadData_b__0(
        QuestRewardTokenAction___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endAct; // x0

  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0);
}