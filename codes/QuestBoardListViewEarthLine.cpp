void __fastcall QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
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

  if ( (byte_4B13095 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v11, v12);
    byte_4B13095 = 1;
  }
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_QuestBoardListViewEarthLine__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_313FBC4 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v24 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListViewEarthLine_StateNone_TypeInfo, v21, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !mFSM
      || (CStateManager_object___add(
            mFSM,
            0,
            (IState_T__o *)v24,
            (const MethodInfo_313FC6C *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v27 = (CStateManager_T__o *)this->fields.mFSM,
          v31 = (Il2CppObject *)sub_1BCAA2C(QuestBoardListViewEarthLine_StateMain_TypeInfo, v28, v29, v30),
          System_Object___ctor(v31, 0LL),
          !v27) )
    {
      sub_1BCAA3C(v25, v26);
    }
    CStateManager_object___add(
      v27,
      1,
      (IState_T__o *)v31,
      (const MethodInfo_313FC6C *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v32);
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
    sub_1BCAA3C(mEarthPoint, method);
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
  __int64 v2; // x2
  QuestBoardListViewEarthLine_o *v3; // x19
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B13098 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_1BCA7E0(
                                              &Method_CStateManager_QuestBoardListViewEarthLine__getState__,
                                              method,
                                              v2);
    byte_4B13098 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(transform, v7);
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
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13096 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListViewEarthLine__update__, method, v2);
    byte_4B13096 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(
      mFSM,
      (const MethodInfo_313FCD4 *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13099 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, *(_QWORD *)&state, method);
    byte_4B13099 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___setState(
      mFSM,
      state,
      (const MethodInfo_313FCF8 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
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
  __int64 v11; // x2
  UnityEngine_LineRenderer_o *v12; // x20
  __int64 v13; // x2
  UnityEngine_LineRenderer_o *v14; // x20

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_1BCA784(
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
  v12 = *p_mLineRenderer;
  if ( !byte_4B109C1 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v11);
    byte_4B109C1 = 1;
  }
  if ( !v12 )
    goto LABEL_14;
  UnityEngine_LineRenderer__SetPosition(v12, 0, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  v14 = *p_mLineRenderer;
  if ( !byte_4B109C1 )
  {
    sharedMaterial = (UnityEngine_LineRenderer_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v13);
    byte_4B109C1 = 1;
  }
  if ( !v14
    || (UnityEngine_LineRenderer__SetPosition(v14, 1, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (sharedMaterial = *p_mLineRenderer) == 0LL)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(sharedMaterial, v9);
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
  __int64 v16; // x2
  PartyOrganizationUtility_o *p_mListViewObject; // x21
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BaseCore_o *mEarthCore; // x0
  System_Threading_CancellationTokenSource_c *klass; // x8
  struct StandFigureSlideComponent_o *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Threading_CancellationTokenSource_c *v34; // x8
  struct BaseCore_o *v35; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  UnityEngine_Object_o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_4B13097 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, lvo, *(_QWORD *)&war_id);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B13097 = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (PartyOrganizationUtility_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mListViewObject,
    0LL,
    *(int64_t *)&war_id,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v18, v19);
    byte_4B10F83 = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !klass )
    goto LABEL_20;
  v27 = *(struct StandFigureSlideComponent_o **)&klass->_2.naturalAligment;
  this->fields.mTerminalServant = v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mTerminalServant, (int64_t)v27, v19, v20, v21, v22, v23, v24);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v18, v28);
    byte_4B10F83 = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v34 = mEarthCore[1].fields.m_CancellationTokenSource->klass;
  if ( !v34
    || (v35 = (struct BaseCore_o *)v34->vtable._4_Dispose.method,
        this->fields.mEarthCore = v35,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEarthCore, (int64_t)v35, v28, v29, v30, v31, v32, v33),
        (mEarthCore = this->fields.mEarthCore) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(mEarthCore, v18);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_1BCA784((PartyOrganizationUtility_o *)p_mEarthPoint, (int64_t)EarthPoint, v38, v39, v40, v41, v42, v43);
  v45 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( !UnityEngine_Object__op_Equality(v45, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (PartyOrganizationUtility_c *)lvo;
    sub_1BCA784(p_mListViewObject, (int64_t)lvo, v46, v47, v48, v49, v50, v51);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  EasingObject_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x22

  if ( (byte_4B1309B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7);
    sub_1BCA7E0(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v8, v9);
    sub_1BCA7E0(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v10, v11);
    sub_1BCA7E0(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v12, v13);
    byte_4B1309B = 1;
  }
  v14 = sub_1BCAA2C(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
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
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)Component_object, v25, v26, v27, v28, v29, v30);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v14 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0LL),
        v31 = *(EasingObject_o **)(v14 + 24),
        v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v14,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38),
        System_Action___ctor(
          v39,
          (Il2CppObject *)v14,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !v31) )
  {
LABEL_9:
    sub_1BCAA3C(mLineRenderer, v16);
  }
  EasingObject__Play(v31, 0.5, v35, v39, 0.0, 17, 0LL);
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
  __int64 v14; // x2
  float v15; // s9
  float v16; // s8
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float z; // s14
  float v21; // s13
  float v22; // s12
  float v23; // s9
  float mTgtRate; // s14
  float v25; // s8
  float v26; // s10
  float v27; // s11
  float v28; // s15
  float v29; // s14
  float v30; // s0
  float v31; // s1
  float v32; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v34; // s0
  float v35; // s1
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
  v15 = x - ThisScreenPosition.fields.x;
  v16 = y - ThisScreenPosition.fields.y;
  v17 = 0.0;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v18 = that->fields.mLineStartPos.fields.x;
    v19 = that->fields.mLineStartPos.fields.y;
    z = that->fields.mLineStartPos.fields.z;
    if ( !byte_4B109C3 )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v6, v14);
      byte_4B109C3 = 1;
    }
    v21 = v15 - v18;
    v22 = v16 - v19;
    v23 = 0.0 - z;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    mTgtRate = this->fields.mTgtRate;
    v25 = that->fields.mLineStartPos.fields.x;
    v26 = that->fields.mLineStartPos.fields.y;
    v27 = that->fields.mLineStartPos.fields.z;
    if ( !byte_4B109C4 )
    {
      sub_1BCA7E0(&System_Math_TypeInfo, v6, v14);
      byte_4B109C4 = 1;
    }
    v28 = sqrtf((float)((float)(v21 * v21) + (float)(v22 * v22)) + (float)(v23 * v23));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v29 = v28 * mTgtRate;
    if ( v28 <= 0.00001 )
    {
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v6, v14);
        byte_4B109C1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v30 = static_fields->zeroVector.fields.x;
      v31 = static_fields->zeroVector.fields.y;
      v32 = static_fields->zeroVector.fields.z;
    }
    else
    {
      v30 = v21 / v28;
      v31 = v22 / v28;
      v32 = v23 / v28;
    }
    v15 = v25 + (float)(v29 * v30);
    v16 = v26 + (float)(v29 * v31);
    v17 = v27 + (float)(v29 * v32);
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_24:
    sub_1BCAA3C(v5, v6);
  v34 = v15;
  v35 = v16;
  UnityEngine_LineRenderer__SetPosition(v5, 1, *(UnityEngine_Vector3_o *)(&v17 - 2), 0LL);
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
    sub_1BCAA3C(this, method);
  _4__this->fields.mTgtRate = eo->fields.mNow;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x2
  UnityEngine_Object_o *mLineRenderer; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B1309A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that, method);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1309A = 1;
  }
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Object_o *)that->fields.mLineRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, that);
  if ( UnityEngine_Object__op_Inequality(mLineRenderer, 0LL, 0LL) )
  {
    this = (QuestBoardListViewEarthLine_StateNone_o *)that->fields.mLineRenderer;
    if ( this )
    {
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
      this = (QuestBoardListViewEarthLine_StateNone_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          gameObject,
                                                          (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(this, that);
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