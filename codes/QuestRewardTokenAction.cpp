void QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  if ( (byte_4C240C6 & 1) == 0 )
  {
    sub_1C2D490(&QuestRewardTokenAction_TypeInfo);
    byte_4C240C6 = 1;
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
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x20
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4C240B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardTokenAction___ctor__);
    sub_1C2D490(&Method_CStateManager_QuestRewardTokenAction__add__);
    sub_1C2D490(&CStateManager_QuestRewardTokenAction__TypeInfo);
    sub_1C2D490(&QuestRewardTokenAction_StateNone_TypeInfo);
    sub_1C2D490(&QuestRewardTokenAction_StatePlay_TypeInfo);
    sub_1C2D490(&QuestRewardTokenAction_StateTouchWait_TypeInfo);
    byte_4C240B9 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C2D6DC(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3313C68 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1C2D6DC(QuestRewardTokenAction_StateNone_TypeInfo);
    System_Object___ctor(v8, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v11 = (CStateManager_T__o *)*p_fsm;
    v12 = (Il2CppObject *)sub_1C2D6DC(QuestRewardTokenAction_StatePlay_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11
      || (CStateManager_object___add(
            v11,
            1,
            (IState_T__o *)v12,
            (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v13 = (CStateManager_T__o *)*p_fsm,
          v14 = (Il2CppObject *)sub_1C2D6DC(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v14, 0),
          !v13) )
    {
LABEL_8:
      sub_1C2D6EC(v9, v10);
    }
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v15);
  }
}


UIAtlas_o *QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4C240BE & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    this = (QuestRewardTokenAction_o *)sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4C240BE = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_30AFE78 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__51051712(
                                         assetData,
                                         name,
                                         (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C2D6EC(this, assetData);
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
  if ( (byte_4C240C4 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_1C2D490(&Method_CStateManager_QuestRewardTokenAction__getState__);
    byte_4C240C4 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(this, method);
  return fsm->fields.m_state;
}


void QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardTokenAction_o *v3; // x19
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  struct UISprite_array *v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v11; // x21
  __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20
  struct UILabel_array *v14; // x8
  Il2CppObject *ComponentInChildren_object__51139460; // x0
  UnityEngine_Animation_o **p_animation; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v24; // x20
  System_String_o *v25; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v27; // x20
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  UnityEngine_Animation_o *v31; // x21
  UnityEngine_Animation_o *v32; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v34; // x20
  System_String_o *v35; // x0
  struct SimpleAnimation_o *v36; // x20
  System_String_o *v37; // x0
  QuestRewardTokenAction_c *v38; // x8
  QuestRewardTokenAction_o *v39; // x20
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0

  v3 = this;
  if ( (byte_4C240C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C240C1 = 1;
  }
  tokenSprite = v3->fields.tokenSprite;
  if ( tokenSprite && (int)tokenSprite->max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)tokenSprite->max_length - 1LL;
    while ( v5 < LODWORD(tokenSprite->max_length) )
    {
      v7 = (UnityEngine_Object_o *)tokenSprite->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v8 = v3->fields.tokenSprite;
        if ( !v8 )
          goto LABEL_70;
        if ( v5 >= LODWORD(v8->max_length) )
          break;
        this = (QuestRewardTokenAction_o *)v8->m_Items[v5];
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
      if ( v6 == v5 )
        goto LABEL_19;
      tokenSprite = v3->fields.tokenSprite;
      ++v5;
      if ( !tokenSprite )
        goto LABEL_70;
    }
LABEL_71:
    sub_1C2D6F4(this, method, v2);
  }
LABEL_19:
  tokenName = v3->fields.tokenName;
  if ( tokenName && (int)tokenName->max_length >= 1 )
  {
    v11 = 0;
    v12 = (unsigned int)tokenName->max_length - 1LL;
    while ( v11 < LODWORD(tokenName->max_length) )
    {
      v13 = (UnityEngine_Object_o *)tokenName->m_Items[v11];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v14 = v3->fields.tokenName;
        if ( !v14 )
          goto LABEL_70;
        if ( v11 >= LODWORD(v14->max_length) )
          goto LABEL_71;
        this = (QuestRewardTokenAction_o *)v14->m_Items[v11];
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      if ( v12 == v11 )
        goto LABEL_34;
      tokenName = v3->fields.tokenName;
      ++v11;
      if ( !tokenName )
        goto LABEL_70;
    }
    goto LABEL_71;
  }
LABEL_34:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_70;
  ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v3->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51139460;
  p_animation = &v3->fields.animation;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.animation, (int32_t)ComponentInChildren_object__51139460, v17, v18);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_70;
  v19 = UnityEngine_Component__GetComponentInChildren_object__51139460(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v3->fields.simpleAnimation = (struct SimpleAnimation_o *)v19;
  p_simpleAnimation = &v3->fields.simpleAnimation;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.simpleAnimation, (int32_t)v19, v21, v22);
  simpleAnimation = (UnityEngine_Object_o *)v3->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v31 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_68;
    v32 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v32, name, 0);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0);
          v34 = *p_animation;
          if ( v34 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v34, 0);
            if ( this )
            {
              v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v34, v35, 0);
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
    sub_1C2D6EC(this, method);
  }
  v24 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v24->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v24, v25, 0);
  if ( !this )
    goto LABEL_70;
  klass = this->klass;
  v27 = this;
  v28 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_46;
    }
    v30 = (__int64)(&klass[1]._1.element_class + 2 * *p_offset);
  }
  else
  {
LABEL_46:
    v30 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 8);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v30)(
                                       v27,
                                       *(_QWORD *)(v30 + 8),
                                       0.0);
  v36 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v36->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v37 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v36, v37, 0);
  if ( !this )
    goto LABEL_70;
  v38 = this->klass;
  v39 = this;
  v40 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v41 = (SimpleAnimation_State_c **)&v38->_1.interfaceOffsets->offset;
    while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v40;
      v41 += 2;
      if ( !v40 )
        goto LABEL_65;
    }
    v42 = (__int64)(&v38[1]._1.byval_arg + *(_DWORD *)v41);
  }
  else
  {
LABEL_65:
    v42 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v42)(v39, *(_QWORD *)(v42 + 8), 0.0);
LABEL_68:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x3

  if ( (byte_4C240BB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__);
    sub_1C2D490(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
    byte_4C240BB = 1;
  }
  v5 = sub_1C2D6DC(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = endAct;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)endAct, v8, v9);
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__, 0);
  QuestRewardTokenAction__LoadEventUI(this, v10, 1, v11);
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

  if ( (byte_4C240BC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_QuestRewardTokenAction_LoadEventUIEnd__);
    sub_1C2D490(&StringLiteral_6260/*"EventUI/Prefabs/80285"*/);
    byte_4C240BC = 1;
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
      v8 = sub_1C2D9AC(v10);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc, (int32_t)v10, v11, v12);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_QuestRewardTokenAction_LoadEventUIEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6260/*"EventUI/Prefabs/80285"*/, v14, loadParallelMax, 0) )
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

  if ( (byte_4C240BD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5336/*"DownloadEventUIAtlas8028500"*/);
    byte_4C240BD = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, (int32_t)assetData, (int32_t)method, v3);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v6,
                             assetData,
                             (System_String_o *)StringLiteral_5336/*"DownloadEventUIAtlas8028500"*/,
                             v7);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, (int32_t)UIAtlasFromAssetData, v9, v10);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (CGThumbnailListItem_o *)&this->fields.eventUILoadCallbackFunc;
  v12 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_1C2D434(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v11; // x0
  System_Action_o *v12; // x21

  if ( (byte_4C240C3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_QuestRewardTokenAction__Play_b__25_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C240C3 = 1;
  }
  this->fields.endAct = end_act;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)end_act, (int32_t)method, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v11 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v11->static_fields->DEFAULT_FADE_TIME;
  }
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(gameObject, v9);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v12, 0);
}


void QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetData_o *eventUIAssetData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C240BF & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6260/*"EventUI/Prefabs/80285"*/);
    byte_4C240BF = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6260/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40313100(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3);
  this->fields.eventUIAssetData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUIAssetData, 0, v6, v7);
}


bool QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4C240C0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C240C0 = 1;
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
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1C2D6EC(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardTokenAction__SetState(QuestRewardTokenAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C240C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardTokenAction__setState__);
    byte_4C240C5 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3313D9C *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v6; // x1
  QuestRewardTokenAction___c_c *v7; // x0
  System_Comparison_T__o *_9__24_0; // x21
  Il2CppObject *v9; // x22
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x9
  int v17; // w21
  uint32_t cctor_finished; // w8
  struct QuestRewardTokenAction_StaticFields *v19; // x9
  int v20; // w21
  int32_t TOKEN_IMAGE_ID; // w8
  int v22; // w9
  unsigned __int64 v23; // x26
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v26; // x21
  struct UISprite_array *v27; // x8
  UISprite_o *v28; // x21
  System_String_o *v29; // x0
  const MethodInfo *v30; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v32; // x9
  UnityEngine_Object_o *v33; // x21
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x21
  unsigned __int64 v36; // x9
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C240C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_1C2D490(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&QuestRewardTokenAction_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestRewardTokenAction___c__Setup_b__24_0__);
    sub_1C2D490(&QuestRewardTokenAction___c_TypeInfo);
    byte_4C240C2 = 1;
  }
  v43 = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_54;
  transform = UnityEngine_Component__GetComponentInChildren_object__51139460(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_54;
  *((_BYTE *)transform + 109) = 1;
  v7 = QuestRewardTokenAction___c_TypeInfo;
  if ( !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v7 = QuestRewardTokenAction___c_TypeInfo;
  }
  _9__24_0 = (System_Comparison_T__o *)v7->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = QuestRewardTokenAction___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v9, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0);
    static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v11, v12);
  }
  System_Array__Sort_object__50966632(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_309B068 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_54;
  if ( (int)infos->max_length >= 1 )
  {
    v14 = 1LL - (unsigned int)infos->max_length;
    v15 = 4;
    while ( 1 )
    {
      v16 = *((_QWORD *)&infos->obj.klass + v15);
      if ( v16 && *(_DWORD *)(v16 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v17 = *(_DWORD *)(v16 + 20);
        cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
          transform = QuestRewardTokenAction_TypeInfo;
          cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        }
        v19 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v20 = v17 - v19->TOKEN_EVENT_ID;
        HIDWORD(v43) = v20;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(transform);
          v19 = QuestRewardTokenAction_TypeInfo->static_fields;
        }
        TOKEN_IMAGE_ID = v19->TOKEN_IMAGE_ID;
        if ( v20 <= 26 )
          v22 = v20;
        else
          v22 = v20 + 1;
        v23 = v15 - 4;
        LODWORD(v43) = v22 + TOKEN_IMAGE_ID;
        tokenSprite = this->fields.tokenSprite;
        if ( tokenSprite )
        {
          max_length_low = LODWORD(tokenSprite->max_length);
          if ( (__int64)v23 < (int)max_length_low )
          {
            if ( v23 >= max_length_low )
              goto LABEL_44;
            v26 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v15);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v26, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v27 = this->fields.tokenSprite;
              if ( !v27 )
                goto LABEL_54;
              if ( v23 >= LODWORD(v27->max_length) )
                goto LABEL_44;
              v28 = (UISprite_o *)*((_QWORD *)&v27->obj.klass + v15);
              v29 = System_Int32__ToString((int32_t)&v43, 0);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v28, v29, v30);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v32 = LODWORD(tokenName->max_length);
          if ( (__int64)v23 < (int)v32 )
          {
            if ( v23 >= v32 )
              goto LABEL_44;
            v33 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v15);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v33, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v34 = this->fields.tokenName;
              if ( !v34 )
                goto LABEL_54;
              if ( v23 >= LODWORD(v34->max_length) )
                goto LABEL_44;
              v35 = (UILabel_o *)*((_QWORD *)&v34->obj.klass + v15);
              transform = System_Int32__ToString((int32_t)&v43 + 4, 0);
              if ( !v35 )
                goto LABEL_54;
              UILabel__set_text(v35, (System_String_o *)transform, 0);
            }
          }
        }
      }
      if ( v14 + v15 == 4 )
        break;
      v36 = v15 - 3;
      ++v15;
      if ( v36 >= LODWORD(infos->max_length) )
LABEL_44:
        sub_1C2D6F4(transform, v6, v13);
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v41, v42);
        goto LABEL_51;
      }
    }
LABEL_54:
    sub_1C2D6EC(transform, v6);
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

  if ( (byte_4C240BA & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestRewardTokenAction__update__);
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C240BA = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3313D78 *)Method_CStateManager_QuestRewardTokenAction__update__);
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

  if ( (byte_4C240C7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C240C7 = 1;
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
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_70908988(v19, v20, 0);
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
    sub_1C2D6EC(this, that);
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
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_66404364(v7, v8, 0);
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
    v15 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 6);
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
    v31 = sub_1C7DCA8(this, SimpleAnimation_State_TypeInfo, 8);
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

  if ( (byte_4C240C8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C240C8 = 1;
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
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardTokenAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C2D6EC(this, that);
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
    sub_1C2D6EC(this, that);
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
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2

  if ( (byte_4C240C9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestRewardTokenAction_StateTouchWait_update__);
    sub_1C2D490(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C2D490(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4C240C9 = 1;
  }
  v4 = sub_1C2D6DC(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v9 = v4 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)that, v7, v8);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v9 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v9 + 112LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v10 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v10 = (_QWORD *)sub_1C2D4A8(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v11 = (System_Reflection_MethodBase_o *)sub_1C2D474(v10, v10[4]);
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v13 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
          v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v15, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v9;
            if ( *(_QWORD *)v9 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v16);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(isTouchPush, v6);
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
    sub_1C2D6EC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C240CA & 1) == 0 )
  {
    sub_1C2D490(&QuestRewardTokenAction___c_TypeInfo);
    byte_4C240CA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestRewardTokenAction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, x);
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