void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B131BB & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRewardTokenAction_TypeInfo, v1, v2);
    byte_4B131BB = 1;
  }
  *QuestRewardTokenAction_TypeInfo->static_fields = (struct QuestRewardTokenAction_StaticFields)0x59B0DD404C90D48LL;
}


void __fastcall QuestRewardTokenAction___ctor(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardTokenAction__Awake(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_T__o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  CStateManager_T__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  Il2CppObject *v34; // x22
  CStateManager_T__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x21
  const MethodInfo *v40; // x2

  if ( (byte_4B131AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardTokenAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestRewardTokenAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestRewardTokenAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestRewardTokenAction_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestRewardTokenAction_StatePlay_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v13, v14);
    byte_4B131AE = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v16 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestRewardTokenAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v16,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v27 = (Il2CppObject *)sub_1BCAA2C(QuestRewardTokenAction_StateNone_TypeInfo, v24, v25, v26);
    System_Object___ctor(v27, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v27,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardTokenAction__add__);
    v30 = (CStateManager_T__o *)*p_fsm;
    v34 = (Il2CppObject *)sub_1BCAA2C(QuestRewardTokenAction_StatePlay_TypeInfo, v31, v32, v33);
    System_Object___ctor(v34, 0LL);
    if ( !v30
      || (CStateManager_object___add(
            v30,
            1,
            (IState_T__o *)v34,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardTokenAction__add__),
          v35 = (CStateManager_T__o *)*p_fsm,
          v39 = (Il2CppObject *)sub_1BCAA2C(QuestRewardTokenAction_StateTouchWait_TypeInfo, v36, v37, v38),
          System_Object___ctor(v39, 0LL),
          !v35) )
    {
LABEL_8:
      sub_1BCAA3C(v28, v29);
    }
    CStateManager_object___add(
      v35,
      2,
      (IState_T__o *)v39,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v40);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4B131B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, assetData, name);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v6, v7);
    this = (QuestRewardTokenAction_o *)sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    byte_4B131B3 = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__49237568(
                                         assetData,
                                         name,
                                         (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1BCAA3C(this, assetData);
  }
  return 0LL;
}


// attributes: thunk
void __fastcall QuestRewardTokenAction__DestroyData(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction__ReleaseEventUI(this, method);
}


int32_t __fastcall QuestRewardTokenAction__GetState(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardTokenAction_o *v3; // x19
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  v3 = this;
  if ( (byte_4B131B9 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_1BCA7E0(&Method_CStateManager_QuestRewardTokenAction__getState__, method, v2);
    byte_4B131B9 = 1;
  }
  fsm = v3->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRewardTokenAction_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v11; // x21
  __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20
  struct UISprite_array *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v17; // x21
  __int64 v18; // x22
  UnityEngine_Object_o *v19; // x20
  struct UILabel_array *v20; // x8
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  UnityEngine_Animation_o **p_animation; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v39; // x20
  System_String_o *v40; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v42; // x20
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  UnityEngine_Animation_o *v46; // x21
  UnityEngine_Animation_o *v47; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v49; // x20
  System_String_o *v50; // x0
  struct SimpleAnimation_o *v51; // x20
  System_String_o *v52; // x0
  QuestRewardTokenAction_c *v53; // x8
  QuestRewardTokenAction_o *v54; // x20
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0

  v3 = this;
  if ( (byte_4B131B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    this = (QuestRewardTokenAction_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v8, v9);
    byte_4B131B6 = 1;
  }
  tokenSprite = v3->fields.tokenSprite;
  if ( tokenSprite && (int)*(_QWORD *)&tokenSprite->max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)*(_QWORD *)&tokenSprite->max_length - 1LL;
    while ( v11 < tokenSprite->max_length )
    {
      v13 = (UnityEngine_Object_o *)tokenSprite->m_Items[v11];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v14 = v3->fields.tokenSprite;
        if ( !v14 )
          goto LABEL_70;
        if ( v11 >= v14->max_length )
          break;
        this = (QuestRewardTokenAction_o *)v14->m_Items[v11];
        if ( !this )
          goto LABEL_70;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v12 == v11 )
        goto LABEL_19;
      tokenSprite = v3->fields.tokenSprite;
      ++v11;
      if ( !tokenSprite )
        goto LABEL_70;
    }
LABEL_71:
    sub_1BCAA44(this, method);
  }
LABEL_19:
  tokenName = v3->fields.tokenName;
  if ( tokenName && (int)*(_QWORD *)&tokenName->max_length >= 1 )
  {
    v17 = 0LL;
    v18 = (unsigned int)*(_QWORD *)&tokenName->max_length - 1LL;
    while ( v17 < tokenName->max_length )
    {
      v19 = (UnityEngine_Object_o *)tokenName->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = v3->fields.tokenName;
        if ( !v20 )
          goto LABEL_70;
        if ( v17 >= v20->max_length )
          goto LABEL_71;
        this = (QuestRewardTokenAction_o *)v20->m_Items[v17];
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v18 == v17 )
        goto LABEL_34;
      tokenName = v3->fields.tokenName;
      ++v17;
      if ( !tokenName )
        goto LABEL_70;
    }
    goto LABEL_71;
  }
LABEL_34:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_70;
  ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v3->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__49322392;
  p_animation = &v3->fields.animation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.animation,
    (int64_t)ComponentInChildren_object__49322392,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_70;
  v29 = UnityEngine_Component__GetComponentInChildren_object__49322392(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v3->fields.simpleAnimation = (struct SimpleAnimation_o *)v29;
  p_simpleAnimation = &v3->fields.simpleAnimation;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.simpleAnimation, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  simpleAnimation = (UnityEngine_Object_o *)v3->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v46 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_68;
    v47 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v47, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v49 = *p_animation;
          if ( v49 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v49, 0LL);
            if ( this )
            {
              v50 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v49, v50, 0LL);
              if ( this )
              {
                UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
                goto LABEL_68;
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_1BCAA3C(this, method);
  }
  v39 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v39[1].monitor;
  if ( !this )
    goto LABEL_70;
  v40 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v39, v40, 0LL);
  if ( !this )
    goto LABEL_70;
  klass = this->klass;
  v42 = this;
  v43 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_46;
    }
    v45 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_46:
    v45 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v45)(
                                       v42,
                                       *(_QWORD *)(v45 + 8),
                                       0.0);
  v51 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v51[1].monitor;
  if ( !this )
    goto LABEL_70;
  v52 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v51, v52, 0LL);
  if ( !this )
    goto LABEL_70;
  v53 = this->klass;
  v54 = this;
  v55 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v56 = &v53->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v56 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_65;
    }
    v57 = (__int64)(&v53[1]._1.byval_arg.bits + 4 * *v56);
  }
  else
  {
LABEL_65:
    v57 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v57)(v54, *(_QWORD *)(v57 + 8), 0.0);
LABEL_68:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x3

  if ( (byte_4B131B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAct, method);
    sub_1BCA7E0(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__, v6, v7);
    sub_1BCA7E0(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo, v8, v9);
    byte_4B131B0 = 1;
  }
  v10 = sub_1BCAA2C(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo, endAct, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)endAct, v13, v14, v15, v16, v17, v18);
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v22, 1, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  AssetData_o *eventUIAssetData; // x0
  long double v16; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_c *v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1
  const MethodInfo *v31; // x2

  if ( (byte_4B131B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v11, v12);
    sub_1BCA7E0(&StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v13, v14);
    byte_4B131B1 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v18 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v18 )
  {
    v25 = System_Action_TypeInfo;
    if ( (System_Action_c *)v18->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v18, (System_Action_c *)v18->klass != v25) )
    {
      v16 = sub_1BCACFC(v18);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v16);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)this,
      Method_QuestRewardTokenAction_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v29, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      QuestRewardTokenAction__LoadEventUIEnd(this, 0LL, v31);
    }
  }
}


void __fastcall QuestRewardTokenAction__LoadEventUIEnd(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestRewardTokenAction_o *v10; // x0
  const MethodInfo *v11; // x3
  struct UIAtlas_o *UIAtlasFromAssetData; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *p_eventUILoadCallbackFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *eventUILoadCallbackFunc; // t1

  if ( (byte_4B131B2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5453/*"DownloadEventUIAtlas8028500"*/, assetData, method);
    byte_4B131B2 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUIAssetData,
      (int64_t)assetData,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    UIAtlasFromAssetData = QuestRewardTokenAction__CreateUIAtlasFromAssetData(
                             v10,
                             assetData,
                             (System_String_o *)StringLiteral_5453/*"DownloadEventUIAtlas8028500"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas,
      (int64_t)UIAtlasFromAssetData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  eventUILoadCallbackFunc = this->fields.eventUILoadCallbackFunc;
  p_eventUILoadCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc;
  v20 = eventUILoadCallbackFunc;
  if ( eventUILoadCallbackFunc )
  {
    p_eventUILoadCallbackFunc->klass = 0LL;
    sub_1BCA784(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
      v20->fields.original_method_info,
      *(_QWORD *)&v20->fields.extra_arg);
  }
}


void __fastcall QuestRewardTokenAction__Play(
        QuestRewardTokenAction_o *this,
        System_Action_o *end_act,
        float fade_in_time,
        const MethodInfo *method)
{
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v24; // x0
  System_Action_o *v25; // x21

  if ( (byte_4B131B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, end_act, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_QuestRewardTokenAction__Play_b__25_0__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B131B8 = 1;
  }
  this->fields.endAct = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v20);
      v24 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v24->static_fields->DEFAULT_FADE_TIME;
  }
  v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_1BCAA3C(gameObject, v19);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v25, 0LL);
}


void __fastcall QuestRewardTokenAction__ReleaseEventUI(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *eventUIAssetData; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B131B4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6349/*"EventUI/Prefabs/80285"*/, v9, v10);
    byte_4B131B4 = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6349/*"EventUI/Prefabs/80285"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAsset_38505704(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v12, v13, v14, v15, v16, v17);
}


bool __fastcall QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_String_o *v4; // x20
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  v4 = spriteName;
  if ( (byte_4B131B5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, sprite, spriteName);
    byte_4B131B5 = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(v4, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, v4, 0LL);
        if ( IsNullOrEmpty )
        {
          if ( sprite )
          {
            UISprite__set_atlas(sprite, this->fields.eventUIDownloadAtlas, 0LL);
            goto LABEL_9;
          }
        }
        else if ( sprite )
        {
          v4 = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1BCAA3C(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  v4 = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, v4, 0LL);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardTokenAction__SetState(
        QuestRewardTokenAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B131BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardTokenAction__setState__, *(_QWORD *)&state, method);
    byte_4B131BA = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *transform; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  QuestRewardTokenAction___c_c *v25; // x0
  System_Comparison_T__o *_9__24_0; // x21
  Il2CppObject *v27; // x22
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x9
  int v38; // w21
  uint32_t cctor_finished; // w8
  struct QuestRewardTokenAction_StaticFields *v40; // x9
  int v41; // w21
  int32_t TOKEN_IMAGE_ID; // w8
  int v43; // w9
  unsigned __int64 v44; // x26
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v47; // x21
  struct UISprite_array *v48; // x8
  UISprite_o *v49; // x21
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v53; // x9
  UnityEngine_Object_o *v54; // x21
  struct UILabel_array *v55; // x8
  UILabel_o *v56; // x21
  unsigned __int64 v57; // x9
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B131B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_QuestRewardInfo___, infos, method);
    sub_1BCA7E0(&System_Comparison_QuestRewardInfo__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestRewardTokenAction_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_QuestRewardTokenAction___c__Setup_b__24_0__, v17, v18);
    sub_1BCA7E0(&QuestRewardTokenAction___c_TypeInfo, v19, v20);
    byte_4B131B7 = 1;
  }
  v68 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  transform = UnityEngine_Component__GetComponentInChildren_object__49322392(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_54;
  *((_BYTE *)transform + 109) = 1;
  v25 = QuestRewardTokenAction___c_TypeInfo;
  if ( !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo, v22);
    v25 = QuestRewardTokenAction___c_TypeInfo;
  }
  _9__24_0 = (System_Comparison_T__o *)v25->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, v22);
      v25 = QuestRewardTokenAction___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestRewardInfo__TypeInfo, v22, v23, v24);
    System_Comparison_object____ctor(_9__24_0, v27, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0LL);
    static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
      (int64_t)_9__24_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  System_Array__Sort_object__49153980(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_54;
  if ( (int)*(_QWORD *)&infos->max_length >= 1 )
  {
    v35 = 1LL - (unsigned int)*(_QWORD *)&infos->max_length;
    v36 = 4LL;
    while ( 1 )
    {
      v37 = *((_QWORD *)&infos->obj.klass + v36);
      if ( v37 && *(_DWORD *)(v37 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v38 = *(_DWORD *)(v37 + 20);
        cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo, v22);
          transform = QuestRewardTokenAction_TypeInfo;
          cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        }
        v40 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v41 = v38 - v40->TOKEN_EVENT_ID;
        HIDWORD(v68) = v41;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(transform, v22);
          v40 = QuestRewardTokenAction_TypeInfo->static_fields;
        }
        TOKEN_IMAGE_ID = v40->TOKEN_IMAGE_ID;
        if ( v41 <= 26 )
          v43 = v41;
        else
          v43 = v41 + 1;
        v44 = v36 - 4;
        LODWORD(v68) = v43 + TOKEN_IMAGE_ID;
        tokenSprite = this->fields.tokenSprite;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v44 < (int)max_length )
          {
            if ( v44 >= max_length )
              goto LABEL_44;
            v47 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v36);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
            transform = (void *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v48 = this->fields.tokenSprite;
              if ( !v48 )
                goto LABEL_54;
              if ( v44 >= v48->max_length )
                goto LABEL_44;
              v49 = (UISprite_o *)*((_QWORD *)&v48->obj.klass + v36);
              v50 = System_Int32__ToString((int32_t)&v68, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v49, v50, v51);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v53 = tokenName->max_length;
          if ( (__int64)v44 < (int)v53 )
          {
            if ( v44 >= v53 )
              goto LABEL_44;
            v54 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v36);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
            transform = (void *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v55 = this->fields.tokenName;
              if ( !v55 )
                goto LABEL_54;
              if ( v44 >= v55->max_length )
                goto LABEL_44;
              v56 = (UILabel_o *)*((_QWORD *)&v55->obj.klass + v36);
              transform = System_Int32__ToString((int32_t)&v68 + 4, 0LL);
              if ( !v56 )
                goto LABEL_54;
              UILabel__set_text(v56, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      if ( v35 + v36 == 4 )
        break;
      v57 = v36 - 3;
      ++v36;
      if ( v57 >= infos->max_length )
LABEL_44:
        sub_1BCAA44(transform, v22);
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
          (int64_t)Component_object,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
        goto LABEL_51;
      }
    }
LABEL_54:
    sub_1BCAA3C(transform, v22);
  }
LABEL_51:
  transform = *p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_54;
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  if ( !transform )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__Update(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B131AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestRewardTokenAction__update__, method, v2);
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B131AF = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestRewardTokenAction__update__);
}


void __fastcall QuestRewardTokenAction___Play_b__25_0(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestRewardTokenAction__SetState(this, 1, v2);
}


void __fastcall QuestRewardTokenAction_StateNone___ctor(
        QuestRewardTokenAction_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateNone__begin(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__end(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateNone__update(
        QuestRewardTokenAction_StateNone_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay___ctor(
        QuestRewardTokenAction_StatePlay_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StatePlay__begin(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *v8; // x0
  struct SimpleAnimation_o *v9; // x20
  System_String_o *v10; // x0
  struct SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v19; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0
  UnityEngine_Animation_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_Animation_o *v25; // x19
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x19
  System_String_o *v28; // x0
  QuestRewardTokenAction_StatePlay_c *v29; // x8
  QuestRewardTokenAction_StatePlay_o *v30; // x19
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B131BC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B131BC = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v19 = that->fields.animation;
    if ( v19 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v19, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v21 = that->fields.animation;
          if ( !v21 )
            goto LABEL_49;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_49;
          v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(v21, v22, 0LL);
        }
        v23 = that->fields.animation;
        if ( v23 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v23, v24, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v25 = that->fields.animation;
              if ( v25 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v25, 0LL);
                if ( this )
                {
                  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v25, v26, 0LL);
                  if ( this )
                  {
                    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 1.0, 0LL);
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
    sub_1BCAA3C(this, that);
  }
  v7 = that->fields.simpleAnimation;
  if ( !v7 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v7[1].monitor;
  if ( !this )
    goto LABEL_49;
  v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v7, v8, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = that->fields.simpleAnimation;
    if ( !v9 )
      goto LABEL_49;
    this = (QuestRewardTokenAction_StatePlay_o *)v9[1].monitor;
    if ( !this )
      goto LABEL_49;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_64539336(v9, v10, 0LL);
  }
  v11 = that->fields.simpleAnimation;
  if ( !v11 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v11[1].monitor;
  if ( !this )
    goto LABEL_49;
  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v11, v12, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v14 = this;
  v15 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_20;
    }
    v17 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v17 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v17)(
                                                 v14,
                                                 *(_QWORD *)(v17 + 8),
                                                 0.0);
  v27 = that->fields.simpleAnimation;
  if ( !v27 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v27[1].monitor;
  if ( !this )
    goto LABEL_49;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v27, v28, 0LL);
  if ( !this )
    goto LABEL_49;
  v29 = this->klass;
  v30 = this;
  v31 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_46;
    }
    v33 = (__int64)(&v29[1]._1.namespaze + 2 * *v32);
  }
  else
  {
LABEL_46:
    v33 = sub_1C1C7C0(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 1.0);
}


void __fastcall QuestRewardTokenAction_StatePlay__end(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StatePlay__update(
        QuestRewardTokenAction_StatePlay_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v7; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B131BD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1BCA7E0(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v4,
                                                   v5);
    byte_4B131BD = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = that->fields.simpleAnimation;
    if ( !v7 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)v7[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v7, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, v12);
      return;
    }
LABEL_21:
    sub_1BCAA3C(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = that->fields.animation;
    if ( !v10 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_21;
    v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v10, v11, 0LL) )
      return;
    goto LABEL_17;
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___ctor(
        QuestRewardTokenAction_StateTouchWait_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__begin(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  if ( !that
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)that->fields.screenTouchInfo) == 0LL
    || (this = (QuestRewardTokenAction_StateTouchWait_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL)) == 0LL )
  {
    sub_1BCAA3C(this, that);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait__end(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestRewardTokenAction_StateTouchWait__update(
        QuestRewardTokenAction_StateTouchWait_o *this,
        QuestRewardTokenAction_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x19
  __int64 v27; // x1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x2

  if ( (byte_4B131BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&CTouch_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_QuestRewardTokenAction_StateTouchWait_update__, v11, v12);
    sub_1BCA7E0(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v13, v14);
    sub_1BCA7E0(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v15, v16);
    byte_4B131BE = 1;
  }
  v17 = sub_1BCAA2C(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = that;
  v26 = v17 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)that, v20, v21, v22, v23, v24, v25);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v27);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v26 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v26 + 112LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v28 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BCA7F8(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v34 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
            v34 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v17,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v26;
            if ( *(_QWORD *)v26 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v37);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(isTouchPush, v19);
  }
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___ctor(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0___update_b__0(
        QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  struct QuestRewardTokenAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BCAA3C(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B131BF & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRewardTokenAction___c_TypeInfo, v1, v2);
    byte_4B131BF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestRewardTokenAction___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestRewardTokenAction___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestRewardTokenAction___c___ctor(QuestRewardTokenAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRewardTokenAction___c___Setup_b__24_0(
        QuestRewardTokenAction___c_o *this,
        QuestRewardInfo_o *x,
        QuestRewardInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BCAA3C(this, x);
  return x->fields.objectId - y->fields.objectId;
}


void __fastcall QuestRewardTokenAction___c__DisplayClass17_0___ctor(
        QuestRewardTokenAction___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestRewardTokenAction___c__DisplayClass17_0___LoadData_b__0(
        QuestRewardTokenAction___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *endAct; // x0

  endAct = this->fields.endAct;
  if ( endAct )
    ActionExtensions__Call(endAct, 0LL);
}