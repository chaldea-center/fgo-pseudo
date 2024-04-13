void __fastcall QuestBoardListViewEarthLine___ctor(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewEarthLine__Awake(QuestBoardListViewEarthLine_o *this, const MethodInfo *method)
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
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x21
  QuestBoardListViewEarthLine_StateNone_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  struct CStateManager_QuestBoardListViewEarthLine__o *v28; // x20
  QuestBoardListViewEarthLine_StateMain_o *v29; // x21
  const MethodInfo *v30; // x2

  if ( (byte_42EA01D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListViewEarthLine___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestBoardListViewEarthLine__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestBoardListViewEarthLine__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&QuestBoardListViewEarthLine_StateMain_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QuestBoardListViewEarthLine_StateNone_TypeInfo, v14, v15, v16);
    byte_42EA01D = 1;
  }
  if ( !this->fields.mFSM )
  {
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestBoardListViewEarthLine__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v17,
      (QAASpotStateController_IMapSpot_o *)this,
      2,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestBoardListViewEarthLine___ctor__);
    this->fields.mFSM = (struct CStateManager_QuestBoardListViewEarthLine__o *)v17;
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
    v25 = (QuestBoardListViewEarthLine_StateNone_o *)sub_B5D694(QuestBoardListViewEarthLine_StateNone_TypeInfo);
    QuestBoardListViewEarthLine_StateNone___ctor(v25, 0LL);
    if ( !mFSM
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
            0,
            (IState_T__o *)v25,
            (const MethodInfo_2BB26FC *)Method_CStateManager_QuestBoardListViewEarthLine__add__),
          v28 = this->fields.mFSM,
          v29 = (QuestBoardListViewEarthLine_StateMain_o *)sub_B5D694(QuestBoardListViewEarthLine_StateMain_TypeInfo),
          QuestBoardListViewEarthLine_StateMain___ctor(v29, 0LL),
          !v28) )
    {
      sub_B5D69C(v26, v27);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)v28,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestBoardListViewEarthLine__add__);
    QuestBoardListViewEarthLine__SetState(this, 0, v30);
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
    sub_B5D69C(mEarthPoint, method);
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
  int v2; // w2
  __int64 v3; // x3
  QuestBoardListViewEarthLine_o *v4; // x19
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x8

  v4 = this;
  if ( (byte_42EA020 & 1) == 0 )
  {
    this = (QuestBoardListViewEarthLine_o *)sub_B5D5C4(
                                              &Method_CStateManager_QuestBoardListViewEarthLine__getState__,
                                              (_DWORD)method,
                                              v2,
                                              v3);
    byte_42EA020 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
    sub_B5D69C(transform, v7);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_42EA01E & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListViewEarthLine__update__, (_DWORD)method, v2, v3);
    byte_42EA01E = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestBoardListViewEarthLine__update__);
  QuestBoardListViewEarthLine__Hide(this, method);
}


void __fastcall QuestBoardListViewEarthLine__SetState(
        QuestBoardListViewEarthLine_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestBoardListViewEarthLine__o *mFSM; // x0

  if ( (byte_42EA021 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestBoardListViewEarthLine__setState__, state, (_DWORD)method, v3);
    byte_42EA021 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___setState(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      state,
      (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestBoardListViewEarthLine__setState__);
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
  __int64 v9; // x1
  UnityEngine_LineRenderer_o *sharedMaterial; // x0
  UnityEngine_LineRenderer_o *v11; // x20
  int v12; // s0
  UnityEngine_LineRenderer_o *v15; // x20
  int v16; // s0

  this->fields.mLineRenderer = lr;
  p_mLineRenderer = &this->fields.mLineRenderer;
  sub_B5D560(
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
  v11 = *p_mLineRenderer;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v11
    || (UnityEngine_LineRenderer__SetPosition(v11, 0, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = *p_mLineRenderer,
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !v15)
    || (UnityEngine_LineRenderer__SetPosition(v15, 1, *(UnityEngine_Vector3_o *)&v16, 0LL),
        (sharedMaterial = *p_mLineRenderer) == 0LL)
    || (sharedMaterial = (UnityEngine_LineRenderer_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                         (UnityEngine_Renderer_o *)sharedMaterial,
                                                         0LL)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(sharedMaterial, v9);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleServantConfConponent_o *p_mListViewObject; // x20
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BaseCore_o *mEarthCore; // x0
  UnityEngine_GameObject_c *klass; // x8
  struct StandFigureSlideComponent_o *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_c *v35; // x8
  struct BaseCore_o *v36; // x1
  struct BaseEarthPoint_o *EarthPoint; // x0
  struct BaseEarthPoint_o **p_mEarthPoint; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Object_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  z = st_pos.fields.z;
  y = st_pos.fields.y;
  x = st_pos.fields.x;
  if ( (byte_42EA01F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)lvo, war_id, method);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v16, v17);
    byte_42EA01F = 1;
  }
  this->fields.mListViewObject = 0LL;
  p_mListViewObject = (BattleServantConfConponent_o *)&this->fields.mListViewObject;
  this->fields.mLineStartPos.fields.x = x;
  this->fields.mLineStartPos.fields.y = y;
  this->fields.mLineStartPos.fields.z = z;
  sub_B5D560(
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
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v19, (_DWORD)v20, v21);
    byte_42E4B1E = 1;
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
  v28 = *(struct StandFigureSlideComponent_o **)&klass->_2.interfaces_count;
  this->fields.mTerminalServant = v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mTerminalServant,
    (System_Int32_array **)v28,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v19, (_DWORD)v29, v30);
    byte_42E4B1E = 1;
  }
  mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mEarthCore = (BaseCore_o *)TerminalSceneComponent_TypeInfo;
  }
  v35 = mEarthCore[1].fields.mEarthPointRoot->klass;
  if ( !v35
    || (v36 = (struct BaseCore_o *)v35->vtable._3_ToString.method,
        this->fields.mEarthCore = v36,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mEarthCore,
          (System_Int32_array **)v36,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (mEarthCore = this->fields.mEarthCore) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(mEarthCore, v19);
  }
  EarthPoint = BaseCore__GetEarthPoint(mEarthCore, war_id, 0LL);
  this->fields.mEarthPoint = EarthPoint;
  p_mEarthPoint = &this->fields.mEarthPoint;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_mEarthPoint,
    (System_Int32_array **)EarthPoint,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (UnityEngine_Object_o *)*p_mEarthPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v45, 0LL, 0LL) )
  {
    p_mListViewObject->klass = (BattleServantConfConponent_c *)lvo;
    sub_B5D560(p_mListViewObject, (System_Int32_array **)lvo, v46, v47, v48, v49, v50, v51);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  UnityEngine_LineRenderer_o *mLineRenderer; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  EasingObject_o *v35; // x20
  System_Action_o *v36; // x21
  System_Action_o *v37; // x22

  if ( (byte_42E7EDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7, v8);
    sub_B5D5C4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__, v9, v10, v11);
    sub_B5D5C4(&Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__, v12, v13, v14);
    sub_B5D5C4(&QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo, v15, v16, v17);
    byte_42E7EDA = 1;
  }
  v18 = sub_B5D694(QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_TypeInfo);
  QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___ctor(
    (QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
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
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), Component_UIWidget, v29, v30, v31, v32, v33, v34);
  mLineRenderer = *(UnityEngine_LineRenderer_o **)(v18 + 24);
  if ( !mLineRenderer
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLineRenderer, 1, 0LL),
        v35 = *(EasingObject_o **)(v18 + 24),
        v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v18,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__0__,
          0LL),
        v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v37,
          (Il2CppObject *)v18,
          Method_QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0__begin_b__1__,
          0LL),
        !v35) )
  {
LABEL_9:
    sub_B5D69C(mLineRenderer, v20);
  }
  EasingObject__Play(v35, 0.5, v36, v37, 0.0, 17, 0LL);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s11
  MethodInfo v20; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o EndScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o ThisScreenPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4

  LODWORD(v20.invoker_method) = 0;
  v20.methodPointer = 0LL;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( !that )
    goto LABEL_11;
  mLineRenderer = (UnityEngine_Renderer_o *)that->fields.mLineRenderer;
  if ( (float)(realtimeSinceStartup - this->fields.mStartTime) >= 0.5 )
  {
    if ( !mLineRenderer )
      goto LABEL_11;
    v9 = 1;
  }
  else
  {
    if ( !mLineRenderer )
      goto LABEL_11;
    v9 = !UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)that->fields.mLineRenderer, 0LL);
  }
  UnityEngine_Renderer__set_enabled(mLineRenderer, v9, 0LL);
  EndScreenPosition = QuestBoardListViewEarthLine__GetEndScreenPosition(that, 0LL);
  x = EndScreenPosition.fields.x;
  y = EndScreenPosition.fields.y;
  z = EndScreenPosition.fields.z;
  ThisScreenPosition = QuestBoardListViewEarthLine__GetThisScreenPosition(that, 0LL);
  v13 = x - ThisScreenPosition.fields.x;
  v14 = y - ThisScreenPosition.fields.y;
  v15 = z - ThisScreenPosition.fields.z;
  if ( this->fields.mTgtRate < 1.0 )
  {
    v23.fields.x = v13 - that->fields.mLineStartPos.fields.x;
    v23.fields.y = v14 - that->fields.mLineStartPos.fields.y;
    v23.fields.z = v15 - that->fields.mLineStartPos.fields.z;
    v20.methodPointer = *(Il2CppMethodPointer *)&v23.fields.x;
    *(float *)&v20.invoker_method = v23.fields.z;
    v24.fields.x = UnityEngine_Vector3__get_magnitude(v23, &v20);
    v24.fields.y = this->fields.mTgtRate;
    v16 = that->fields.mLineStartPos.fields.x;
    v17 = that->fields.mLineStartPos.fields.y;
    v18 = that->fields.mLineStartPos.fields.z;
    v19 = v24.fields.x * v24.fields.y;
    normalized = UnityEngine_Vector3__get_normalized(v24, &v20);
    v13 = v16 + (float)(v19 * normalized.fields.x);
    v14 = v17 + (float)(v19 * normalized.fields.y);
    v15 = v18 + (float)(v19 * normalized.fields.z);
  }
  v5 = that->fields.mLineRenderer;
  if ( !v5 )
LABEL_11:
    sub_B5D69C(v5, v6);
  UnityEngine_LineRenderer__SetPosition(v5, 1, *(UnityEngine_Vector3_o *)&v13, 0LL);
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
    sub_B5D69C(this, method);
  _4__this->fields.mTgtRate = eo->fields.mStartTime;
}


void __fastcall QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0___begin_b__1(
        QuestBoardListViewEarthLine_StateMain___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewEarthLine_StateMain_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *mLineRenderer; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42E7EDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, (_DWORD)that, (_DWORD)method, v3);
    this = (QuestBoardListViewEarthLine_StateNone_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7EDB = 1;
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
                                                          (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, that);
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