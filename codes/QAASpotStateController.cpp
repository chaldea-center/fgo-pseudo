void __fastcall QAASpotStateController___ctor(QAASpotStateController_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController__Init(
        QAASpotStateController_o *this,
        QAASpotStateController_IMapSpot_o *targetObject,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  CStateManager_T__o *v24; // x21
  QAASpotStateController_Fields *p_fields; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  CStateManager_T__o *stateManager; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  QAASpotStateController_StateNone_o *v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  CStateManager_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  QAASpotStateController_StateMapMain_o *v43; // x22
  CStateManager_T__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  QAASpotStateController_StateQaaHide_o *v48; // x22
  CStateManager_T__o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  QAASpotStateController_StateQaaGray_o *v53; // x22
  CStateManager_T__o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  QAASpotStateController_StateQaaDisp_o *v58; // x22
  CStateManager_T__o *v59; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  QAASpotStateController_StateQaaHide_o *v63; // x22
  CStateManager_T__o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  QAASpotStateController_StateQaaGray_o *v68; // x22
  CStateManager_T__o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  QAASpotStateController_StateQaaDisp_o *v73; // x22
  CStateManager_T__o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  QAASpotStateController_StateQaaChange_o *v78; // x22
  CStateManager_T__o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  QAASpotStateController_StateQaaAnimation_o *v83; // x21
  const MethodInfo *v84; // x2

  if ( (byte_4B1300D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QAASpotStateController_IMapSpot___ctor__, targetObject, method);
    sub_1BCA7E0(&Method_CStateManager_QAASpotStateController_IMapSpot__add__, v6, v7);
    sub_1BCA7E0(&CStateManager_QAASpotStateController_IMapSpot__TypeInfo, v8, v9);
    sub_1BCA7E0(&QAASpotStateController_StateMapMain_TypeInfo, v10, v11);
    sub_1BCA7E0(&QAASpotStateController_StateNone_TypeInfo, v12, v13);
    sub_1BCA7E0(&QAASpotStateController_StateQaaAnimation_TypeInfo, v14, v15);
    sub_1BCA7E0(&QAASpotStateController_StateQaaChange_TypeInfo, v16, v17);
    sub_1BCA7E0(&QAASpotStateController_StateQaaDisp_TypeInfo, v18, v19);
    sub_1BCA7E0(&QAASpotStateController_StateQaaGray_TypeInfo, v20, v21);
    sub_1BCA7E0(&QAASpotStateController_StateQaaHide_TypeInfo, v22, v23);
    byte_4B1300D = 1;
  }
  v24 = (CStateManager_T__o *)sub_1BCAA2C(
                                CStateManager_QAASpotStateController_IMapSpot__TypeInfo,
                                targetObject,
                                method,
                                v3);
  CStateManager_object____ctor(
    v24,
    (Il2CppObject *)targetObject,
    10,
    (const MethodInfo_313FBC4 *)Method_CStateManager_QAASpotStateController_IMapSpot___ctor__);
  this->fields.stateManager = (struct CStateManager_QAASpotStateController_IMapSpot__o *)v24;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  v36 = (QAASpotStateController_StateNone_o *)sub_1BCAA2C(QAASpotStateController_StateNone_TypeInfo, v33, v34, v35);
  QAASpotStateController_StateNone___ctor(v36, 0LL);
  if ( !stateManager )
    goto LABEL_14;
  CStateManager_object___add(
    stateManager,
    0,
    (IState_T__o *)v36,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v39 = (CStateManager_T__o *)p_fields->stateManager;
  v43 = (QAASpotStateController_StateMapMain_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateMapMain_TypeInfo,
                                                   v40,
                                                   v41,
                                                   v42);
  QAASpotStateController_StateMapMain___ctor(v43, 0LL);
  if ( !v39 )
    goto LABEL_14;
  CStateManager_object___add(
    v39,
    1,
    (IState_T__o *)v43,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v44 = (CStateManager_T__o *)p_fields->stateManager;
  v48 = (QAASpotStateController_StateQaaHide_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaHide_TypeInfo,
                                                   v45,
                                                   v46,
                                                   v47);
  QAASpotStateController_StateQaaHide___ctor(v48, 0, 0LL);
  if ( !v44 )
    goto LABEL_14;
  CStateManager_object___add(
    v44,
    2,
    (IState_T__o *)v48,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v49 = (CStateManager_T__o *)p_fields->stateManager;
  v53 = (QAASpotStateController_StateQaaGray_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaGray_TypeInfo,
                                                   v50,
                                                   v51,
                                                   v52);
  QAASpotStateController_StateQaaGray___ctor(v53, 0, 0LL);
  if ( !v49 )
    goto LABEL_14;
  CStateManager_object___add(
    v49,
    3,
    (IState_T__o *)v53,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v54 = (CStateManager_T__o *)p_fields->stateManager;
  v58 = (QAASpotStateController_StateQaaDisp_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaDisp_TypeInfo,
                                                   v55,
                                                   v56,
                                                   v57);
  QAASpotStateController_StateQaaDisp___ctor(v58, 0, 0LL);
  if ( !v54 )
    goto LABEL_14;
  CStateManager_object___add(
    v54,
    4,
    (IState_T__o *)v58,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v59 = (CStateManager_T__o *)p_fields->stateManager;
  v63 = (QAASpotStateController_StateQaaHide_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaHide_TypeInfo,
                                                   v60,
                                                   v61,
                                                   v62);
  QAASpotStateController_StateQaaHide___ctor(v63, 1, 0LL);
  if ( !v59 )
    goto LABEL_14;
  CStateManager_object___add(
    v59,
    5,
    (IState_T__o *)v63,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v64 = (CStateManager_T__o *)p_fields->stateManager;
  v68 = (QAASpotStateController_StateQaaGray_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaGray_TypeInfo,
                                                   v65,
                                                   v66,
                                                   v67);
  QAASpotStateController_StateQaaGray___ctor(v68, 1, 0LL);
  if ( !v64 )
    goto LABEL_14;
  CStateManager_object___add(
    v64,
    6,
    (IState_T__o *)v68,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v69 = (CStateManager_T__o *)p_fields->stateManager;
  v73 = (QAASpotStateController_StateQaaDisp_o *)sub_1BCAA2C(
                                                   QAASpotStateController_StateQaaDisp_TypeInfo,
                                                   v70,
                                                   v71,
                                                   v72);
  QAASpotStateController_StateQaaDisp___ctor(v73, 1, 0LL);
  if ( !v69 )
    goto LABEL_14;
  CStateManager_object___add(
    v69,
    7,
    (IState_T__o *)v73,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  v74 = (CStateManager_T__o *)p_fields->stateManager;
  v78 = (QAASpotStateController_StateQaaChange_o *)sub_1BCAA2C(
                                                     QAASpotStateController_StateQaaChange_TypeInfo,
                                                     v75,
                                                     v76,
                                                     v77);
  QAASpotStateController_StateQaaChange___ctor(v78, 0, 0LL);
  if ( !v74
    || (CStateManager_object___add(
          v74,
          8,
          (IState_T__o *)v78,
          (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__),
        v79 = (CStateManager_T__o *)p_fields->stateManager,
        v83 = (QAASpotStateController_StateQaaAnimation_o *)sub_1BCAA2C(
                                                              QAASpotStateController_StateQaaAnimation_TypeInfo,
                                                              v80,
                                                              v81,
                                                              v82),
        QAASpotStateController_StateQaaAnimation___ctor(v83, 0, 0LL),
        !v79) )
  {
LABEL_14:
    sub_1BCAA3C(v37, v38);
  }
  CStateManager_object___add(
    v79,
    9,
    (IState_T__o *)v83,
    (const MethodInfo_313FC6C *)Method_CStateManager_QAASpotStateController_IMapSpot__add__);
  QAASpotStateController__SetState(this, 0, v84);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetQaaColorAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isActive,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 *v34; // x21
  __int64 v35; // x8
  __int64 v36; // x9
  QAASpotStateController_IMapSpot_c **v37; // x10
  __int64 v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 *v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  QAASpotStateController_IMapSpot_c **v50; // x10
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  float v55; // s0
  EasingObject_o *v56; // x19
  System_Action_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x22

  if ( (byte_4B13011 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isActive, finishCallback);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9, v10);
    sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__, v13, v14);
    sub_1BCA7E0(&Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__, v15, v16);
    sub_1BCA7E0(&QAASpotStateController___c__DisplayClass9_0_TypeInfo, v17, v18);
    byte_4B13011 = 1;
  }
  v19 = sub_1BCAA2C(QAASpotStateController___c__DisplayClass9_0_TypeInfo, isActive, finishCallback, method);
  QAASpotStateController___c__DisplayClass9_0___ctor((QAASpotStateController___c__DisplayClass9_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_24;
  *(_QWORD *)(v19 + 16) = targetObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)targetObject, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 32) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)finishCallback, v28, v29, v30, v31, v32, v33);
  v34 = *(__int64 **)(v19 + 16);
  if ( !v34 )
    goto LABEL_24;
  v35 = *v34;
  v36 = *(unsigned __int16 *)(*v34 + 302);
  if ( *(_WORD *)(*v34 + 302) )
  {
    v37 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *(v37 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v36;
      v37 += 2;
      if ( !v36 )
        goto LABEL_9;
    }
    v38 = v35 + 16LL * (*(_DWORD *)v37 + 5) + 312;
  }
  else
  {
LABEL_9:
    v38 = sub_1C1C7C0(v34, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v39 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v39,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v19 + 48) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)Component_object, v41, v42, v43, v44, v45, v46);
  v47 = *(__int64 **)(v19 + 16);
  if ( !v47 )
    goto LABEL_24;
  v48 = *v47;
  v49 = *(unsigned __int16 *)(*v47 + 302);
  if ( *(_WORD *)(*v47 + 302) )
  {
    v50 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *(v50 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_16;
    }
    v51 = v48 + 16LL * (*(_DWORD *)v50 + 7) + 312;
  }
  else
  {
LABEL_16:
    v51 = sub_1C1C7C0(*(_QWORD *)(v19 + 16), QAASpotStateController_IMapSpot_TypeInfo, 7LL);
  }
  *(float *)(v19 + 40) = (*(float (__fastcall **)(__int64 *, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
  v55 = 0.5;
  if ( isActive )
    v55 = 1.0;
  *(float *)(v19 + 24) = v55;
  if ( time > 0.0 )
  {
    v56 = *(EasingObject_o **)(v19 + 48);
    v57 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
    System_Action___ctor(
      v57,
      (Il2CppObject *)v19,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__ApplyCurrentColor_1__,
      0LL);
    v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
    System_Action___ctor(
      v61,
      (Il2CppObject *)v19,
      Method_QAASpotStateController___c__DisplayClass9_0__SetQaaColorAnim_g__EndAction_0__,
      0LL);
    if ( v56 )
    {
      EasingObject__Play(v56, time, v57, v61, 0.0, 17, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(v20, v21);
  }
  QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
    (QAASpotStateController___c__DisplayClass9_0_o *)v19,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetQaaScaleAnim(
        QAASpotStateController_IMapSpot_o *targetObject,
        bool isDisp,
        float time,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o *v34; // x22
  QAASpotStateController_IMapSpot_c *v35; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  __int64 v37; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t *v41; // x10
  __int64 v42; // x0
  QAASpotStateController_IMapSpot_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  float v47; // s12
  float v48; // s1
  float v49; // s13
  float v50; // s2
  float v51; // s14
  __int64 v52; // x1
  __int64 v53; // x2
  float v54; // s1
  float v55; // s2
  struct UnityEngine_Vector3_StaticFields *v56; // x8
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_EventDelegate__o *monitor; // x20
  EventDelegate_Callback_o *v60; // x21
  __int64 v61; // x1
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13010 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, isDisp, finishCallback);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__, v13, v14);
    sub_1BCA7E0(&QAASpotStateController___c__DisplayClass8_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v17, v18);
    byte_4B13010 = 1;
  }
  v19 = sub_1BCAA2C(QAASpotStateController___c__DisplayClass8_0_TypeInfo, isDisp, finishCallback, method);
  QAASpotStateController___c__DisplayClass8_0___ctor((QAASpotStateController___c__DisplayClass8_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_36;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  if ( !targetObject )
    goto LABEL_36;
  klass = targetObject->klass;
  v29 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 5LL);
  }
  v34 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
                                      targetObject,
                                      *(_QWORD *)(p_method + 8));
  if ( isDisp )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v33);
      byte_4B109C1 = 1;
    }
    v35 = targetObject->klass;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v37 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v41 = &v35->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v41 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v37;
        v41 += 4;
        if ( !v37 )
          goto LABEL_18;
      }
      v42 = (__int64)&v35->vtable[*v41 + 4].method;
    }
    else
    {
LABEL_18:
      v42 = sub_1C1C7C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(v47) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v42)(
                       targetObject,
                       *(_QWORD *)(v42 + 8)));
    v49 = v48;
    v51 = v50;
  }
  else
  {
    v43 = targetObject->klass;
    v44 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v45 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_23;
      }
      v46 = (__int64)&v43->vtable[*v45 + 4].method;
    }
    else
    {
LABEL_23:
      v46 = sub_1C1C7C0(targetObject, QAASpotStateController_IMapSpot_TypeInfo, 4LL);
    }
    LODWORD(x) = COERCE_UNSIGNED_INT128(
                   ((long double (__fastcall *)(QAASpotStateController_IMapSpot_o *, _QWORD))*(_QWORD *)v46)(
                     targetObject,
                     *(_QWORD *)(v46 + 8)));
    y = v54;
    z = v55;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v52, v53);
      byte_4B109C1 = 1;
    }
    v56 = UnityEngine_Vector3_TypeInfo->static_fields;
    v47 = v56->zeroVector.fields.x;
    v49 = v56->zeroVector.fields.y;
    v51 = v56->zeroVector.fields.z;
  }
  if ( time <= 0.0 )
  {
    v62.fields.x = v47;
    v62.fields.y = v49;
    v62.fields.z = v51;
    GameObjectExtensions__SetLocalScale(v34, v62, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
    return;
  }
  v20 = UITweener__Begin_object_(v34, time, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  if ( !v20 )
LABEL_36:
    sub_1BCAA3C(v20, v21);
  *(float *)&v20[8].klass = x;
  *((float *)&v20[8].klass + 1) = y;
  *(float *)&v20[8].monitor = z;
  *((float *)&v20[8].monitor + 1) = v47;
  *(float *)&v20[9].klass = v49;
  *((float *)&v20[9].klass + 1) = v51;
  LODWORD(v20[2].klass) = 2;
  monitor = (System_Collections_Generic_List_EventDelegate__o *)v20[4].monitor;
  v60 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v21, v57, v58);
  EventDelegate_Callback___ctor(
    v60,
    (Il2CppObject *)v19,
    Method_QAASpotStateController___c__DisplayClass8_0__SetQaaScaleAnim_b__0__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v61);
  EventDelegate__Set_47333340(monitor, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QAASpotStateController__SetState(
        QAASpotStateController_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4B1300F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QAASpotStateController_IMapSpot__setState__, *(_QWORD *)&state, method);
    byte_4B1300F = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    stateManager,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_QAASpotStateController_IMapSpot__setState__);
}


void __fastcall QAASpotStateController__Update(QAASpotStateController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *stateManager; // x0

  if ( (byte_4B1300E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_QAASpotStateController_IMapSpot__update__, method, v2);
    byte_4B1300E = 1;
  }
  stateManager = (CStateManager_T__o *)this->fields.stateManager;
  if ( !stateManager )
    sub_1BCAA3C(0LL, method);
  CStateManager_object___update(
    stateManager,
    (const MethodInfo_313FCD4 *)Method_CStateManager_QAASpotStateController_IMapSpot__update__);
}


void __fastcall QAASpotStateController_StateMapMain___ctor(
        QAASpotStateController_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateMapMain__begin(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v8; // w0
  QAASpotStateController_IMapSpot_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x2
  void (__fastcall *v16)(QAASpotStateController_IMapSpot_o *, __int64, __int64); // x3
  QAASpotStateController_IMapSpot_o *v17; // x0
  __int64 v18; // x1

  if ( (byte_4B1306F & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, that, method);
    byte_4B1306F = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
         that,
         *(_QWORD *)(p_method + 8));
  v9 = that->klass;
  v10 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( (v8 & 1) != 0 )
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v11 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_15;
      }
      v12 = (__int64)&v9->vtable[*v11 + 1].method;
    }
    else
    {
LABEL_15:
      v12 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 1LL);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v12;
    v15 = *(_QWORD *)(v12 + 8);
    v17 = that;
    v18 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v13 = &v9->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v13 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v10;
        v13 += 4;
        if ( !v10 )
          goto LABEL_20;
      }
      v14 = (__int64)&v9->vtable[*v13 + 3].method;
    }
    else
    {
LABEL_20:
      v14 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 3LL);
    }
    v16 = *(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, __int64))v14;
    v15 = *(_QWORD *)(v14 + 8);
    v18 = 1LL;
    v17 = that;
  }
  v16(v17, v18, v15);
}


void __fastcall QAASpotStateController_StateMapMain__end(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateMapMain__update(
        QAASpotStateController_StateMapMain_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13070 & 1) == 0 )
  {
    this = (QAASpotStateController_StateMapMain_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, that, method);
    byte_4B13070 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 9].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 9LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
}


void __fastcall QAASpotStateController_StateNone___ctor(
        QAASpotStateController_StateNone_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateNone__begin(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateNone__end(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateNone__update(
        QAASpotStateController_StateNone_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaAnimation___ctor(
        QAASpotStateController_StateQaaAnimation_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaAnimation__begin(
        QAASpotStateController_StateQaaAnimation_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  unsigned int v10; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x0
  QAASpotStateController_IMapSpot_c *v15; // x8
  System_Action_o *v16; // x21
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  QAASpotStateController_IMapSpot_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4B13079 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAASpotStateController_StateQaaAnimation_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v4, v5);
    byte_4B13079 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v7 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 6].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 6LL);
  }
  v10 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  v14 = sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  v15 = that->klass;
  v16 = (System_Action_o *)v14;
  v17 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v18 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    v19 = (__int64)&v15->vtable[*v18 + 10].method;
  }
  else
  {
LABEL_14:
    v19 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor(v16, (Il2CppObject *)that, *(_QWORD *)(v19 + 8), 0LL);
  v20 = that->klass;
  v21 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v22 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_20;
    }
    v23 = (__int64)&v20->vtable[*v22 + 16].method;
  }
  else
  {
LABEL_20:
    v23 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 16LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, System_Action_o *, _QWORD))v23)(
    that,
    v10,
    v16,
    *(_QWORD *)(v23 + 8));
}


void __fastcall QAASpotStateController_StateQaaBase___ctor(
        QAASpotStateController_StateQaaBase_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaBase__begin(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaBase__end(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaBase__update(
        QAASpotStateController_StateQaaBase_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QAASpotStateController_StateQaaChange___ctor(
        QAASpotStateController_StateQaaChange_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaChange__begin(
        QAASpotStateController_StateQaaChange_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 **v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  QAASpotStateController_IMapSpot_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x21
  __int64 *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x9
  QAASpotStateController_IMapSpot_c **v39; // x10
  __int64 v40; // x0

  if ( (byte_4B13077 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__, v8, v9);
    sub_1BCA7E0(&QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, v10, v11);
    byte_4B13077 = 1;
  }
  v12 = sub_1BCAA2C(QAASpotStateController_StateQaaChange___c__DisplayClass1_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_23;
  *(_QWORD *)(v12 + 16) = that;
  v21 = (__int64 **)(v12 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)that, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  v28 = *(__int64 **)(v12 + 16);
  if ( !v28 )
    goto LABEL_23;
  v29 = *v28;
  v30 = *(unsigned __int16 *)(*v28 + 302);
  if ( *(_WORD *)(*v28 + 302) )
  {
    v31 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_9;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 13) + 312;
  }
  else
  {
LABEL_9:
    v32 = sub_1C1C7C0(*v21, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)(v13 - 1) < 2 )
    {
      v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v33, v34);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v12,
        Method_QAASpotStateController_StateQaaChange___c__DisplayClass1_0__begin_b__0__,
        0LL);
      QAASpotStateController__SetQaaScaleAnim(
        *(QAASpotStateController_IMapSpot_o **)(v12 + 16),
        0,
        this->fields.Duration,
        v35,
        0LL);
    }
    return;
  }
  v36 = *v21;
  if ( !*v21 )
LABEL_23:
    sub_1BCAA3C(v13, v14);
  v37 = *v36;
  v38 = *(unsigned __int16 *)(*v36 + 302);
  if ( *(_WORD *)(*v36 + 302) )
  {
    v39 = (QAASpotStateController_IMapSpot_c **)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *(v39 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_19;
    }
    v40 = v37 + 16LL * (*(_DWORD *)v39 + 10) + 312;
  }
  else
  {
LABEL_19:
    v40 = sub_1C1C7C0(*v21, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  (*(void (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
}


void __fastcall QAASpotStateController_StateQaaChange___c__DisplayClass1_0___ctor(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController_StateQaaChange___c__DisplayClass1_0___begin_b__0(
        QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct QAASpotStateController_IMapSpot_o *that; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v8; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  struct QAASpotStateController_StateQaaChange_o *_4__this; // x8
  Il2CppObject *v14; // x19
  float Duration; // s8
  Il2CppClass *v16; // x8
  QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *v17; // x20
  __int64 v18; // x9
  QAASpotStateController_IMapSpot_c **v19; // x10
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_4B13078 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                                             &QAASpotStateController_IMapSpot_TypeInfo,
                                                                             v4,
                                                                             v5);
    byte_4B13078 = 1;
  }
  that = v3->fields.that;
  if ( !that )
    goto LABEL_19;
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v8;
      p_offset += 2;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_8:
    v10 = sub_1C1C7C0(v3->fields.that, QAASpotStateController_IMapSpot_TypeInfo, 12LL);
  }
  this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)(*(__int64 (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD))v10)(
                                                                           that,
                                                                           *(_QWORD *)(v10 + 8));
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (v14 = (Il2CppObject *)v3->fields.that,
        Duration = _4__this->fields.Duration,
        this = (QAASpotStateController_StateQaaChange___c__DisplayClass1_0_o *)sub_1BCAA2C(
                                                                                 System_Action_TypeInfo,
                                                                                 method,
                                                                                 v11,
                                                                                 v12),
        !v14) )
  {
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  v16 = v14->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    v19 = (QAASpotStateController_IMapSpot_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_16;
    }
    p_method = (__int64)&v16->vtable[*(_DWORD *)v19 + 10].method;
  }
  else
  {
LABEL_16:
    p_method = sub_1C1C7C0(v14, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
  }
  System_Action___ctor((System_Action_o *)v17, v14, *(_QWORD *)(p_method + 8), 0LL);
  QAASpotStateController__SetQaaScaleAnim(
    (QAASpotStateController_IMapSpot_o *)v14,
    1,
    Duration,
    (System_Action_o *)v17,
    0LL);
}


void __fastcall QAASpotStateController_StateQaaDisp___ctor(
        QAASpotStateController_StateQaaDisp_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaDisp__begin(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaDisp_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  QAASpotStateController_IMapSpot_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  QAASpotStateController_IMapSpot_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  float Duration; // s8
  __int64 v24; // x0
  QAASpotStateController_IMapSpot_c *v25; // x8
  System_Action_o *v26; // x20
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  float v30; // s8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x0
  QAASpotStateController_IMapSpot_c *v35; // x8
  System_Action_o *v36; // x20
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  QAASpotStateController_IMapSpot_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  v4 = this;
  if ( (byte_4B13075 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v5, v6);
    byte_4B13075 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v11 )
  {
    case 2:
      Duration = v4->fields.Duration;
      v24 = sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      v25 = that->klass;
      v26 = (System_Action_o *)v24;
      v27 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v28 = &v25->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_27;
        }
        v29 = (__int64)&v25->vtable[*v28 + 10].method;
      }
      else
      {
LABEL_27:
        v29 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v26, (Il2CppObject *)that, *(_QWORD *)(v29 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 1, Duration, v26, 0LL);
      break;
    case 1:
      v19 = that->klass;
      v20 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v21 = &v19->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v21 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = (__int64)&v19->vtable[*v21 + 10].method;
      }
      else
      {
LABEL_22:
        v22 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v22)(that, *(_QWORD *)(v22 + 8));
      break;
    case 0:
      v15 = that->klass;
      v16 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17 + 8].method;
      }
      else
      {
LABEL_17:
        v18 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 1.0);
      v30 = v4->fields.Duration;
      v34 = sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
      v35 = that->klass;
      v36 = (System_Action_o *)v34;
      v37 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v38 = &v35->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v38 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_33;
        }
        v39 = (__int64)&v35->vtable[*v38 + 10].method;
      }
      else
      {
LABEL_33:
        v39 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v36, (Il2CppObject *)that, *(_QWORD *)(v39 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v30, v36, 0LL);
      break;
  }
  v40 = that->klass;
  v41 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v42 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_44;
    }
    v43 = (__int64)(&v40->_1.interfaceOffsets + 2 * *v42 + 39);
  }
  else
  {
LABEL_44:
    v43 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 11LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v43)(that, *(_QWORD *)(v43 + 8));
}


void __fastcall QAASpotStateController_StateQaaDisp__end(
        QAASpotStateController_StateQaaDisp_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4B13076 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaDisp_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, that, method);
    byte_4B13076 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    1LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaGray___ctor(
        QAASpotStateController_StateQaaGray_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaGray__begin(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaGray_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  QAASpotStateController_IMapSpot_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  float Duration; // s8
  __int64 v20; // x0
  QAASpotStateController_IMapSpot_c *v21; // x8
  System_Action_o *v22; // x20
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  QAASpotStateController_IMapSpot_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  float v30; // s8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x0
  QAASpotStateController_IMapSpot_c *v35; // x8
  System_Action_o *v36; // x20
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  v4 = this;
  if ( (byte_4B13073 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAASpotStateController_StateQaaGray_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v5, v6);
    byte_4B13073 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  switch ( v11 )
  {
    case 2:
      v26 = that->klass;
      v27 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v28 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_27;
        }
        v29 = (__int64)&v26->vtable[*v28 + 10].method;
      }
      else
      {
LABEL_27:
        v29 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v29)(that, *(_QWORD *)(v29 + 8));
      break;
    case 1:
      Duration = v4->fields.Duration;
      v20 = sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      v21 = that->klass;
      v22 = (System_Action_o *)v20;
      v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v24 = &v21->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_22;
        }
        v25 = (__int64)&v21->vtable[*v24 + 10].method;
      }
      else
      {
LABEL_22:
        v25 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v22, (Il2CppObject *)that, *(_QWORD *)(v25 + 8), 0LL);
      QAASpotStateController__SetQaaColorAnim(that, 0, Duration, v22, 0LL);
      break;
    case 0:
      v15 = that->klass;
      v16 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v17 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17 + 8].method;
      }
      else
      {
LABEL_17:
        v18 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, float))v18)(that, *(_QWORD *)(v18 + 8), 0.5);
      v30 = v4->fields.Duration;
      v34 = sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
      v35 = that->klass;
      v36 = (System_Action_o *)v34;
      v37 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v38 = &v35->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v38 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_34;
        }
        v39 = (__int64)&v35->vtable[*v38 + 10].method;
      }
      else
      {
LABEL_34:
        v39 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v36, (Il2CppObject *)that, *(_QWORD *)(v39 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 1, v30, v36, 0LL);
      break;
  }
}


void __fastcall QAASpotStateController_StateQaaGray__end(
        QAASpotStateController_StateQaaGray_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4B13074 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaGray_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, that, method);
    byte_4B13074 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))p_method)(
    that,
    2LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, __int64, _QWORD))v11)(that, 1LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController_StateQaaHide___ctor(
        QAASpotStateController_StateQaaHide_o *this,
        bool isQuick,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  float v7; // s0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  v7 = 0.5;
  if ( isQuick )
    v7 = 0.0;
  this->fields.Duration = v7;
}


void __fastcall QAASpotStateController_StateQaaHide__begin(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_StateQaaHide_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  float Duration; // s8
  __int64 v16; // x0
  QAASpotStateController_IMapSpot_c *v17; // x8
  System_Action_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  QAASpotStateController_IMapSpot_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  v4 = this;
  if ( (byte_4B13071 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (QAASpotStateController_StateQaaHide_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, v5, v6);
    byte_4B13071 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v8 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 13].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 13LL);
  }
  v11 = (*(__int64 (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))p_method)(
          that,
          *(_QWORD *)(p_method + 8));
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 1) < 2 )
    {
      Duration = v4->fields.Duration;
      v16 = sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
      v17 = that->klass;
      v18 = (System_Action_o *)v16;
      v19 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
      {
        v20 = &v17->_1.interfaceOffsets->offset;
        while ( *((QAASpotStateController_IMapSpot_c **)v20 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_16;
        }
        v21 = (__int64)&v17->vtable[*v20 + 10].method;
      }
      else
      {
LABEL_16:
        v21 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
      }
      System_Action___ctor(v18, (Il2CppObject *)that, *(_QWORD *)(v21 + 8), 0LL);
      QAASpotStateController__SetQaaScaleAnim(that, 0, Duration, v18, 0LL);
    }
  }
  else
  {
    v22 = that->klass;
    v23 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((QAASpotStateController_IMapSpot_c **)v24 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = (__int64)&v22->vtable[*v24 + 10].method;
    }
    else
    {
LABEL_21:
      v25 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 10LL);
    }
    (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD))v25)(that, *(_QWORD *)(v25 + 8));
  }
}


void __fastcall QAASpotStateController_StateQaaHide__end(
        QAASpotStateController_StateQaaHide_o *this,
        QAASpotStateController_IMapSpot_o *that,
        const MethodInfo *method)
{
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  QAASpotStateController_IMapSpot_c *v8; // x8
  __int64 v9; // x9
  int32_t *v10; // x10
  __int64 v11; // x0

  if ( (byte_4B13072 & 1) == 0 )
  {
    this = (QAASpotStateController_StateQaaHide_o *)sub_1BCA7E0(&QAASpotStateController_IMapSpot_TypeInfo, that, method);
    byte_4B13072 = 1;
  }
  if ( !that )
    sub_1BCAA3C(this, that);
  klass = that->klass;
  v5 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 14].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 14LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))p_method)(
    that,
    0LL,
    *(_QWORD *)(p_method + 8));
  v8 = that->klass;
  v9 = *(unsigned __int16 *)(&that->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&that->klass->_2.bitflags2 + 3) )
  {
    v10 = &v8->_1.interfaceOffsets->offset;
    while ( *((QAASpotStateController_IMapSpot_c **)v10 - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_14;
    }
    v11 = (__int64)&v8->vtable[*v10 + 15].method;
  }
  else
  {
LABEL_14:
    v11 = sub_1C1C7C0(that, QAASpotStateController_IMapSpot_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(QAASpotStateController_IMapSpot_o *, _QWORD, _QWORD))v11)(that, 0LL, *(_QWORD *)(v11 + 8));
}


void __fastcall QAASpotStateController___c__DisplayClass8_0___ctor(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass8_0___SetQaaScaleAnim_b__0(
        QAASpotStateController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___ctor(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__ApplyCurrentColor_1(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QAASpotStateController___c__DisplayClass9_0_o *v3; // x20
  struct EasingObject_o *easingObj; // x9
  struct QAASpotStateController_IMapSpot_o *targetObject; // x19
  QAASpotStateController_IMapSpot_c *klass; // x8
  float from; // s8
  float to; // s9
  float mNow; // s10
  __int64 v10; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 p_method; // x0

  v3 = this;
  if ( (byte_4B1307B & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method,
                                                              v2);
    byte_4B1307B = 1;
  }
  easingObj = v3->fields.easingObj;
  if ( !easingObj || (targetObject = v3->fields.targetObject) == 0LL )
    sub_1BCAA3C(this, method);
  klass = targetObject->klass;
  from = v3->fields.from;
  to = v3->fields.to;
  mNow = easingObj->fields.mNow;
  v10 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(v3->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, float))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    from + (float)((float)(to - from) * mNow));
}


void __fastcall QAASpotStateController___c__DisplayClass9_0___SetQaaColorAnim_g__EndAction_0(
        QAASpotStateController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q8
  QAASpotStateController___c__DisplayClass9_0_o *v4; // x19
  struct QAASpotStateController_IMapSpot_o *targetObject; // x20
  QAASpotStateController_IMapSpot_c *klass; // x8
  __int64 v7; // x9
  QAASpotStateController_IMapSpot_c **p_offset; // x10
  __int64 p_method; // x0

  v4 = this;
  if ( (byte_4B1307A & 1) == 0 )
  {
    this = (QAASpotStateController___c__DisplayClass9_0_o *)sub_1BCA7E0(
                                                              &QAASpotStateController_IMapSpot_TypeInfo,
                                                              method,
                                                              v2);
    byte_4B1307A = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    sub_1BCAA3C(this, method);
  klass = targetObject->klass;
  *(float *)&v3 = v4->fields.to;
  v7 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (QAASpotStateController_IMapSpot_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != QAASpotStateController_IMapSpot_TypeInfo )
    {
      --v7;
      p_offset += 2;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v4->fields.targetObject, QAASpotStateController_IMapSpot_TypeInfo, 8LL);
  }
  (*(void (__fastcall **)(struct QAASpotStateController_IMapSpot_o *, _QWORD, long double))p_method)(
    targetObject,
    *(_QWORD *)(p_method + 8),
    v3);
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
}