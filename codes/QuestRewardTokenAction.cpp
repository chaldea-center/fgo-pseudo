void __fastcall QuestRewardTokenAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1EED5 & 1) == 0 )
  {
    sub_1C3B764(&QuestRewardTokenAction_TypeInfo, v1);
    byte_4C1EED5 = 1;
  }
  *QuestRewardTokenAction_TypeInfo->static_fields = (struct QuestRewardTokenAction_StaticFields)0x59B0DD404C90D48LL;
}


void __fastcall QuestRewardTokenAction___ctor(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestRewardTokenAction__Awake(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CStateManager_QuestRewardTokenAction__o **p_fsm; // x20
  CStateManager_T__o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x20
  Il2CppObject *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4C1EEC8 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardTokenAction___ctor__, method);
    sub_1C3B764(&Method_CStateManager_QuestRewardTokenAction__add__, v3);
    sub_1C3B764(&CStateManager_QuestRewardTokenAction__TypeInfo, v4);
    sub_1C3B764(&QuestRewardTokenAction_StateNone_TypeInfo, v5);
    sub_1C3B764(&QuestRewardTokenAction_StatePlay_TypeInfo, v6);
    sub_1C3B764(&QuestRewardTokenAction_StateTouchWait_TypeInfo, v7);
    byte_4C1EEC8 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v9 = (CStateManager_T__o *)sub_1C3B9B0(CStateManager_QuestRewardTokenAction__TypeInfo);
    CStateManager_object____ctor(
      v9,
      (Il2CppObject *)this,
      3,
      (const MethodInfo_3225B48 *)Method_CStateManager_QuestRewardTokenAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestRewardTokenAction__o *)v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v17 = (Il2CppObject *)sub_1C3B9B0(QuestRewardTokenAction_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !fsm )
      goto LABEL_8;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardTokenAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (Il2CppObject *)sub_1C3B9B0(QuestRewardTokenAction_StatePlay_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20
      || (CStateManager_object___add(
            v20,
            1,
            (IState_T__o *)v21,
            (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardTokenAction__add__),
          v22 = (CStateManager_T__o *)*p_fsm,
          v23 = (Il2CppObject *)sub_1C3B9B0(QuestRewardTokenAction_StateTouchWait_TypeInfo),
          System_Object___ctor(v23, 0LL),
          !v22) )
    {
LABEL_8:
      sub_1C3B9C0(v18, v19);
    }
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_3225BF0 *)Method_CStateManager_QuestRewardTokenAction__add__);
    QuestRewardTokenAction__SetState(this, 0, v24);
  }
}


UIAtlas_o *__fastcall QuestRewardTokenAction__CreateUIAtlasFromAssetData(
        QuestRewardTokenAction_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *ObjectList_object; // x0

  if ( (byte_4C1EECD & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObjectList_GameObject___, assetData);
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, v6);
    this = (QuestRewardTokenAction_o *)sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    byte_4C1EECD = 1;
  }
  if ( !assetData )
    goto LABEL_9;
  ObjectList_object = AssetData__GetObjectList_object_(
                        assetData,
                        (const MethodInfo_2FD1E84 *)Method_AssetData_GetObjectList_GameObject___);
  if ( ObjectList_object && *(_QWORD *)&ObjectList_object->max_length )
  {
    this = (QuestRewardTokenAction_o *)AssetData__GetObject_object__50142412(
                                         assetData,
                                         name,
                                         (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( this )
      return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)this,
                            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
LABEL_9:
    sub_1C3B9C0(this, assetData);
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
  QuestRewardTokenAction_o *v2; // x19
  struct CStateManager_QuestRewardTokenAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4C1EED3 & 1) == 0 )
  {
    this = (QuestRewardTokenAction_o *)sub_1C3B764(&Method_CStateManager_QuestRewardTokenAction__getState__, method);
    byte_4C1EED3 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_1C3B9C0(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestRewardTokenAction__Init(QuestRewardTokenAction_o *this, const MethodInfo *method)
{
  QuestRewardTokenAction_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 v7; // x21
  __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  struct UISprite_array *v10; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x22
  UnityEngine_Object_o *v15; // x20
  struct UILabel_array *v16; // x8
  Il2CppObject *ComponentInChildren_object__50228848; // x0
  UnityEngine_Animation_o **p_animation; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x0
  struct SimpleAnimation_o **p_simpleAnimation; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_o *simpleAnimation; // x22
  struct SimpleAnimation_o *v34; // x20
  System_String_o *v35; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_o *v37; // x20
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  UnityEngine_Animation_o *v41; // x21
  UnityEngine_Animation_o *v42; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v44; // x20
  System_String_o *v45; // x0
  struct SimpleAnimation_o *v46; // x20
  System_String_o *v47; // x0
  QuestRewardTokenAction_c *v48; // x8
  QuestRewardTokenAction_o *v49; // x20
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  v2 = this;
  if ( (byte_4C1EED0 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_Animation___, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    this = (QuestRewardTokenAction_o *)sub_1C3B764(&SimpleAnimation_State_TypeInfo, v5);
    byte_4C1EED0 = 1;
  }
  tokenSprite = v2->fields.tokenSprite;
  if ( tokenSprite && (int)*(_QWORD *)&tokenSprite->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&tokenSprite->max_length - 1LL;
    while ( v7 < tokenSprite->max_length )
    {
      v9 = (UnityEngine_Object_o *)tokenSprite->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v10 = v2->fields.tokenSprite;
        if ( !v10 )
          goto LABEL_70;
        if ( v7 >= v10->max_length )
          break;
        this = (QuestRewardTokenAction_o *)v10->m_Items[v7];
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
      if ( v8 == v7 )
        goto LABEL_19;
      tokenSprite = v2->fields.tokenSprite;
      ++v7;
      if ( !tokenSprite )
        goto LABEL_70;
    }
LABEL_71:
    sub_1C3B9C8(this, method);
  }
LABEL_19:
  tokenName = v2->fields.tokenName;
  if ( tokenName && (int)*(_QWORD *)&tokenName->max_length >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)*(_QWORD *)&tokenName->max_length - 1LL;
    while ( v13 < tokenName->max_length )
    {
      v15 = (UnityEngine_Object_o *)tokenName->m_Items[v13];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v16 = v2->fields.tokenName;
        if ( !v16 )
          goto LABEL_70;
        if ( v13 >= v16->max_length )
          goto LABEL_71;
        this = (QuestRewardTokenAction_o *)v16->m_Items[v13];
        if ( !this )
          goto LABEL_70;
        this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_70;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      if ( v14 == v13 )
        goto LABEL_34;
      tokenName = v2->fields.tokenName;
      ++v13;
      if ( !tokenName )
        goto LABEL_70;
    }
    goto LABEL_71;
  }
LABEL_34:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_70;
  ComponentInChildren_object__50228848 = UnityEngine_Component__GetComponentInChildren_object__50228848(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
  v2->fields.animation = (struct UnityEngine_Animation_o *)ComponentInChildren_object__50228848;
  p_animation = &v2->fields.animation;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v2->fields.animation,
    (int64_t)ComponentInChildren_object__50228848,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_70;
  v25 = UnityEngine_Component__GetComponentInChildren_object__50228848(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_SimpleAnimation___);
  v2->fields.simpleAnimation = (struct SimpleAnimation_o *)v25;
  p_simpleAnimation = &v2->fields.simpleAnimation;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.simpleAnimation, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  simpleAnimation = (UnityEngine_Object_o *)v2->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v41 = *p_animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_68;
    v42 = *p_animation;
    if ( *p_animation )
    {
      this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(*p_animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v42, name, 0LL);
        if ( this )
        {
          UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
          v44 = *p_animation;
          if ( v44 )
          {
            this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_clip(v44, 0LL);
            if ( this )
            {
              v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
              this = (QuestRewardTokenAction_o *)UnityEngine_Animation__get_Item(v44, v45, 0LL);
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
    sub_1C3B9C0(this, method);
  }
  v34 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v34[1].monitor;
  if ( !this )
    goto LABEL_70;
  v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v34, v35, 0LL);
  if ( !this )
    goto LABEL_70;
  klass = this->klass;
  v37 = this;
  v38 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_46;
    }
    v40 = (__int64)(&klass[1]._1.castClass + 2 * *p_offset);
  }
  else
  {
LABEL_46:
    v40 = sub_1C8D744(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  this = (QuestRewardTokenAction_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v40)(
                                       v37,
                                       *(_QWORD *)(v40 + 8),
                                       0.0);
  v46 = *p_simpleAnimation;
  if ( !*p_simpleAnimation )
    goto LABEL_70;
  this = (QuestRewardTokenAction_o *)v46[1].monitor;
  if ( !this )
    goto LABEL_70;
  v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_o *)SimpleAnimation__get_Item(v46, v47, 0LL);
  if ( !this )
    goto LABEL_70;
  v48 = this->klass;
  v49 = this;
  v50 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v51 = &v48->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v51 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_65;
    }
    v52 = (__int64)(&v48[1]._1.byval_arg.bits + 4 * *v51);
  }
  else
  {
LABEL_65:
    v52 = sub_1C8D744(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_o *, _QWORD, float))v52)(v49, *(_QWORD *)(v52 + 8), 0.0);
LABEL_68:
  this = (QuestRewardTokenAction_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !this )
    goto LABEL_70;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall QuestRewardTokenAction__LoadData(
        QuestRewardTokenAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x3

  if ( (byte_4C1EECA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, endAct);
    sub_1C3B764(&Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__, v5);
    sub_1C3B764(&QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo, v6);
    byte_4C1EECA = 1;
  }
  v7 = sub_1C3B9B0(QuestRewardTokenAction___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  *(_QWORD *)(v7 + 16) = endAct;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)endAct, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_QuestRewardTokenAction___c__DisplayClass17_0__LoadData_b__0__,
    0LL);
  QuestRewardTokenAction__LoadEventUI(this, v16, 1, v17);
}


void __fastcall QuestRewardTokenAction__LoadEventUI(
        QuestRewardTokenAction_o *this,
        System_Action_o *callback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *eventUIAssetData; // x0
  long double v12; // q0
  struct System_Action_o **p_eventUILoadCallbackFunc; // x22
  System_Delegate_o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_c *v21; // x1
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4C1EECB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&AssetManager_TypeInfo, v7);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1C3B764(&Method_QuestRewardTokenAction_LoadEventUIEnd__, v9);
    sub_1C3B764(&StringLiteral_6391/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v10);
    byte_4C1EECB = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( eventUIAssetData && !AssetData__get_IsEmpty(eventUIAssetData, 0LL) )
    goto LABEL_9;
  p_eventUILoadCallbackFunc = &this->fields.eventUILoadCallbackFunc;
  v14 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.eventUILoadCallbackFunc,
          (System_Delegate_o *)callback,
          0LL);
  if ( v14 )
  {
    v21 = System_Action_TypeInfo;
    if ( (System_Action_c *)v14->klass != System_Action_TypeInfo
      || (*p_eventUILoadCallbackFunc = (struct System_Action_o *)v14, (System_Action_c *)v14->klass != v21) )
    {
      v12 = sub_1C3BC80(v14);
LABEL_9:
      if ( callback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))callback->fields.m_target)(
          callback->fields.original_method_info,
          *(_QWORD *)&callback->fields.extra_arg,
          v12);
      return;
    }
  }
  else
  {
    *p_eventUILoadCallbackFunc = 0LL;
  }
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.eventUILoadCallbackFunc,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 1;
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_QuestRewardTokenAction_LoadEventUIEnd__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6391/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v22, loadParallelMax, 0LL) )
    {
      this->fields.isEventUILoad = 0;
      QuestRewardTokenAction__LoadEventUIEnd(this, 0LL, v23);
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

  if ( (byte_4C1EECC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_5479/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/, assetData);
    byte_4C1EECC = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    this->fields.eventUIAssetData = assetData;
    sub_1C3B708(
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
                             (System_String_o *)StringLiteral_5479/*"EVENT_CONQUEST_POS_ITEM_FORMAT"*/,
                             v11);
    this->fields.eventUIDownloadAtlas = UIAtlasFromAssetData;
    sub_1C3B708(
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
    sub_1C3B708(p_eventUILoadCallbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v18; // x0
  System_Action_o *v19; // x21

  if ( (byte_4C1EED2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, end_act);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v12);
    sub_1C3B764(&Method_QuestRewardTokenAction__Play_b__25_0__, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4C1EED2 = 1;
  }
  this->fields.endAct = end_act;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.endAct, (int64_t)end_act, (int64_t)method, v4, v5, v6, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( fade_in_time <= 0.0 )
  {
    v18 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v18 = AvalonSceneManager_TypeInfo;
    }
    fade_in_time = v18->static_fields->DEFAULT_FADE_TIME;
  }
  v19 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_QuestRewardTokenAction__Play_b__25_0__, 0LL);
  if ( !Instance )
LABEL_10:
    sub_1C3B9C0(gameObject, v16);
  CommonUI__maskFadein((CommonUI_o *)Instance, fade_in_time, v19, 0LL);
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
  AssetData_o *eventUIAssetData; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1EECE & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_6391/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, v9);
    byte_4C1EECE = 1;
  }
  if ( this->fields.isEventUILoad )
  {
    this->fields.isEventUILoad = 0;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_6391/*"FORTUNE_BONUS_RESULT_DAY_FORMAT"*/, 0LL);
  }
  else
  {
    eventUIAssetData = this->fields.eventUIAssetData;
    if ( eventUIAssetData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_39213104(eventUIAssetData, 0LL);
    }
  }
  this->fields.eventUIDownloadAtlas = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventUIDownloadAtlas, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.eventUIAssetData = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventUIAssetData, 0LL, v11, v12, v13, v14, v15, v16);
}


bool __fastcall QuestRewardTokenAction__SetEventUI(
        QuestRewardTokenAction_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UIAtlas_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *eventUIDownloadAtlas; // x22
  bool v10; // w21

  if ( (byte_4C1EECF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, sprite);
    byte_4C1EECF = 1;
  }
  IsNullOrEmpty = (UIAtlas_o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    eventUIDownloadAtlas = (UnityEngine_Object_o *)this->fields.eventUIDownloadAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UIAtlas_o *)UnityEngine_Object__op_Equality(eventUIDownloadAtlas, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = this->fields.eventUIDownloadAtlas;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = (UIAtlas_o *)UIAtlas__GetSprite(IsNullOrEmpty, spriteName, 0LL);
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
          spriteName = 0LL;
          v10 = 0;
          goto LABEL_10;
        }
      }
LABEL_17:
      sub_1C3B9C0(IsNullOrEmpty, v8);
    }
  }
  if ( !sprite )
    goto LABEL_17;
  spriteName = 0LL;
LABEL_9:
  v10 = 1;
LABEL_10:
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRewardTokenAction__SetState(
        QuestRewardTokenAction_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C1EED4 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardTokenAction__setState__, *(_QWORD *)&state);
    byte_4C1EED4 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C3B9C0(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3225C7C *)Method_CStateManager_QuestRewardTokenAction__setState__);
}


void __fastcall QuestRewardTokenAction__Setup(
        QuestRewardTokenAction_o *this,
        QuestRewardInfo_array *infos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *transform; // x0
  __int64 v14; // x1
  QuestRewardTokenAction___c_c *v15; // x0
  System_Comparison_T__o *_9__24_0; // x21
  Il2CppObject *v17; // x22
  struct QuestRewardTokenAction___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x24
  __int64 v26; // x25
  __int64 v27; // x9
  int v28; // w21
  uint32_t cctor_finished; // w8
  struct QuestRewardTokenAction_StaticFields *v30; // x9
  int v31; // w21
  int32_t TOKEN_IMAGE_ID; // w8
  int v33; // w9
  unsigned __int64 v34; // x26
  struct UISprite_array *tokenSprite; // x8
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v37; // x21
  struct UISprite_array *v38; // x8
  UISprite_o *v39; // x21
  System_String_o *v40; // x0
  const MethodInfo *v41; // x3
  struct UILabel_array *tokenName; // x8
  unsigned __int64 v43; // x9
  UnityEngine_Object_o *v44; // x21
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x21
  unsigned __int64 v47; // x9
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  Il2CppObject *Instance; // x21
  Il2CppObject *Component_object; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C1EED1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Sort_QuestRewardInfo___, infos);
    sub_1C3B764(&System_Comparison_QuestRewardInfo__TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&QuestRewardTokenAction_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_QuestRewardTokenAction___c__Setup_b__24_0__, v11);
    sub_1C3B764(&QuestRewardTokenAction___c_TypeInfo, v12);
    byte_4C1EED1 = 1;
  }
  v58 = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_54;
  transform = UnityEngine_Component__GetComponentInChildren_object__50228848(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_CommonEffectComponent___);
  if ( !transform )
    goto LABEL_54;
  *((_BYTE *)transform + 109) = 1;
  v15 = QuestRewardTokenAction___c_TypeInfo;
  if ( !QuestRewardTokenAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRewardTokenAction___c_TypeInfo);
    v15 = QuestRewardTokenAction___c_TypeInfo;
  }
  _9__24_0 = (System_Comparison_T__o *)v15->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = QuestRewardTokenAction___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__24_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_QuestRewardInfo__TypeInfo);
    System_Comparison_object____ctor(_9__24_0, v17, Method_QuestRewardTokenAction___c__Setup_b__24_0__, 0LL);
    static_fields = QuestRewardTokenAction___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Comparison_QuestRewardInfo__o *)_9__24_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
      (int64_t)_9__24_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  System_Array__Sort_object__50059320(
    (System_Object_array *)infos,
    _9__24_0,
    (const MethodInfo_2FBD838 *)Method_System_Array_Sort_QuestRewardInfo___);
  if ( !infos )
    goto LABEL_54;
  if ( (int)*(_QWORD *)&infos->max_length >= 1 )
  {
    v25 = 1LL - (unsigned int)*(_QWORD *)&infos->max_length;
    v26 = 4LL;
    while ( 1 )
    {
      v27 = *((_QWORD *)&infos->obj.klass + v26);
      if ( v27 && *(_DWORD *)(v27 + 16) == 13 )
      {
        transform = QuestRewardTokenAction_TypeInfo;
        v28 = *(_DWORD *)(v27 + 20);
        cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestRewardTokenAction_TypeInfo);
          transform = QuestRewardTokenAction_TypeInfo;
          cctor_finished = QuestRewardTokenAction_TypeInfo->_2.cctor_finished;
        }
        v30 = (struct QuestRewardTokenAction_StaticFields *)*((_QWORD *)transform + 23);
        v31 = v28 - v30->TOKEN_EVENT_ID;
        HIDWORD(v58) = v31;
        if ( !cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(transform);
          v30 = QuestRewardTokenAction_TypeInfo->static_fields;
        }
        TOKEN_IMAGE_ID = v30->TOKEN_IMAGE_ID;
        if ( v31 <= 26 )
          v33 = v31;
        else
          v33 = v31 + 1;
        v34 = v26 - 4;
        LODWORD(v58) = v33 + TOKEN_IMAGE_ID;
        tokenSprite = this->fields.tokenSprite;
        if ( tokenSprite )
        {
          max_length = tokenSprite->max_length;
          if ( (__int64)v34 < (int)max_length )
          {
            if ( v34 >= max_length )
              goto LABEL_44;
            v37 = (UnityEngine_Object_o *)*((_QWORD *)&tokenSprite->obj.klass + v26);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v38 = this->fields.tokenSprite;
              if ( !v38 )
                goto LABEL_54;
              if ( v34 >= v38->max_length )
                goto LABEL_44;
              v39 = (UISprite_o *)*((_QWORD *)&v38->obj.klass + v26);
              v40 = System_Int32__ToString((int32_t)&v58, 0LL);
              transform = (void *)QuestRewardTokenAction__SetEventUI(this, v39, v40, v41);
            }
          }
        }
        tokenName = this->fields.tokenName;
        if ( tokenName )
        {
          v43 = tokenName->max_length;
          if ( (__int64)v34 < (int)v43 )
          {
            if ( v34 >= v43 )
              goto LABEL_44;
            v44 = (UnityEngine_Object_o *)*((_QWORD *)&tokenName->obj.klass + v26);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
            if ( ((unsigned __int8)transform & 1) != 0 )
            {
              v45 = this->fields.tokenName;
              if ( !v45 )
                goto LABEL_54;
              if ( v34 >= v45->max_length )
                goto LABEL_44;
              v46 = (UILabel_o *)*((_QWORD *)&v45->obj.klass + v26);
              transform = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
              if ( !v46 )
                goto LABEL_54;
              UILabel__set_text(v46, (System_String_o *)transform, 0LL);
            }
          }
        }
      }
      if ( v25 + v26 == 4 )
        break;
      v47 = v26 - 3;
      ++v26;
      if ( v47 >= infos->max_length )
LABEL_44:
        sub_1C3B9C8(transform, v14);
    }
  }
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      transform = CommonUI__CreateScreeenTouchInfo((CommonUI_o *)Instance, (UnityEngine_Transform_o *)transform, 0, 0LL);
      if ( transform )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
        *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
          (int64_t)Component_object,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        goto LABEL_51;
      }
    }
LABEL_54:
    sub_1C3B9C0(transform, v14);
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
  __int64 v3; // x1
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C1EEC9 & 1) == 0 )
  {
    sub_1C3B764(&Method_CStateManager_QuestRewardTokenAction__update__, method);
    sub_1C3B764(&CTouch_TypeInfo, v3);
    byte_4C1EEC9 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__process(0LL);
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(
      fsm,
      (const MethodInfo_3225C58 *)Method_CStateManager_QuestRewardTokenAction__update__);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *v7; // x0
  struct SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct SimpleAnimation_o *v10; // x20
  System_String_o *v11; // x0
  QuestRewardTokenAction_StatePlay_c *klass; // x8
  QuestRewardTokenAction_StatePlay_o *v13; // x20
  __int64 v14; // x9
  int32_t *p_offset; // x10
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

  if ( (byte_4C1EED6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C3B764(&SimpleAnimation_State_TypeInfo, v4);
    byte_4C1EED6 = 1;
  }
  if ( !that )
    goto LABEL_49;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    animation = (UnityEngine_Object_o *)that->fields.animation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    v18 = that->fields.animation;
    if ( v18 )
    {
      this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v18, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v20 = that->fields.animation;
          if ( !v20 )
            goto LABEL_49;
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( !this )
            goto LABEL_49;
          v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__Play_70867156(v20, v21, 0LL);
        }
        v22 = that->fields.animation;
        if ( v22 )
        {
          this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
          if ( this )
          {
            v23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v22, v23, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v24 = that->fields.animation;
              if ( v24 )
              {
                this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(v24, 0LL);
                if ( this )
                {
                  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_Item(v24, v25, 0LL);
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
    sub_1C3B9C0(this, that);
  }
  v6 = that->fields.simpleAnimation;
  if ( !v6 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v6[1].monitor;
  if ( !this )
    goto LABEL_49;
  v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__IsPlaying(v6, v7, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = that->fields.simpleAnimation;
    if ( !v8 )
      goto LABEL_49;
    this = (QuestRewardTokenAction_StatePlay_o *)v8[1].monitor;
    if ( !this )
      goto LABEL_49;
    v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__Play_65506988(v8, v9, 0LL);
  }
  v10 = that->fields.simpleAnimation;
  if ( !v10 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v10[1].monitor;
  if ( !this )
    goto LABEL_49;
  v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v10, v11, 0LL);
  if ( !this )
    goto LABEL_49;
  klass = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_20;
    }
    v16 = (__int64)(&klass->vtable._6_end.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v16 = sub_1C8D744(this, SimpleAnimation_State_TypeInfo, 6LL);
  }
  this = (QuestRewardTokenAction_StatePlay_o *)(*(__int64 (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v16)(
                                                 v13,
                                                 *(_QWORD *)(v16 + 8),
                                                 0.0);
  v26 = that->fields.simpleAnimation;
  if ( !v26 )
    goto LABEL_49;
  this = (QuestRewardTokenAction_StatePlay_o *)v26[1].monitor;
  if ( !this )
    goto LABEL_49;
  v27 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  this = (QuestRewardTokenAction_StatePlay_o *)SimpleAnimation__get_Item(v26, v27, 0LL);
  if ( !this )
    goto LABEL_49;
  v28 = this->klass;
  v29 = this;
  v30 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_46;
    }
    v32 = (__int64)(&v28[1]._1.namespaze + 2 * *v31);
  }
  else
  {
LABEL_46:
    v32 = sub_1C8D744(this, SimpleAnimation_State_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(QuestRewardTokenAction_StatePlay_o *, _QWORD, float))v32)(v29, *(_QWORD *)(v32 + 8), 1.0);
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
  UnityEngine_Object_o *simpleAnimation; // x20
  struct SimpleAnimation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Object_o *animation; // x20
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C1EED7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, that);
    this = (QuestRewardTokenAction_StatePlay_o *)sub_1C3B764(
                                                   &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                   v4);
    byte_4C1EED7 = 1;
  }
  if ( !that )
    goto LABEL_21;
  simpleAnimation = (UnityEngine_Object_o *)that->fields.simpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(simpleAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = that->fields.simpleAnimation;
    if ( !v6 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)v6[1].monitor;
    if ( !this )
      goto LABEL_21;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( SimpleAnimation__IsPlaying(v6, name, 0LL) )
      return;
LABEL_17:
    this = (QuestRewardTokenAction_StatePlay_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        QuestRewardTokenAction__SetState(that, 2, v11);
      return;
    }
LABEL_21:
    sub_1C3B9C0(this, that);
  }
  animation = (UnityEngine_Object_o *)that->fields.animation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Object__op_Inequality(animation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = that->fields.animation;
    if ( !v9 )
      goto LABEL_21;
    this = (QuestRewardTokenAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.animation, 0LL);
    if ( !this )
      goto LABEL_21;
    v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
    if ( UnityEngine_Animation__IsPlaying(v9, v10, 0LL) )
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
    sub_1C3B9C0(this, that);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_GameObject_o *isTouchPush; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x19
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *Instance; // x21
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x2

  if ( (byte_4C1EED8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, that);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&CTouch_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_QuestRewardTokenAction_StateTouchWait_update__, v7);
    sub_1C3B764(&Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__, v8);
    sub_1C3B764(&QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo, v9);
    byte_4C1EED8 = 1;
  }
  v10 = sub_1C3B9B0(QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = that;
  v19 = v10 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)that, v13, v14, v15, v16, v17, v18);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  isTouchPush = (UnityEngine_GameObject_o *)CTouch__isTouchPush(0LL);
  if ( ((unsigned __int8)isTouchPush & 1) != 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      isTouchPush = *(UnityEngine_GameObject_o **)(*(_QWORD *)v19 + 112LL);
      if ( isTouchPush )
      {
        isTouchPush = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isTouchPush, 0LL);
        if ( isTouchPush )
        {
          UnityEngine_GameObject__SetActive(isTouchPush, 0, 0LL);
          v20 = Method_QuestRewardTokenAction_StateTouchWait_update__;
          if ( (*((_BYTE *)Method_QuestRewardTokenAction_StateTouchWait_update__ + 83) & 2) != 0 )
            v20 = (_QWORD *)sub_1C3B77C(Method_QuestRewardTokenAction_StateTouchWait_update__);
          v21 = (System_Reflection_MethodBase_o *)sub_1C3B748(v20, v20[4]);
          OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v23 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
          v25 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v10,
            Method_QuestRewardTokenAction_StateTouchWait___c__DisplayClass1_0__update_b__0__,
            0LL);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
            isTouchPush = *(UnityEngine_GameObject_o **)v19;
            if ( *(_QWORD *)v19 )
            {
              QuestRewardTokenAction__SetState((QuestRewardTokenAction_o *)isTouchPush, 0, v26);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(isTouchPush, v12);
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
    sub_1C3B9C0(this, method);
  ActionExtensions__Call(that->fields.endAct, 0LL);
}


void __fastcall QuestRewardTokenAction___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1EED9 & 1) == 0 )
  {
    sub_1C3B764(&QuestRewardTokenAction___c_TypeInfo, v1);
    byte_4C1EED9 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestRewardTokenAction___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRewardTokenAction___c_TypeInfo->static_fields->__9 = (struct QuestRewardTokenAction___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestRewardTokenAction___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, x);
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