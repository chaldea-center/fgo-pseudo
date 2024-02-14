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
  CStateManager_QAASpotStateController_IMapSpot__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  QuestBoardListViewEarthLine_StateNone_o *v18; // x22
  __int64 v19; // x0
  struct CStateManager_QuestBoardListViewEarthLine__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  QuestBoardListViewEarthLine_StateMain_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4216CCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v4);
    sub_B0D8A4(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v5);
    sub_B0D8A4(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v6);
    sub_B0D8A4(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v7);
    byte_4216CCA = 1;
  }
  if ( !this->fields.mFSM )
  {
    v8 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                               CStateManager_QuestBoardListViewEarthLine__TypeInfo,
                                                               method,
                                                               v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v8,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v8;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    mFSM = this->fields.mFSM;
    v18 = (QuestBoardListViewEarthLine_StateNone_o *)sub_B0D974(
                                                       QuestBoardListViewEarthLine_StateNone_TypeInfo,
                                                       v16,
                                                       v17);
    QuestBoardListViewEarthLine_StateNone___ctor(v18, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v18,
            (const MethodInfo_2AAF850 *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v20 = this->fields.mFSM,
          v23 = (QuestBoardListViewEarthLine_StateMain_o *)sub_B0D974(
                                                             QuestBoardListViewEarthLine_StateMain_TypeInfo,
                                                             v21,
                                                             v22),
          QuestBoardListViewEarthLine_StateMain___ctor(v23, 0LL),
          !v20) )
    {
      sub_B0D97C(v19);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v20,
      1,
      (IState_T__o *)v23,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v24);
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
    sub_B0D97C(mEarthPoint);
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
  v5 = ThisScreenPosition.fields.z + this->fields.mLineStartPos.fields.z;
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
  if ( (byte_4216CCD & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_B0D8A4(
                                              &Method_CStateManager_QuestBoardListViewEarthLine__getState__,
                                              method);
    byte_4216CCD = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B0D97C(this);
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
    sub_B0D97C(transform);
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
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_4216CCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListViewEarthLine__update__, method);
    byte_4216CCB = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_4216CCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, *(_QWORD *)&state);
    byte_4216CCE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___setState(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      state,
      (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetupFirst(
        QuestBoardListViewEarthLine_o *this,
        UnityEngine_LineRenderer_o *lr,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  UnityEngine_LineRenderer_o *v10; // x20
  int v11; // s0
  UnityEngine_LineRenderer_o *v14; // x20
  int v15; // s0

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mLineRenderer,
    (System_Int32_array **)lr,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__set_useWorldSpace(sharedMaterial, 0, 0LL);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetWidth(sharedMaterial, 0.01, 0.01, 0LL);
  sharedMaterial = *p_mLineRenderer;
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetVertexCount(sharedMaterial, 2, 0LL);
  v10 = *p_mLineRenderer;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v10
    || (UnityEngine_LineRenderer__SetPosition(v10, 0, *(UnityEngine_Vector3_o *)&v11, 0LL),
        v14 = *p_mLineRenderer,
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
        !v14)
    || (UnityEngine_LineRenderer__SetPosition(v14, 1, *(UnityEngine_Vector3_o *)&v15, 0LL),
        (sharedMaterial = *p_mLineRenderer) == 0LL)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0LL)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(sharedMaterial);
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
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x1
  BattleServantConfConponent_o *p_mListViewObject; // x20
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BaseCore_o *mEarthCore; // x0
  UnityEngine_GameObject_c *klass; // x8
  struct StandFigureSlideComponent_o *v26; // x1
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_c *v34; // x8
  struct BaseCore_o *v35; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_4216CCC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, lvo);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v15);
    byte_4216CCC = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (BattleServantConfConponent_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    0LL,
    *(System_String_array ***)&war_id,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
    byte_421083D = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = mEarthCore[1].fields.mEarthPointRoot->klass;
  if ( !klass )
    goto LABEL_24;
  v26 = *(struct StandFigureSlideComponent_o **)&klass->_2.interfaces_count;
  this->fields.mTerminalServant = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mTerminalServant,
    (System_Int32_array **)v26,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
    byte_421083D = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v34 = mEarthCore[1].fields.mEarthPointRoot->klass;
  if ( !v34
    || (v35 = (struct BaseCore_o *)v34->vtable._3_ToString.method,
        this->fields.mEarthCore = v35,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.mEarthCore,
          (System_Int32_array **)v35,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (mEarthCore = this->fields.mEarthCore) == 0LL) )
  {
LABEL_24:
    sub_B0D97C(mEarthCore);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_mEarthPoint,
    (System_Int32_array **)EarthPoint,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v44, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (BattleServantConfConponent_c *)lvo;
    sub_B0D840(p_mListViewObject, (System_Int32_array **)lvo, v45, v46, v47, v48, v49, v50);
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
  QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *v9; // x19
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  EasingObject_o *eo; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22

  if ( (byte_42121D7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B0D8A4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v6);
    sub_B0D8A4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v7);
    sub_B0D8A4(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v8);
    byte_42121D7 = 1;
  }
  v9 = (QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *)sub_B0D974(
                                                                         QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo,
                                                                         that,
                                                                         method);
  QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields, this);
  if ( !that )
    goto LABEL_9;
  mLineRenderer = that->fields.mLineRenderer;
  if ( !mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetPosition(mLineRenderer, 0, that->fields.mLineStartPos, 0LL);
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v9->fields.eo = (struct EasingObject_o *)Component_UIWidget;
  sub_B0D840(&v9->fields.eo, Component_UIWidget);
  mLineRenderer = (UnityEngine_LineRenderer_o *)v9->fields.eo;
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0LL),
        eo = v9->fields.eo,
        v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v9,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !eo) )
  {
LABEL_9:
    sub_B0D97C(mLineRenderer);
  }
  EasingObject__Play(eo, 0.5, v16, v19, 0.0, 17, 0LL);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  MethodInfo v19; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o EndScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ThisScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4

  LODWORD(v19.invoker_method) = 0;
  v19.methodPointer = 0LL;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Renderer_o *)that->fields.mLineRenderer;
  if ( (float)(realtimeSinceStartup - this->fields.mStartTime) >= 0.5 )
  {
    if ( !mLineRenderer )
      goto LABEL_11;
    v8 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_11;
    v8 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0LL);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v8, 0LL);
  EndScreenPosition = QuestBoardListViewEarthLine__GetEndScreenPosition(that, 0LL);
  x = EndScreenPosition.fields.x;
  y = EndScreenPosition.fields.y;
  z = EndScreenPosition.fields.z;
  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(that, 0LL);
  v12 = x - ThisScreenPosition.fields.x;
  v13 = y - ThisScreenPosition.fields.y;
  v14 = z - ThisScreenPosition.fields.z;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v22.fields.x = v12 - that->fields.mLineStartPos.fields.x;
    v22.fields.y = v13 - that->fields.mLineStartPos.fields.y;
    v22.fields.z = v14 - that->fields.mLineStartPos.fields.z;
    v19.methodPointer = *(Il2CppMethodPointer *)&v22.fields.x;
    *(float *)&v19.invoker_method = v22.fields.z;
    v23.fields.x = UnityEngine_Vector3__get_magnitude(v22, &v19);
    v23.fields.y = this->fields.mTgtRate;
    v15 = that->fields.mLineStartPos.fields.x;
    v16 = that->fields.mLineStartPos.fields.y;
    v17 = that->fields.mLineStartPos.fields.z;
    v18 = v23.fields.x * v23.fields.y;
    normalized = UnityEngine_Vector3__get_normalized(v23, &v19);
    v12 = v15 + (float)(v18 * normalized.fields.x);
    v13 = v16 + (float)(v18 * normalized.fields.y);
    v14 = v17 + (float)(v18 * normalized.fields.z);
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_11:
    sub_B0D97C(v5);
  UnityEngine_LineRenderer__SetPosition(v5, 1, *(UnityEngine_Vector3_o *)&v12, 0LL);
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
    sub_B0D97C(this);
  _4__this->fields.mTgtRate = eo->fields.mStartTime;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(this);
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

  if ( (byte_42121D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42121D8 = 1;
  }
  if ( !that )
    goto LABEL_12;
  mLineRenderer = (UnityEngine_Object_o *)that->fields.mLineRenderer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mLineRenderer, 0LL, 0LL) )
  {
    this = (QuestBoardListViewEarthLine_StateNone_o *)that->fields.mLineRenderer;
    if ( this )
    {
      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
      this = (QuestBoardListViewEarthLine_StateNone_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                          gameObject,
                                                          (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(this);
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