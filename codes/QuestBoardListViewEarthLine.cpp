void __fastcall QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  QuestBoardListViewEarthLine_StateNone_o *v22; // x22
  struct CStateManager_QuestBoardListViewEarthLine__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  QuestBoardListViewEarthLine_StateMain_o *v28; // x21
  const MethodInfo *v29; // x2

  if ( (byte_40FC6DA & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v6);
    sub_B16FFC(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v7);
    sub_B16FFC(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v8);
    sub_B16FFC(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v9);
    byte_40FC6DA = 1;
  }
  if ( !this->fields.mFSM )
  {
    v10 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestBoardListViewEarthLine__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v10,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v10;
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
    v22 = (QuestBoardListViewEarthLine_StateNone_o *)sub_B170CC(
                                                       QuestBoardListViewEarthLine_StateNone_TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20,
                                                       v21);
    QuestBoardListViewEarthLine_StateNone___ctor(v22, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v22,
            (const MethodInfo_2907FBC *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v23 = this->fields.mFSM,
          v28 = (QuestBoardListViewEarthLine_StateMain_o *)sub_B170CC(
                                                             QuestBoardListViewEarthLine_StateMain_TypeInfo,
                                                             v24,
                                                             v25,
                                                             v26,
                                                             v27),
          QuestBoardListViewEarthLine_StateMain___ctor(v28, 0LL),
          !v23) )
    {
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v23,
      1,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v29);
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
  UnityEngine_Transform_o *transform; // x0
  float v8; // s10
  UnityEngine_Transform_o *v9; // x0
  float v10; // s1
  float v11; // s0
  float v12; // s2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  mEarthPoint = (UnityEngine_Component_o *)this->fields.mEarthPoint;
  if ( !mEarthPoint
    || (gameObject = UnityEngine_Component__get_gameObject(mEarthPoint, 0LL),
        Position = GameObjectExtensions__GetPosition(gameObject, 0LL),
        x = Position.fields.x,
        y = Position.fields.y,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL),
        (v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(v9, 0LL);
  v10 = y / lossyScale.fields.y;
  v11 = x / v8;
  v12 = 0.0;
  result.fields.z = v12;
  result.fields.y = v10;
  result.fields.x = v11;
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
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  if ( (byte_40FC6DD & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListViewEarthLine__getState__, method);
    byte_40FC6DD = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
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
  UnityEngine_Transform_o *v8; // x0
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
    || (LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL),
        (v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  lossyScale = UnityEngine_Transform__get_lossyScale(v8, 0LL);
  v9 = y / lossyScale.fields.y;
  v10 = x / v7;
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
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_40FC6DB & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListViewEarthLine__update__, method);
    byte_40FC6DB = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_40FC6DE & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, *(_QWORD *)&state);
    byte_40FC6DE = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___setState(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      state,
      (const MethodInfo_2908060 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
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
  UnityEngine_LineRenderer_o **p_mLineRenderer; // x19
  UnityEngine_LineRenderer_o *v9; // x20
  int v10; // s0
  UnityEngine_LineRenderer_o *v13; // x20
  int v14; // s0
  UnityEngine_Material_o *sharedMaterial; // x0

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mLineRenderer,
    (System_Int32_array **)lr,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__set_useWorldSpace(*p_mLineRenderer, 0, 0LL);
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetWidth(*p_mLineRenderer, 0.01, 0.01, 0LL);
  if ( !*p_mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetVertexCount(*p_mLineRenderer, 2, 0LL);
  v9 = *p_mLineRenderer;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v9
    || (UnityEngine_LineRenderer__SetPosition(v9, 0, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = *p_mLineRenderer,
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !v13)
    || (UnityEngine_LineRenderer__SetPosition(v13, 1, *(UnityEngine_Vector3_o *)&v14, 0LL), !*p_mLineRenderer)
    || (sharedMaterial = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)*p_mLineRenderer, 0LL)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_Material__set_renderQueue(sharedMaterial, 3100, 0LL);
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
  TerminalSceneComponent_c *v24; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct StandFigureSlideComponent_o *mTerminalServant; // x1
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  TerminalSceneComponent_c *v34; // x0
  struct TerminalSceneComponent_o *v35; // x8
  struct BaseCore_o *mEarthCore; // x1
  BaseCore_o *v37; // x0
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_40FC6DC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, lvo);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
    byte_40FC6DC = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (BattleServantConfConponent_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_B16F98(
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
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
    byte_40F6042 = 1;
  }
  v24 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v24 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v24->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_24;
  mTerminalServant = mInstance->fields.mTerminalServant;
  this->fields.mTerminalServant = mTerminalServant;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mTerminalServant,
    (System_Int32_array **)mTerminalServant,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v27);
    byte_40F6042 = 1;
  }
  v34 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v34 = TerminalSceneComponent_TypeInfo;
  }
  v35 = v34->static_fields->mInstance;
  if ( !v35
    || (mEarthCore = v35->fields.mEarthCore,
        this->fields.mEarthCore = mEarthCore,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.mEarthCore,
          (System_Int32_array **)mEarthCore,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33),
        (v37 = this->fields.mEarthCore) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  EarthPoint = BaseCore__GetEarthPoint(v37, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mEarthPoint,
    (System_Int32_array **)EarthPoint,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v46, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (BattleServantConfConponent_c *)lvo;
    sub_B16F98(p_mListViewObject, (System_Int32_array **)lvo, v47, v48, v49, v50, v51, v52);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Behaviour_o *v27; // x0
  EasingObject_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x22

  if ( (byte_40FA2EB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v8);
    sub_B16FFC(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v9);
    sub_B16FFC(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v10);
    byte_40FA2EB = 1;
  }
  v11 = sub_B170CC(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, that, method, v3, v4);
  QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___ctor(
    (QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  if ( !that )
    goto LABEL_9;
  mLineRenderer = that->fields.mLineRenderer;
  if ( !mLineRenderer )
    goto LABEL_9;
  UnityEngine_LineRenderer__SetPosition(mLineRenderer, 0, that->fields.mLineStartPos, 0LL);
  this->fields.mStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  v27 = *(UnityEngine_Behaviour_o **)(v11 + 24);
  if ( !v27
    || (UnityEngine_Behaviour__set_enabled(v27, 1, 0LL),
        v28 = *(EasingObject_o **)(v11 + 24),
        v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32),
        System_Action___ctor(
          v33,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37),
        System_Action___ctor(
          v38,
          (Il2CppObject *)v11,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !v28) )
  {
LABEL_9:
    sub_B170D4();
  }
  EasingObject__Play(v28, 0.5, v33, v38, 0.0, 17, 0LL);
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
  float realtimeSinceStartup; // s0
  UnityEngine_Renderer_o *mLineRenderer; // x21
  bool v7; // w8
  float x; // s8
  float y; // s9
  float z; // s10
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_LineRenderer_o *v18; // x0
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
    v7 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_11;
    v7 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0LL);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v7, 0LL);
  EndScreenPosition = QuestBoardListViewEarthLine__GetEndScreenPosition(that, 0LL);
  x = EndScreenPosition.fields.x;
  y = EndScreenPosition.fields.y;
  z = EndScreenPosition.fields.z;
  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(that, 0LL);
  v11 = x - ThisScreenPosition.fields.x;
  v12 = y - ThisScreenPosition.fields.y;
  v13 = z - ThisScreenPosition.fields.z;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v22.fields.x = v11 - that->fields.mLineStartPos.fields.x;
    v22.fields.y = v12 - that->fields.mLineStartPos.fields.y;
    v22.fields.z = v13 - that->fields.mLineStartPos.fields.z;
    v19.methodPointer = *(Il2CppMethodPointer *)&v22.fields.x;
    *(float *)&v19.invoker_method = v22.fields.z;
    v23.fields.x = UnityEngine_Vector3__get_magnitude(v22, &v19);
    v23.fields.y = this->fields.mTgtRate;
    v14 = that->fields.mLineStartPos.fields.x;
    v15 = that->fields.mLineStartPos.fields.y;
    v16 = that->fields.mLineStartPos.fields.z;
    v17 = v23.fields.x * v23.fields.y;
    normalized = UnityEngine_Vector3__get_normalized(v23, &v19);
    v11 = v14 + (float)(v17 * normalized.fields.x);
    v12 = v15 + (float)(v17 * normalized.fields.y);
    v13 = v16 + (float)(v17 * normalized.fields.z);
  }
  v18 = that->fields.mLineRenderer;
  if ( !v18 )
LABEL_11:
    sub_B170D4();
  UnityEngine_LineRenderer__SetPosition(v18, 1, *(UnityEngine_Vector3_o *)&v11, 0LL);
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
    sub_B170D4();
  _4__this->fields.mTgtRate = eo->fields.mStartTime;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  UnityEngine_Renderer_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_UIWidget; // x0

  if ( (byte_40FA2EC & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, that);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA2EC = 1;
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
    v6 = (UnityEngine_Renderer_o *)that->fields.mLineRenderer;
    if ( v6 )
    {
      UnityEngine_Renderer__set_enabled(v6, 0, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
      Component_UIWidget = (UnityEngine_Behaviour_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                        gameObject,
                                                        (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( Component_UIWidget )
      {
        UnityEngine_Behaviour__set_enabled(Component_UIWidget, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
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