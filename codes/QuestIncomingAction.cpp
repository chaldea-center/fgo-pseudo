void __fastcall QuestIncomingAction___ctor(QuestIncomingAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186E9A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16772/*"bit_incoming_end"*/, method);
    sub_B2C35C(&StringLiteral_16773/*"bit_incoming_start"*/, v9);
    byte_4186E9A = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_16773/*"bit_incoming_start"*/;
  this->fields.startAnimName = (struct System_String_o *)StringLiteral_16773/*"bit_incoming_start"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.startAnimName, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_16772/*"bit_incoming_end"*/;
  this->fields.endAnimName = (struct System_String_o *)StringLiteral_16772/*"bit_incoming_end"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endAnimName, v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestIncomingAction__Awake(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct CStateManager_QuestIncomingAction__o *mFSM; // x21
  QuestIncomingAction_StateNone_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct CStateManager_QuestIncomingAction__o *v18; // x20
  QuestIncomingAction_StatePlay_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4186E93 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestIncomingAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestIncomingAction__add__, v3);
    sub_B2C35C(&CStateManager_QuestIncomingAction__TypeInfo, v4);
    sub_B2C35C(&QuestIncomingAction_StateNone_TypeInfo, v5);
    sub_B2C35C(&QuestIncomingAction_StatePlay_TypeInfo, v6);
    byte_4186E93 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v7 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestIncomingAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v7,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestIncomingAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestIncomingAction__o *)v7;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    mFSM = this->fields.mFSM;
    v15 = (QuestIncomingAction_StateNone_o *)sub_B2C42C(QuestIncomingAction_StateNone_TypeInfo);
    QuestIncomingAction_StateNone___ctor(v15, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v15,
            (const MethodInfo_2A08420 *)Method_CStateManager_QuestIncomingAction__add__),
          v18 = this->fields.mFSM,
          v19 = (QuestIncomingAction_StatePlay_o *)sub_B2C42C(QuestIncomingAction_StatePlay_TypeInfo),
          QuestIncomingAction_StatePlay___ctor(v19, 0LL),
          !v18) )
    {
      sub_B2C434(v16, v17);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestIncomingAction__add__);
    QuestIncomingAction__SetState(this, 0, v20);
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
    sub_B2C434(mAnimation, callback);
  }
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v11 = QuestIncomingAction__Play(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


int32_t __fastcall QuestIncomingAction__GetState(QuestIncomingAction_o *this, const MethodInfo *method)
{
  QuestIncomingAction_o *v2; // x19
  struct CStateManager_QuestIncomingAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4186E98 & 1) == 0 )
  {
    this = (QuestIncomingAction_o *)sub_B2C35C(&Method_CStateManager_QuestIncomingAction__getState__, method);
    byte_4186E98 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestIncomingAction__Init(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Object_o *clip; // x0
  __int64 v14; // x1
  UnityEngine_Animation_o *v15; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v17; // x20
  System_String_o *v18; // x0

  if ( (byte_4186E95 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186E95 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)clip & 1) != 0 )
  {
    v15 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_16;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !clip
      || (name = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v15, name, 0LL)) == 0LL)
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)clip, 0.0, 0LL),
          (v17 = *p_mAnimation) == 0LL)
      || (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v17, 0LL)) == 0LL
      || (v18 = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v17, v18, 0LL)) == 0LL) )
    {
LABEL_16:
      sub_B2C434(clip, v14);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)clip, 0.0, 0LL);
  }
  clip = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !clip )
    goto LABEL_16;
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
  UnityEngine_Object_o *v14; // x23
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4186E96 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, title);
    byte_4186E96 = 1;
  }
  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_20;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(mAnimation, this->fields.startAnimName, 0LL);
  if ( !this->fields.mAnimation )
    goto LABEL_20;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, (UnityEngine_AnimationClip_o *)mAnimation, 0LL);
  v10 = this->fields.mAnimation;
  if ( !v10 )
    goto LABEL_20;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !mAnimation )
    goto LABEL_20;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v10, name, 0LL);
  if ( !mAnimation )
    goto LABEL_20;
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v12 = this->fields.mAnimation;
  if ( !v12 )
    goto LABEL_20;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !mAnimation )
    goto LABEL_20;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0LL);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v12, v13, 0LL);
  if ( !mAnimation )
    goto LABEL_20;
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v14 = (UnityEngine_Object_o *)this->fields.title;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    mAnimation = (UnityEngine_Animation_o *)this->fields.title;
    if ( !mAnimation )
      goto LABEL_20;
    UILabel__set_text((UILabel_o *)mAnimation, title, 0LL);
  }
  mAnimation = (UnityEngine_Animation_o *)this->fields.message;
  if ( !mAnimation
    || (UILabel__set_text((UILabel_o *)mAnimation, message, 0LL),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_20:
    sub_B2C434(mAnimation, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAnimation, 1, 0LL);
  v16 = QuestIncomingAction__Play(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestIncomingAction__Play(
        QuestIncomingAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186E97 & 1) == 0 )
  {
    sub_B2C35C(&QuestIncomingAction__Play_d__14_TypeInfo, end_act);
    byte_4186E97 = 1;
  }
  v5 = sub_B2C42C(QuestIncomingAction__Play_d__14_TypeInfo);
  QuestIncomingAction__Play_d__14___ctor((QuestIncomingAction__Play_d__14_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = end_act;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestIncomingAction__SetState(QuestIncomingAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_4186E99 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestIncomingAction__setState__, *(_QWORD *)&state);
    byte_4186E99 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestIncomingAction__setState__);
}


void __fastcall QuestIncomingAction__Update(QuestIncomingAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_4186E94 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestIncomingAction__update__, method);
    byte_4186E94 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestIncomingAction__update__);
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

  if ( (byte_41852F9 & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_41852F9 = 1;
  }
  if ( !that )
    goto LABEL_22;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
            goto LABEL_22;
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_22;
          v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__Play_50201580(v7, v8, 0LL);
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
LABEL_22:
    sub_B2C434(this, that);
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

  if ( (byte_41852FA & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, that);
    byte_41852FA = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
          QuestIncomingAction__SetState(that, 0, 0LL);
        }
        return;
      }
    }
LABEL_13:
    sub_B2C434(this, that);
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
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct QuestIncomingAction_o *_4__this; // x20
  struct System_Action_o *end_act; // x1

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B2C434(this, method);
    end_act = this->fields.end_act;
    _4__this->fields.mEndAct = end_act;
    sub_B2C2F8(&_4__this->fields.mEndAct, end_act);
    QuestIncomingAction__SetState(_4__this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B2C2F8(&this->fields.__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestIncomingAction__Play_d__14_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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