void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct SrcSpotBasePrefab_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  SrcSpotBasePrefab_c *v17; // x8

  if ( (byte_438BF44 & 1) == 0 )
  {
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    sub_B775C4(&StringLiteral_18525/*"ef_badge_glow"*/);
    sub_B775C4(&StringLiteral_5992/*"Effect/RecollectionQuest"*/);
    byte_438BF44 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_5992/*"Effect/RecollectionQuest"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5992/*"Effect/RecollectionQuest"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = SrcSpotBasePrefab_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18525/*"ef_badge_glow"*/;
  v9->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18525/*"ef_badge_glow"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = SrcSpotBasePrefab_TypeInfo;
  SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0.3;
  v17->static_fields->DEFAULT_NEXT_POS_Y = 100.0;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438BF43 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_B775C4(&StringLiteral_22644/*"smfSpotBtn_Click"*/);
    byte_438BF43 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_22644/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_22644/*"smfSpotBtn_Click"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.msSmfNameForBtnClick, v9, v2, v3, v4, v5, v6, v7);
  this->fields.selfScale = UnityEngine_Vector3__get_one(0LL);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.atlases,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo_247A020 *v10; // x2
  bool v11; // zf
  UnityEngine_BoxCollider_o *v12; // x20
  int v13; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v17; // s2
  System_Nullable_Vector3__o v18; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v19; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v20; // 0:x0.12
  System_Nullable_Vector3__o v21; // 0:x0.16

  v4 = *(_QWORD *)&centerPosition.fields.value.fields.z;
  has_value = size.fields.has_value;
  v18 = centerPosition;
  v19 = size;
  if ( (byte_438BF38 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B775C4(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_Vector3__get_Value__);
    sub_B775C4(&Method_System_Nullable_Vector2__get_Value__);
    byte_438BF38 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v11 = (v4 & 0xFF00000000LL) == 0;
  v12 = (UnityEngine_BoxCollider_o *)Component_srcLineSprite;
  if ( !v11 )
  {
    *(_QWORD *)&v21.fields.value.fields.x = &v18;
    *(_QWORD *)&v21.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v13 = System_Nullable_Vector3___get_Value(v21, v10);
    if ( !v12 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
    has_value = v19.fields.has_value;
  }
  if ( !has_value )
    return;
  v20.fields.value = (struct UnityEngine_Vector2_o)&v19;
  *(_DWORD *)&v20.fields.has_value = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v20, (const MethodInfo_2479C34 *)v10);
  if ( !v12 )
LABEL_11:
    sub_B7769C(gameObject, v8);
  v17 = 0;
  UnityEngine_BoxCollider__set_size(v12, *(UnityEngine_Vector3_o *)&Value.fields.x, 0LL);
}


void __fastcall SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
}


void __fastcall SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x21
  SrcSpotBasePrefab_StateNone_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v15; // x21
  SrcSpotBasePrefab_StateMapMain_o *v16; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v17; // x21
  SrcSpotBasePrefab_StateQaaHide_o *v18; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v19; // x21
  SrcSpotBasePrefab_StateQaaGray_o *v20; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v21; // x21
  SrcSpotBasePrefab_StateQaaDisp_o *v22; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v23; // x20
  SrcSpotBasePrefab_StateQaaChange_o *v24; // x21
  const MethodInfo *v25; // x3
  MapModelManager_c *v26; // x0

  if ( (byte_438BF2E & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_SrcSpotBasePrefab___ctor__);
    sub_B775C4(&Method_CStateManager_SrcSpotBasePrefab__add__);
    sub_B775C4(&CStateManager_SrcSpotBasePrefab__TypeInfo);
    sub_B775C4(&MapModelManager_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateMapMain_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateNone_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateQaaChange_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    byte_438BF2E = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B77694(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v4,
      (QAASpotStateController_IMapSpot_o *)this,
      6,
      (const MethodInfo_2CBF0B0 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v4;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.mFSM, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    mFSM = this->fields.mFSM;
    v12 = (SrcSpotBasePrefab_StateNone_o *)sub_B77694(SrcSpotBasePrefab_StateNone_TypeInfo);
    SrcSpotBasePrefab_StateNone___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v15 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v16 = (SrcSpotBasePrefab_StateMapMain_o *)sub_B77694(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    SrcSpotBasePrefab_StateMapMain___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v17 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v18 = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B77694(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    SrcSpotBasePrefab_StateQaaHide___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v19 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v20 = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B77694(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    SrcSpotBasePrefab_StateQaaGray___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v21 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v22 = (SrcSpotBasePrefab_StateQaaDisp_o *)sub_B77694(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    SrcSpotBasePrefab_StateQaaDisp___ctor(v22, 0LL);
    if ( !v21
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v21,
            4,
            (IState_T__o *)v22,
            (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v23 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v24 = (SrcSpotBasePrefab_StateQaaChange_o *)sub_B77694(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          SrcSpotBasePrefab_StateQaaChange___ctor(v24, 0LL),
          !v23) )
    {
LABEL_15:
      sub_B7769C(v13, v14);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v23,
      5,
      (IState_T__o *)v24,
      (const MethodInfo_2CBF17C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v25);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v26 = MapModelManager_TypeInfo;
  if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v26 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v26->static_fields->LAYER_LOWER_ID;
}


bool __fastcall SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  __int64 v5; // x1
  int32_t current; // w19
  QuestTree_o *v7; // x0
  __int64 v8; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v10; // x1
  QuestEntity_o *Mine; // x0
  __int64 v12; // x1
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438BF41 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    byte_438BF41 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_B7769C(0LL, v5);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      AvailableQuestIdList,
      (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17 = v16;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v17,
              (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      current = v17.fields.current;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v7 )
        sub_B7769C(0LL, v8);
      QuestInfo = QuestTree__GetQuestInfo(v7, current, 0LL);
      if ( !QuestInfo )
        sub_B7769C(0LL, v10);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_B7769C(0LL, v12);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v13 = 1;
        v14 = 4;
        goto LABEL_16;
      }
    }
    v13 = 0;
    v14 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v17,
      (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = (v14 == 4) & v13;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_438BF2C & 1) == 0 )
  {
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    byte_438BF2C = 1;
  }
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__DestroyEffect_26725472(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_26725472(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  BattleServantConfConponent_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = spot;
  if ( (byte_438BF2D & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BF2D = 1;
  }
  if ( !v2 )
    sub_B7769C(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v2->fields.mParticleSystemObj;
  p_mParticleSystemObj = (BattleServantConfConponent_o *)&v2->fields.mParticleSystemObj;
  v4 = mParticleSystemObj;
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
    UnityEngine_Object__Destroy_36309980(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_B77560(p_mParticleSystemObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_B7769C(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = id;
  if ( (byte_438BF2B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13240/*"Spot_"*/);
    sub_B775C4(&StringLiteral_989/*"00"*/);
    byte_438BF2B = 1;
  }
  v2 = System_Int32__ToString_39547236((int32_t)&v4, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  return System_String__Concat_44901936((System_String_o *)StringLiteral_13240/*"Spot_"*/, v2, 0LL);
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
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438BF3A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BF3A = 1;
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
      v6 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v6 )
        sub_B7769C(0LL, v5);
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v15 = GameObjectExtensions__GetLocalPosition(v11, 0LL);
      v14.fields.x = x;
      v14.fields.y = y;
      v14.fields.z = z;
      return 2000.0 / UnityEngine_Vector3__Distance(v14, v15, 0LL);
    }
  }
  return v3;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v2 = this;
  if ( (byte_438BF3B & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_B775C4(&Method_CStateManager_SrcSpotBasePrefab__getState__);
    byte_438BF3B = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B7769C(this, method);
  return mFSM->fields.m_state;
}


bool __fastcall SrcSpotBasePrefab__IsDisp(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_Behaviour_o *mcSpotSprite; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  mcSpotSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mcSpotSprite )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mcSpotSprite, 0LL) )
  {
    mcSpotSprite = (UnityEngine_Behaviour_o *)this->fields.mcSpotSprite;
    if ( mcSpotSprite )
      return (x > 0.0) & UnityEngine_Behaviour__get_isActiveAndEnabled(mcSpotSprite, 0LL) & (y > 0.0);
LABEL_6:
    sub_B7769C(mcSpotSprite, v7);
  }
  return 0;
}


void __fastcall SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *mNoticeNumber; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v21; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_438BF3F & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__);
    sub_B775C4(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
    byte_438BF3F = 1;
  }
  v5 = sub_B77694(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass112_0___ctor((SrcSpotBasePrefab___c__DisplayClass112_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_18:
    sub_B7769C(mNoticeNumber, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v21 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v21 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v21->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v23, 1, 0LL);
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


void __fastcall SrcSpotBasePrefab__SelectSpot(SrcSpotBasePrefab_o *this, bool isPlaySe, const MethodInfo *method)
{
  UnityEngine_Object_o *mcRootGobjP; // x21
  float realtimeSinceStartup; // s8
  SrcSpotBasePrefab_c *v7; // x0
  __int64 v8; // x1
  float v9; // s0
  SrcSpotBasePrefab_c *v10; // x0
  float v11; // s8
  void *mMapCtrl_SpotInfo; // x0
  int v13; // w8
  UnityEngine_GameObject_o *v14; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v17; // x0
  System_String_o *v18; // x20
  CommonUI_o *v19; // x21
  SrcSpotBasePrefab___c_c *v20; // x8
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x9
  System_Action_o *_9__75_0; // x23
  System_String_o *v23; // x22
  Il2CppObject *v24; // x24
  struct SrcSpotBasePrefab___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_438BF34 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__);
    sub_B775C4(&SrcSpotBasePrefab___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BF34 = 1;
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
    v7 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v7 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v7->static_fields->clickTime) > v7->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v9 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v10 = SrcSpotBasePrefab_TypeInfo;
      v11 = v9;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v10 = SrcSpotBasePrefab_TypeInfo;
      }
      v10->static_fields->clickTime = v11;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v13 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v13 != 2 )
      {
        if ( v13 != 1 )
          return;
        v14 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v14 )
        {
          UnityEngine_GameObject__SendMessage_41438516(
            v14,
            msSmfNameForBtnClick,
            (Il2CppObject *)mMapCtrl_SpotInfo,
            0LL);
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
          if ( !byte_438749A )
          {
            sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_438749A = 1;
          }
          v17 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v17 = TerminalPramsManager_TypeInfo;
          }
          v17->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_49:
        sub_B7769C(mMapCtrl_SpotInfo, v8);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v18 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v18, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v19 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v20 = SrcSpotBasePrefab___c_TypeInfo;
      if ( (BYTE3(SrcSpotBasePrefab___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v20 = SrcSpotBasePrefab___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__75_0 = static_fields->__9__75_0;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v24, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        v25 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        v25->__9__75_0 = _9__75_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v25->__9__75_0,
          (System_Int32_array **)_9__75_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( !v19 )
        goto LABEL_49;
      CommonUI__OpenNotificationDialog(v19, v23, v18, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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


void __fastcall SrcSpotBasePrefab__SetBtnColliderEnable(
        SrcSpotBasePrefab_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_438BF37 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_438BF37 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B7769C(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, isEnabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetContrast(SrcSpotBasePrefab_o *this, float val, const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  float v8; // s3
  __int64 v11; // x1
  UIWidget_o *mcSpotSprite; // x0
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-20h] BYREF

  v8 = 1.0;
  *(_QWORD *)&v13.fields.r = 0LL;
  UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&val, v3, v4, v5, v6, (const MethodInfo *)&v13);
  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite
    || (UIWidget__set_color(mcSpotSprite, v13, 0LL), (mcSpotSprite = (UIWidget_o *)this->fields.mcSpotNameSp) == 0LL)
    || (UIWidget__set_color(mcSpotSprite, v13, 0LL), (mcSpotSprite = (UIWidget_o *)this->fields.mSpotNameLabel) == 0LL) )
  {
    sub_B7769C(mcSpotSprite, v11);
  }
  UIWidget__set_color(mcSpotSprite, v13, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetCurrentLayerId(
        SrcSpotBasePrefab_o *this,
        int32_t layerId,
        const MethodInfo *method)
{
  this->fields.currentLayerId = layerId;
}


void __fastcall SrcSpotBasePrefab__SetDispNoticeNumber(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumber; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w20
  bool v10; // w1

  if ( (byte_438BF42 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BF42 = 1;
  }
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mNoticeNumber, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo
      || (gameObject = (UnityEngine_Component_o *)this->fields.mNoticeNumber) == 0LL
      || (dispType = mMapCtrl_SpotInfo->fields.dispType,
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL) )
    {
      sub_B7769C(gameObject, v7);
    }
    v10 = dispType == 1 && isDisp;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0LL);
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
  sub_B77560(
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
  SrcSpotBasePrefab__SetQaaColorAnim_26732032(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_26732032(this, isActive, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_26732032(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UISprite_o *mcSpotSprite; // x8
  float r; // w8
  float v26; // s0
  System_Action_o *v27; // x19
  EasingObject_o *v28; // x21
  System_Action_o *v29; // x22

  if ( (byte_438BF3E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__);
    sub_B775C4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__);
    sub_B775C4(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
    byte_438BF3E = 1;
  }
  v7 = sub_B77694(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass107_0___ctor((SrcSpotBasePrefab___c__DisplayClass107_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 32) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), Component_UIWidget, v18, v19, v20, v21, v22, v23);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v26 = 0.5;
  if ( isActive )
    v26 = 1.0;
  *(float *)(v7 + 24) = v26;
  *(float *)(v7 + 28) = r;
  v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v28 = *(EasingObject_o **)(v7 + 32);
    v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v7,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v28 )
    {
      EasingObject__Play(v28, time, v29, v27, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(v8, v9);
  }
  ActionExtensions__Call(v27, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26731644(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26731644(this, isDisp, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_26731644(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v11; // s9
  float v12; // s10
  float v13; // s14
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
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

  if ( (byte_438BF3D & 1) == 0 )
  {
    sub_B775C4(&Method_UITweener_Begin_TweenScale___);
    sub_B775C4(&StringLiteral_2214/*"AtScaleAnimEnd"*/);
    byte_438BF3D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = this->fields.selfScale.fields.x;
    y = this->fields.selfScale.fields.y;
    z = this->fields.selfScale.fields.z;
    v11 = zero.fields.x;
    v12 = zero.fields.y;
    v13 = zero.fields.z;
  }
  else
  {
    v11 = this->fields.selfScale.fields.x;
    v12 = this->fields.selfScale.fields.y;
    v13 = this->fields.selfScale.fields.z;
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
    v14 = UITweener__Begin_TweenWidth_(
            gameObject,
            time,
            (const MethodInfo_1E05754 *)Method_UITweener_Begin_TweenScale___);
    if ( !v14 )
      sub_B7769C(0LL, v15);
    v14->fields.eventReceiver = gameObject;
    p_eventReceiver = &v14->fields.eventReceiver;
    *(float *)&v14->fields.from = v11;
    *(float *)&v14->fields.to = v12;
    *(float *)&v14->fields.updateTable = v13;
    *((float *)&v14->fields.updateTable + 1) = x;
    *(float *)&v14->fields.mWidget = y;
    *((float *)&v14->fields.mWidget + 1) = z;
    v14->fields.style = 2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->fields.eventReceiver,
      (System_Int32_array **)gameObject,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v23 = (System_Int32_array **)StringLiteral_2214/*"AtScaleAnimEnd"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_2214/*"AtScaleAnimEnd"*/;
    sub_B77560((BattleServantConfConponent_o *)(p_eventReceiver + 1), v23, v24, v25, v26, v27, v28, v29);
  }
}


void __fastcall SrcSpotBasePrefab__SetRecollectionSpotEffect(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_438BF40 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BF40 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
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
  System_Collections_Generic_List_UIAtlas__o *v8; // x21
  System_String_o *v9; // x22
  int32_t v10; // w1

  v8 = atlases;
  if ( (byte_438BF32 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B775C4(&StringLiteral_20034/*"img_spotname_bg"*/);
    byte_438BF32 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20034/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20034/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_B7769C(atlases, sp);
  }
  UISprite__set_atlas(sp, (UIAtlas_o *)atlases, 0LL);
  UISprite__set_spriteName(sp, v9, 0LL);
  if ( lb->fields.mWidth + 50 <= 40 )
    v10 = 40;
  else
    v10 = lb->fields.mWidth + 50;
  UIWidget__set_width((UIWidget_o *)sp, v10, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetSpotUI(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        SpotEntity_o *spotEnt,
        int32_t spotImageId,
        float innerOfsY,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v10; // x21
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UnityEngine_Object_o *mAtlas; // x21
  bool v16; // w0
  __int64 v17; // x2
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x8
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x8
  AssetData_o *v28; // x0
  UnityEngine_Object_o *v29; // x21
  UnityEngine_GameObject_o *v30; // x21
  UnityEngine_Component_o *v31; // x0
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  v10 = atlases;
  v33 = spotImageId;
  if ( (byte_438BF31 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_9111/*"MapSpotEffect_{0}"*/);
    sub_B775C4(&StringLiteral_993/*"000000"*/);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B775C4(&StringLiteral_22694/*"spot_"*/);
    byte_438BF31 = 1;
  }
  if ( !sp )
    goto LABEL_56;
  atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)sp,
                                                            0LL);
  if ( !atlases )
    goto LABEL_56;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)atlases, 0LL) >= 1 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
    TransformHelper__DestroyChildren(transform, 0LL);
  }
  if ( spotImageId >= 1 )
  {
    v12 = System_Int32__ToString_39547236((int32_t)&v33, (System_String_o *)StringLiteral_993/*"000000"*/, 0LL);
    v13 = System_String__Concat_44901936((System_String_o *)StringLiteral_22694/*"spot_"*/, v12, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v13, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v16, 0LL);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0LL) )
    {
      UISprite__set_spriteName(sp, v13, 0LL);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)sp,
                                                                0LL);
      if ( spotEnt )
      {
        imageOfsY = spotEnt->fields.imageOfsY;
        imageOfsX = spotEnt->fields.imageOfsX;
LABEL_54:
        GameObjectExtensions__SetLocalPosition_32807660(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_56;
    }
    v32 = v33;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v17);
    v21 = System_String__Format((System_String_o *)StringLiteral_9111/*"MapSpotEffect_{0}"*/, v20, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v22 )
      goto LABEL_56;
    v23 = *(_QWORD *)(v22 + 256);
    if ( !v23 )
      goto LABEL_56;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v23 + 232);
    if ( !atlases )
      goto LABEL_56;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               (AssetData_o *)atlases,
                                                               v21,
                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
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
      v25 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
      goto LABEL_52;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v26 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v26 )
      goto LABEL_56;
    v27 = *(_QWORD *)(v26 + 256);
    if ( !v27 )
      goto LABEL_56;
    v28 = *(AssetData_o **)(v27 + 240);
    if ( v28 )
    {
      v29 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      v28,
                                      v21,
                                      (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v25 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v29;
LABEL_52:
        v30 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v25,
                                            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v31 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent(v30, v31, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v30;
          goto LABEL_54;
        }
LABEL_56:
        sub_B7769C(atlases, sp);
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
  System_Collections_Generic_List_UIAtlas__o *v8; // x21
  const MethodInfo *v9; // x4
  int32_t PrioredImgId; // w22

  v8 = atlases;
  if ( (byte_438BF30 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    byte_438BF30 = 1;
  }
  if ( !spotEnt )
    sub_B7769C(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, (const MethodInfo *)sp);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v9);
}


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
  __int64 v11; // x1
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x0

  if ( (byte_438BF3C & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_SrcSpotBasePrefab__setState__);
    byte_438BF3C = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_B77560(
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
    sub_B7769C(0LL, v11);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2CBF220 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_B7769C(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_26730512(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_26730512(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_438BF36 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    byte_438BF36 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_B7769C(gameObject, v4);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)gameObject,
    mMapCtrl_SpotInfo->fields.touchType == 1,
    0LL);
}


void __fastcall SrcSpotBasePrefab__SetUISacleSameCamera(
        SrcSpotBasePrefab_o *this,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  char *mSpotNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438BF39 & 1) == 0 )
  {
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___);
    byte_438BF39 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    gameObject,
                                    (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_B7769C(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 3) = cam;
  sub_B77560(
    (BattleServantConfConponent_o *)(mSpotNameLabel + 24),
    (System_Int32_array **)cam,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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

  if ( (byte_438BF2F & 1) == 0 )
  {
    sub_B775C4(&Method_CStateManager_SrcSpotBasePrefab__update__);
    byte_438BF2F = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2CBF1F8 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *v6; // x22
  SpotLayerEntity_o *SpotLayerEntity; // x0
  const MethodInfo *v8; // x2
  SpotLayerEntity_o *v9; // x20
  bool IsEnabledDispSpot; // w24
  const MethodInfo *v11; // x2
  bool *p_IsMapModel_k__BackingField; // x26
  char v13; // w21
  struct MapControl_SpotInfo_o *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Object_o *mcSpotSprite; // x23
  const MethodInfo *v20; // x4
  int spotChangeImgId; // w23
  System_Collections_Generic_List_UIAtlas__o *atlases; // x24
  UISprite_o *v23; // x25
  UnityEngine_Object_o *mSpotNameLabel; // x23
  const MethodInfo *v25; // x2
  UnityEngine_GameObject_o *v26; // x23
  const MethodInfo *v27; // x2
  struct MapControl_SpotInfo_o *v28; // x8
  int32_t dispType; // w8
  bool HasFlag; // w24
  char v32; // w8
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_UIAtlas__o *v34; // x25
  UILabel_o *v35; // x22
  UISprite_o *mcSpotNameSp; // x24
  System_String_o *mSpotNameStr; // x23
  const MethodInfo *v38; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x22
  UnityEngine_Object_o *mNoticeNumber; // x23
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x23
  UnityEngine_GameObject_o *v42; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct MapControl_SpotInfo_o *v50; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x22
  System_Action_o *v52; // x22
  const MethodInfo *v53; // x2
  bool v54; // w1
  char v55; // w22
  __int64 v56; // x8
  struct MapControl_SpotInfo_o *v57; // x8
  UnityEngine_Transform_o *transform; // x22
  float v59; // s0
  float v60; // s1
  float v61; // s2
  struct UISprite_o *v62; // x8
  int mWidth; // s14
  float v64; // s10
  float v65; // s9
  float v66; // s8
  float v67; // s12
  float v68; // s13
  float v69; // s11
  float v70; // s0
  float v71; // s1
  float v72; // s2
  struct MapControl_SpotInfo_o *v73; // x8
  int32_t spotId; // w22
  _BOOL4 v75; // w23
  int v76; // w24
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o right; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438BF33 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__);
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_12548/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_438BF33 = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mMapCtrl_SpotInfo )
      goto LABEL_127;
    v6 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v9 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, v8);
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotLayerEntity__IsEnabledSpot(v9, this->fields.currentLayerId, v11);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v13 = (char)mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v14 = this->fields.mMapCtrl_SpotInfo;
        if ( !v14 )
          goto LABEL_127;
        if ( v14->fields.dispType )
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
      v13 = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v6 )
          goto LABEL_127;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v6, (const MethodInfo *)isForce);
      }
      atlases = this->fields.atlases;
      v23 = this->fields.mcSpotSprite;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      SrcSpotBasePrefab__SetSpotUI(atlases, v23, v6, spotChangeImgId, -32.0, v20);
    }
    if ( v9 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v13 & 1, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(0LL, mSpotNameLabel, 0LL) )
      goto LABEL_60;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.mSpotNameLabel;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !v6 )
      goto LABEL_127;
    v26 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__HasFlag(v6, 8, v25);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_46;
    v28 = this->fields.mMapCtrl_SpotInfo;
    if ( !v28 )
      goto LABEL_127;
    dispType = v28->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v6, 16, v27);
      goto LABEL_47;
    }
    if ( dispType != 1 )
LABEL_46:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_47:
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__IsOverRideName(v6, &spotName, v27);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v26 )
      goto LABEL_127;
    if ( !this->fields._IsMapModel_k__BackingField || v9 == 0LL )
      v32 = -1;
    else
      v32 = v13;
    UnityEngine_GameObject__SetActive(v26, v32 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_32807660(
      v26,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v34 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v35 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    }
    SrcSpotBasePrefab__SetSpotNameUI(v34, mcSpotNameSp, v35, mSpotNameStr, v33);
LABEL_60:
    if ( SrcSpotBasePrefab__GetState(this, (const MethodInfo *)isForce) == 1 )
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
        v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v42, (UnityEngine_Component_o *)this, 0LL);
        if ( !v42 )
          goto LABEL_127;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v42,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
          Component_srcLineSprite,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_127;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v50 = this->fields.mMapCtrl_SpotInfo;
      if ( !v50 )
        goto LABEL_127;
      if ( v50->fields.dispType != 1 )
      {
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_127;
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                       0LL);
        if ( !mMapCtrl_SpotInfo )
          goto LABEL_127;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0, 0LL);
      }
    }
    if ( this->fields.mMapCtrl_SpotInfo
      && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, (const MethodInfo *)isForce) )
    {
      recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
      {
        v52 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v52, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v52, v53);
        goto LABEL_85;
      }
      v54 = 1;
    }
    else
    {
      v54 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v54, v38);
LABEL_85:
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)MapControl_SpotInfo__IsNextDisp(mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_127;
    v55 = (char)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.mcSpotNextSp,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v55 & 1, 0LL);
    if ( (v55 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4387463 )
      {
        sub_B775C4(&TerminalSceneComponent_TypeInfo);
        byte_4387463 = 1;
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      }
      v56 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
      if ( !v56 )
        goto LABEL_127;
      mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v56 + 256);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v57 = this->fields.mMapCtrl_SpotInfo;
    if ( v57 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v57->fields.freeQuestCount > 0) & (v13 | (v9 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0LL);
          *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Vector3__get_right(0LL);
          v62 = this->fields.mcSpotNameSp;
          if ( v62 )
          {
            mWidth = v62->fields.mWidth;
            v64 = v59;
            v65 = v60;
            v66 = v61;
            right = UnityEngine_Vector3__get_right(0LL);
            v67 = right.fields.x;
            v68 = right.fields.y;
            v69 = right.fields.z;
            *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Vector3__get_up(0LL);
            if ( transform )
            {
              v80.fields.x = (float)((float)((float)(v64 * (float)mWidth) * 0.5) - (float)(v67 * 26.0))
                           - (float)(v70 * 15.0);
              v80.fields.y = (float)((float)((float)(v65 * (float)mWidth) * 0.5) - (float)(v68 * 26.0))
                           - (float)(v71 * 15.0);
              v80.fields.z = (float)((float)((float)(v66 * (float)mWidth) * 0.5) - (float)(v69 * 26.0))
                           - (float)(v72 * 15.0);
              UnityEngine_Transform__set_localPosition(transform, v80, 0LL);
              v73 = this->fields.mMapCtrl_SpotInfo;
              if ( v73 )
              {
                spotId = v73->fields.spotId;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_43884CB )
                {
                  sub_B775C4(&TerminalPramsManager_TypeInfo);
                  byte_43884CB = 1;
                }
                mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalPramsManager_TypeInfo;
                }
                if ( this->fields.loopLastTime )
                {
                  v75 = *p_IsMapModel_k__BackingField;
                  v76 = *((_DWORD *)mMapCtrl_SpotInfo[2].monitor + 15);
                  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v76) & (v13 | (v9 == 0LL || !v75)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12548/*"SPOT_FREE_QUEST_LAST_TIME"*/,
                                                                   0LL);
                    if ( loopLastTime )
                    {
                      UILabel__set_text(loopLastTime, (System_String_o *)mMapCtrl_SpotInfo, 0LL);
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
    sub_B7769C(mMapCtrl_SpotInfo, isForce);
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
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mcRootGobjP,
    (System_Int32_array **)rootGameObject,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SrcSpotBasePrefab__mfSetPositions(
        SrcSpotBasePrefab_o *this,
        int32_t qOfsX,
        int32_t qOfsY,
        int32_t nOfsX,
        int32_t nOfsY,
        const MethodInfo *method)
{
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  __int64 v13; // x1
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x25
  UnityEngine_GameObject_o *v15; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x21
  SrcSpotBasePrefab_c *v26; // x8

  if ( (byte_438BF35 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    byte_438BF35 = 1;
  }
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
    v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                        (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v15, (UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
LABEL_20:
      sub_B7769C(mcSpotNextSp, v13);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v15,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_32807660(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
  mcSpotNextSp = (UnityEngine_Component_o *)this->fields.mcSpotNextSp;
  if ( !mcSpotNextSp )
    goto LABEL_20;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mcSpotNextSp, 0LL);
  if ( !mcSpotNextSp )
    goto LABEL_20;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)mcSpotNextSp,
                                              0LL);
  if ( !mcSpotNextSp )
    goto LABEL_20;
  v25 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v26 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v26 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_32807660(
    v25,
    (float)nOfsX,
    (float)(v26->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_B77560(
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
  sub_B77560(
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
  sub_B77560(
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
  __int64 v4; // x19
  SrcSpotBasePrefab_o *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v15; // x20
  System_Action_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4388EF0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__);
    sub_B775C4(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
    byte_4388EF0 = 1;
  }
  v4 = sub_B77694(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(
    (SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *)v4,
    0LL);
  if ( !v4 )
    goto LABEL_12;
  *(_QWORD *)(v4 + 16) = that;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)that, v7, v8, v9, v10, v11, v12);
  v5 = *(SrcSpotBasePrefab_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v5->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(v5, 0, 0LL);
      v15 = *(_QWORD *)(v4 + 16);
      v16 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v4,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 208) = v16;
        sub_B77560(
          (BattleServantConfConponent_o *)(v15 + 208),
          (System_Int32_array **)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        return;
      }
LABEL_12:
      sub_B7769C(v5, v6);
    }
  }
  else
  {
    SrcSpotBasePrefab__StateQaaEnd(v5, 0LL);
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
  SrcSpotBasePrefab_o *that; // x0
  struct SrcSpotBasePrefab_o *v4; // x19
  System_Action_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438AC53 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_438AC53 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, 0LL), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim(that, 1, 0LL),
        v4 = this->fields.that,
        v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)v4, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v4) )
  {
    sub_B7769C(that, method);
  }
  v4->fields.mAfterScaleAnim = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&v4->fields.mAfterScaleAnim,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  TerminalSceneComponent_c *v4; // x0
  __int64 v5; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UnityEngine_GameObject_o *mQaaDispEffObj; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v20; // x0
  int v21; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float ScaleOnMapModel; // s0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4388EF1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4388EF1 = 1;
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
      v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v8;
      sub_B77560(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, 0LL);
  mQaaDispEffObj = that->fields.mQaaDispEffObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mQaaDispEffObj,
                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = v16;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_32813552(v17, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_32807768(v17, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v17, 0LL);
    GameObjectExtensions__ResetLocalScale(v17, 0LL);
    goto LABEL_30;
  }
  GameObjectExtensions__SetParent_32813552(v16, that->fields._MapModelEffectRootObj_k__BackingField, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = GameObjectExtensions__GetLocalPosition(v20, 0LL),
        !mTerminalMap) )
  {
LABEL_31:
    sub_B7769C(v4, v5);
  }
  v35 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v21, 0LL);
  GameObjectExtensions__SetLocalPosition(v17, v35, 0LL);
  GameObjectExtensions__ResetLocalRotation(v17, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, 0LL);
  v36.fields.y = y * ScaleOnMapModel;
  v36.fields.z = z * ScaleOnMapModel;
  v36.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v17, v36, 0LL);
LABEL_30:
  that->fields.mParticleSystemObj = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&that->fields.mParticleSystemObj,
    (System_Int32_array **)v17,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4388EF2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B775C4(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4388EF2 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B7769C(this, that);
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
      v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v6;
      sub_B77560(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
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
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4388EF3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B775C4(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4388EF3 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B7769C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 0, 0LL);
      v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v6;
      sub_B77560(
        (BattleServantConfConponent_o *)&that->fields.mAfterScaleAnim,
        (System_Int32_array **)v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388EEE & 1) == 0 )
  {
    sub_B775C4(&SrcSpotBasePrefab___c_TypeInfo);
    byte_4388EEE = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SrcSpotBasePrefab__SetContrast(_4__this, this->fields.to, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B7769C(_4__this, method);
  }
  SrcSpotBasePrefab__StateQaaEnd(_4__this, 0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__1(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  SrcSpotBasePrefab___c__DisplayClass107_0_o *v3; // x8

  easingObj = this->fields.easingObj;
  if ( !easingObj || (v3 = this, (this = (SrcSpotBasePrefab___c__DisplayClass107_0_o *)this->fields.__4__this) == 0LL) )
    sub_B7769C(this, method);
  SrcSpotBasePrefab__SetContrast(
    (SrcSpotBasePrefab_o *)this,
    v3->fields.from + (float)((float)(v3->fields.to - v3->fields.from) * easingObj->fields.mStartTime),
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
  SrcSpotBasePrefab___c__DisplayClass112_0_o *v4; // x19
  SrcSpotBasePrefab_c *v5; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  SrcSpotBasePrefab___c__DisplayClass112_0_Fields *p_fields; // x21
  struct SrcSpotBasePrefab_o *_4__this; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct SrcSpotBasePrefab_o *v16; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0

  v4 = this;
  if ( (byte_4388EEF & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_B775C4(&SrcSpotBasePrefab_TypeInfo);
    byte_4388EEF = 1;
  }
  if ( !effectAssetData )
  {
    p_fields = &v4->fields;
    goto LABEL_19;
  }
  v5 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v5 = SrcSpotBasePrefab_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     effectAssetData,
                                     v5->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                     (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  v9 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         v9,
                                                         (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(
    (BattleServantConfConponent_o *)&_4__this->fields.recollectionQuestSpotEffect,
    (System_Int32_array **)this,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !p_fields->__4__this )
    goto LABEL_22;
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)p_fields->__4__this->fields.recollectionQuestSpotEffect,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = p_fields->__4__this;
    if ( p_fields->__4__this )
    {
      this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v16->fields.mNoticeNumber;
      if ( this )
      {
        recollectionQuestSpotEffect = v16->fields.recollectionQuestSpotEffect;
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
        if ( this )
        {
          transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
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
    sub_B7769C(this, effectAssetData);
  }
LABEL_19:
  if ( !p_fields->__4__this )
    goto LABEL_22;
  p_fields->__4__this->fields.isLoadingRecollectionEffectAsset = 0;
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v4->fields.endCallback;
  if ( !this )
    goto LABEL_22;
  System_Action__Invoke((System_Action_o *)this, 0LL);
}