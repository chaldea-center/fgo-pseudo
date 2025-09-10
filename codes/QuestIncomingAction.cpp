void QuestIncomingAction___ctor(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2401B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17210/*"bit_incoming_end"*/);
    sub_1C2D490(&StringLiteral_17211/*"bit_incoming_start"*/);
    byte_4C2401B = 1;
  }
  v5 = StringLiteral_17211/*"bit_incoming_start"*/;
  this->fields.startAnimName = (struct System_String_o *)StringLiteral_17211/*"bit_incoming_start"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.startAnimName, v5, v2, v3);
  v6 = StringLiteral_17210/*"bit_incoming_end"*/;
  this->fields.endAnimName = (struct System_String_o *)StringLiteral_17210/*"bit_incoming_end"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAnimName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestIncomingAction__Awake(QuestIncomingAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  CStateManager_T__o *v10; // x20
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4C24014 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestIncomingAction___ctor__);
    sub_1C2D490(&Method_CStateManager_QuestIncomingAction__add__);
    sub_1C2D490(&CStateManager_QuestIncomingAction__TypeInfo);
    sub_1C2D490(&QuestIncomingAction_StateNone_TypeInfo);
    sub_1C2D490(&QuestIncomingAction_StatePlay_TypeInfo);
    byte_4C24014 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1C2D6DC(CStateManager_QuestIncomingAction__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3313C68 *)Method_CStateManager_QuestIncomingAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestIncomingAction__o *)v3;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v7 = (Il2CppObject *)sub_1C2D6DC(QuestIncomingAction_StateNone_TypeInfo);
    System_Object___ctor(v7, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v7,
            (const MethodInfo_3313D10 *)Method_CStateManager_QuestIncomingAction__add__),
          v10 = (CStateManager_T__o *)this->fields.mFSM,
          v11 = (Il2CppObject *)sub_1C2D6DC(QuestIncomingAction_StatePlay_TypeInfo),
          System_Object___ctor(v11, 0),
          !v10) )
    {
      sub_1C2D6EC(v8, v9);
    }
    CStateManager_object___add(
      v10,
      1,
      (IState_T__o *)v11,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestIncomingAction__add__);
    QuestIncomingAction__SetState(this, 0, v12);
  }
}


void QuestIncomingAction__Close(QuestIncomingAction_o *this, System_Action_o *callback, const MethodInfo *method)
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
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(mAnimation, this->fields.endAnimName, 0);
  if ( !this->fields.mAnimation )
    goto LABEL_10;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, (UnityEngine_AnimationClip_o *)mAnimation, 0);
  v6 = this->fields.mAnimation;
  if ( !v6 )
    goto LABEL_10;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
  if ( !mAnimation
    || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v6, name, 0)) == 0)
    || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0),
        (v8 = this->fields.mAnimation) == 0)
    || (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0)) == 0
    || (v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, v9, 0)) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(mAnimation, callback);
  }
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0);
  v11 = QuestIncomingAction__Play(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v11, 0);
}


int32_t QuestIncomingAction__GetState(QuestIncomingAction_o *this, const MethodInfo *method)
{
  QuestIncomingAction_o *v2; // x19
  struct CStateManager_QuestIncomingAction__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C24019 & 1) == 0 )
  {
    this = (QuestIncomingAction_o *)sub_1C2D490(&Method_CStateManager_QuestIncomingAction__getState__);
    byte_4C24019 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C2D6EC(this, method);
  return mFSM->fields.m_state;
}


void QuestIncomingAction__Init(QuestIncomingAction_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Object_o *clip; // x0
  __int64 v9; // x1
  UnityEngine_Animation_o *v10; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v12; // x20
  System_String_o *v13; // x0

  if ( (byte_4C24016 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24016 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnimation = (struct UnityEngine_Animation_o *)Component_object;
  p_mAnimation = &this->fields.mAnimation;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mAnimation, (int32_t)Component_object, v5, v6);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)clip & 1) != 0 )
  {
    v10 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_15;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0);
    if ( !clip
      || (name = UnityEngine_Object__get_name(clip, 0),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v10, name, 0)) == 0)
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)clip, 0.0, 0), (v12 = *p_mAnimation) == 0)
      || (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v12, 0)) == 0
      || (v13 = UnityEngine_Object__get_name(clip, 0),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v12, v13, 0)) == 0) )
    {
LABEL_15:
      sub_1C2D6EC(clip, v9);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)clip, 0.0, 0);
  }
  clip = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !clip )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)clip, 0, 0);
}


void QuestIncomingAction__Open(
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

  if ( (byte_4C24017 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24017 = 1;
  }
  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__GetClip(mAnimation, this->fields.startAnimName, 0);
  if ( !this->fields.mAnimation )
    goto LABEL_19;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, (UnityEngine_AnimationClip_o *)mAnimation, 0);
  v10 = this->fields.mAnimation;
  if ( !v10 )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
  if ( !mAnimation )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v10, name, 0);
  if ( !mAnimation )
    goto LABEL_19;
  UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0);
  v12 = this->fields.mAnimation;
  if ( !v12 )
    goto LABEL_19;
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0);
  if ( !mAnimation )
    goto LABEL_19;
  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)mAnimation, 0);
  mAnimation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v12, v13, 0);
  if ( !mAnimation )
    goto LABEL_19;
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0);
  v14 = (UnityEngine_Object_o *)this->fields.title;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    mAnimation = (UnityEngine_Animation_o *)this->fields.title;
    if ( !mAnimation )
      goto LABEL_19;
    UILabel__set_text((UILabel_o *)mAnimation, title, 0);
  }
  mAnimation = (UnityEngine_Animation_o *)this->fields.message;
  if ( !mAnimation
    || (UILabel__set_text((UILabel_o *)mAnimation, message, 0),
        (mAnimation = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0) )
  {
LABEL_19:
    sub_1C2D6EC(mAnimation, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAnimation, 1, 0);
  v16 = QuestIncomingAction__Play(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


System_Collections_IEnumerator_o *QuestIncomingAction__Play(
        QuestIncomingAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24018 & 1) == 0 )
  {
    sub_1C2D490(&QuestIncomingAction__Play_d__14_TypeInfo);
    byte_4C24018 = 1;
  }
  v5 = sub_1C2D6DC(QuestIncomingAction__Play_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = end_act;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)end_act, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void QuestIncomingAction__SetState(QuestIncomingAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C2401A & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestIncomingAction__setState__);
    byte_4C2401A = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C2D6EC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3313D9C *)Method_CStateManager_QuestIncomingAction__setState__);
}


void QuestIncomingAction__Update(QuestIncomingAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C24015 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestIncomingAction__update__);
    byte_4C24015 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3313D78 *)Method_CStateManager_QuestIncomingAction__update__);
}


void QuestIncomingAction_StateNone___ctor(QuestIncomingAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestIncomingAction_StateNone__begin(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestIncomingAction_StateNone__end(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestIncomingAction_StateNone__update(
        QuestIncomingAction_StateNone_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestIncomingAction_StatePlay___ctor(QuestIncomingAction_StatePlay_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestIncomingAction_StatePlay__begin(
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

  if ( (byte_4C2401C & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2401C = 1;
  }
  if ( !that )
    goto LABEL_21;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v5, name, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v7 = that->fields.mAnimation;
          if ( !v7 )
            goto LABEL_21;
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( !this )
            goto LABEL_21;
          v8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__Play_70908988(v7, v8, 0);
        }
        v9 = that->fields.mAnimation;
        if ( v9 )
        {
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
          if ( this )
          {
            v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v9, v10, 0);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0);
              v11 = that->fields.mAnimation;
              if ( v11 )
              {
                this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(v11, 0);
                if ( this )
                {
                  v12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
                  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v11, v12, 0);
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
LABEL_21:
    sub_1C2D6EC(this, that);
  }
}


void QuestIncomingAction_StatePlay__end(
        QuestIncomingAction_StatePlay_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestIncomingAction_StatePlay__update(
        QuestIncomingAction_StatePlay_o *this,
        QuestIncomingAction_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v5; // x20
  System_String_o *name; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C2401D & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2401D = 1;
  }
  if ( !that )
    goto LABEL_12;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Object__op_Inequality(mAnimation, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !UnityEngine_Animation__IsPlaying(v5, name, 0) )
        {
          ActionExtensions__Call(that->fields.mEndAct, 0);
          QuestIncomingAction__SetState(that, 0, v7);
        }
        return;
      }
    }
LABEL_12:
    sub_1C2D6EC(this, that);
  }
}


void QuestIncomingAction__Play_d__14___ctor(
        QuestIncomingAction__Play_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestIncomingAction__Play_d__14__MoveNext(QuestIncomingAction__Play_d__14_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct QuestIncomingAction_o *_4__this; // x20
  struct System_Action_o *end_act; // x1
  const MethodInfo *v9; // x2

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C2D6EC(this, method);
    end_act = this->fields.end_act;
    _4__this->fields.mEndAct = end_act;
    sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.mEndAct, (int32_t)end_act, v2, v3);
    QuestIncomingAction__SetState(_4__this, 1, v9);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *QuestIncomingAction__Play_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestIncomingAction__Play_d__14__System_Collections_IEnumerator_Reset(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestIncomingAction__Play_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *QuestIncomingAction__Play_d__14__System_Collections_IEnumerator_get_Current(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestIncomingAction__Play_d__14__System_IDisposable_Dispose(
        QuestIncomingAction__Play_d__14_o *this,
        const MethodInfo *method)
{
  ;
}