void __fastcall QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CStateManager_T__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x22
  __int64 v15; // x0
  CStateManager_T__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_49F93E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, method);
    sub_1B640C8(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v4);
    sub_1B640C8(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v5);
    sub_1B640C8(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v6);
    sub_1B640C8(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v7);
    byte_49F93E3 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v8 = (CStateManager_T__o *)sub_1B64314(CStateManager_QuestBoardListViewEarthLine__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v8,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_30612BC *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v14 = (Il2CppObject *)sub_1B64314(QuestBoardListViewEarthLine_StateNone_TypeInfo, v12, v13);
    System_Object___ctor(v14, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v14,
            (const MethodInfo_3061364 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v16 = (CStateManager_T__o *)this->fields.mFSM,
          v19 = (Il2CppObject *)sub_1B64314(QuestBoardListViewEarthLine_StateMain_TypeInfo, v17, v18),
          System_Object___ctor(v19, 0LL),
          !v16) )
    {
      sub_1B64324(v15);
    }
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v20);
  }
}


UnityEngine_Vector3_o __fastcall QuestBoardListViewEarthLine__GetEndScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mEarthPoint; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  float v7; // s10
  float v8; // s1
  float v9; // s0
  float v10; // s2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  mEarthPoint = (UnityEngine_Component_o *)this->fields.mEarthPoint;
  if ( !mEarthPoint
    || (gameObject = UnityEngine_Component__get_gameObject(mEarthPoint, 0LL),
        Position = GameObjectExtensions__GetPosition(gameObject, 0LL),
        x = Position.fields.x,
        y = Position.fields.y,
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mEarthPoint, 0LL),
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL) )
  {
    sub_1B64324(mEarthPoint);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mEarthPoint, 0LL);
  v8 = y / lossyScale.fields.y;
  v9 = x / v7;
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}


UnityEngine_Vector3_o __fastcall QuestBoardListViewEarthLine__GetStartScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o ThisScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(this, method);
  v3 = ThisScreenPosition.fields.x + this->fields.mLineStartPos.fields.x;
  v4 = ThisScreenPosition.fields.y + this->fields.mLineStartPos.fields.y;
  v5 = this->fields.mLineStartPos.fields.z + 0.0;
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


int32_t __fastcall QuestBoardListViewEarthLine__GetState(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  QuestBoardListViewEarthLine_o *v2; // x19
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  v2 = this;
  if ( (byte_49F93E6 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_1B640C8(
                                              &Method_CStateManager_QuestBoardListViewEarthLine__getState__,
                                              method);
    byte_49F93E6 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
  return mFSM->fields.m_state;
}


UnityEngine_Vector3_o __fastcall QuestBoardListViewEarthLine__GetThisScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_Transform_o *transform; // x0
  float v7; // s10
  float v8; // s1
  float v9; // s0
  float v10; // s2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = GameObjectExtensions__GetPosition(gameObject, 0LL);
  x = Position.fields.x;
  y = Position.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  v8 = y / lossyScale.fields.y;
  v9 = x / v7;
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}


void __fastcall QuestBoardListViewEarthLine__Hide(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( QuestBoardListViewEarthLine__GetState(this, method) )
    QuestBoardListViewEarthLine__SetState(this, 0, v3);
}


bool __fastcall QuestBoardListViewEarthLine__IsVisiblePossible(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall QuestBoardListViewEarthLine__LateUpdate(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F93E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestBoardListViewEarthLine__update__, method);
    byte_49F93E4 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_30613CC *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F93E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, *(_QWORD *)&state);
    byte_49F93E7 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_30613F0 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
}


void __fastcall QuestBoardListViewEarthLine__SetupFirst(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_LineRenderer_o *lr,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  __int64 v6; // x1
  UnityEngine_LineRenderer_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_LineRenderer_o *v9; // x20

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mLineRenderer, (int32_t)lr, (int32_t)method, v3);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_useWorldSpace(sharedMaterial, 0, 0LL);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_startWidth(sharedMaterial, 0.01, 0LL);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_endWidth(sharedMaterial, 0.01, 0LL);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_positionCount(sharedMaterial, 2, 0LL);
  v7 = *p_mLineRenderer;
  if ( !byte_49F7111 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7111 = 1;
  }
  if ( !v7 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v7, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v9 = *p_mLineRenderer;
  if ( !byte_49F7111 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49F7111 = 1;
  }
  if ( !v9
    || (UnityEngine_LineRenderer__SetPosition(v9, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (sharedMaterial = *p_mLineRenderer) == 0LL)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0LL)) == 0LL )
  {
LABEL_14:
    sub_1B64324(sharedMaterial);
  }
  UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)sharedMaterial, 3100, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetupSecond(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_Vector3_o st_pos,
        QuestBoardListViewObject_o *lvo,
        int32_t war_id,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  ServantStatusBattleListViewItem_o *p_mListViewObject; // x21
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  BaseCore_o *mEarthCore; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8
  struct StandFigureSlideComponent_o *v18; // x1
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Threading_CancellationTokenSource_c *v22; // x8
  struct BaseCore_o *methodPtr; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_49F93E5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, lvo);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v11);
    byte_49F93E5 = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mListViewObject, 0, war_id, (int32_t)method);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v13);
    byte_49F76BD = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !klass )
    goto LABEL_20;
  v18 = *(struct StandFigureSlideComponent_o **)&klass->_2.naturalAligment;
  this->fields.mTerminalServant = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mTerminalServant, (int32_t)v18, v14, v15);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
    byte_49F76BD = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !v22
    || (methodPtr = (struct BaseCore_o *)v22->vtable._4_Dispose.methodPtr,
        this->fields.mEarthCore = methodPtr,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mEarthCore, (int32_t)methodPtr, v20, v21),
        (mEarthCore = this->fields.mEarthCore) == 0LL) )
  {
LABEL_20:
    sub_1B64324(mEarthCore);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_mEarthPoint, (int32_t)EarthPoint, v26, v27);
  v28 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (ServantStatusBattleListViewItem_c *)lvo;
    sub_1B6406C(p_mListViewObject, (int32_t)lvo, v29, v30);
  }
}


void __fastcall QuestBoardListViewEarthLine__Visible(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( QuestBoardListViewEarthLine__GetState(this, method) != 1 )
    QuestBoardListViewEarthLine__SetState(this, 1, v3);
}


void __fastcall QuestBoardListViewEarthLine_StateMain___ctor(
        QuestBoardListViewEarthLine_StateMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine_StateMain__begin(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EasingObject_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22

  if ( (byte_49F93E9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1B640C8(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v6);
    sub_1B640C8(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v7);
    sub_1B640C8(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v8);
    byte_49F93E9 = 1;
  }
  v9 = sub_1B64314(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  if ( !that )
    goto LABEL_9;
  mLineRenderer = that->fields.mLineRenderer;
  if ( !mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetPosition(mLineRenderer, 0, that->fields.mLineStartPos, 0LL);
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)Component_object, v15, v16);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v9 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0LL),
        v17 = *(EasingObject_o **)(v9 + 24),
        v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19),
        System_Action___ctor(
          v20,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !v17) )
  {
LABEL_9:
    sub_1B64324(mLineRenderer);
  }
  EasingObject__Play(v17, 0.5, v20, v23, 0.0, 17, 0LL);
}


void __fastcall QuestBoardListViewEarthLine_StateMain__end(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine_StateMain__update(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  UnityEngine_LineRenderer_o *v5; // x0
  float realtimeSinceStartup; // s0
  UnityEngine_Renderer_o *mLineRenderer; // x21
  bool v8; // w8
  const MethodInfo *v9; // x1
  float x; // s8
  float y; // s10
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  float v14; // s9
  float v15; // s8
  float v16; // s2
  float v17; // s10
  float v18; // s11
  float z; // s14
  float v20; // s13
  float v21; // s12
  float v22; // s9
  float mTgtRate; // s14
  float v24; // s8
  float v25; // s10
  float v26; // s11
  float v27; // s15
  float v28; // s14
  float v29; // s0
  float v30; // s1
  float v31; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v33; // s0
  float v34; // s1
  UnityEngine_Vector3_o EndScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ThisScreenPosition; // 0:s0.4,4:s1.4,8:s2.4

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_24;
  mLineRenderer = (UnityEngine_Renderer_o *)that->fields.mLineRenderer;
  if ( (float)(realtimeSinceStartup - this->fields.mStartTime) >= 0.5 )
  {
    if ( !mLineRenderer )
      goto LABEL_24;
    v8 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_24;
    v8 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0LL);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v8, 0LL);
  EndScreenPosition = QuestBoardListViewEarthLine__GetEndScreenPosition(that, v9);
  x = EndScreenPosition.fields.x;
  y = EndScreenPosition.fields.y;
  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(that, v12);
  v14 = x - ThisScreenPosition.fields.x;
  v15 = y - ThisScreenPosition.fields.y;
  v16 = 0.0;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v17 = that->fields.mLineStartPos.fields.x;
    v18 = that->fields.mLineStartPos.fields.y;
    z = that->fields.mLineStartPos.fields.z;
    if ( !byte_49F7113 )
    {
      sub_1B640C8(&System_Math_TypeInfo, v13);
      byte_49F7113 = 1;
    }
    v20 = v14 - v17;
    v21 = v15 - v18;
    v22 = 0.0 - z;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    mTgtRate = this->fields.mTgtRate;
    v24 = that->fields.mLineStartPos.fields.x;
    v25 = that->fields.mLineStartPos.fields.y;
    v26 = that->fields.mLineStartPos.fields.z;
    if ( !byte_49F7114 )
    {
      sub_1B640C8(&System_Math_TypeInfo, v13);
      byte_49F7114 = 1;
    }
    v27 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v27 * mTgtRate;
    if ( v27 <= 0.00001 )
    {
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
        byte_49F7111 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v29 = static_fields->zeroVector.fields.x;
      v30 = static_fields->zeroVector.fields.y;
      v31 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v29 = v20 / v27;
      v30 = v21 / v27;
      v31 = v22 / v27;
    }
    v14 = v24 + (float)(v28 * v29);
    v15 = v25 + (float)(v28 * v30);
    v16 = v26 + (float)(v28 * v31);
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_24:
    sub_1B64324(v5);
  v33 = v14;
  v34 = v15;
  UnityEngine_LineRenderer__SetPosition(v5, 1, *(UnityEngine_Vector3_o *)(&v16 - 2), 0LL);
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___ctor(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__0(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x9

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL )
    sub_1B64324(this);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  _4__this->fields.mTgtRate = 1.0;
}


void __fastcall QuestBoardListViewEarthLine_StateNone___ctor(
        QuestBoardListViewEarthLine_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine_StateNone__begin(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *mLineRenderer; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F93E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F93E8 = 1;
  }
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Object_o *)that->fields.mLineRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mLineRenderer, 0LL, 0LL) )
  {
    this = (QuestBoardListViewEarthLine_StateNone_o *)that->fields.mLineRenderer;
    if ( this )
    {
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
      this = (QuestBoardListViewEarthLine_StateNone_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          gameObject,
                                                          (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B64324(this);
  }
}


void __fastcall QuestBoardListViewEarthLine_StateNone__end(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardListViewEarthLine_StateNone__update(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}