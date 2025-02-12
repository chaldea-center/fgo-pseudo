void __fastcall QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CStateManager_T__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  CStateManager_T__o *v18; // x20
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4BC48DB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v3);
    sub_1C1ABD4(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v4);
    sub_1C1ABD4(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v5);
    sub_1C1ABD4(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v6);
    byte_4BC48DB = 1;
  }
  if ( !this->fields.mFSM )
  {
    v7 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    CStateManager_object____ctor(
      v7,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_31D32D0 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v7;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v15 = (Il2CppObject *)sub_1C1AE20(QuestBoardListViewEarthLine_StateNone_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v15,
            (const MethodInfo_31D3378 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v18 = (CStateManager_T__o *)this->fields.mFSM,
          v19 = (Il2CppObject *)sub_1C1AE20(QuestBoardListViewEarthLine_StateMain_TypeInfo),
          System_Object___ctor(v19, 0LL),
          !v18) )
    {
      sub_1C1AE30(v16, v17);
    }
    CStateManager_object___add(
      v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_31D3378 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
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
    sub_1C1AE30(mEarthPoint, method);
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
  if ( (byte_4BC48DE & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_1C1ABD4(
                                              &Method_CStateManager_QuestBoardListViewEarthLine__getState__,
                                              method);
    byte_4BC48DE = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C1AE30(this, method);
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
  __int64 v7; // x1
  float v8; // s10
  float v9; // s1
  float v10; // s0
  float v11; // s2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = GameObjectExtensions__GetPosition(gameObject, 0LL);
  x = Position.fields.x;
  y = Position.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(transform, v7);
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  v9 = y / lossyScale.fields.y;
  v10 = x / v8;
  v11 = 0.0;
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
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

  if ( (byte_4BC48DC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestBoardListViewEarthLine__update__, method);
    byte_4BC48DC = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_31D33E0 *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BC48DF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, *(_QWORD *)&state);
    byte_4BC48DF = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_31D3404 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
}


void __fastcall QuestBoardListViewEarthLine__SetupFirst(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_LineRenderer_o *lr,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  __int64 v9; // x1
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  UnityEngine_LineRenderer_o *v11; // x20
  UnityEngine_LineRenderer_o *v12; // x20

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mLineRenderer,
    (int64_t)lr,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  v11 = *p_mLineRenderer;
  if ( !byte_4BC2141 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4BC2141 = 1;
  }
  if ( !v11 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v11, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v12 = *p_mLineRenderer;
  if ( !byte_4BC2141 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4BC2141 = 1;
  }
  if ( !v12
    || (UnityEngine_LineRenderer__SetPosition(v12, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (sharedMaterial = *p_mLineRenderer) == 0LL)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0LL)) == 0LL )
  {
LABEL_14:
    sub_1C1AE30(sharedMaterial, v9);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x1
  PartyOrganizationUtility_o *p_mListViewObject; // x21
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BaseCore_o *mEarthCore; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8
  struct StandFigureSlideComponent_o *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Threading_CancellationTokenSource_c *v33; // x8
  struct BaseCore_o *v34; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Object_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_4BC48DD & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, lvo);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v15);
    byte_4BC48DD = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (PartyOrganizationUtility_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mListViewObject,
    0LL,
    *(int64_t *)&war_id,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v17);
    byte_4BC2713 = 1;
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
  v26 = *(struct StandFigureSlideComponent_o **)&klass->_2.naturalAligment;
  this->fields.mTerminalServant = v26;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mTerminalServant, (int64_t)v26, v18, v19, v20, v21, v22, v23);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v17);
    byte_4BC2713 = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v33 = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !v33
    || (v34 = (struct BaseCore_o *)v33->vtable._4_Dispose.method,
        this->fields.mEarthCore = v34,
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mEarthCore, (int64_t)v34, v27, v28, v29, v30, v31, v32),
        (mEarthCore = this->fields.mEarthCore) == 0LL) )
  {
LABEL_20:
    sub_1C1AE30(mEarthCore, v17);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_mEarthPoint, (int64_t)EarthPoint, v37, v38, v39, v40, v41, v42);
  v43 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v43, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (PartyOrganizationUtility_c *)lvo;
    sub_1C1AB78(p_mListViewObject, (int64_t)lvo, v44, v45, v46, v47, v48, v49);
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
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  EasingObject_o *v26; // x20
  System_Action_o *v27; // x21
  System_Action_o *v28; // x22

  if ( (byte_4BC48E1 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1C1ABD4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v6);
    sub_1C1ABD4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v7);
    sub_1C1ABD4(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v8);
    byte_4BC48E1 = 1;
  }
  v9 = sub_1C1AE20(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
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
                       (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)Component_object, v20, v21, v22, v23, v24, v25);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v9 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0LL),
        v26 = *(EasingObject_o **)(v9 + 24),
        v27 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v28 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !v26) )
  {
LABEL_9:
    sub_1C1AE30(mLineRenderer, v11);
  }
  EasingObject__Play(v26, 0.5, v27, v28, 0.0, 17, 0LL);
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
    v9 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_24;
    v9 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0LL);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v9, 0LL);
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
    if ( !byte_4BC2143 )
    {
      sub_1C1ABD4(&System_Math_TypeInfo, v6);
      byte_4BC2143 = 1;
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
    if ( !byte_4BC2144 )
    {
      sub_1C1ABD4(&System_Math_TypeInfo, v6);
      byte_4BC2144 = 1;
    }
    v27 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28 = v27 * mTgtRate;
    if ( v27 <= 0.00001 )
    {
      if ( !byte_4BC2141 )
      {
        sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v6);
        byte_4BC2141 = 1;
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
    sub_1C1AE30(v5, v6);
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
    sub_1C1AE30(this, method);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(this, method);
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

  if ( (byte_4BC48E0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BC48E0 = 1;
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
                                                          (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1C1AE30(this, that);
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