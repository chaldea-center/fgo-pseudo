void QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  if ( (byte_4CEB38A & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRewardTokenAction_TypeInfo);
    byte_4CEB38A = 1;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4CEB37D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardTokenAction___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QuestRewardTokenAction__add__);
    sub_1C7BAE8(&CStateManager_QuestRewardTokenAction__TypeInfo);
    sub_1C7BAE8(&QuestRewardTokenAction_StateNone_TypeInfo);
    sub_1C7BAE8(&QuestRewardTokenAction_StatePlay_TypeInfo);
    sub_1C7BAE8(&QuestRewardTokenAction_StateTouchWait_TypeInfo);
    byte_4CEB37D = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_33B93F0 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_1C7BD34(QuestRewardTokenAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_1C7BD34(QuestRewardTokenAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_1C7BD34(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_1C7BD40(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v19);
  }
}


UIAtlas_o *QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4CEB382 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    this = (QuestRewardTokenAction_o *)sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4CEB382 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_3151750 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__51713432(
                                         assetData,
                                         name,
                                         (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C7BD40(this, assetData);
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
  if ( (byte_4CEB388 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_1C7BAE8(&Method_CStateManager_QuestRewardTokenAction__getState__);
    byte_4CEB388 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C7BD40(this, method);
  return fsm->fields.m_state;
}


void QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v4; // x21
  __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  struct UISprite_array *v8; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v11; // x21
  __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20
  struct UILabel_array *v14; // x8
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  UnityEngine_Animation_o **p_animation; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v32; // x20
  System_String_o *v33; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v35; // x20
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  UnityEngine_Animation_o *v39; // x21
  UnityEngine_Animation_o *v40; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v42; // x20
  System_String_o *v43; // x0
  struct SimpleAnimation_o *v44; // x20
  System_String_o *v45; // x0
  QuestRewardTokenAction_c *v46; // x8
  QuestRewardTokenAction_o *v47; // x20
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x0

  v2 = this;
  if ( (byte_4CEB385 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB385 = 1;
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
        v8 = v2->fields.tokenSprite;
        if ( !v8 )
          goto LABEL_70;
        if ( v4 >= LODWORD(v8->max_length) )
          break;
        this = (QuestRewardTokenAction_o *)v8->m_Items[v4];
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
    sub_1C7BD48(this);
  }
LABEL_19:
  tokenName = v2->fields.tokenName;
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
        v14 = v2->fields.tokenName;
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
      tokenName = v2->fields.tokenName;
      ++v11;
      if ( !tokenName )
        goto LABEL_70;
    }
    goto LABEL_71;
  }
LABEL_34:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_70;
  ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__51801640;
  p_animation = &v2->fields.animation;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.animation,
    (int32_t)ComponentInChildren_object__51801640,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !this )
    goto LABEL_70;
  v23 = UnityEngine_Component__GetComponentInChildren_object__51801640(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v23;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.simpleAnimation, (int32_t)v23, v25, v26, v27, v28, v29, v30);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v39 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_68;
    v40 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v40, name, 0);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0);
          v42 = *p_animation;
          if ( v42 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v42, 0);
            if ( this )
            {
              v43 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v42, v43, 0);
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
    sub_1C7BD40(this, v7);
  }
  v32 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v32->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v32, v33, 0);
  if ( !this )
    goto LABEL_70;
  klass = this->klass;
  v35 = this;
  v36 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_46;
    }
    v38 = (__int64)(&klass[1]._1.element_class + 2 * *p_offset);
  }
  else
  {
LABEL_46:
    v38 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 8);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v38)(
                                       v35,
                                       *(_QWORD *)(v38 + 8),
                                       0.0);
  v44 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v44->fields.m_Clip;
  if ( !this )
    goto LABEL_70;
  v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v44, v45, 0);
  if ( !this )
    goto LABEL_70;
  v46 = this->klass;
  v47 = this;
  v48 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v49 = (SimpleAnimation_State_c **)&v46->_1.interfaceOffsets->offset;
    while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v48;
      v49 += 2;
      if ( !v48 )
        goto LABEL_65;
    }
    v50 = (__int64)(&v46[1]._1.byval_arg + *(_DWORD *)v49);
  }
  else
  {
LABEL_65:
    v50 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 6);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v50)(v47, *(_QWORD *)(v50 + 8), 0.0);
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_4CEB37F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__);
    sub_1C7BAE8(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
    byte_4CEB37F = 1;
  }
  v5 = sub_1C7BD34(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = endAct;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__, 0);
  QuestRewardTokenAction__LoadEventUI(this, v14, 1, v15);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Action_c *v17; // x1
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4CEB380 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardTokenAction_LoadEventUIEnd__);
    sub_1C7BAE8(&StringLiteral_6278/*"EventUI/Prefabs/80285"*/);
    byte_4CEB380 = 1;
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
    v17 = System_Action_TypeInfo;
    if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v17) )
    {
      v8 = sub_1C7C0DC(v10);
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
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUILoadCallbackFunc,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_QuestRewardTokenAction_LoadEventUIEnd__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6278/*"EventUI/Prefabs/80285"*/, v18, loadParallelMax, 0) )
    {
      this->fields.isEventUILoad = 0;
      QuestRewardTokenAction__LoadEventUIEnd(this, 0, v19);
    }
  }
}


void QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestRewardTokenAction_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GrandQuestFolderBoardItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4CEB381 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5348/*"DownloadEventUIAtlas8028500"*/);
    byte_4CEB381 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5348/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_1C7BA8C(p_eventUILoadCallbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v15; // x0
  System_Action_o *v16; // x21

  if ( (byte_4CEB387 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_QuestRewardTokenAction__Play_b__25_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB387 = 1;
  }
  this->fields.endAct = end_act;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endAct,
    (int32_t)end_act,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v15 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v15->static_fields->DEFAULT_FADE_TIME;
  }
  v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C7BD40(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v16, 0);
}


void QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *eventUIAssetData; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEB383 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6278/*"EventUI/Prefabs/80285"*/);
    byte_4CEB383 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6278/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41096272(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventUIAssetData, 0, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4CEB384 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB384 = 1;
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
      sub_1C7BD40(IsNullOrEmpty, v8);
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

  if ( (byte_4CEB389 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardTokenAction__setState__);
    byte_4CEB389 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C7BD40(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33B9524 *)Method_CStateManager_QuestRewardTokenAction__setState__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x9
  int v20; // w21
  uint32_t cctor_finished; // w8
  struct QuestRewardTokenAction_StaticFields *v22; // x9
  int v23; // w21
  int32_t TOKEN_IMAGE_ID; // w8
  int v25; // w9
  unsigned __int64 v26; // x26
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v29; // x21
  struct UISprite_array *v30; // x8
  UISprite_o *v31; // x21
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v35; // x9
  UnityEngine_Object_o *v36; // x21
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x21
  unsigned __int64 v39; // x9
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEB386 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_1C7BAE8(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestRewardTokenAction_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_QuestRewardTokenAction___c__Setup_b__24_0__);
    sub_1C7BAE8(&QuestRewardTokenAction___c_TypeInfo);
    byte_4CEB386 = 1;
  }
  v50 = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_54;
  transform = UnityEngine_Component__GetComponentInChildren_object__51801640(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
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
    _9__24_0 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v9, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0);
    static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
      (int32_t)_9__24_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  System_Array__Sort_object__51627360(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_313C560 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_54;
  if ( (int)infos->max_length >= 1 )
  {
    v17 = 1LL - (unsigned int)infos->max_length;
    v18 = 4;
    while ( 1 )
    {
      v19 = *((_QWORD *)&infos->obj.klass + v18);
      if ( v19 && *(_DWORD *)(v19 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v20 = *(_DWORD *)(v19 + 20);
        cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
          transform = QuestRewardTokenAction_TypeInfo;
          cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        }
        v22 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v23 = v20 - v22->TOKEN_EVENT_ID;
        HIDWORD(v50) = v23;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(transform);
          v22 = QuestRewardTokenAction_TypeInfo->static_fields;
        }
        TOKEN_IMAGE_ID = v22->TOKEN_IMAGE_ID;
        if ( v23 <= 26 )
          v25 = v23;
        else
          v25 = v23 + 1;
        v26 = v18 - 4;
        LODWORD(v50) = v25 + TOKEN_IMAGE_ID;
        tokenSprite = this->fields.tokenSprite;
        if ( tokenSprite )
        {
          max_length_low = LODWORD(tokenSprite->max_length);
          if ( (__int64)v26 < (int)max_length_low )
          {
            if ( v26 >= max_length_low )
              goto LABEL_44;
            v29 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v18);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v29, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v30 = this->fields.tokenSprite;
              if ( !v30 )
                goto LABEL_54;
              if ( v26 >= LODWORD(v30->max_length) )
                goto LABEL_44;
              v31 = (UISprite_o *)*((_QWORD *)&v30->obj.klass + v18);
              v32 = System_Int32__ToString((int32_t)&v50, 0);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v31, v32, v33);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v35 = LODWORD(tokenName->max_length);
          if ( (__int64)v26 < (int)v35 )
          {
            if ( v26 >= v35 )
              goto LABEL_44;
            v36 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v18);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v36, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v37 = this->fields.tokenName;
              if ( !v37 )
                goto LABEL_54;
              if ( v26 >= LODWORD(v37->max_length) )
                goto LABEL_44;
              v38 = (UILabel_o *)*((_QWORD *)&v37->obj.klass + v18);
              transform = System_Int32__ToString((int32_t)&v50 + 4, 0);
              if ( !v38 )
                goto LABEL_54;
              UILabel__set_text(v38, (System_String_o *)transform, 0);
            }
          }
        }
      }
      if ( v17 + v18 == 4 )
        break;
      v39 = v18 - 3;
      ++v18;
      if ( v39 >= LODWORD(infos->max_length) )
LABEL_44:
        sub_1C7BD48(transform);
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.screenTouchInfo,
          (int32_t)Component_object,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        goto LABEL_51;
      }
    }
LABEL_54:
    sub_1C7BD40(transform, v6);
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

  if ( (byte_4CEB37E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestRewardTokenAction__update__);
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEB37E = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_33B9500 *)Method_CStateManager_QuestRewardTokenAction__update__);
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

  if ( (byte_4CEB38B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEB38B = 1;
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
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_71613624(v19, v20, 0);
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
    sub_1C7BD40(this, that);
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
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_67121960(v7, v8, 0);
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
    v15 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 6);
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
    v31 = sub_1C51E70(this, SimpleAnimation_State_TypeInfo, 8);
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

  if ( (byte_4CEB38C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEB38C = 1;
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
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardTokenAction__SetState(that, 2, v10);
      return;
    }
LABEL_21:
    sub_1C7BD40(this, that);
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
    sub_1C7BD40(this, that);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2

  if ( (byte_4CEB38D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_QuestRewardTokenAction_StateTouchWait_update__);
    sub_1C7BAE8(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_1C7BAE8(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_4CEB38D = 1;
  }
  v4 = sub_1C7BD34(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v13 + 112LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0);
          v14 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C7BB00(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v15 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v14, v14[4]);
          OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v17 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v17 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
          v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v4,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v20);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C7BD40(isTouchPush, v6);
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
    sub_1C7BD40(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEB38E & 1) == 0 )
  {
    sub_1C7BAE8(&QuestRewardTokenAction___c_TypeInfo);
    byte_4CEB38E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestRewardTokenAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C7BD40(this, x);
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