void QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4CEB251 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    sub_1C7BAE8(&Method_CStateManager_QuestBoardListViewEarthLine__add__);
    sub_1C7BAE8(&CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    sub_1C7BAE8(&QuestBoardListViewEarthLine_StateMain_TypeInfo);
    sub_1C7BAE8(&QuestBoardListViewEarthLine_StateNone_TypeInfo);
    byte_4CEB251 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1C7BD34(CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_33B93F0 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_1C7BD34(QuestBoardListViewEarthLine_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_33B9498 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v14 = (CStateManager_T__o *)this->fields.mFSM,
          v15 = (Il2CppObject *)sub_1C7BD34(QuestBoardListViewEarthLine_StateMain_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_1C7BD40(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_33B9498 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v16);
  }
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetEndScreenPosition(
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
    || (gameObject = UnityEngine_Component__get_gameObject(mEarthPoint, 0),
        Position = GameObjectExtensions__GetPosition(gameObject, 0),
        x = Position.fields.x,
        y = Position.fields.y,
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mEarthPoint, 0),
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0) )
  {
    sub_1C7BD40(mEarthPoint, method);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mEarthPoint, 0);
  v8 = y / lossyScale.fields.y;
  v9 = x / v7;
  v10 = 0.0;
  result.fields.z = v10;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetStartScreenPosition(
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


int32_t QuestBoardListViewEarthLine__GetState(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  QuestBoardListViewEarthLine_o *v2; // x19
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  v2 = this;
  if ( (byte_4CEB254 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_1C7BAE8(&Method_CStateManager_QuestBoardListViewEarthLine__getState__);
    byte_4CEB254 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C7BD40(this, method);
  return mFSM->fields.m_state;
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetThisScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  float v8; // s10
  float v9; // s1
  float v10; // s0
  float v11; // s2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  x = Position.fields.x;
  y = Position.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v7);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0);
  v9 = y / lossyScale.fields.y;
  v10 = x / v8;
  v11 = 0.0;
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


void QuestBoardListViewEarthLine__Hide(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( QuestBoardListViewEarthLine__GetState(this, method) )
    QuestBoardListViewEarthLine__SetState(this, 0, v3);
}


bool QuestBoardListViewEarthLine__IsVisiblePossible(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  return 0;
}


void QuestBoardListViewEarthLine__LateUpdate(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CEB252 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestBoardListViewEarthLine__update__);
    byte_4CEB252 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33B9500 *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


void QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4CEB255 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_CStateManager_QuestBoardListViewEarthLine__setState__);
    byte_4CEB255 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_33B9524 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
}


void QuestBoardListViewEarthLine__SetupFirst(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_LineRenderer_o *lr,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  __int64 v9; // x1
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  UnityEngine_LineRenderer_o *v11; // x20
  UnityEngine_LineRenderer_o *v12; // x20

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mLineRenderer,
    (int32_t)lr,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_useWorldSpace(sharedMaterial, 0, 0);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_startWidth(sharedMaterial, 0.01, 0);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_endWidth(sharedMaterial, 0.01, 0);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_14;
  UnityEngine_LineRenderer__set_positionCount(sharedMaterial, 2, 0);
  v11 = *p_mLineRenderer;
  if ( !byte_4CE7E59 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v11, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v12 = *p_mLineRenderer;
  if ( !byte_4CE7E59 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v12
    || (UnityEngine_LineRenderer__SetPosition(v12, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (sharedMaterial = *p_mLineRenderer) == 0)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0)) == 0 )
  {
LABEL_14:
    sub_1C7BD40(sharedMaterial, v9);
  }
  UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)sharedMaterial, 3100, 0);
}


void QuestBoardListViewEarthLine__SetupSecond(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_Vector3_o st_pos,
        QuestBoardListViewObject_o *lvo,
        int32_t war_id,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  GrandQuestFolderBoardItem_o *p_mListViewObject; // x21
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BaseCore_o *mEarthCore; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8
  struct StandFigureSlideComponent_o *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Threading_CancellationTokenSource_c *v32; // x8
  struct BaseCore_o *methodPtr; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  UnityEngine_Object_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_4CEB253 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEB253 = 1;
  }
  this->fields.mListViewObject = 0;
  p_mListViewObject = (GrandQuestFolderBoardItem_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mListViewObject, 0, war_id, (int32_t)method, v5, v6, v7, v8);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  v25 = *(struct StandFigureSlideComponent_o **)&klass->_2.interfaces_count;
  this->fields.mTerminalServant = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTerminalServant, (int32_t)v25, v17, v18, v19, v20, v21, v22);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v32 = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !v32
    || (methodPtr = (struct BaseCore_o *)v32->vtable._4_Dispose.methodPtr,
        this->fields.mEarthCore = methodPtr,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.mEarthCore,
          (int32_t)methodPtr,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (mEarthCore = this->fields.mEarthCore) == 0) )
  {
LABEL_20:
    sub_1C7BD40(mEarthCore, v16);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_mEarthPoint, (int32_t)EarthPoint, v36, v37, v38, v39, v40, v41);
  v42 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v42, 0, 0) )
  {
    p_mListViewObject->klass = (GrandQuestFolderBoardItem_c *)lvo;
    sub_1C7BA8C(p_mListViewObject, (int32_t)lvo, v43, v44, v45, v46, v47, v48);
  }
}


void QuestBoardListViewEarthLine__Visible(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( QuestBoardListViewEarthLine__GetState(this, method) != 1 )
    QuestBoardListViewEarthLine__SetState(this, 1, v3);
}


void QuestBoardListViewEarthLine_StateMain___ctor(
        QuestBoardListViewEarthLine_StateMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewEarthLine_StateMain__begin(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  EasingObject_o *v22; // x20
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22

  if ( (byte_4CEB257 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__);
    sub_1C7BAE8(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__);
    sub_1C7BAE8(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
    byte_4CEB257 = 1;
  }
  v5 = sub_1C7BD34(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !that )
    goto LABEL_9;
  mLineRenderer = that->fields.mLineRenderer;
  if ( !mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetPosition(mLineRenderer, 0, that->fields.mLineStartPos, 0);
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 24) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v5 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0),
        v22 = *(EasingObject_o **)(v5 + 24),
        v23 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0),
        v24 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0),
        !v22) )
  {
LABEL_9:
    sub_1C7BD40(mLineRenderer, v7);
  }
  EasingObject__Play(v22, 0.5, v23, v24, 0.0, 17, 0);
}


void QuestBoardListViewEarthLine_StateMain__end(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewEarthLine_StateMain__update(
        QuestBoardListViewEarthLine_StateMain_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  UnityEngine_LineRenderer_o *v5; // x0
  __int64 v6; // x1
  float realtimeSinceStartup; // s0
  UnityEngine_Renderer_o *mLineRenderer; // x21
  bool v9; // w8
  const MethodInfo *v10; // x1
  float x; // s8
  float y; // s10
  const MethodInfo *v13; // x1
  float v14; // s9
  float v15; // s8
  float v16; // s2 OVERLAPPED
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

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  if ( !that )
    goto LABEL_24;
  mLineRenderer = (UnityEngine_Renderer_o *)that->fields.mLineRenderer;
  if ( (float)(realtimeSinceStartup - this->fields.mStartTime) >= 0.5 )
  {
    if ( !mLineRenderer )
      goto LABEL_24;
    v9 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_24;
    v9 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v9, 0);
  EndScreenPosition = QuestBoardListViewEarthLine__GetEndScreenPosition(that, v10);
  x = EndScreenPosition.fields.x;
  y = EndScreenPosition.fields.y;
  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(that, v13);
  v14 = x - ThisScreenPosition.fields.x;
  v15 = y - ThisScreenPosition.fields.y;
  v16 = 0.0;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v17 = that->fields.mLineStartPos.fields.x;
    v18 = that->fields.mLineStartPos.fields.y;
    z = that->fields.mLineStartPos.fields.z;
    if ( !byte_4CE7E5B )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE7E5B = 1;
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
    if ( !byte_4CE7E5C )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE7E5C = 1;
    }
    v27 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v27 * mTgtRate;
    if ( v27 <= 0.00001 )
    {
      if ( !byte_4CE7E59 )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
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
    sub_1C7BD40(v5, v6);
  v33 = v14;
  v34 = v15;
  UnityEngine_LineRenderer__SetPosition(v5, 1, *(UnityEngine_Vector3_o *)(&v16 - 2), 0);
}


void QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___ctor(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__0(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x9

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0 )
    sub_1C7BD40(this, method);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(this, method);
  _4__this->fields.mTgtRate = 1.0;
}


void QuestBoardListViewEarthLine_StateNone___ctor(
        QuestBoardListViewEarthLine_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardListViewEarthLine_StateNone__begin(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mLineRenderer; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4CEB256 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB256 = 1;
  }
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Object_o *)that->fields.mLineRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mLineRenderer, 0, 0) )
  {
    this = (QuestBoardListViewEarthLine_StateNone_o *)that->fields.mLineRenderer;
    if ( this )
    {
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
      this = (QuestBoardListViewEarthLine_StateNone_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          gameObject,
                                                          (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        return;
      }
    }
LABEL_11:
    sub_1C7BD40(this, that);
  }
}


void QuestBoardListViewEarthLine_StateNone__end(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestBoardListViewEarthLine_StateNone__update(
        QuestBoardListViewEarthLine_StateNone_o *this,
        QuestBoardListViewEarthLine_o *that,
        const MethodInfo *method)
{
  ;
}