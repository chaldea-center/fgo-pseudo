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

  if ( (byte_4D2D583 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    sub_1C93AD4(&Method_CStateManager_QuestBoardListViewEarthLine__add__);
    sub_1C93AD4(&CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    sub_1C93AD4(&QuestBoardListViewEarthLine_StateMain_TypeInfo);
    sub_1C93AD4(&QuestBoardListViewEarthLine_StateNone_TypeInfo);
    byte_4D2D583 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_1C93D20(CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_33EE80C *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_1C93D20(QuestBoardListViewEarthLine_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v14 = (CStateManager_T__o *)this->fields.mFSM,
          v15 = (Il2CppObject *)sub_1C93D20(QuestBoardListViewEarthLine_StateMain_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_1C93D2C(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v16);
  }
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetEndScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mEarthPoint; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v5; // s10
  unsigned __int64 Position; // kr00_8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  mEarthPoint = (UnityEngine_Component_o *)this->fields.mEarthPoint;
  if ( !mEarthPoint
    || (gameObject = UnityEngine_Component__get_gameObject(mEarthPoint, 0),
        Position = (unsigned __int64)GameObjectExtensions__GetPosition(gameObject, 0),
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mEarthPoint, 0),
        (mEarthPoint = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0) )
  {
    sub_1C93D2C(mEarthPoint, method);
  }
  result.fields.y = *((float *)&Position + 1)
                  / COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(
                                           (UnityEngine_Transform_o *)mEarthPoint,
                                           0).fields.y));
  result.fields.x = *(float *)&Position / v5;
  result.fields.z = 0.0;
  return result;
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetStartScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  unsigned __int64 ThisScreenPosition; // kr00_8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ThisScreenPosition = (unsigned __int64)QuestBoardListViewEarthLine__GetThisScreenPosition(this, method);
  result.fields.x = *(float *)&ThisScreenPosition + this->fields.mLineStartPos.fields.x;
  result.fields.y = *((float *)&ThisScreenPosition + 1) + this->fields.mLineStartPos.fields.y;
  result.fields.z = this->fields.mLineStartPos.fields.z + 0.0;
  return result;
}


int32_t QuestBoardListViewEarthLine__GetState(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  QuestBoardListViewEarthLine_o *v2; // x19
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  v2 = this;
  if ( (byte_4D2D586 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_1C93AD4(&Method_CStateManager_QuestBoardListViewEarthLine__getState__);
    byte_4D2D586 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C93D2C(this, method);
  return mFSM->fields.m_state;
}


UnityEngine_Vector3_o QuestBoardListViewEarthLine__GetThisScreenPosition(
        QuestBoardListViewEarthLine_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s10
  unsigned __int64 Position; // kr00_8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = (unsigned __int64)GameObjectExtensions__GetPosition(gameObject, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (LODWORD(v6) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v5);
  }
  result.fields.y = *((float *)&Position + 1)
                  / COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale(transform, 0).fields.y));
  result.fields.x = *(float *)&Position / v6;
  result.fields.z = 0.0;
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

  if ( (byte_4D2D584 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestBoardListViewEarthLine__update__);
    byte_4D2D584 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_33EE91C *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


void QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4D2D587 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestBoardListViewEarthLine__setState__);
    byte_4D2D587 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_33EE940 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
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
  sub_1C93A78(
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
  if ( !byte_4D2A139 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v11, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v12 = *p_mLineRenderer;
  if ( !byte_4D2A139 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v12
    || (UnityEngine_LineRenderer__SetPosition(v12, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (sharedMaterial = *p_mLineRenderer) == 0)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0)) == 0 )
  {
LABEL_14:
    sub_1C93D2C(sharedMaterial, v9);
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
  if ( (byte_4D2D585 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D585 = 1;
  }
  this->fields.mListViewObject = 0;
  p_mListViewObject = (GrandQuestFolderBoardItem_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mListViewObject, 0, war_id, (int32_t)method, v5, v6, v7, v8);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTerminalServant, (int32_t)v25, v17, v18, v19, v20, v21, v22);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
        sub_1C93A78(
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
    sub_1C93D2C(mEarthCore, v16);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_mEarthPoint, (int32_t)EarthPoint, v36, v37, v38, v39, v40, v41);
  v42 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v42, 0, 0) )
  {
    p_mListViewObject->klass = (GrandQuestFolderBoardItem_c *)lvo;
    sub_1C93A78(p_mListViewObject, (int32_t)lvo, v43, v44, v45, v46, v47, v48);
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

  if ( (byte_4D2D589 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__);
    sub_1C93AD4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__);
    sub_1C93AD4(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
    byte_4D2D589 = 1;
  }
  v5 = sub_1C93D20(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 24) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v5 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0),
        v22 = *(EasingObject_o **)(v5 + 24),
        v23 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0),
        v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0),
        !v22) )
  {
LABEL_9:
    sub_1C93D2C(mLineRenderer, v7);
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
  const MethodInfo *v11; // x1
  float v12; // s9
  float v13; // s8
  float x; // s10
  float y; // s11
  float z; // s14
  float v17; // s13
  float v18; // s12
  float v19; // s9
  float mTgtRate; // s14
  float v21; // s8
  float v22; // s10
  float v23; // s11
  float v24; // s15
  float v25; // s14
  float v26; // s0
  float v27; // s1
  float v28; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 EndScreenPosition; // kr00_8
  unsigned __int64 ThisScreenPosition; // kr20_8
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

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
  EndScreenPosition = (unsigned __int64)QuestBoardListViewEarthLine__GetEndScreenPosition(that, v10);
  ThisScreenPosition = (unsigned __int64)QuestBoardListViewEarthLine__GetThisScreenPosition(that, v11);
  v12 = *(float *)&EndScreenPosition - *(float *)&ThisScreenPosition;
  v13 = *((float *)&EndScreenPosition + 1) - *((float *)&ThisScreenPosition + 1);
  v32.fields.z = 0.0;
  if ( this->fields.mTgtRate < 1.0 )
  {
    x = that->fields.mLineStartPos.fields.x;
    y = that->fields.mLineStartPos.fields.y;
    z = that->fields.mLineStartPos.fields.z;
    if ( !byte_4D2A13B )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13B = 1;
    }
    v17 = v12 - x;
    v18 = v13 - y;
    v19 = 0.0 - z;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    mTgtRate = this->fields.mTgtRate;
    v21 = that->fields.mLineStartPos.fields.x;
    v22 = that->fields.mLineStartPos.fields.y;
    v23 = that->fields.mLineStartPos.fields.z;
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    v24 = sqrtf((float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v19 * v19));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v25 = v24 * mTgtRate;
    if ( v24 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v26 = static_fields->zeroVector.fields.x;
      v27 = static_fields->zeroVector.fields.y;
      v28 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v26 = v17 / v24;
      v27 = v18 / v24;
      v28 = v19 / v24;
    }
    v12 = v21 + (float)(v25 * v26);
    v13 = v22 + (float)(v25 * v27);
    v32.fields.z = v23 + (float)(v25 * v28);
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_24:
    sub_1C93D2C(v5, v6);
  v32.fields.x = v12;
  v32.fields.y = v13;
  UnityEngine_LineRenderer__SetPosition(v5, 1, v32, 0);
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
    sub_1C93D2C(this, method);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2D588 & 1) == 0 )
  {
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D588 = 1;
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
                                                          (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        return;
      }
    }
LABEL_11:
    sub_1C93D2C(this, that);
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