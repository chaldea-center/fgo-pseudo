void QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  CStateManager_T__o *v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  CStateManager_T__o *v14; // x20
  Il2CppObject *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_596D275 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    sub_2213A60(&Method_CStateManager_QuestBoardListViewEarthLine__add__);
    sub_2213A60(&CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    sub_2213A60(&QuestBoardListViewEarthLine_StateMain_TypeInfo);
    sub_2213A60(&QuestBoardListViewEarthLine_StateNone_TypeInfo);
    byte_596D275 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v3 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    CStateManager_object____ctor(
      v3,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v3, v4, v5, v6, v7, v8, v9);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v11 = (Il2CppObject *)sub_2213CCC(QuestBoardListViewEarthLine_StateNone_TypeInfo);
    System_Object___ctor(v11, 0);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v11,
            (const MethodInfo_3E83E04 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v14 = (CStateManager_T__o *)this->fields.mFSM,
          v15 = (Il2CppObject *)sub_2213CCC(QuestBoardListViewEarthLine_StateMain_TypeInfo),
          System_Object___ctor(v15, 0),
          !v14) )
    {
      sub_2213CDC(v12, v13);
    }
    CStateManager_object___add(
      v14,
      1,
      (IState_T__o *)v15,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
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
    sub_2213CDC(mEarthPoint, method);
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
  if ( (byte_596D278 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_2213A60(&Method_CStateManager_QuestBoardListViewEarthLine__getState__);
    byte_596D278 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_2213CDC(this, method);
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
    sub_2213CDC(transform, v5);
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

  if ( (byte_596D276 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListViewEarthLine__update__);
    byte_596D276 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_3E83E6C *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


void QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_596D279 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestBoardListViewEarthLine__setState__);
    byte_596D279 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_3E83E8C *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
}


void QuestBoardListViewEarthLine__SetupFirst(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_LineRenderer_o *lr,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  __int64 v9; // x1
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  UnityEngine_LineRenderer_o *v11; // x20
  UnityEngine_LineRenderer_o *v12; // x20

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mLineRenderer,
    (int32_t)lr,
    (System_String_o *)method,
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
  if ( !byte_5969AE0 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v11, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v12 = *p_mLineRenderer;
  if ( !byte_5969AE0 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v12
    || (UnityEngine_LineRenderer__SetPosition(v12, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (sharedMaterial = *p_mLineRenderer) == 0)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(sharedMaterial, v9);
  }
  UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)sharedMaterial, 3100, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardListViewEarthLine__SetupSecond(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_Vector3_o st_pos,
        QuestBoardListViewObject_o *lvo,
        int32_t war_id,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  MissionNaviTransitionBoardItem_o *p_mListViewObject; // x20
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  BaseCore_o *mEarthCore; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8
  struct StandFigureSlideComponent_o *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Threading_CancellationTokenSource_c *v32; // x8
  struct BaseCore_o *v33; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_Object_o *v44; // x21
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_596D277 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D277 = 1;
  }
  this->fields.mListViewObject = 0;
  p_mListViewObject = (MissionNaviTransitionBoardItem_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mListViewObject,
    0,
    *(System_String_o **)&war_id,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v16, v17);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v16, v17);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !klass )
    goto LABEL_20;
  v25 = *(struct StandFigureSlideComponent_o **)&klass->_2.interfaces_count;
  this->fields.mTerminalServant = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTerminalServant,
    (int32_t)v25,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v16, v26);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v32 = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !v32
    || (v33 = (struct BaseCore_o *)v32->vtable._4_Dispose.method,
        this->fields.mEarthCore = v33,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mEarthCore,
          (int32_t)v33,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (mEarthCore = this->fields.mEarthCore) == 0) )
  {
LABEL_20:
    sub_2213CDC(mEarthCore, v16);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mEarthPoint, (int32_t)EarthPoint, v36, v37, v38, v39, v40, v41);
  v44 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
  if ( !UnityEngine_Object__op_Equality(v44, 0, 0) )
  {
    p_mListViewObject->klass = (MissionNaviTransitionBoardItem_c *)lvo;
    sub_2213A04(p_mListViewObject, (int32_t)lvo, v45, v46, v47, v48, v49, v50);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  EasingObject_o *v22; // x20
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22

  if ( (byte_596D27B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__);
    sub_2213A60(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__);
    sub_2213A60(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
    byte_596D27B = 1;
  }
  v5 = sub_2213CCC(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 24) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Component_object, v16, v17, v18, v19, v20, v21);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v5 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0),
        v22 = *(EasingObject_o **)(v5 + 24),
        v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0),
        v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v5,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0),
        !v22) )
  {
LABEL_9:
    sub_2213CDC(mLineRenderer, v7);
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
  float v12; // s8
  float32x2_t v13; // d4
  float x; // s9
  float32x2_t v15; // d10
  float v16; // s11
  float32x2_t v17; // d10
  int32x2_t v18; // d1
  float mTgtRate; // s12
  float v20; // s8
  float32x2_t v21; // d9
  float v22; // s13
  float v23; // s2
  float v24; // s0
  float32x2_t v25; // d1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  unsigned __int64 EndScreenPosition; // kr00_8
  __int64 v28; // x2
  unsigned __int64 ThisScreenPosition; // kr30_8
  unsigned __int64 v30; // [xsp+0h] [xbp-70h]
  unsigned __int64 v31; // [xsp+0h] [xbp-70h]
  float v32; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v33; // 0:kr20_12.12

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
  v13.n64_u32[1] = 0;
  v12 = *(float *)&EndScreenPosition - *(float *)&ThisScreenPosition;
  v13.n64_f32[0] = *((float *)&EndScreenPosition + 1) - *((float *)&ThisScreenPosition + 1);
  if ( this->fields.mTgtRate < 1.0 )
  {
    x = that->fields.mLineStartPos.fields.x;
    v15.n64_u64[0] = *(unsigned __int64 *)&that->fields.mLineStartPos.fields.y;
    if ( !byte_5969AE2 )
    {
      v30 = v13.n64_u64[0];
      sub_2213A60(&System_Math_TypeInfo);
      v13.n64_u64[0] = v30;
      byte_5969AE2 = 1;
    }
    v16 = v12 - x;
    v17.n64_u64[0] = vsub_f32(v13, v15).n64_u64[0];
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v28);
    v18.n64_u64[0] = vmul_f32(v17, v17).n64_u64[0];
    mTgtRate = this->fields.mTgtRate;
    v20 = that->fields.mLineStartPos.fields.x;
    v21.n64_u64[0] = *(unsigned __int64 *)&that->fields.mLineStartPos.fields.y;
    v22 = (float)((float)(v16 * v16) + v18.n64_f32[0]) + v18.n64_f32[1];
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    v18.n64_f32[0] = sqrtf(v22);
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    {
      v31 = v18.n64_u64[0];
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v28);
      v18.n64_u64[0] = v31;
    }
    v23 = v18.n64_f32[0] * mTgtRate;
    if ( v18.n64_f32[0] <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        v32 = v18.n64_f32[0] * mTgtRate;
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        v23 = v32;
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v24 = static_fields->zeroVector.fields.x;
      v25.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.y;
    }
    else
    {
      v24 = v16 / v18.n64_f32[0];
      v25.n64_u64[0] = vdiv_f32(v17, vdup_lane_s32(v18, 0)).n64_u64[0];
    }
    v12 = v20 + (float)(v23 * v24);
    v13.n64_u64[0] = vadd_f32(v21, vmul_n_f32(v25, v23)).n64_u64[0];
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_24:
    sub_2213CDC(v5, v6);
  v33.fields.x = v12;
  *(float32x2_t *)&v33.fields.y = v13;
  UnityEngine_LineRenderer__SetPosition(v5, 1, v33, 0);
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
    sub_2213CDC(this, method);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
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

  if ( (byte_596D27A & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D27A = 1;
  }
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Object_o *)that->fields.mLineRenderer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that, method);
  if ( UnityEngine_Object__op_Inequality(mLineRenderer, 0, 0) )
  {
    this = (QuestBoardListViewEarthLine_StateNone_o *)that->fields.mLineRenderer;
    if ( this )
    {
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
      this = (QuestBoardListViewEarthLine_StateNone_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          gameObject,
                                                          (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(this, that);
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