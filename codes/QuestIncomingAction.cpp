void __fastcall QuestIncomingAction___ctor(QuestIncomingAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E8AE6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16978/*"bit_incoming_end"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16979/*"bit_incoming_start"*/, v9, v10, v11);
    byte_42E8AE6 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16979/*"bit_incoming_start"*/;
  this->fields.startAnimName = (struct System_String_o *)StringLiteral_16979/*"bit_incoming_start"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.startAnimName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16978/*"bit_incoming_end"*/;
  this->fields.endAnimName = (struct System_String_o *)StringLiteral_16978/*"bit_incoming_end"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.endAnimName, v13, v14, v15, v16, v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestIncomingAction__Awake(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CStateManager_QuestIncomingAction__o *mFSM; // x21
  QuestIncomingAction_StateNone_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct CStateManager_QuestIncomingAction__o *v28; // x20
  QuestIncomingAction_StatePlay_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_42E8ADF & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestIncomingAction___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestIncomingAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestIncomingAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestIncomingAction_StateNone_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestIncomingAction_StatePlay_TypeInfo, v14, v15, v16);
    byte_42E8ADF = 1;
  }
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestIncomingAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestIncomingAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestIncomingAction__o *)v17;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    mFSM = this->fields.mFSM;
    v25 = (QuestIncomingAction_StateNone_o *)sub_B5D694(QuestIncomingAction_StateNone_TypeInfo);
    QuestIncomingAction_StateNone___ctor(v25, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v25,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestIncomingAction__add__),
          v28 = this->fields.mFSM,
          v29 = (QuestIncomingAction_StatePlay_o *)sub_B5D694(QuestIncomingAction_StatePlay_TypeInfo),
          QuestIncomingAction_StatePlay___ctor(v29, 0LL),
          !v28) )
    {
      sub_B5D69C(v26, v27);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v28,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestIncomingAction__add__);
    QuestIncomingAction__SetState(this, 0, v30);
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
    sub_B5D69C(mAnimation, callback);
  }
  UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)mAnimation, 0.0, 0LL);
  v11 = QuestIncomingAction__Play(this, callback, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


int32_t __fastcall QuestIncomingAction__GetState(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestIncomingAction_o *v4; // x19
  struct CStateManager_QuestIncomingAction__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E8AE4 & 1) == 0 )
  {
    this = (QuestIncomingAction_o *)sub_B5D5C4(
                                      &Method_CStateManager_QuestIncomingAction__getState__,
                                      (_DWORD)method,
                                      v2,
                                      v3);
    byte_42E8AE4 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
  return mFSM->fields.m_state;
}


void __fastcall QuestIncomingAction__Init(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_Animation_o *Component_WebViewObject; // x0
  UnityEngine_Animation_o **p_mAnimation; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *mAnimation; // x21
  UnityEngine_Object_o *clip; // x0
  __int64 v18; // x1
  UnityEngine_Animation_o *v19; // x21
  System_String_o *name; // x0
  UnityEngine_Animation_o *v21; // x20
  System_String_o *v22; // x0

  if ( (byte_42E8AE1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8AE1 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mAnimation,
    (System_Int32_array **)Component_WebViewObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  mAnimation = (UnityEngine_Object_o *)this->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  clip = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL);
  if ( ((unsigned __int8)clip & 1) != 0 )
  {
    v19 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_16;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !clip
      || (name = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v19, name, 0LL)) == 0LL)
      || (UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)clip, 0.0, 0LL),
          (v21 = *p_mAnimation) == 0LL)
      || (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v21, 0LL)) == 0LL
      || (v22 = UnityEngine_Object__get_name(clip, 0LL),
          (clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_Item(v21, v22, 0LL)) == 0LL) )
    {
LABEL_16:
      sub_B5D69C(clip, v18);
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

  if ( (byte_42E8AE2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)title, (_DWORD)message, callback);
    byte_42E8AE2 = 1;
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
    sub_B5D69C(mAnimation, title);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAnimation, 1, 0LL);
  v16 = QuestIncomingAction__Play(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestIncomingAction__Play(
        QuestIncomingAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E8AE3 & 1) == 0 )
  {
    sub_B5D5C4(&QuestIncomingAction__Play_d__14_TypeInfo, (_DWORD)end_act, (_DWORD)method, v3);
    byte_42E8AE3 = 1;
  }
  v6 = sub_B5D694(QuestIncomingAction__Play_d__14_TypeInfo);
  QuestIncomingAction__Play_d__14___ctor((QuestIncomingAction__Play_d__14_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = end_act;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)end_act, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestIncomingAction__SetState(QuestIncomingAction_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_42E8AE5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestIncomingAction__setState__, state, (_DWORD)method, v3);
    byte_42E8AE5 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestIncomingAction__setState__);
}


void __fastcall QuestIncomingAction__Update(QuestIncomingAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_42E8AE0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestIncomingAction__update__, (_DWORD)method, v2, v3);
    byte_42E8AE0 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestIncomingAction__update__);
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
  __int64 v3; // x3
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x20
  System_String_o *v9; // x0
  UnityEngine_Animation_o *v10; // x20
  System_String_o *v11; // x0
  UnityEngine_Animation_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_42E7EEF & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E7EEF = 1;
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
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__IsPlaying(v6, name, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v8 = that->fields.mAnimation;
          if ( !v8 )
            goto LABEL_22;
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !this )
            goto LABEL_22;
          v9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__Play_51249124(v8, v9, 0LL);
        }
        v10 = that->fields.mAnimation;
        if ( v10 )
        {
          this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( this )
          {
            v11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v10, v11, 0LL);
            if ( this )
            {
              UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)this, 0.0, 0LL);
              v12 = that->fields.mAnimation;
              if ( v12 )
              {
                this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(v12, 0LL);
                if ( this )
                {
                  v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
                  this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_Item(v12, v13, 0LL);
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
    sub_B5D69C(this, that);
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
  __int64 v3; // x3
  UnityEngine_Object_o *mAnimation; // x20
  UnityEngine_Animation_o *v6; // x20
  System_String_o *name; // x0

  if ( (byte_42E7EF0 & 1) == 0 )
  {
    this = (QuestIncomingAction_StatePlay_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E7EF0 = 1;
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
    v6 = that->fields.mAnimation;
    if ( v6 )
    {
      this = (QuestIncomingAction_StatePlay_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v6, name, 0LL) )
        {
          ActionExtensions__Call(that->fields.mEndAct, 0LL);
          QuestIncomingAction__SetState(that, 0, 0LL);
        }
        return;
      }
    }
LABEL_13:
    sub_B5D69C(this, that);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct QuestIncomingAction_o *_4__this; // x20
  System_Int32_array **end_act; // x1

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    end_act = (System_Int32_array **)this->fields.end_act;
    _4__this->fields.mEndAct = (struct System_Action_o *)end_act;
    sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.mEndAct, end_act, v2, v3, v4, v5, v6, v7);
    QuestIncomingAction__SetState(_4__this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestIncomingAction__Play_d__14_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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