void __fastcall QuestIncomingAction___ctor(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B13110 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17417/*"bit_incoming_end"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17418/*"bit_incoming_start"*/, v9, v10);
    byte_4B13110 = 1;
  }
  v11 = StringLiteral_17418/*"bit_incoming_start"*/;
  this->fields.startAnimName = (struct System_String_o *)StringLiteral_17418/*"bit_incoming_start"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.startAnimName, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_17417/*"bit_incoming_end"*/;
  this->fields.endAnimName = (struct System_String_o *)StringLiteral_17417/*"bit_incoming_end"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.endAnimName, v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestIncomingAction__Awake(QuestIncomingAction_o *this, const MethodInfo *method)
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
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  CStateManager_T__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x21
  const MethodInfo *v32; // x2

  if ( (byte_4B13109 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestIncomingAction___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestIncomingAction__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestIncomingAction__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestIncomingAction_StateNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestIncomingAction_StatePlay_TypeInfo, v11, v12);
    byte_4B13109 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestIncomingAction__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestIncomingAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestIncomingAction__o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v24 = (Il2CppObject *)sub_1BCAA2C(QuestIncomingAction_StateNone_TypeInfo, v21, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v24,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestIncomingAction__add__),
          v27 = (CStateManager_T__o *)this->fields.mFSM,
          v31 = (Il2CppObject *)sub_1BCAA2C(QuestIncomingAction_StatePlay_TypeInfo, v28, v29, v30),
          System_Object___ctor(v31, 0LL),
          !v27) )
    {
      sub_1BCAA3C(v25, v26);
    }
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestIncomingAction__add__);
    QuestIncomingAction__SetState(this, 0, v32);
  }
}


void __fastcall QuestIncomingAction__Close(
        QuestIncomingAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *mAnimation; // x0
  UnityEngine_Animation_o *v6; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x1

  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_10;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(mAnimation, this->fields.endAnimName, 0LL);
  if ( !this->fields.mAnimation )
    goto LABEL_10;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, (UnityEngine_AnimationClip_o *)mAnimation, 0LL);
  v6 = this->fields.mAnimation;
  if ( !v6 )
    goto LABEL_10;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !mAnimation
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v6, name, 0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL),
        (v8 = this->fields.mAnimation) == 0LL)
    || (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL)) == 0LL
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, v9, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(mAnimation, callback);
  }
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v11 = QuestIncomingAction__Play(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


int32_t __fastcall QuestIncomingAction__GetState(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestIncomingAction_o *v3; // x19
  struct CStateManager_QuestIncomingAction__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B1310E & 1) == 0 )
  {
    this = (QuestIncomingAction_o *)sub_1BCA7E0(&Method_CStateManager_QuestIncomingAction__getState__, method, v2);
    byte_4B1310E = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestIncomingAction__Init(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Object_o *clip; // x0
  __int64 v17; // x1
  UnityEngine_Animation_o *v18; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v20; // x20
  System_String_o *v21; // x0

  if ( (byte_4B1310B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1310B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_mAnimation = &this->fields.mAnimation;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAnimation,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)clip & 1) != 0 )
  {
    v18 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_15;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !clip
      || (name = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v18, name, 0LL)) == 0LL)
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)clip, 0.0, 0LL),
          (v20 = *p_mAnimation) == 0LL)
      || (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v20, 0LL)) == 0LL
      || (v21 = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v20, v21, 0LL)) == 0LL) )
    {
LABEL_15:
      sub_1BCAA3C(clip, v17);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)clip, 0.0, 0LL);
  }
  clip = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !clip )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)clip, 0, 0LL);
}


void __fastcall QuestIncomingAction__Open(
        QuestIncomingAction_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *mAnimation; // x0
  UnityEngine_Animation_o *v10; // x23
  System_String_o *name; // x0
  UnityEngine_Animation_o *v12; // x23
  System_String_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x23
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_4B1310C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, title, message);
    byte_4B1310C = 1;
  }
  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(mAnimation, this->fields.startAnimName, 0LL);
  if ( !this->fields.mAnimation )
    goto LABEL_19;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, (UnityEngine_AnimationClip_o *)mAnimation, 0LL);
  v10 = this->fields.mAnimation;
  if ( !v10 )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !mAnimation )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v10, name, 0LL);
  if ( !mAnimation )
    goto LABEL_19;
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v12 = this->fields.mAnimation;
  if ( !v12 )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !mAnimation )
    goto LABEL_19;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v12, v13, 0LL);
  if ( !mAnimation )
    goto LABEL_19;
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v15 = (UnityEngine_Object_o *)this->fields.title;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Animation_o *)this->fields.title;
    if ( !mAnimation )
      goto LABEL_19;
    UILabel__set_text((UILabel_o *)mAnimation, title, 0LL);
  }
  mAnimation = (UnityEngine_Animation_o *)this->fields.message;
  if ( !mAnimation
    || (UILabel__set_text((UILabel_o *)mAnimation, message, 0LL),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(mAnimation, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAnimation, 1, 0LL);
  v17 = QuestIncomingAction__Play(this, callback, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestIncomingAction__Play(
        QuestIncomingAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1310D & 1) == 0 )
  {
    sub_1BCA7E0(&QuestIncomingAction__Play_d__14_TypeInfo, end_act, method);
    byte_4B1310D = 1;
  }
  v6 = sub_1BCAA2C(QuestIncomingAction__Play_d__14_TypeInfo, end_act, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = end_act;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)end_act, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestIncomingAction__SetState(QuestIncomingAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B1310F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestIncomingAction__setState__, *(_QWORD *)&state, method);
    byte_4B1310F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QuestIncomingAction__setState__);
}


void __fastcall QuestIncomingAction__Update(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B1310A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestIncomingAction__update__, method, v2);
    byte_4B1310A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_QuestIncomingAction__update__);
}


void __fastcall QuestIncomingAction_StateNone___ctor(QuestIncomingAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestIncomingAction_StateNone__begin(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestIncomingAction_StateNone__end(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestIncomingAction_StateNone__update(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestIncomingAction_StatePlay___ctor(QuestIncomingAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestIncomingAction_StatePlay__begin(
        QuestIncomingAction_StatePlay_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v7; // x20
  System_String_o *v8; // x0
  UnityEngine_Animation_o *v9; // x20
  System_String_o *v10; // x0
  UnityEngine_Animation_o *v11; // x19
  System_String_o *v12; // x0

  if ( (byte_4B13111 & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B13111 = 1;
  }
  if ( !that )
    goto LABEL_21;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v5, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v7 = that->fields.mAnimation;
          if ( !v7 )
            goto LABEL_21;
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_21;
          v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__Play_69899248(v7, v8, 0LL);
        }
        v9 = that->fields.mAnimation;
        if ( v9 )
        {
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v9, v10, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v11 = that->fields.mAnimation;
              if ( v11 )
              {
                this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(v11, 0LL);
                if ( this )
                {
                  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v11, v12, 0LL);
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
LABEL_21:
    sub_1BCAA3C(this, that);
  }
}


void __fastcall QuestIncomingAction_StatePlay__end(
        QuestIncomingAction_StatePlay_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestIncomingAction_StatePlay__update(
        QuestIncomingAction_StatePlay_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B13112 & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, that, method);
    byte_4B13112 = 1;
  }
  if ( !that )
    goto LABEL_12;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v5, name, 0LL) )
        {
          ActionExtensions__Call(that->fields.mEndAct, 0LL);
          QuestIncomingAction__SetState(that, 0, v7);
        }
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, that);
  }
}


void __fastcall QuestIncomingAction__Play_d__14___ctor(
        QuestIncomingAction__Play_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestIncomingAction__Play_d__14__MoveNext(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct QuestIncomingAction_o *_4__this; // x20
  struct System_Action_o *end_act; // x1
  const MethodInfo *v13; // x2

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    end_act = this->fields.end_act;
    _4__this->fields.mEndAct = end_act;
    sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.mEndAct, (int64_t)end_act, v2, v3, v4, v5, v6, v7);
    QuestIncomingAction__SetState(_4__this, 1, v13);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall QuestIncomingAction__Play_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestIncomingAction__Play_d__14__System_Collections_IEnumerator_Reset(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestIncomingAction__Play_d__14_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall QuestIncomingAction__Play_d__14__System_Collections_IEnumerator_get_Current(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestIncomingAction__Play_d__14__System_IDisposable_Dispose(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  ;
}