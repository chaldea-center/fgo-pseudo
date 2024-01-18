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

  if ( (byte_4188BFF & 1) == 0 )
  {
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18160/*"ef_badge_glow"*/, v8);
    sub_B2C35C(&StringLiteral_5845/*"Effect/RecollectionQuest"*/, v9);
    byte_4188BFF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5845/*"Effect/RecollectionQuest"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5845/*"Effect/RecollectionQuest"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = SrcSpotBasePrefab_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18160/*"ef_badge_glow"*/;
  v12->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18160/*"ef_badge_glow"*/;
  sub_B2C2F8(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188BFE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_22171/*"smfSpotBtn_Click"*/, v10);
    byte_4188BFE = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_22171/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_22171/*"smfSpotBtn_Click"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.msSmfNameForBtnClick, v11, v2, v3, v4, v5, v6, v7);
  this->fields.selfScale = UnityEngine_Vector3__get_one(0LL);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.atlases,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v12; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo_2155684 *v14; // x2
  bool v15; // zf
  UnityEngine_BoxCollider_o *v16; // x20
  int v17; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v21; // s2
  System_Nullable_Vector3__o v22; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v23; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v24; // 0:x0.12
  System_Nullable_Vector3__o v25; // 0:x0.16

  v4 = *(_QWORD *)&centerPosition.fields.value.fields.z;
  has_value = size.fields.has_value;
  v22 = centerPosition;
  v23 = size;
  if ( (byte_4188BF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&size.fields.value);
    sub_B2C35C(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v8);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_Value__, v9);
    sub_B2C35C(&Method_System_Nullable_Vector2__get_Value__, v10);
    byte_4188BF3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v15 = (v4 & 0xFF00000000LL) == 0;
  v16 = (UnityEngine_BoxCollider_o *)Component_srcLineSprite;
  if ( !v15 )
  {
    *(_QWORD *)&v25.fields.value.fields.x = &v22;
    *(_QWORD *)&v25.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v17 = System_Nullable_Vector3___get_Value(v25, v14);
    if ( !v16 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
    has_value = v23.fields.has_value;
  }
  if ( !has_value )
    return;
  v24.fields.value = (struct UnityEngine_Vector2_o)&v23;
  *(_DWORD *)&v24.fields.has_value = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v24, (const MethodInfo_2155298 *)v14);
  if ( !v16 )
LABEL_11:
    sub_B2C434(gameObject, v12);
  v21 = 0;
  UnityEngine_BoxCollider__set_size(v16, *(UnityEngine_Vector3_o *)&Value.fields.x, 0LL);
}


void __fastcall SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
}


void __fastcall SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x21
  SrcSpotBasePrefab_StateNone_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v24; // x21
  SrcSpotBasePrefab_StateMapMain_o *v25; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v26; // x21
  SrcSpotBasePrefab_StateQaaHide_o *v27; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v28; // x21
  SrcSpotBasePrefab_StateQaaGray_o *v29; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  SrcSpotBasePrefab_StateQaaDisp_o *v31; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v32; // x20
  SrcSpotBasePrefab_StateQaaChange_o *v33; // x21
  const MethodInfo *v34; // x3
  MapModelManager_c *v35; // x0

  if ( (byte_4188BE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method);
    sub_B2C35C(&Method_CStateManager_SrcSpotBasePrefab__add__, v3);
    sub_B2C35C(&CStateManager_SrcSpotBasePrefab__TypeInfo, v4);
    sub_B2C35C(&MapModelManager_TypeInfo, v5);
    sub_B2C35C(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v6);
    sub_B2C35C(&SrcSpotBasePrefab_StateNone_TypeInfo, v7);
    sub_B2C35C(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v8);
    sub_B2C35C(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v9);
    sub_B2C35C(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v10);
    sub_B2C35C(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v11);
    byte_4188BE9 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v13,
      (QAASpotStateController_IMapSpot_o *)this,
      6,
      (const MethodInfo_2A08354 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v13;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    mFSM = this->fields.mFSM;
    v21 = (SrcSpotBasePrefab_StateNone_o *)sub_B2C42C(SrcSpotBasePrefab_StateNone_TypeInfo);
    SrcSpotBasePrefab_StateNone___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v24 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v25 = (SrcSpotBasePrefab_StateMapMain_o *)sub_B2C42C(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    SrcSpotBasePrefab_StateMapMain___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v24,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v26 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v27 = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B2C42C(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    SrcSpotBasePrefab_StateQaaHide___ctor(v27, 0LL);
    if ( !v26 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v26,
      2,
      (IState_T__o *)v27,
      (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v28 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v29 = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B2C42C(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    SrcSpotBasePrefab_StateQaaGray___ctor(v29, 0LL);
    if ( !v28 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v28,
      3,
      (IState_T__o *)v29,
      (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v31 = (SrcSpotBasePrefab_StateQaaDisp_o *)sub_B2C42C(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    SrcSpotBasePrefab_StateQaaDisp___ctor(v31, 0LL);
    if ( !v30
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v30,
            4,
            (IState_T__o *)v31,
            (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v32 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v33 = (SrcSpotBasePrefab_StateQaaChange_o *)sub_B2C42C(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          SrcSpotBasePrefab_StateQaaChange___ctor(v33, 0LL),
          !v32) )
    {
LABEL_15:
      sub_B2C434(v22, v23);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v32,
      5,
      (IState_T__o *)v33,
      (const MethodInfo_2A08420 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v34);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v35 = MapModelManager_TypeInfo;
  if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v35 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v35->static_fields->LAYER_LOWER_ID;
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
  __int64 v10; // x1
  int32_t current; // w19
  QuestTree_o *v12; // x0
  __int64 v13; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v15; // x1
  QuestEntity_o *Mine; // x0
  __int64 v17; // x1
  char v18; // w19
  int v19; // w20
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4188BFC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v7);
    byte_4188BFC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      AvailableQuestIdList,
      (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v22,
              (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      current = v22.fields.current;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v12 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v12 )
        sub_B2C434(0LL, v13);
      QuestInfo = QuestTree__GetQuestInfo(v12, current, 0LL);
      if ( !QuestInfo )
        sub_B2C434(0LL, v15);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_B2C434(0LL, v17);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v18 = 1;
        v19 = 4;
        goto LABEL_16;
      }
    }
    v18 = 0;
    v19 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v22,
      (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = (v19 == 4) & v18;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_4188BE7 & 1) == 0 )
  {
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, method);
    byte_4188BE7 = 1;
  }
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__DestroyEffect_27053208(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_27053208(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
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
  if ( (byte_4188BE8 & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BE8 = 1;
  }
  if ( !v2 )
    sub_B2C434(spot, method);
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_B2C2F8(p_mParticleSystemObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_B2C434(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = id;
  if ( (byte_4188BE6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12997/*"Spot_"*/, method);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v2);
    byte_4188BE6 = 1;
  }
  v3 = System_Int32__ToString_38381416((int32_t)&v5, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_12997/*"Spot_"*/, v3, 0LL);
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

  if ( (byte_4188BF5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188BF5 = 1;
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
        sub_B2C434(0LL, v5);
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
  if ( (byte_4188BF6 & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_B2C35C(&Method_CStateManager_SrcSpotBasePrefab__getState__, method);
    byte_4188BF6 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_B2C434(this, method);
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
    sub_B2C434(mcSpotSprite, v7);
  }
  return 0;
}


void __fastcall SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Component_o *mNoticeNumber; // x0
  __int64 v12; // x1
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
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v26; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4188BFA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, endCallback);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_B2C35C(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v8);
    sub_B2C35C(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v9);
    byte_4188BFA = 1;
  }
  v10 = sub_B2C42C(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass112_0___ctor((SrcSpotBasePrefab___c__DisplayClass112_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 24),
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
    sub_B2C434(mNoticeNumber, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v26 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v26 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v26->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      (Il2CppObject *)v10,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v28, 1, 0LL);
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
  __int64 v15; // x1
  float v16; // s0
  SrcSpotBasePrefab_c *v17; // x0
  float v18; // s8
  void *mMapCtrl_SpotInfo; // x0
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  __int64 v23; // x1
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x20
  CommonUI_o *v27; // x21
  SrcSpotBasePrefab___c_c *v28; // x8
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x9
  System_Action_o *_9__75_0; // x23
  System_String_o *v31; // x22
  Il2CppObject *v32; // x24
  struct SrcSpotBasePrefab___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_4188BEF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isPlaySe);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    sub_B2C35C(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v9);
    sub_B2C35C(&SrcSpotBasePrefab___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4188BEF = 1;
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
      v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v17 = SrcSpotBasePrefab_TypeInfo;
      v18 = v16;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v17 = SrcSpotBasePrefab_TypeInfo;
      }
      v17->static_fields->clickTime = v18;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v20 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v20 != 2 )
      {
        if ( v20 != 1 )
          return;
        v21 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v21 )
        {
          UnityEngine_GameObject__SendMessage_40660472(
            v21,
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
          if ( !byte_4183C9C )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
            byte_4183C9C = 1;
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
        sub_B2C434(mMapCtrl_SpotInfo, v15);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v26 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v26, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v28 = SrcSpotBasePrefab___c_TypeInfo;
      if ( (BYTE3(SrcSpotBasePrefab___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v28 = SrcSpotBasePrefab___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__75_0 = static_fields->__9__75_0;
      v31 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v32, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        v33 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        v33->__9__75_0 = _9__75_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v33->__9__75_0,
          (System_Int32_array **)_9__75_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( !v27 )
        goto LABEL_49;
      CommonUI__OpenNotificationDialog(v27, v31, v26, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  __int64 v6; // x1

  if ( (byte_4188BF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled);
    byte_4188BF2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B2C434(gameObject, v6);
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
    sub_B2C434(mcSpotSprite, v11);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4188BFD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4188BFD = 1;
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
      sub_B2C434(gameObject, v7);
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
  sub_B2C2F8(
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
  SrcSpotBasePrefab__SetQaaColorAnim_27059768(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_27059768(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_27059768(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
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
  struct UISprite_o *mcSpotSprite; // x8
  float r; // w8
  float v30; // s0
  System_Action_o *v31; // x19
  EasingObject_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_4188BF9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isActive);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B2C35C(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v8);
    sub_B2C35C(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v9);
    sub_B2C35C(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v10);
    byte_4188BF9 = 1;
  }
  v11 = sub_B2C42C(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass107_0___ctor((SrcSpotBasePrefab___c__DisplayClass107_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 32) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v30 = 0.5;
  if ( isActive )
    v30 = 1.0;
  *(float *)(v11 + 24) = v30;
  *(float *)(v11 + 28) = r;
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v32 = *(EasingObject_o **)(v11 + 32);
    v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v11,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v32 )
    {
      EasingObject__Play(v32, time, v33, v31, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(v12, v13);
  }
  ActionExtensions__Call(v31, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_27059380(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_27059380(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_27059380(
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x19
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188BF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UITweener_Begin_TweenScale___, isDisp);
    sub_B2C35C(&StringLiteral_2134/*"AtScaleAnimEnd"*/, v7);
    byte_4188BF8 = 1;
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
    v32 = UnityEngine_Vector3__get_zero(0LL);
    x = v32.fields.x;
    y = v32.fields.y;
    z = v32.fields.z;
  }
  if ( time <= 0.0 )
  {
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    GameObjectExtensions__SetLocalScale(gameObject, v33, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v15 = UITweener__Begin_TweenWidth_(
            gameObject,
            time,
            (const MethodInfo_20A1B44 *)Method_UITweener_Begin_TweenScale___);
    if ( !v15 )
      sub_B2C434(0LL, v16);
    v15->fields.eventReceiver = gameObject;
    p_eventReceiver = &v15->fields.eventReceiver;
    *(float *)&v15->fields.from = v12;
    *(float *)&v15->fields.to = v13;
    *(float *)&v15->fields.updateTable = v14;
    *((float *)&v15->fields.updateTable + 1) = x;
    *(float *)&v15->fields.mWidget = y;
    *((float *)&v15->fields.mWidget + 1) = z;
    v15->fields.style = 2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->fields.eventReceiver,
      (System_Int32_array **)gameObject,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v24 = (System_Int32_array **)StringLiteral_2134/*"AtScaleAnimEnd"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_2134/*"AtScaleAnimEnd"*/;
    sub_B2C2F8((BattleServantConfConponent_o *)(p_eventReceiver + 1), v24, v25, v26, v27, v28, v29, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetRecollectionSpotEffect(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4188BFB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isActive);
    byte_4188BFB = 1;
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
      sub_B2C434(0LL, v6);
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
  if ( (byte_4188BED & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B2C35C(&StringLiteral_19636/*"img_spotname_bg"*/, sp);
    byte_4188BED = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_19636/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_19636/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_B2C434(atlases, sp);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UnityEngine_Object_o *mAtlas; // x21
  bool v23; // w0
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v31; // x0
  __int64 v32; // x8
  __int64 v33; // x8
  AssetData_o *v34; // x0
  UnityEngine_Object_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_Component_o *v37; // x0
  int32_t v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  v10 = atlases;
  v39 = spotImageId;
  if ( (byte_4188BEC & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, sp);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_8945/*"MapSpotEffect_{0}"*/, v15);
    sub_B2C35C(&StringLiteral_966/*"000000"*/, v16);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B2C35C(&StringLiteral_22221/*"spot_"*/, v17);
    byte_4188BEC = 1;
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
    v19 = System_Int32__ToString_38381416((int32_t)&v39, (System_String_o *)StringLiteral_966/*"000000"*/, 0LL);
    v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_22221/*"spot_"*/, v19, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v20, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v23, 0LL);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0LL) )
    {
      UISprite__set_spriteName(sp, v20, 0LL);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)sp,
                                                                0LL);
      if ( spotEnt )
      {
        imageOfsY = spotEnt->fields.imageOfsY;
        imageOfsX = spotEnt->fields.imageOfsX;
LABEL_54:
        GameObjectExtensions__SetLocalPosition_31325924(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_56;
    }
    v38 = v39;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v27 = System_String__Format((System_String_o *)StringLiteral_8945/*"MapSpotEffect_{0}"*/, v26, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, sp);
      byte_4183C65 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v28 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v28 )
      goto LABEL_56;
    v29 = *(_QWORD *)(v28 + 256);
    if ( !v29 )
      goto LABEL_56;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v29 + 232);
    if ( !atlases )
      goto LABEL_56;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               (AssetData_o *)atlases,
                                                               v27,
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
      v31 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
      goto LABEL_52;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, sp);
      byte_4183C65 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v32 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v32 )
      goto LABEL_56;
    v33 = *(_QWORD *)(v32 + 256);
    if ( !v33 )
      goto LABEL_56;
    v34 = *(AssetData_o **)(v33 + 240);
    if ( v34 )
    {
      v35 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      v34,
                                      v27,
                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v31 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v35;
LABEL_52:
        v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v31,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v37 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent(v36, v37, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v36;
          goto LABEL_54;
        }
LABEL_56:
        sub_B2C434(atlases, sp);
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
  if ( (byte_4188BEB & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, sp);
    byte_4188BEB = 1;
  }
  if ( !spotEnt )
    sub_B2C434(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, (const MethodInfo *)sp);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v9);
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
  __int64 v11; // x1
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x0

  if ( (byte_4188BF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state);
    byte_4188BF7 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v11);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_B2C434(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_27058248(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_27058248(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4188BF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    byte_4188BF1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_B2C434(gameObject, v4);
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

  if ( (byte_4188BF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam);
    byte_4188BF4 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    gameObject,
                                    (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_B2C434(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 3) = cam;
  sub_B2C2F8(
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

  if ( (byte_4188BEA & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_SrcSpotBasePrefab__update__, method);
    byte_4188BEA = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2A0849C *)Method_CStateManager_SrcSpotBasePrefab__update__);
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
  SpotEntity_o *v16; // x22
  SpotLayerEntity_o *SpotLayerEntity; // x0
  const MethodInfo *v18; // x2
  SpotLayerEntity_o *v19; // x20
  bool IsEnabledDispSpot; // w24
  const MethodInfo *v21; // x2
  bool *p_IsMapModel_k__BackingField; // x26
  char v23; // w21
  struct MapControl_SpotInfo_o *v24; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Object_o *mcSpotSprite; // x23
  const MethodInfo *v30; // x4
  int spotChangeImgId; // w23
  System_Collections_Generic_List_UIAtlas__o *atlases; // x24
  UISprite_o *v33; // x25
  UnityEngine_Object_o *mSpotNameLabel; // x23
  const MethodInfo *v35; // x2
  UnityEngine_GameObject_o *v36; // x23
  const MethodInfo *v37; // x2
  struct MapControl_SpotInfo_o *v38; // x8
  int32_t dispType; // w8
  bool HasFlag; // w24
  char v42; // w8
  const MethodInfo *v43; // x4
  System_Collections_Generic_List_UIAtlas__o *v44; // x25
  UILabel_o *v45; // x22
  UISprite_o *mcSpotNameSp; // x24
  System_String_o *mSpotNameStr; // x23
  const MethodInfo *v48; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x22
  UnityEngine_Object_o *mNoticeNumber; // x23
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x23
  UnityEngine_GameObject_o *v52; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct MapControl_SpotInfo_o *v60; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x22
  System_Action_o *v62; // x22
  const MethodInfo *v63; // x2
  bool v64; // w1
  char v65; // w22
  __int64 v66; // x8
  struct MapControl_SpotInfo_o *v67; // x8
  UnityEngine_Transform_o *transform; // x22
  float v69; // s0
  float v70; // s1
  float v71; // s2
  struct UISprite_o *v72; // x8
  int mWidth; // s14
  float v74; // s10
  float v75; // s9
  float v76; // s8
  float v77; // s12
  float v78; // s13
  float v79; // s11
  float v80; // s0
  float v81; // s1
  float v82; // s2
  struct MapControl_SpotInfo_o *v83; // x8
  int32_t spotId; // w22
  _BOOL4 v85; // w23
  int v86; // w24
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o right; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4188BEE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isForce);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v10);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v11);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_12316/*"SPOT_FREE_QUEST_LAST_TIME"*/, v14);
    byte_4188BEE = 1;
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
    v16 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v19 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, v18);
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotLayerEntity__IsEnabledSpot(v19, this->fields.currentLayerId, v21);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v23 = (char)mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v24 = this->fields.mMapCtrl_SpotInfo;
        if ( !v24 )
          goto LABEL_127;
        if ( v24->fields.dispType )
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
      v23 = 0;
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
        if ( !v16 )
          goto LABEL_127;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v16, (const MethodInfo *)isForce);
      }
      atlases = this->fields.atlases;
      v33 = this->fields.mcSpotSprite;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      SrcSpotBasePrefab__SetSpotUI(atlases, v33, v16, spotChangeImgId, -32.0, v30);
    }
    if ( v19 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v23 & 1, 0LL);
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
    if ( !v16 )
      goto LABEL_127;
    v36 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__HasFlag(v16, 8, v35);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_46;
    v38 = this->fields.mMapCtrl_SpotInfo;
    if ( !v38 )
      goto LABEL_127;
    dispType = v38->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v16, 16, v37);
      goto LABEL_47;
    }
    if ( dispType != 1 )
LABEL_46:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_47:
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__IsOverRideName(v16, &spotName, v37);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v36 )
      goto LABEL_127;
    if ( !this->fields._IsMapModel_k__BackingField || v19 == 0LL )
      v42 = -1;
    else
      v42 = v23;
    UnityEngine_GameObject__SetActive(v36, v42 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_31325924(
      v36,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v44 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v45 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    }
    SrcSpotBasePrefab__SetSpotNameUI(v44, mcSpotNameSp, v45, mSpotNameStr, v43);
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
        v52 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v52, (UnityEngine_Component_o *)this, 0LL);
        if ( !v52 )
          goto LABEL_127;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v52,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
          Component_srcLineSprite,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_127;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v60 = this->fields.mMapCtrl_SpotInfo;
      if ( !v60 )
        goto LABEL_127;
      if ( v60->fields.dispType != 1 )
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
        v62 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v62, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v62, v63);
        goto LABEL_85;
      }
      v64 = 1;
    }
    else
    {
      v64 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v64, v48);
LABEL_85:
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)MapControl_SpotInfo__IsNextDisp(mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_127;
    v65 = (char)mMapCtrl_SpotInfo;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v65 & 1, 0LL);
    if ( (v65 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, isForce);
        byte_4183C65 = 1;
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      }
      v66 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
      if ( !v66 )
        goto LABEL_127;
      mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v66 + 256);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v67 = this->fields.mMapCtrl_SpotInfo;
    if ( v67 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v67->fields.freeQuestCount > 0) & (v23 | (v19 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0LL);
          *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_right(0LL);
          v72 = this->fields.mcSpotNameSp;
          if ( v72 )
          {
            mWidth = v72->fields.mWidth;
            v74 = v69;
            v75 = v70;
            v76 = v71;
            right = UnityEngine_Vector3__get_right(0LL);
            v77 = right.fields.x;
            v78 = right.fields.y;
            v79 = right.fields.z;
            *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Vector3__get_up(0LL);
            if ( transform )
            {
              v90.fields.x = (float)((float)((float)(v74 * (float)mWidth) * 0.5) - (float)(v77 * 26.0))
                           - (float)(v80 * 15.0);
              v90.fields.y = (float)((float)((float)(v75 * (float)mWidth) * 0.5) - (float)(v78 * 26.0))
                           - (float)(v81 * 15.0);
              v90.fields.z = (float)((float)((float)(v76 * (float)mWidth) * 0.5) - (float)(v79 * 26.0))
                           - (float)(v82 * 15.0);
              UnityEngine_Transform__set_localPosition(transform, v90, 0LL);
              v83 = this->fields.mMapCtrl_SpotInfo;
              if ( v83 )
              {
                spotId = v83->fields.spotId;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_418472E )
                {
                  sub_B2C35C(&TerminalPramsManager_TypeInfo, isForce);
                  byte_418472E = 1;
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
                  v85 = *p_IsMapModel_k__BackingField;
                  v86 = *((_DWORD *)mMapCtrl_SpotInfo[2].monitor + 13);
                  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v86) & (v23 | (v19 == 0LL || !v85)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12316/*"SPOT_FREE_QUEST_LAST_TIME"*/,
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
    sub_B2C434(mMapCtrl_SpotInfo, isForce);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  __int64 v16; // x1
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x25
  UnityEngine_GameObject_o *v18; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x21
  SrcSpotBasePrefab_c *v29; // x8

  if ( (byte_4188BF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&qOfsX);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v13);
    byte_4188BF0 = 1;
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
    v18 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v18, (UnityEngine_Component_o *)this, 0LL);
    if ( !v18 )
LABEL_20:
      sub_B2C434(mcSpotNextSp, v16);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v18,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v28 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v29 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v29 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_31325924(
    v28,
    (float)nOfsX,
    (float)(v29->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *v6; // x19
  SrcSpotBasePrefab_o *v7; // x0
  __int64 v8; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  struct SrcSpotBasePrefab_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_4184789 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v4);
    sub_B2C35C(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v5);
    byte_4184789 = 1;
  }
  v6 = (SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *)sub_B2C42C(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_12;
  v6->fields.that = that;
  sub_B2C2F8(&v6->fields, that);
  v7 = v6->fields.that;
  if ( !v7 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v7->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(v7, 0, 0LL);
      v11 = v6->fields.that;
      v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v6,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v11 )
      {
        v11->fields.mAfterScaleAnim = v12;
        sub_B2C2F8(&v11->fields.mAfterScaleAnim, v12);
        return;
      }
LABEL_12:
      sub_B2C434(v7, v8);
    }
  }
  else
  {
    SrcSpotBasePrefab__StateQaaEnd(v7, 0LL);
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
  Il2CppObject *v5; // x19
  System_Action_o *v6; // x20

  if ( (byte_41855E2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SrcSpotBasePrefab_StateQaaEnd__, v3);
    byte_41855E2 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, 0LL), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim(that, 1, 0LL),
        v5 = (Il2CppObject *)this->fields.that,
        v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v6, v5, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v5) )
  {
    sub_B2C434(that, method);
  }
  v5[13].klass = (Il2CppClass *)v6;
  sub_B2C2F8(&v5[13], v6);
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
  TerminalSceneComponent_c *v9; // x0
  __int64 v10; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v13; // x20
  struct UnityEngine_GameObject_o *mQaaDispEffObj; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v19; // x0
  int v20; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float ScaleOnMapModel; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418478A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&SeManager_TypeInfo, v6);
    sub_B2C35C(&Method_SrcSpotBasePrefab_StateQaaEnd__, v7);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    byte_418478A = 1;
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
      v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v13;
      sub_B2C2F8(&that->fields.mAfterScaleAnim, v13);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, 0LL);
  mQaaDispEffObj = that->fields.mQaaDispEffObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mQaaDispEffObj,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v16 = v15;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_31331816(v16, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_31326032(v16, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v16, 0LL);
    GameObjectExtensions__ResetLocalScale(v16, 0LL);
    goto LABEL_30;
  }
  GameObjectExtensions__SetParent_31331816(v15, that->fields._MapModelEffectRootObj_k__BackingField, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v10);
    byte_4183C65 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = GameObjectExtensions__GetLocalPosition(v19, 0LL),
        !mTerminalMap) )
  {
LABEL_31:
    sub_B2C434(v9, v10);
  }
  v28 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v20, 0LL);
  GameObjectExtensions__SetLocalPosition(v16, v28, 0LL);
  GameObjectExtensions__ResetLocalRotation(v16, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, 0LL);
  v29.fields.y = y * ScaleOnMapModel;
  v29.fields.z = z * ScaleOnMapModel;
  v29.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v16, v29, 0LL);
LABEL_30:
  that->fields.mParticleSystemObj = v16;
  sub_B2C2F8(&that->fields.mParticleSystemObj, v16);
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
  System_Action_o *v7; // x20

  if ( (byte_418478B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B2C35C(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_418478B = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B2C434(this, that);
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
      v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v7;
      sub_B2C2F8(&that->fields.mAfterScaleAnim, v7);
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
  System_Action_o *v7; // x20

  if ( (byte_418478C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B2C35C(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_418478C = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B2C434(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 0, 0LL);
      v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v7;
      sub_B2C2F8(&that->fields.mAfterScaleAnim, v7);
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
  Il2CppObject *v2; // x19
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0

  if ( (byte_4184787 & 1) == 0 )
  {
    sub_B2C35C(&SrcSpotBasePrefab___c_TypeInfo, v1);
    byte_4184787 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(_4__this, method);
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
    sub_B2C434(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SrcSpotBasePrefab_c *v8; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  SrcSpotBasePrefab___c__DisplayClass112_0_Fields *p_fields; // x21
  struct SrcSpotBasePrefab_o *_4__this; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x20
  struct SrcSpotBasePrefab_o *v13; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0

  v4 = this;
  if ( (byte_4184788 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, effectAssetData);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v7);
    byte_4184788 = 1;
  }
  if ( !effectAssetData )
  {
    p_fields = &v4->fields;
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
                                     (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  p_fields = &v4->fields;
  _4__this = v4->fields.__4__this;
  v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         v12,
                                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(&_4__this->fields.recollectionQuestSpotEffect, this);
  if ( !p_fields->__4__this )
    goto LABEL_22;
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)p_fields->__4__this->fields.recollectionQuestSpotEffect,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = p_fields->__4__this;
    if ( p_fields->__4__this )
    {
      this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v13->fields.mNoticeNumber;
      if ( this )
      {
        recollectionQuestSpotEffect = v13->fields.recollectionQuestSpotEffect;
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
    sub_B2C434(this, effectAssetData);
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