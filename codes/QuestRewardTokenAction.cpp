void QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  if ( (byte_596D403 & 1) == 0 )
  {
    sub_2213A60(&QuestRewardTokenAction_TypeInfo);
    byte_596D403 = 1;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_596D3F6 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardTokenAction___ctor__);
    sub_2213A60(&Method_CStateManager_QuestRewardTokenAction__add__);
    sub_2213A60(&CStateManager_QuestRewardTokenAction__TypeInfo);
    sub_2213A60(&QuestRewardTokenAction_StateNone_TypeInfo);
    sub_2213A60(&QuestRewardTokenAction_StatePlay_TypeInfo);
    sub_2213A60(&QuestRewardTokenAction_StateTouchWait_TypeInfo);
    byte_596D3F6 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_2213CCC(QuestRewardTokenAction_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_2213CCC(QuestRewardTokenAction_StatePlay_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            1,
            (IState_T__o *)v16,
            (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_2213CCC(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v18, 0),
          !v17) )
    {
LABEL_8:
      sub_2213CDC(v13, v14);
    }
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestRewardTokenAction__add__);
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

  if ( (byte_596D3FB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObjectList_GameObject___);
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (QuestRewardTokenAction_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_596D3FB = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_37D2608 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__58532980(
                                         assetData,
                                         name,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_2213CDC(this, assetData);
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
  if ( (byte_596D401 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_2213A60(&Method_CStateManager_QuestRewardTokenAction__getState__);
    byte_596D401 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_2213CDC(this, method);
  return fsm->fields.m_state;
}


void QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardTokenAction_o *v3; // x19
  struct UISprite_array *tokenSprite; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  struct UISprite_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  struct UISprite_array *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  il2cpp_array_size_t v13; // x8
  unsigned __int64 v14; // x21
  __int64 v15; // x22
  struct UILabel_array *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct UILabel_array *v18; // x8
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  UnityEngine_Animation_o **p_animation; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *simpleAnimation; // x22
  __int64 v38; // x2
  struct SimpleAnimation_o *v39; // x20
  System_String_o *name; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v42; // x20
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  UnityEngine_Animation_o *v46; // x21
  UnityEngine_Animation_o *v47; // x21
  System_String_o *v48; // x0
  UnityEngine_Animation_o *v49; // x20
  System_String_o *v50; // x0
  struct SimpleAnimation_o *v51; // x20
  System_String_o *v52; // x0
  QuestRewardTokenAction_c *v53; // x8
  QuestRewardTokenAction_o *v54; // x20
  __int64 v55; // x9
  SimpleAnimation_State_c **v56; // x10
  __int64 v57; // x0

  v3 = this;
  if ( (byte_596D3FE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D3FE = 1;
  }
  tokenSprite = v3->fields.tokenSprite;
  if ( tokenSprite )
  {
    max_length = tokenSprite->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      v7 = (unsigned int)max_length;
      while ( 1 )
      {
        v8 = v3->fields.tokenSprite;
        if ( !v8 )
          break;
        if ( v6 >= LODWORD(v8->max_length) )
          goto LABEL_69;
        v9 = (UnityEngine_Object_o *)v8->m_Items[v6];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = v3->fields.tokenSprite;
          if ( !v10 )
            break;
          if ( v6 >= LODWORD(v10->max_length) )
LABEL_69:
            sub_2213CE4(this);
          this = (QuestRewardTokenAction_o *)v10->m_Items[v6];
          if ( !this )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          this = (QuestRewardTokenAction_o *)GameObjectExtensions__GetParent(gameObject, 0);
          if ( !this )
            break;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
        if ( v7 == ++v6 )
          goto LABEL_18;
      }
LABEL_68:
      sub_2213CDC(this, method);
    }
  }
LABEL_18:
  tokenName = v3->fields.tokenName;
  if ( tokenName )
  {
    v13 = tokenName->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0;
      v15 = (unsigned int)v13;
      do
      {
        v16 = v3->fields.tokenName;
        if ( !v16 )
          goto LABEL_68;
        if ( v14 >= LODWORD(v16->max_length) )
          goto LABEL_69;
        v17 = (UnityEngine_Object_o *)v16->m_Items[v14];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v18 = v3->fields.tokenName;
          if ( !v18 )
            goto LABEL_68;
          if ( v14 >= LODWORD(v18->max_length) )
            goto LABEL_69;
          this = (QuestRewardTokenAction_o *)v18->m_Items[v14];
          if ( !this )
            goto LABEL_68;
          this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !this )
            goto LABEL_68;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        }
      }
      while ( v15 != ++v14 );
    }
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_68;
  ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v3->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__58855044;
  p_animation = &v3->fields.animation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.animation,
    (int32_t)ComponentInChildren_object__58855044,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_68;
  v27 = UnityEngine_Component__GetComponentInChildren_object__58855044(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v3->fields.simpleAnimation = (struct SimpleAnimation_o *)v27;
  p_simpleAnimation = &v3->fields.simpleAnimation;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.simpleAnimation,
    (int32_t)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  simpleAnimation = (UnityEngine_Object_o *)v3->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v39 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_68;
    this = (QuestRewardTokenAction_o *)v39->fields.m_Clip;
    if ( !this )
      goto LABEL_68;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v39, name, 0);
    if ( !this )
      goto LABEL_68;
    klass = this->klass;
    v42 = this;
    v43 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_44;
      }
      v45 = (__int64)(&klass[1]._1.element_class + 2 * *p_offset);
    }
    else
    {
LABEL_44:
      v45 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 8);
    }
    this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, double))v45)(
                                         v42,
                                         *(_QWORD *)(v45 + 8),
                                         0.0);
    v51 = *p_simpleAnimation;
    if ( !*p_simpleAnimation )
      goto LABEL_68;
    this = (QuestRewardTokenAction_o *)v51->fields.m_Clip;
    if ( !this )
      goto LABEL_68;
    v52 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v51, v52, 0);
    if ( !this )
      goto LABEL_68;
    v53 = this->klass;
    v54 = this;
    v55 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      v56 = (SimpleAnimation_State_c **)&v53->_1.interfaceOffsets->offset;
      while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v55;
        v56 += 2;
        if ( !v55 )
          goto LABEL_63;
      }
      v57 = (__int64)(&v53[1]._1.byval_arg + *(_DWORD *)v56);
    }
    else
    {
LABEL_63:
      v57 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 6);
    }
    (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, double))v57)(v54, *(_QWORD *)(v57 + 8), 0.0);
  }
  else
  {
    v46 = *p_animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v38);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v47 = *p_animation;
      if ( !*p_animation )
        goto LABEL_68;
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0);
      if ( !this )
        goto LABEL_68;
      v48 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v47, v48, 0);
      if ( !this )
        goto LABEL_68;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0);
      v49 = *p_animation;
      if ( !v49 )
        goto LABEL_68;
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v49, 0);
      if ( !this )
        goto LABEL_68;
      v50 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v49, v50, 0);
      if ( !this )
        goto LABEL_68;
      UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
    }
  }
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
    goto LABEL_68;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_596D3F8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__);
    sub_2213A60(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
    byte_596D3F8 = 1;
  }
  v5 = sub_2213CCC(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = endAct;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Action_c *v17; // x1
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x2

  if ( (byte_596D3F9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_QuestRewardTokenAction_LoadEventUIEnd__);
    sub_2213A60(&StringLiteral_6533/*"EventUI/Prefabs/80285"*/);
    byte_596D3F9 = 1;
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
      v8 = sub_221405C(v10, v17, v11, v12);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc,
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
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_QuestRewardTokenAction_LoadEventUIEnd__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6533/*"EventUI/Prefabs/80285"*/, v18, loadParallelMax, 0, 0) )
    {
      this->fields.isEventUILoad = 0;
      QuestRewardTokenAction__LoadEventUIEnd(this, 0, v21);
    }
  }
}


void QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestRewardTokenAction_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MissionNaviTransitionBoardItem_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_596D3FA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5536/*"DownloadEventUIAtlas8028500"*/);
    byte_596D3FA = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData,
      (int32_t)assetData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5536/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas,
      (int32_t)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0;
    sub_2213A04(p_eventUILoadCallbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
  }
}


void QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x0
  System_Action_o *v18; // x21

  if ( (byte_596D400 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_QuestRewardTokenAction__Play_b__25_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D400 = 1;
  }
  this->fields.endAct = end_act;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAct,
    (int32_t)end_act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7,
    v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v17 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v14, v15);
      v17 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v17->static_fields->DEFAULT_FADE_TIME;
  }
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0);
  if ( !Instance )
LABEL_10:
    sub_2213CDC(gameObject, v13);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v18, 0);
}


void QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetManager_c *v9; // x0
  int v10; // w8
  AssetData_o *eventUIAssetData; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D3FC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_6533/*"EventUI/Prefabs/80285"*/);
    byte_596D3FC = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    v9 = AssetManager_TypeInfo;
    v10 = *(&AssetManager_TypeInfo->_2.cctor_finished + 1);
    this->fields.isEventUILoad = 0;
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(v9, method, v2);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6533/*"EventUI/Prefabs/80285"*/, 0);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      AssetManager__releaseAsset_47496972(eventUIAssetData, 0);
    }
  }
  this->fields.eventUIDownloadAtlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIDownloadAtlas, 0, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUIAssetData, 0, v12, v13, v14, v15, v16, v17);
}


bool QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v11; // w21

  if ( (byte_596D3FD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D3FD = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          v11 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0;
LABEL_9:
  v11 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
void QuestRewardTokenAction__SetState(QuestRewardTokenAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596D402 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardTokenAction__setState__);
    byte_596D402 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  QuestRewardTokenAction___c_c *v8; // x0
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__24_0; // x21
  Il2CppObject *v11; // x22
  struct QuestRewardTokenAction___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  __int64 v20; // x25
  __int64 v21; // x24
  unsigned __int64 v22; // x26
  __int64 v23; // x8
  int v24; // w21
  struct QuestRewardTokenAction_StaticFields *v25; // x8
  int v26; // w21
  int v27; // w9
  int v28; // w9
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v31; // x21
  struct UISprite_array *v32; // x8
  UISprite_o *v33; // x21
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v37; // x9
  UnityEngine_Object_o *v38; // x21
  struct UILabel_array *v39; // x8
  UILabel_o *v40; // x21
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596D3FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_QuestRewardInfo___);
    sub_2213A60(&System_Comparison_QuestRewardInfo__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestRewardTokenAction_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestRewardTokenAction___c__Setup_b__24_0__);
    sub_2213A60(&QuestRewardTokenAction___c_TypeInfo);
    byte_596D3FF = 1;
  }
  v51 = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_56;
  transform = UnityEngine_Component__GetComponentInChildren_object__58855044(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_56;
  *((_BYTE *)transform + 109) = 1;
  v8 = QuestRewardTokenAction___c_TypeInfo;
  if ( !*(&QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo, v6, v7);
    v8 = QuestRewardTokenAction___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__24_0 = (System_Comparison_T__o *)static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v11, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0);
    v12 = QuestRewardTokenAction___c_TypeInfo->static_fields;
    v12->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__24_0, (int32_t)_9__24_0, v13, v14, v15, v16, v17, v18);
  }
  System_Array__Sort_object__58432120(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_56;
  if ( (int)infos->max_length >= 1 )
  {
    v20 = 4;
    v21 = -(__int64)(unsigned int)infos->max_length;
    while ( 1 )
    {
      v22 = v20 - 4;
      if ( v20 - 4 >= (unsigned __int64)LODWORD(infos->max_length) )
        break;
      v23 = *((_QWORD *)&infos->obj.klass + v20);
      if ( v23 && *(_DWORD *)(v23 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v24 = *(_DWORD *)(v23 + 20);
        if ( !*(&QuestRewardTokenAction_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo, v6, v19);
          transform = QuestRewardTokenAction_TypeInfo;
        }
        v25 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v26 = v24 - v25->TOKEN_EVENT_ID;
        v27 = *((_DWORD *)transform + 57);
        HIDWORD(v51) = v26;
        if ( v26 >= 27 )
        {
          if ( !v27 )
          {
            j_il2cpp_runtime_class_init_0(transform, v6, v19);
            v25 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v28 = v26 + v25->TOKEN_IMAGE_ID + 1;
        }
        else
        {
          if ( !v27 )
          {
            j_il2cpp_runtime_class_init_0(transform, v6, v19);
            v25 = QuestRewardTokenAction_TypeInfo->static_fields;
          }
          v28 = v25->TOKEN_IMAGE_ID + v26;
        }
        tokenSprite = this->fields.tokenSprite;
        LODWORD(v51) = v28;
        if ( tokenSprite )
        {
          max_length_low = LODWORD(tokenSprite->max_length);
          if ( (__int64)v22 < (int)max_length_low )
          {
            if ( v22 >= max_length_low )
              break;
            v31 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v20);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
            transform = (void *)UnityEngine_Object__op_Inequality(v31, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v32 = this->fields.tokenSprite;
              if ( !v32 )
                goto LABEL_56;
              if ( v22 >= LODWORD(v32->max_length) )
                break;
              v33 = (UISprite_o *)*((_QWORD *)&v32->obj.klass + v20);
              v34 = System_Int32__ToString((int32_t)&v51, 0);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v33, v34, v35);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v37 = LODWORD(tokenName->max_length);
          if ( (__int64)v22 < (int)v37 )
          {
            if ( v22 >= v37 )
              break;
            v38 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v20);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
            transform = (void *)UnityEngine_Object__op_Inequality(v38, 0, 0);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v39 = this->fields.tokenName;
              if ( !v39 )
                goto LABEL_56;
              if ( v22 >= LODWORD(v39->max_length) )
                break;
              v40 = (UILabel_o *)*((_QWORD *)&v39->obj.klass + v20);
              transform = System_Int32__ToString((int32_t)&v51 + 4, 0);
              if ( !v40 )
                goto LABEL_56;
              UILabel__set_text(v40, (System_String_o *)transform, 0);
            }
          }
        }
      }
      ++v20;
      if ( v21 + v20 == 4 )
        goto LABEL_46;
    }
    sub_2213CE4(transform);
  }
LABEL_46:
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
          (int32_t)Component_object,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        goto LABEL_52;
      }
    }
LABEL_56:
    sub_2213CDC(transform, v6);
  }
LABEL_52:
  transform = *p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_56;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
}


void QuestRewardTokenAction__Update(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_596D3F7 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestRewardTokenAction__update__);
    sub_2213A60(&CTouch_TypeInfo);
    byte_596D3F7 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method, v2);
  CTouch__process(0);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3E83E6C *)Method_CStateManager_QuestRewardTokenAction__update__);
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
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v13; // x20
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v18; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0
  UnityEngine_Animation_o *v22; // x20
  System_String_o *v23; // x0
  UnityEngine_Animation_o *v24; // x19
  System_String_o *v25; // x0
  struct SimpleAnimation_o *v26; // x19
  System_String_o *v27; // x0
  QuestRewardTokenAction_StatePlay_c *v28; // x8
  QuestRewardTokenAction_StatePlay_o *v29; // x19
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_596D404 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596D404 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.animation;
    if ( v18 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.animation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_83078544(v20, v21, 0);
        }
        v22 = that->fields.animation;
        if ( v22 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v24 = that->fields.animation;
              if ( v24 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0);
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
    sub_2213CDC(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v6->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestRewardTokenAction_StatePlay_o *)v8->fields.m_Clip;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_78552168(v8, v9, 0);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v10->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 6);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, double))v16)(
                                                 v13,
                                                 *(_QWORD *)(v16 + 8),
                                                 0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v26->fields.m_Clip;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.name + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 8);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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
  __int64 v5; // x2
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_596D405 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596D405 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)v6->fields.m_Clip;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( SimpleAnimation__IsPlaying(v6, name, 0) )
      return;
LABEL_17:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        QuestRewardTokenAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_2213CDC(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, v5);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0) )
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
    sub_2213CDC(this, that);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x2

  if ( (byte_596D406 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&CTouch_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestRewardTokenAction_StateTouchWait_update__);
    sub_2213A60(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__);
    sub_2213A60(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
    byte_596D406 = 1;
  }
  v4 = sub_2213CCC(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 16) = that;
  v13 = v4 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14, v15);
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
          v16 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_2213A78(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v18, v19);
            v21 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
          v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v4,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v23, 0);
            isTouchPush = *(UnityEngine_GameObject_o **)v13;
            if ( *(_QWORD *)v13 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v24);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(isTouchPush, v6);
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
    sub_2213CDC(this, method);
  ActionExtensions__Call(that->fields.endAct, 0);
}


void QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D407 & 1) == 0 )
  {
    sub_2213A60(&QuestRewardTokenAction___c_TypeInfo);
    byte_596D407 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestRewardTokenAction___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, x);
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