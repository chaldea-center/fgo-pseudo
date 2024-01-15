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

  if ( (byte_40F95A8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16708/*"bit_incoming_end"*/, method);
    sub_B16FFC(&StringLiteral_16709/*"bit_incoming_start"*/, v9);
    byte_40F95A8 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_16709/*"bit_incoming_start"*/;
  this->fields.startAnimName = (struct System_String_o *)StringLiteral_16709/*"bit_incoming_start"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.startAnimName, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_16708/*"bit_incoming_end"*/;
  this->fields.endAnimName = (struct System_String_o *)StringLiteral_16708/*"bit_incoming_end"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endAnimName, v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestIncomingAction__Awake(QuestIncomingAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CStateManager_QuestIncomingAction__o *mFSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  QuestIncomingAction_StateNone_o *v22; // x22
  struct CStateManager_QuestIncomingAction__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestIncomingAction_StatePlay_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_40F95A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestIncomingAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestIncomingAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestIncomingAction__TypeInfo, v7);
    sub_B16FFC(&QuestIncomingAction_StateNone_TypeInfo, v8);
    sub_B16FFC(&QuestIncomingAction_StatePlay_TypeInfo, v9);
    byte_40F95A1 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestIncomingAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestIncomingAction___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestIncomingAction__o *)v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    mFSM = this->fields.mFSM;
    v22 = (QuestIncomingAction_StateNone_o *)sub_B170CC(QuestIncomingAction_StateNone_TypeInfo, v18, v19, v20, v21);
    QuestIncomingAction_StateNone___ctor(v22, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v22,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestIncomingAction__add__),
          v23 = this->fields.mFSM,
          v28 = (QuestIncomingAction_StatePlay_o *)sub_B170CC(
                                                     QuestIncomingAction_StatePlay_TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26,
                                                     v27),
          QuestIncomingAction_StatePlay___ctor(v28, 0LL),
          !v23) )
    {
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v23,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestIncomingAction__add__);
    QuestIncomingAction__SetState(this, 0, v29);
  }
}


void __fastcall QuestIncomingAction__Close(
        QuestIncomingAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *mAnimation; // x0
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Animation_o *v7; // x21
  UnityEngine_Object_o *v8; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v11; // x21
  UnityEngine_Object_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x1

  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_10;
  Clip = UnityEngine_Animation__GetClip(mAnimation, this->fields.endAnimName, 0LL);
  if ( !this->fields.mAnimation )
    goto LABEL_10;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, Clip, 0LL);
  v7 = this->fields.mAnimation;
  if ( !v7 )
    goto LABEL_10;
  v8 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !v8
    || (name = UnityEngine_Object__get_name(v8, 0LL), (Item = UnityEngine_Animation__get_Item(v7, name, 0LL)) == 0LL)
    || (UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL), (v11 = this->fields.mAnimation) == 0LL)
    || (v12 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL)) == 0LL
    || (v13 = UnityEngine_Object__get_name(v12, 0LL), (v14 = UnityEngine_Animation__get_Item(v11, v13, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_AnimationState__set_normalizedTime(v14, 0.0, 0LL);
  v16 = QuestIncomingAction__Play(this, callback, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


int32_t __fastcall QuestIncomingAction__GetState(QuestIncomingAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestIncomingAction__o *mFSM; // x8

  if ( (byte_40F95A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestIncomingAction__getState__, method);
    byte_40F95A6 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UnityEngine_Animation_o *v13; // x21
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v17; // x20
  UnityEngine_Object_o *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F95A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F95A3 = 1;
  }
  Component_WebViewObject = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  p_mAnimation = &this->fields.mAnimation;
  this->fields.mAnimation = Component_WebViewObject;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v13 = *p_mAnimation;
    if ( !*p_mAnimation )
      goto LABEL_16;
    clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(*p_mAnimation, 0LL);
    if ( !clip
      || (name = UnityEngine_Object__get_name(clip, 0LL), (Item = UnityEngine_Animation__get_Item(v13, name, 0LL)) == 0LL)
      || (UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL), (v17 = *p_mAnimation) == 0LL)
      || (v18 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v17, 0LL)) == 0LL
      || (v19 = UnityEngine_Object__get_name(v18, 0LL), (v20 = UnityEngine_Animation__get_Item(v17, v19, 0LL)) == 0LL) )
    {
LABEL_16:
      sub_B170D4();
    }
    UnityEngine_AnimationState__set_normalizedTime(v20, 0.0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall QuestIncomingAction__Open(
        QuestIncomingAction_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *mAnimation; // x0
  UnityEngine_AnimationClip_o *Clip; // x0
  UnityEngine_Animation_o *v11; // x23
  UnityEngine_Object_o *v12; // x0
  System_String_o *name; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v15; // x23
  UnityEngine_Object_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x0
  UnityEngine_Object_o *v19; // x23
  UILabel_o *v20; // x0
  UILabel_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_40F95A4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, title);
    byte_40F95A4 = 1;
  }
  mAnimation = this->fields.mAnimation;
  if ( !mAnimation )
    goto LABEL_20;
  Clip = UnityEngine_Animation__GetClip(mAnimation, this->fields.startAnimName, 0LL);
  if ( !this->fields.mAnimation )
    goto LABEL_20;
  UnityEngine_Animation__set_clip(this->fields.mAnimation, Clip, 0LL);
  v11 = this->fields.mAnimation;
  if ( !v11 )
    goto LABEL_20;
  v12 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !v12 )
    goto LABEL_20;
  name = UnityEngine_Object__get_name(v12, 0LL);
  Item = UnityEngine_Animation__get_Item(v11, name, 0LL);
  if ( !Item )
    goto LABEL_20;
  UnityEngine_AnimationState__set_speed(Item, 0.0, 0LL);
  v15 = this->fields.mAnimation;
  if ( !v15 )
    goto LABEL_20;
  v16 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.mAnimation, 0LL);
  if ( !v16 )
    goto LABEL_20;
  v17 = UnityEngine_Object__get_name(v16, 0LL);
  v18 = UnityEngine_Animation__get_Item(v15, v17, 0LL);
  if ( !v18 )
    goto LABEL_20;
  UnityEngine_AnimationState__set_normalizedTime(v18, 0.0, 0LL);
  v19 = (UnityEngine_Object_o *)this->fields.title;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    v20 = this->fields.title;
    if ( !v20 )
      goto LABEL_20;
    UILabel__set_text(v20, title, 0LL);
  }
  v21 = this->fields.message;
  if ( !v21
    || (UILabel__set_text(v21, message, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v24 = QuestIncomingAction__Play(this, callback, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestIncomingAction__Play(
        QuestIncomingAction_o *this,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F95A5 & 1) == 0 )
  {
    sub_B16FFC(&QuestIncomingAction__Play_d__14_TypeInfo, end_act);
    byte_40F95A5 = 1;
  }
  v7 = sub_B170CC(QuestIncomingAction__Play_d__14_TypeInfo, end_act, method, v3, v4);
  QuestIncomingAction__Play_d__14___ctor((QuestIncomingAction__Play_d__14_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = end_act;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)end_act, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestIncomingAction__SetState(QuestIncomingAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_40F95A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestIncomingAction__setState__, *(_QWORD *)&state);
    byte_40F95A7 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestIncomingAction__setState__);
}


void __fastcall QuestIncomingAction__Update(QuestIncomingAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestIncomingAction__o *mFSM; // x0

  if ( (byte_40F95A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestIncomingAction__update__, method);
    byte_40F95A2 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestIncomingAction__update__);
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
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0
  UnityEngine_Animation_o *v8; // x20
  UnityEngine_Object_o *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Animation_o *v11; // x20
  UnityEngine_Object_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_Animation_o *v15; // x19
  UnityEngine_Object_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_AnimationState_o *v18; // x0

  if ( (byte_40FA300 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40FA300 = 1;
  }
  if ( !that )
    goto LABEL_22;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v5, name, 0LL) )
        {
          v8 = that->fields.mAnimation;
          if ( !v8 )
            goto LABEL_22;
          v9 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( !v9 )
            goto LABEL_22;
          v10 = UnityEngine_Object__get_name(v9, 0LL);
          UnityEngine_Animation__Play_49744236(v8, v10, 0LL);
        }
        v11 = that->fields.mAnimation;
        if ( v11 )
        {
          v12 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
          if ( v12 )
          {
            v13 = UnityEngine_Object__get_name(v12, 0LL);
            Item = UnityEngine_Animation__get_Item(v11, v13, 0LL);
            if ( Item )
            {
              UnityEngine_AnimationState__set_normalizedTime(Item, 0.0, 0LL);
              v15 = that->fields.mAnimation;
              if ( v15 )
              {
                v16 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(v15, 0LL);
                if ( v16 )
                {
                  v17 = UnityEngine_Object__get_name(v16, 0LL);
                  v18 = UnityEngine_Animation__get_Item(v15, v17, 0LL);
                  if ( v18 )
                  {
                    UnityEngine_AnimationState__set_speed(v18, 1.0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Object_o *clip; // x0
  System_String_o *name; // x0

  if ( (byte_40FA301 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, that);
    byte_40FA301 = 1;
  }
  if ( !that )
    goto LABEL_13;
  mAnimation = (UnityEngine_Object_o *)that->fields.mAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mAnimation, 0LL, 0LL) )
  {
    v5 = that->fields.mAnimation;
    if ( v5 )
    {
      clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(that->fields.mAnimation, 0LL);
      if ( clip )
      {
        name = UnityEngine_Object__get_name(clip, 0LL);
        if ( !UnityEngine_Animation__IsPlaying(v5, name, 0LL) )
        {
          ActionExtensions__Call(that->fields.mEndAct, 0LL);
          QuestIncomingAction__SetState(that, 0, 0LL);
        }
        return;
      }
    }
LABEL_13:
    sub_B170D4();
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
      sub_B170D4();
    end_act = (System_Int32_array **)this->fields.end_act;
    _4__this->fields.mEndAct = (struct System_Action_o *)end_act;
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.mEndAct, end_act, v2, v3, v4, v5, v6, v7);
    QuestIncomingAction__SetState(_4__this, 1, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestIncomingAction__Play_d__14_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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