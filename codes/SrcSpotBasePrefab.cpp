void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct SrcSpotBasePrefab_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  SrcSpotBasePrefab_c *v20; // x8

  if ( (byte_40FADFC & 1) == 0 )
  {
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18092/*"ef_badge_glow"*/, v8);
    sub_B16FFC(&StringLiteral_5828/*"Effect/RecollectionQuest"*/, v9);
    byte_40FADFC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5828/*"Effect/RecollectionQuest"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5828/*"Effect/RecollectionQuest"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = SrcSpotBasePrefab_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18092/*"ef_badge_glow"*/;
  v12->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18092/*"ef_badge_glow"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v12->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = SrcSpotBasePrefab_TypeInfo;
  SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0.3;
  v20->static_fields->DEFAULT_NEXT_POS_Y = 100.0;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FADFB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22079/*"smfSpotBtn_Click"*/, v10);
    byte_40FADFB = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_22079/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_22079/*"smfSpotBtn_Click"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.msSmfNameForBtnClick, v11, v2, v3, v4, v5, v6, v7);
  this->fields.selfScale = UnityEngine_Vector3__get_one(0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlases,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__AdjustBtnColliderArea(
        SrcSpotBasePrefab_o *this,
        System_Nullable_Vector2__o size,
        System_Nullable_Vector3__o centerPosition,
        const MethodInfo *method)
{
  __int64 v4; // x20
  bool has_value; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo_29CF794 *v13; // x2
  bool v14; // zf
  UnityEngine_BoxCollider_o *v15; // x20
  int v16; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v20; // s2
  System_Nullable_Vector3__o v21; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v22; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v23; // 0:x0.12
  System_Nullable_Vector3__o v24; // 0:x0.16

  v4 = *(_QWORD *)&centerPosition.fields.value.fields.z;
  has_value = size.fields.has_value;
  v21 = centerPosition;
  v22 = size;
  if ( (byte_40FADF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&size.fields.value);
    sub_B16FFC(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v8);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_Value__, v9);
    sub_B16FFC(&Method_System_Nullable_Vector2__get_Value__, v10);
    byte_40FADF0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v14 = (v4 & 0xFF00000000LL) == 0;
  v15 = (UnityEngine_BoxCollider_o *)Component_srcLineSprite;
  if ( !v14 )
  {
    *(_QWORD *)&v24.fields.value.fields.x = &v21;
    *(_QWORD *)&v24.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v16 = System_Nullable_Vector3___get_Value(v24, v13);
    if ( !v15 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
    has_value = v22.fields.has_value;
  }
  if ( !has_value )
    return;
  v23.fields.value = (struct UnityEngine_Vector2_o)&v22;
  *(_DWORD *)&v23.fields.has_value = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v23, (const MethodInfo_29CF3A8 *)v13);
  if ( !v15 )
LABEL_11:
    sub_B170D4();
  v20 = 0;
  UnityEngine_BoxCollider__set_size(v15, *(UnityEngine_Vector3_o *)&Value.fields.x, 0LL);
}


void __fastcall SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
}


void __fastcall SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  SrcSpotBasePrefab_StateNone_o *v28; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  SrcSpotBasePrefab_StateMapMain_o *v34; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  SrcSpotBasePrefab_StateQaaHide_o *v40; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  SrcSpotBasePrefab_StateQaaGray_o *v46; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  SrcSpotBasePrefab_StateQaaDisp_o *v52; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  SrcSpotBasePrefab_StateQaaChange_o *v58; // x21
  const MethodInfo *v59; // x3
  MapModelManager_c *v60; // x0

  if ( (byte_40FADE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method);
    sub_B16FFC(&Method_CStateManager_SrcSpotBasePrefab__add__, v6);
    sub_B16FFC(&CStateManager_SrcSpotBasePrefab__TypeInfo, v7);
    sub_B16FFC(&MapModelManager_TypeInfo, v8);
    sub_B16FFC(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v9);
    sub_B16FFC(&SrcSpotBasePrefab_StateNone_TypeInfo, v10);
    sub_B16FFC(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v11);
    sub_B16FFC(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v12);
    sub_B16FFC(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v13);
    sub_B16FFC(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v14);
    byte_40FADE6 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_SrcSpotBasePrefab__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v16,
      (QAASpotStateController_IMapSpot_o *)this,
      6,
      (const MethodInfo_2907EF0 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    mFSM = this->fields.mFSM;
    v28 = (SrcSpotBasePrefab_StateNone_o *)sub_B170CC(SrcSpotBasePrefab_StateNone_TypeInfo, v24, v25, v26, v27);
    SrcSpotBasePrefab_StateNone___ctor(v28, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v28,
      (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v34 = (SrcSpotBasePrefab_StateMapMain_o *)sub_B170CC(SrcSpotBasePrefab_StateMapMain_TypeInfo, v30, v31, v32, v33);
    SrcSpotBasePrefab_StateMapMain___ctor(v34, 0LL);
    if ( !v29 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      1,
      (IState_T__o *)v34,
      (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v35 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v40 = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B170CC(SrcSpotBasePrefab_StateQaaHide_TypeInfo, v36, v37, v38, v39);
    SrcSpotBasePrefab_StateQaaHide___ctor(v40, 0LL);
    if ( !v35 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v35,
      2,
      (IState_T__o *)v40,
      (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v41 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v46 = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B170CC(SrcSpotBasePrefab_StateQaaGray_TypeInfo, v42, v43, v44, v45);
    SrcSpotBasePrefab_StateQaaGray___ctor(v46, 0LL);
    if ( !v41 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v41,
      3,
      (IState_T__o *)v46,
      (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v47 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v52 = (SrcSpotBasePrefab_StateQaaDisp_o *)sub_B170CC(SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v48, v49, v50, v51);
    SrcSpotBasePrefab_StateQaaDisp___ctor(v52, 0LL);
    if ( !v47
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v47,
            4,
            (IState_T__o *)v52,
            (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v53 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v58 = (SrcSpotBasePrefab_StateQaaChange_o *)sub_B170CC(
                                                        SrcSpotBasePrefab_StateQaaChange_TypeInfo,
                                                        v54,
                                                        v55,
                                                        v56,
                                                        v57),
          SrcSpotBasePrefab_StateQaaChange___ctor(v58, 0LL),
          !v53) )
    {
LABEL_15:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v53,
      5,
      (IState_T__o *)v58,
      (const MethodInfo_2907FBC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v59);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v60 = MapModelManager_TypeInfo;
  if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v60 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v60->static_fields->LAYER_LOWER_ID;
}


bool __fastcall SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  int32_t current; // w19
  QuestTree_o *v11; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  QuestEntity_o *Mine; // x0
  char v14; // w19
  int v15; // w20
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FADF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v7);
    byte_40FADF9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_B170D4();
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      AvailableQuestIdList,
      (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v18 = v17;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v18,
              (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      current = v18.fields.current;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v11 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v11 )
        sub_B170D4();
      QuestInfo = QuestTree__GetQuestInfo(v11, current, 0LL);
      if ( !QuestInfo )
        sub_B170D4();
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_B170D4();
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v14 = 1;
        v15 = 4;
        goto LABEL_16;
      }
    }
    v14 = 0;
    v15 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v18,
      (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = (v15 == 4) & v14;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_40FADE4 & 1) == 0 )
  {
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, method);
    byte_40FADE4 = 1;
  }
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__DestroyEffect_26811000(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_26811000(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FADE5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADE5 = 1;
  }
  if ( !spot )
    sub_B170D4();
  mParticleSystemObj = spot->fields.mParticleSystemObj;
  p_mParticleSystemObj = (BattleServantConfConponent_o *)&spot->fields.mParticleSystemObj;
  v4 = (UnityEngine_Object_o *)mParticleSystemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_B16F98(p_mParticleSystemObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_B170D4();
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = id;
  if ( (byte_40FADE3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12941/*"Spot_"*/, method);
    sub_B16FFC(&StringLiteral_960/*"00"*/, v2);
    byte_40FADE3 = 1;
  }
  v3 = System_Int32__ToString_38275808((int32_t)&v5, (System_String_o *)StringLiteral_960/*"00"*/, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_12941/*"Spot_"*/, v3, 0LL);
}


MapControl_SpotInfo_o *__fastcall SrcSpotBasePrefab__GetMapCtrl_SpotInfo(
        SrcSpotBasePrefab_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotInfo;
}


float __fastcall SrcSpotBasePrefab__GetScaleOnMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  float v3; // s8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FADF2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FADF2 = 1;
  }
  v3 = 1.0;
  if ( this->fields._IsMapModel_k__BackingField )
  {
    MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v5 )
        sub_B170D4();
      gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14 = GameObjectExtensions__GetLocalPosition(v10, 0LL);
      v13.fields.x = x;
      v13.fields.y = y;
      v13.fields.z = z;
      return 2000.0 / UnityEngine_Vector3__Distance(v13, v14, 0LL);
    }
  }
  return v3;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  if ( (byte_40FADF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SrcSpotBasePrefab__getState__, method);
    byte_40FADF3 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  return mFSM->fields.m_state;
}


bool __fastcall SrcSpotBasePrefab__IsDisp(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Behaviour_o *mcSpotSprite; // x0
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v6 )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(v6, 0LL) )
  {
    mcSpotSprite = (UnityEngine_Behaviour_o *)this->fields.mcSpotSprite;
    if ( mcSpotSprite )
      return (x > 0.0) & UnityEngine_Behaviour__get_isActiveAndEnabled(mcSpotSprite, 0LL) & (y > 0.0);
LABEL_6:
    sub_B170D4();
  }
  return 0;
}


void __fastcall SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Component_o *mNoticeNumber; // x0
  UnityEngine_Object_o *gameObject; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  SrcSpotBasePrefab_c *v31; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  if ( (byte_40FADF7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, endCallback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v9);
    sub_B16FFC(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v10);
    sub_B16FFC(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v11);
    byte_40FADF7 = 1;
  }
  v12 = sub_B170CC(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, endCallback, method, v3, v4);
  SrcSpotBasePrefab___c__DisplayClass112_0___ctor((SrcSpotBasePrefab___c__DisplayClass112_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)endCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_18:
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v31 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v31 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v31->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29, v30);
    AssetLoader_LoadEndDataHandler___ctor(
      v33,
      (Il2CppObject *)v12,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v33, 1, 0LL);
  }
}


// attributes: thunk
void __fastcall SrcSpotBasePrefab__OnDisable(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab__DestroyEffect(this, method);
}


void __fastcall SrcSpotBasePrefab__RequestChangeSpotImage(
        SrcSpotBasePrefab_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  this->fields.spotChangeImgId = imageId;
}


void __fastcall SrcSpotBasePrefab__RequestDispUpdate(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SelectSpot(SrcSpotBasePrefab_o *this, bool isPlaySe, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *mcRootGobjP; // x21
  float realtimeSinceStartup; // s8
  SrcSpotBasePrefab_c *v14; // x0
  float v15; // s0
  SrcSpotBasePrefab_c *v16; // x0
  float v17; // s8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  int32_t dispType; // w8
  UnityEngine_GameObject_o *v20; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  Il2CppObject *gameObject; // x0
  __int64 v23; // x1
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v25; // x0
  SpotEntity_o *Mine; // x0
  System_String_o *closedMessage; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CommonUI_o *Instance; // x21
  SrcSpotBasePrefab___c_c *v33; // x8
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x9
  System_Action_o *_9__75_0; // x23
  System_String_o *v36; // x22
  Il2CppObject *v37; // x24
  struct SrcSpotBasePrefab___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40FADEC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isPlaySe);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v9);
    sub_B16FFC(&SrcSpotBasePrefab___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FADEC = 1;
  }
  mcRootGobjP = (UnityEngine_Object_o *)this->fields.mcRootGobjP;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mcRootGobjP, 0LL, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v14 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v14 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v14->static_fields->clickTime) > v14->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v16 = SrcSpotBasePrefab_TypeInfo;
      v17 = v15;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v16 = SrcSpotBasePrefab_TypeInfo;
      }
      v16->static_fields->clickTime = v17;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      dispType = mMapCtrl_SpotInfo->fields.dispType;
      if ( dispType != 2 )
      {
        if ( dispType != 1 )
          return;
        v20 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v20 )
        {
          UnityEngine_GameObject__SendMessage_40693300(v20, msSmfNameForBtnClick, gameObject, 0LL);
          if ( isPlaySe )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            TerminalPramsManager__PlaySystemSE(0, 0LL);
          }
          miSpotID = this->fields.miSpotID;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6079 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
            byte_40F6079 = 1;
          }
          v25 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v25 = TerminalPramsManager_TypeInfo;
          }
          v25->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_49:
        sub_B170D4();
      }
      Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
      if ( !Mine )
        goto LABEL_49;
      closedMessage = Mine->fields.closedMessage;
      if ( System_String__IsNullOrEmpty(closedMessage, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = SrcSpotBasePrefab___c_TypeInfo;
      if ( (BYTE3(SrcSpotBasePrefab___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v33 = SrcSpotBasePrefab___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__75_0 = static_fields->__9__75_0;
      v36 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
        System_Action___ctor(_9__75_0, v37, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        v38 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        v38->__9__75_0 = _9__75_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v38->__9__75_0,
          (System_Int32_array **)_9__75_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      if ( !Instance )
        goto LABEL_49;
      CommonUI__OpenNotificationDialog(Instance, v36, closedMessage, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      if ( isPlaySe )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        TerminalPramsManager__PlaySystemSE(0, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetBtnColliderEnable(
        SrcSpotBasePrefab_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0

  if ( (byte_40FADEF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled);
    byte_40FADEF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              gameObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(Component_srcLineSprite, isEnabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetContrast(SrcSpotBasePrefab_o *this, float val, const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  float v8; // s3
  UIWidget_o *mcSpotSprite; // x0
  UIWidget_o *mcSpotNameSp; // x0
  UIWidget_o *mSpotNameLabel; // x0
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-20h] BYREF

  v8 = 1.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&val, v3, v4, v5, v6, (const MethodInfo *)&v14);
  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite
    || (UIWidget__set_color(mcSpotSprite, v14, 0LL), (mcSpotNameSp = (UIWidget_o *)this->fields.mcSpotNameSp) == 0LL)
    || (UIWidget__set_color(mcSpotNameSp, v14, 0LL), (mSpotNameLabel = (UIWidget_o *)this->fields.mSpotNameLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_color(mSpotNameLabel, v14, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetCurrentLayerId(
        SrcSpotBasePrefab_o *this,
        int32_t layerId,
        const MethodInfo *method)
{
  this->fields.currentLayerId = layerId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetDispNoticeNumber(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumber; // x21
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  UnityEngine_Component_o *v7; // x0
  int32_t dispType; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v10; // w1

  if ( (byte_40FADFA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40FADFA = 1;
  }
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumber, 0LL, 0LL) )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo
      || (v7 = (UnityEngine_Component_o *)this->fields.mNoticeNumber) == 0LL
      || (dispType = mMapCtrl_SpotInfo->fields.dispType,
          (gameObject = UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    v10 = dispType == 1 && isDisp;
    UnityEngine_GameObject__SetActive(gameObject, v10, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetFreeQuestCount(
        SrcSpotBasePrefab_o *this,
        int32_t freeQuestCount,
        const MethodInfo *method)
{
  this->fields.freeQuestCount = freeQuestCount;
  this->fields.mtIsUpdate = 1;
}


void __fastcall SrcSpotBasePrefab__SetMapCtrl_SpotInfo(
        SrcSpotBasePrefab_o *this,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mMapCtrl_SpotInfo = spotInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMapCtrl_SpotInfo,
    (System_Int32_array **)spotInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_26817560(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_26817560(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_26817560(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  struct UISprite_o *mcSpotSprite; // x8
  float r; // w8
  float v34; // s0
  System_Action_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  EasingObject_o *v40; // x21
  System_Action_o *v41; // x22

  if ( (byte_40FADF6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isActive);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v10);
    sub_B16FFC(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v11);
    sub_B16FFC(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v12);
    byte_40FADF6 = 1;
  }
  v13 = sub_B170CC(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, isActive, method, v4, v5);
  SrcSpotBasePrefab___c__DisplayClass107_0___ctor((SrcSpotBasePrefab___c__DisplayClass107_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 32) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v34 = 0.5;
  if ( isActive )
    v34 = 1.0;
  *(float *)(v13 + 24) = v34;
  *(float *)(v13 + 28) = r;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v40 = *(EasingObject_o **)(v13 + 32);
    v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v13,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v40 )
    {
      EasingObject__Play(v40, time, v41, v35, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  ActionExtensions__Call(v35, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26817172(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26817172(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_26817172(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v12; // s9
  float v13; // s10
  float v14; // s14
  TweenWidth_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x19
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FADF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, isDisp);
    sub_B16FFC(&StringLiteral_2128/*"AtScaleAnimEnd"*/, v7);
    byte_40FADF5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = this->fields.selfScale.fields.x;
    y = this->fields.selfScale.fields.y;
    z = this->fields.selfScale.fields.z;
    v12 = zero.fields.x;
    v13 = zero.fields.y;
    v14 = zero.fields.z;
  }
  else
  {
    v12 = this->fields.selfScale.fields.x;
    v13 = this->fields.selfScale.fields.y;
    v14 = this->fields.selfScale.fields.z;
    v31 = UnityEngine_Vector3__get_zero(0LL);
    x = v31.fields.x;
    y = v31.fields.y;
    z = v31.fields.z;
  }
  if ( time <= 0.0 )
  {
    v32.fields.x = x;
    v32.fields.y = y;
    v32.fields.z = z;
    GameObjectExtensions__SetLocalScale(gameObject, v32, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v15 = UITweener__Begin_TweenWidth_(
            gameObject,
            time,
            (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
    if ( !v15 )
      sub_B170D4();
    v15->fields.eventReceiver = gameObject;
    p_eventReceiver = &v15->fields.eventReceiver;
    *(float *)&v15->fields.from = v12;
    *(float *)&v15->fields.to = v13;
    *(float *)&v15->fields.updateTable = v14;
    *((float *)&v15->fields.updateTable + 1) = x;
    *(float *)&v15->fields.mWidget = y;
    *((float *)&v15->fields.mWidget + 1) = z;
    v15->fields.style = 2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->fields.eventReceiver,
      (System_Int32_array **)gameObject,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v23 = (System_Int32_array **)StringLiteral_2128/*"AtScaleAnimEnd"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_2128/*"AtScaleAnimEnd"*/;
    sub_B16F98((BattleServantConfConponent_o *)(p_eventReceiver + 1), v23, v24, v25, v26, v27, v28, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetRecollectionSpotEffect(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FADF8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40FADF8 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v6 = this->fields.recollectionQuestSpotEffect;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  one = UnityEngine_Vector3__get_one(0LL);
  this->fields.selfScale.fields.x = one.fields.x * scaleVal;
  this->fields.selfScale.fields.y = one.fields.y * scaleVal;
  this->fields.selfScale.fields.z = one.fields.z * scaleVal;
}


void __fastcall SrcSpotBasePrefab__SetSpotNameUI(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        UILabel_o *lb,
        System_String_o *spotName,
        const MethodInfo *method)
{
  System_String_o *v9; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  int32_t v11; // w1

  if ( (byte_40FADEA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19562/*"img_spotname_bg"*/, sp);
    byte_40FADEA = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_19562/*"img_spotname_bg"*/,
        UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(atlases, (System_String_o *)StringLiteral_19562/*"img_spotname_bg"*/, 0LL),
        !sp) )
  {
    sub_B170D4();
  }
  UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
  UISprite__set_spriteName(sp, v9, 0LL);
  if ( lb->fields.mWidth + 50 <= 40 )
    v11 = 40;
  else
    v11 = lb->fields.mWidth + 50;
  UIWidget__set_width((UIWidget_o *)sp, v11, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetSpotUI(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        SpotEntity_o *spotEnt,
        int32_t spotImageId,
        float innerOfsY,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UnityEngine_Object_o *mAtlas; // x21
  bool v24; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x21
  TerminalSceneComponent_c *v31; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  AssetData_o *mapMultiAssetData; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  __int64 v36; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *v37; // x0
  TerminalSceneComponent_c *v38; // x0
  struct TerminalSceneComponent_o *v39; // x8
  struct ScrTerminalMap_o *v40; // x8
  AssetData_o *mapImgAssetData; // x0
  UnityEngine_Object_o *v42; // x21
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Component_o *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  v46 = spotImageId;
  if ( (byte_40FADE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, sp);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_8915/*"MapSpotEffect_{0}"*/, v15);
    sub_B16FFC(&StringLiteral_964/*"000000"*/, v16);
    sub_B16FFC(&StringLiteral_22129/*"spot_"*/, v17);
    byte_40FADE9 = 1;
  }
  if ( !sp )
    goto LABEL_56;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
  if ( !transform )
    goto LABEL_56;
  if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
  {
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
    TransformHelper__DestroyChildren(v19, 0LL);
  }
  if ( spotImageId >= 1 )
  {
    v20 = System_Int32__ToString_38275808((int32_t)&v46, (System_String_o *)StringLiteral_964/*"000000"*/, 0LL);
    v21 = System_String__Concat_43743732((System_String_o *)StringLiteral_22129/*"spot_"*/, v20, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(atlases, v21, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v24, 0LL);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0LL) )
    {
      UISprite__set_spriteName(sp, v21, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sp, 0LL);
      if ( spotEnt )
      {
        imageOfsY = spotEnt->fields.imageOfsY;
        imageOfsX = spotEnt->fields.imageOfsX;
LABEL_54:
        GameObjectExtensions__SetLocalPosition_27419968(
          gameObject,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_56;
    }
    v45 = v46;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    v30 = System_String__Format((System_String_o *)StringLiteral_8915/*"MapSpotEffect_{0}"*/, v28, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v29);
      byte_40F6042 = 1;
    }
    v31 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v31 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v31->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_56;
    mTerminalMap = mInstance->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_56;
    mapMultiAssetData = mTerminalMap->fields.mapMultiAssetData;
    if ( !mapMultiAssetData )
      goto LABEL_56;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               mapMultiAssetData,
                                                               v30,
                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v37 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
      goto LABEL_52;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v36);
      byte_40F6042 = 1;
    }
    v38 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v38 = TerminalSceneComponent_TypeInfo;
    }
    v39 = v38->static_fields->mInstance;
    if ( !v39 )
      goto LABEL_56;
    v40 = v39->fields.mTerminalMap;
    if ( !v40 )
      goto LABEL_56;
    mapImgAssetData = v40->fields.mapImgAssetData;
    if ( mapImgAssetData )
    {
      v42 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      mapImgAssetData,
                                      v30,
                                      (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v37 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v42;
LABEL_52:
        v43 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v37,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v44 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent(v43, v44, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          gameObject = v43;
          goto LABEL_54;
        }
LABEL_56:
        sub_B170D4();
      }
    }
  }
}


void __fastcall SrcSpotBasePrefab__SetSpotUIWithOffsetY(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        SpotEntity_o *spotEnt,
        float innerOfsY,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4
  int32_t PrioredImgId; // w22

  if ( (byte_40FADE8 & 1) == 0 )
  {
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, sp);
    byte_40FADE8 = 1;
  }
  if ( !spotEnt )
    sub_B170D4();
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, (const MethodInfo *)sp);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUI(atlases, sp, spotEnt, PrioredImgId, innerOfsY, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetState(
        SrcSpotBasePrefab_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x0

  if ( (byte_40FADF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state);
    byte_40FADF4 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mStateEndAct,
    (System_Int32_array **)endAct,
    (System_String_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  mFSM = this->fields.mFSM;
  if ( !mFSM )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_B170D4();
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_26816040(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_26816040(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_40FADEE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    byte_40FADEE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !Component_srcLineSprite )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, mMapCtrl_SpotInfo->fields.touchType == 1, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetUISacleSameCamera(
        SrcSpotBasePrefab_o *this,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  UnityEngine_Component_o *mSpotNameLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FADF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam);
    byte_40FADF1 = 1;
  }
  mSpotNameLabel = (UnityEngine_Component_o *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (transform = UnityEngine_Component__get_transform(mSpotNameLabel, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(parent, 0LL),
        (Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                                gameObject,
                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_B170D4();
  }
  Component_UIWidget->fields.leftAnchor = (struct UIRect_AnchorPoint_o *)cam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_UIWidget->fields.leftAnchor,
    (System_Int32_array **)cam,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall SrcSpotBasePrefab__StateQaaEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *mStateEndAct; // x19

  mStateEndAct = this->fields.mStateEndAct;
  SrcSpotBasePrefab__SetState(this, 1, 0LL, v2);
  ActionExtensions__Call(mStateEndAct, 0LL);
}


void __fastcall SrcSpotBasePrefab__Update(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x0

  if ( (byte_40FADE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_SrcSpotBasePrefab__update__, method);
    byte_40FADE7 = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2908038 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *Mine; // x0
  SpotEntity_o *v17; // x22
  SpotLayerEntity_o *SpotLayerEntity; // x0
  const MethodInfo *v19; // x2
  SpotLayerEntity_o *v20; // x20
  bool IsEnabledDispSpot; // w24
  const MethodInfo *v22; // x2
  bool *p_IsMapModel_k__BackingField; // x26
  bool IsEnabledSpot; // w21
  struct MapControl_SpotInfo_o *v25; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Object_o *mcSpotSprite; // x23
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x4
  int spotChangeImgId; // w23
  System_Collections_Generic_List_UIAtlas__o *atlases; // x24
  UISprite_o *v35; // x25
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Collider_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *mSpotNameLabel; // x23
  const MethodInfo *v39; // x1
  UnityEngine_Component_o *v40; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x2
  UnityEngine_GameObject_o *v46; // x23
  const MethodInfo *v47; // x2
  struct MapControl_SpotInfo_o *v48; // x8
  int32_t dispType; // w8
  bool HasFlag; // w24
  char v52; // w8
  const MethodInfo *v53; // x4
  System_Collections_Generic_List_UIAtlas__o *v54; // x25
  UILabel_o *v55; // x22
  UISprite_o *mcSpotNameSp; // x24
  System_String_o *mSpotNameStr; // x23
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  NoticeNumberComponent_o **p_mNoticeNumber; // x22
  UnityEngine_Object_o *mNoticeNumber; // x23
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x23
  UnityEngine_GameObject_o *v63; // x23
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct MapControl_SpotInfo_o *v71; // x8
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x22
  __int64 v74; // x1
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x22
  const MethodInfo *v78; // x2
  bool v79; // w1
  MapControl_SpotInfo_o *v80; // x0
  bool IsNextDisp; // w0
  bool v82; // w22
  UnityEngine_Transform_o *v83; // x0
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  __int64 v86; // x1
  TerminalSceneComponent_c *v87; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0
  struct MapControl_SpotInfo_o *v90; // x8
  UnityEngine_GameObject_o *loopIcon; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_Transform_o *v93; // x22
  float v94; // s0
  float v95; // s1
  float v96; // s2
  struct UISprite_o *v97; // x8
  int mWidth; // s14
  float v99; // s10
  float v100; // s9
  float v101; // s8
  float v102; // s12
  float v103; // s13
  float v104; // s11
  float v105; // s0
  float v106; // s1
  float v107; // s2
  __int64 v108; // x1
  struct MapControl_SpotInfo_o *v109; // x8
  int32_t spotId; // w22
  TerminalPramsManager_c *v111; // x0
  _BOOL4 v112; // w23
  int32_t LastPlayedFreeQuestSpotId_k__BackingField; // w24
  UnityEngine_GameObject_o *v114; // x0
  UILabel_o *loopLastTime; // x20
  System_String_o *v116; // x0
  System_String_o *spotName; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o right; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FADEB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isForce);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v10);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v11);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_12263/*"SPOT_FREE_QUEST_LAST_TIME"*/, v14);
    byte_40FADEB = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mMapCtrl_SpotInfo )
      goto LABEL_127;
    v17 = Mine;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v20 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, v19);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      IsEnabledSpot = SpotLayerEntity__IsEnabledSpot(v20, this->fields.currentLayerId, v22);
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v25 = this->fields.mMapCtrl_SpotInfo;
        if ( !v25 )
          goto LABEL_127;
        if ( v25->fields.dispType )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( IsEnabledDispSpot )
          {
            x = this->fields.selfScale.fields.x;
            y = this->fields.selfScale.fields.y;
            z = this->fields.selfScale.fields.z;
          }
          else
          {
            *(UnityEngine_Vector3_o *)&x = UnityEngine_Vector3__get_zero(0LL);
          }
          GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)&x, 0LL);
        }
      }
    }
    else
    {
      IsEnabledSpot = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL) )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v17 )
          goto LABEL_127;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v17, v31);
      }
      atlases = this->fields.atlases;
      v35 = this->fields.mcSpotSprite;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      SrcSpotBasePrefab__SetSpotUI(atlases, v35, v17, spotChangeImgId, -32.0, v32);
    }
    if ( v20 && *p_IsMapModel_k__BackingField )
    {
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v36 )
        goto LABEL_127;
      Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v36,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !Component_srcLineSprite )
        goto LABEL_127;
      UnityEngine_Collider__set_enabled(Component_srcLineSprite, IsEnabledSpot, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(0LL, mSpotNameLabel, 0LL) )
      goto LABEL_60;
    v40 = (UnityEngine_Component_o *)this->fields.mSpotNameLabel;
    if ( !v40 )
      goto LABEL_127;
    transform = UnityEngine_Component__get_transform(v40, 0LL);
    if ( !transform )
      goto LABEL_127;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_127;
    v43 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(parent, 0LL);
    if ( !v43 )
      goto LABEL_127;
    v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
    if ( !v17 )
      goto LABEL_127;
    v46 = v44;
    if ( SpotEntity__HasFlag(v17, 8, v45) )
      goto LABEL_46;
    v48 = this->fields.mMapCtrl_SpotInfo;
    if ( !v48 )
      goto LABEL_127;
    dispType = v48->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v17, 16, v47);
      goto LABEL_47;
    }
    if ( dispType != 1 )
LABEL_46:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_47:
    if ( SpotEntity__IsOverRideName(v17, &spotName, v47) )
      HasFlag = !System_String__IsNullOrEmpty(spotName, 0LL);
    if ( !v46 )
      goto LABEL_127;
    if ( !this->fields._IsMapModel_k__BackingField || v20 == 0LL )
      v52 = -1;
    else
      v52 = IsEnabledSpot;
    UnityEngine_GameObject__SetActive(v46, v52 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_27419968(
      v46,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v54 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v55 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    }
    SrcSpotBasePrefab__SetSpotNameUI(v54, mcSpotNameSp, v55, mSpotNameStr, v53);
LABEL_60:
    if ( SrcSpotBasePrefab__GetState(this, v39) == 1 )
    {
      p_mNoticeNumber = &this->fields.mNoticeNumber;
      mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
      {
        mNoticeNumberPrefab = this->fields.mNoticeNumberPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v63 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v63, (UnityEngine_Component_o *)this, 0LL);
        if ( !v63 )
          goto LABEL_127;
        v64 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v63,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (NoticeNumberComponent_o *)v64;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.mNoticeNumber, v64, v65, v66, v67, v68, v69, v70);
      }
      if ( !*p_mNoticeNumber )
        goto LABEL_127;
      NoticeNumberComponent__SetNumber(*p_mNoticeNumber, this->fields.miQuestCount, 0LL);
      v71 = this->fields.mMapCtrl_SpotInfo;
      if ( !v71 )
        goto LABEL_127;
      if ( v71->fields.dispType != 1 )
      {
        if ( !*p_mNoticeNumber )
          goto LABEL_127;
        v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_mNoticeNumber, 0LL);
        if ( !v72 )
          goto LABEL_127;
        UnityEngine_GameObject__SetActive(v72, 0, 0LL);
      }
    }
    if ( this->fields.mMapCtrl_SpotInfo && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, v58) )
    {
      recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
      {
        v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v74, v59, v75, v76);
        System_Action___ctor(v77, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v77, v78);
        goto LABEL_85;
      }
      v79 = 1;
    }
    else
    {
      v79 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v79, v59);
LABEL_85:
    v80 = this->fields.mMapCtrl_SpotInfo;
    if ( !v80 )
      goto LABEL_127;
    IsNextDisp = MapControl_SpotInfo__IsNextDisp(v80, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_127;
    v82 = IsNextDisp;
    v83 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mcSpotNextSp, 0LL);
    if ( !v83 )
      goto LABEL_127;
    v84 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v83, 0LL);
    if ( !v84 )
      goto LABEL_127;
    v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
    if ( !v85 )
      goto LABEL_127;
    UnityEngine_GameObject__SetActive(v85, v82, 0LL);
    if ( v82 && !this->fields.isDisplayNext )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v86);
        byte_40F6042 = 1;
      }
      v87 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v87 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v87->static_fields->mInstance;
      if ( !mInstance )
        goto LABEL_127;
      mTerminalMap = mInstance->fields.mTerminalMap;
      if ( !mTerminalMap )
        goto LABEL_127;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(mTerminalMap, this->fields.mMapCtrl_SpotInfo, 0LL);
      this->fields.isDisplayNext = 1;
    }
    v90 = this->fields.mMapCtrl_SpotInfo;
    if ( v90 )
    {
      loopIcon = this->fields.loopIcon;
      if ( loopIcon )
      {
        UnityEngine_GameObject__SetActive(
          loopIcon,
          v90->fields.freeQuestCount > 0 && (IsEnabledSpot || v20 == 0LL || !this->fields._IsMapModel_k__BackingField),
          0LL);
        v92 = this->fields.loopIcon;
        if ( v92 )
        {
          v93 = UnityEngine_GameObject__get_transform(v92, 0LL);
          *(UnityEngine_Vector3_o *)&v94 = UnityEngine_Vector3__get_right(0LL);
          v97 = this->fields.mcSpotNameSp;
          if ( v97 )
          {
            mWidth = v97->fields.mWidth;
            v99 = v94;
            v100 = v95;
            v101 = v96;
            right = UnityEngine_Vector3__get_right(0LL);
            v102 = right.fields.x;
            v103 = right.fields.y;
            v104 = right.fields.z;
            *(UnityEngine_Vector3_o *)&v105 = UnityEngine_Vector3__get_up(0LL);
            if ( v93 )
            {
              v119.fields.x = (float)((float)((float)(v99 * (float)mWidth) * 0.5) - (float)(v102 * 26.0))
                            - (float)(v105 * 15.0);
              v119.fields.y = (float)((float)((float)(v100 * (float)mWidth) * 0.5) - (float)(v103 * 26.0))
                            - (float)(v106 * 15.0);
              v119.fields.z = (float)((float)((float)(v101 * (float)mWidth) * 0.5) - (float)(v104 * 26.0))
                            - (float)(v107 * 15.0);
              UnityEngine_Transform__set_localPosition(v93, v119, 0LL);
              v109 = this->fields.mMapCtrl_SpotInfo;
              if ( v109 )
              {
                spotId = v109->fields.spotId;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_40F6E3D )
                {
                  sub_B16FFC(&TerminalPramsManager_TypeInfo, v108);
                  byte_40F6E3D = 1;
                }
                v111 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v111 = TerminalPramsManager_TypeInfo;
                }
                if ( this->fields.loopLastTime )
                {
                  v112 = *p_IsMapModel_k__BackingField;
                  LastPlayedFreeQuestSpotId_k__BackingField = v111->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
                  v114 = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.loopLastTime,
                           0LL);
                  if ( v114 )
                  {
                    UnityEngine_GameObject__SetActive(
                      v114,
                      spotId == LastPlayedFreeQuestSpotId_k__BackingField && (IsEnabledSpot || v20 == 0LL || !v112),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
                    if ( loopLastTime )
                    {
                      UILabel__set_text(loopLastTime, v116, 0LL);
                      this->fields.mtIsUpdate = 0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_127:
    sub_B170D4();
  }
}


void __fastcall SrcSpotBasePrefab__UpdateDispIconStateOnMapModel(
        SrcSpotBasePrefab_o *this,
        bool *isCurrentDisp,
        bool existsLayerEnt,
        bool isEnabledTouchSpot,
        const MethodInfo *method)
{
  if ( this->fields._IsMapModel_k__BackingField && existsLayerEnt )
    *isCurrentDisp &= isEnabledTouchSpot;
}


void __fastcall SrcSpotBasePrefab___UpdateDisp_b__72_0(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SrcSpotBasePrefab__SetRecollectionSpotEffect(this, 1, v2);
}


void __fastcall SrcSpotBasePrefab__cbfBtn_Click(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SrcSpotBasePrefab__SelectSpot(this, 1, v2);
}


bool __fastcall SrcSpotBasePrefab__get_IsMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields._IsMapModel_k__BackingField;
}


MapModelCamera_o *__fastcall SrcSpotBasePrefab__get_MapModelCamera(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields._MapModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall SrcSpotBasePrefab__get_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        const MethodInfo *method)
{
  return this->fields._MapModelEffectRootObj_k__BackingField;
}


int32_t __fastcall SrcSpotBasePrefab__mfGetSpotID(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields.miSpotID;
}


System_String_o *__fastcall SrcSpotBasePrefab__mfGetSpotName(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields.mSpotNameStr;
}


void __fastcall SrcSpotBasePrefab__mfSetAtlas(
        SrcSpotBasePrefab_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_UIAtlas__o **p_atlases; // x19

  this->fields.atlases = atlases;
  p_atlases = &this->fields.atlases;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlases,
    (System_Int32_array **)atlases,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_atlases - 72) = 1;
}


void __fastcall SrcSpotBasePrefab__mfSetCommopn(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *rootGameObject,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mcRootGobjP = rootGameObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mcRootGobjP,
    (System_Int32_array **)rootGameObject,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__mfSetPositions(
        SrcSpotBasePrefab_o *this,
        int32_t qOfsX,
        int32_t qOfsY,
        int32_t nOfsX,
        int32_t nOfsY,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Component_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x25
  UnityEngine_GameObject_o *v17; // x25
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mcSpotNextSp; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v29; // x21
  SrcSpotBasePrefab_c *v30; // x8

  if ( (byte_40FADED & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&qOfsX);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v13);
    byte_40FADED = 1;
  }
  p_mNoticeNumber = (UnityEngine_Component_o **)&this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v17, (UnityEngine_Component_o *)this, 0LL);
    if ( !v17 )
LABEL_20:
      sub_B170D4();
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v17,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (UnityEngine_Component_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !*p_mNoticeNumber )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(*p_mNoticeNumber, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
  mcSpotNextSp = (UnityEngine_Component_o *)this->fields.mcSpotNextSp;
  if ( !mcSpotNextSp )
    goto LABEL_20;
  transform = UnityEngine_Component__get_transform(mcSpotNextSp, 0LL);
  if ( !transform )
    goto LABEL_20;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_20;
  v29 = UnityEngine_Component__get_gameObject(parent, 0LL);
  v30 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v30 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_27419968(
    v29,
    (float)nOfsX,
    (float)(v30->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
    0LL);
}


void __fastcall SrcSpotBasePrefab__mfSetQuestCount(
        SrcSpotBasePrefab_o *this,
        int32_t questCount,
        const MethodInfo *method)
{
  this->fields.miQuestCount = questCount;
  this->fields.mtIsUpdate = 1;
}


void __fastcall SrcSpotBasePrefab__mfSetSpotID(SrcSpotBasePrefab_o *this, int32_t spotId, const MethodInfo *method)
{
  this->fields.miSpotID = spotId;
  this->fields.mtIsUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__mfSetSpotName(
        SrcSpotBasePrefab_o *this,
        System_String_o *name,
        int32_t offsetX,
        int32_t offsetY,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_mSpotNameStr; // x21

  this->fields.mSpotNameStr = name;
  p_mSpotNameStr = &this->fields.mSpotNameStr;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mSpotNameStr,
    (System_Int32_array **)name,
    *(System_String_array ***)&offsetX,
    *(System_String_array ***)&offsetY,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  *((_DWORD *)p_mSpotNameStr + 2) = offsetX;
  *((_DWORD *)p_mSpotNameStr + 3) = offsetY - 32;
  *((_BYTE *)p_mSpotNameStr - 112) = 1;
}


void __fastcall SrcSpotBasePrefab__set_IsMapModel(SrcSpotBasePrefab_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMapModel_k__BackingField = value;
}


void __fastcall SrcSpotBasePrefab__set_MapModelCamera(
        SrcSpotBasePrefab_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MapModelCamera_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SrcSpotBasePrefab__set_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MapModelEffectRootObj_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MapModelEffectRootObj_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SrcSpotBasePrefab_StateMapMain___ctor(SrcSpotBasePrefab_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateMapMain__begin(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B170D4();
  that->fields.mtIsUpdate = 1;
}


void __fastcall SrcSpotBasePrefab_StateMapMain__end(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateMapMain__update(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_B170D4();
  SrcSpotBasePrefab__UpdateDisp(that, 0, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateNone___ctor(SrcSpotBasePrefab_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateNone__begin(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateNone__end(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateNone__update(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaChange___ctor(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateQaaChange__begin(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  SrcSpotBasePrefab_o *v15; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F7A58 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v6);
    sub_B16FFC(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v7);
    byte_40F7A58 = 1;
  }
  v8 = sub_B170CC(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, that, method, v3, v4);
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(
    (SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_12;
  *(_QWORD *)(v8 + 16) = that;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)that, v9, v10, v11, v12, v13, v14);
  v15 = *(SrcSpotBasePrefab_o **)(v8 + 16);
  if ( !v15 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v15->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(v15, 0, 0LL);
      v18 = *(_QWORD *)(v8 + 16);
      v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
      System_Action___ctor(
        v23,
        (Il2CppObject *)v8,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 208) = v23;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 208),
          (System_Int32_array **)v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
  else
  {
    SrcSpotBasePrefab__StateQaaEnd(v15, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab_StateQaaChange__end(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaChange__update(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(
        SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___begin_b__0(
        SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SrcSpotBasePrefab_o *that; // x0
  SrcSpotBasePrefab_o *v5; // x0
  struct SrcSpotBasePrefab_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_41066A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SrcSpotBasePrefab_StateQaaEnd__, v3);
    byte_41066A1 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, 0LL), (v5 = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim(v5, 1, 0LL),
        v6 = this->fields.that,
        v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10),
        System_Action___ctor(v11, (Il2CppObject *)v6, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.mAfterScaleAnim = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields.mAfterScaleAnim,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall SrcSpotBasePrefab_StateQaaDisp___ctor(SrcSpotBasePrefab_StateQaaDisp_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab_StateQaaDisp__begin(
        SrcSpotBasePrefab_StateQaaDisp_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_GameObject_o *mQaaDispEffObj; // x20
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x20
  __int64 v25; // x1
  TerminalSceneComponent_c *v26; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v29; // x0
  int v30; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float ScaleOnMapModel; // s0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7A59 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SeManager_TypeInfo, v6);
    sub_B16FFC(&Method_SrcSpotBasePrefab_StateQaaEnd__, v7);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    byte_40F7A59 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(17, 0LL);
  if ( !that )
    goto LABEL_31;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_31;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim(that, 1, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__StateQaaEnd(that, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, 0LL);
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 1, 0LL);
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(v15, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v15;
      sub_B16F98(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, 0LL);
  mQaaDispEffObj = that->fields.mQaaDispEffObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mQaaDispEffObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v24 = v23;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_27425860(v24, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_27420076(v24, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v24, 0LL);
    GameObjectExtensions__ResetLocalScale(v24, 0LL);
    goto LABEL_30;
  }
  GameObjectExtensions__SetParent_27425860(v23, that->fields._MapModelEffectRootObj_k__BackingField, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v25);
    byte_40F6042 = 1;
  }
  v26 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v26 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v26->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = GameObjectExtensions__GetLocalPosition(v29, 0LL),
        !mTerminalMap) )
  {
LABEL_31:
    sub_B170D4();
  }
  v44 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v30, 0LL);
  GameObjectExtensions__SetLocalPosition(v24, v44, 0LL);
  GameObjectExtensions__ResetLocalRotation(v24, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, 0LL);
  v45.fields.y = y * ScaleOnMapModel;
  v45.fields.z = z * ScaleOnMapModel;
  v45.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v24, v45, 0LL);
LABEL_30:
  that->fields.mParticleSystemObj = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&that->fields.mParticleSystemObj,
    (System_Int32_array **)v24,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void __fastcall SrcSpotBasePrefab_StateQaaDisp__end(
        SrcSpotBasePrefab_StateQaaDisp_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaDisp__update(
        SrcSpotBasePrefab_StateQaaDisp_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaGray___ctor(SrcSpotBasePrefab_StateQaaGray_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateQaaGray__begin(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7A5A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_40F7A5A = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B170D4();
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__StateQaaEnd(that, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim(that, 0, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, 0LL);
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 1, 0LL);
      v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
      System_Action___ctor(v11, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v11;
      sub_B16F98(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      break;
  }
}


void __fastcall SrcSpotBasePrefab_StateQaaGray__end(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaGray__update(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaHide___ctor(SrcSpotBasePrefab_StateQaaHide_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab_StateQaaHide__begin(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7A5B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_40F7A5B = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B170D4();
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 0, 0LL);
      v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
      System_Action___ctor(v11, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v11;
      sub_B16F98(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
  }
  else
  {
    SrcSpotBasePrefab__StateQaaEnd(that, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab_StateQaaHide__end(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab_StateQaaHide__update(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A56 & 1) == 0 )
  {
    sub_B16FFC(&SrcSpotBasePrefab___c_TypeInfo, v1);
    byte_40F7A56 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SrcSpotBasePrefab___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SrcSpotBasePrefab___c___ctor(SrcSpotBasePrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab___c___SelectSpot_b__75_0(SrcSpotBasePrefab___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass107_0___ctor(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__0(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  SrcSpotBasePrefab_o *_4__this; // x0
  SrcSpotBasePrefab_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SrcSpotBasePrefab__SetContrast(_4__this, this->fields.to, 0LL), (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  SrcSpotBasePrefab__StateQaaEnd(v4, 0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__1(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  SrcSpotBasePrefab_o *_4__this; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
  SrcSpotBasePrefab__SetContrast(
    _4__this,
    this->fields.from + (float)((float)(this->fields.to - this->fields.from) * easingObj->fields.mStartTime),
    0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass112_0___ctor(
        SrcSpotBasePrefab___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass112_0___LoadRecollectionQuestSpotEffect_b__0(
        SrcSpotBasePrefab___c__DisplayClass112_0_o *this,
        AssetData_o *effectAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SrcSpotBasePrefab_c *v8; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  SrcSpotBasePrefab___c__DisplayClass112_0_Fields *p_fields; // x21
  struct SrcSpotBasePrefab_o *_4__this; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x20
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct SrcSpotBasePrefab_o *v20; // x8
  UnityEngine_Component_o *mNoticeNumber; // x0
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *transform; // x0
  System_Action_o *endCallback; // x0

  if ( (byte_40F7A57 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, effectAssetData);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v7);
    byte_40F7A57 = 1;
  }
  if ( !effectAssetData )
  {
    p_fields = &this->fields;
    goto LABEL_19;
  }
  v8 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v8 = SrcSpotBasePrefab_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     effectAssetData,
                                     v8->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  p_fields = &this->fields;
  _4__this = this->fields.__4__this;
  v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 v12,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.recollectionQuestSpotEffect,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !p_fields->__4__this )
    goto LABEL_22;
  if ( UnityEngine_Object__op_Inequality(
         (UnityEngine_Object_o *)p_fields->__4__this->fields.recollectionQuestSpotEffect,
         0LL,
         0LL) )
  {
    v20 = p_fields->__4__this;
    if ( p_fields->__4__this )
    {
      mNoticeNumber = (UnityEngine_Component_o *)v20->fields.mNoticeNumber;
      if ( mNoticeNumber )
      {
        recollectionQuestSpotEffect = v20->fields.recollectionQuestSpotEffect;
        gameObject = UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
        if ( gameObject )
        {
          transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0LL);
          if ( p_fields->__4__this )
          {
            GameObjectExtensions__ResetLocalScale(p_fields->__4__this->fields.recollectionQuestSpotEffect, 0LL);
            goto LABEL_19;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_19:
  if ( !p_fields->__4__this )
    goto LABEL_22;
  p_fields->__4__this->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = this->fields.endCallback;
  if ( !endCallback )
    goto LABEL_22;
  System_Action__Invoke(endCallback, 0LL);
}