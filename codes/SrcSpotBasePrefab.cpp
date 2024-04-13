void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct SrcSpotBasePrefab_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SrcSpotBasePrefab_c *v24; // x8

  if ( (byte_42E9291 & 1) == 0 )
  {
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18388/*"ef_badge_glow"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5924/*"Effect/RecollectionQuest"*/, v11, v12, v13);
    byte_42E9291 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SrcSpotBasePrefab_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_5924/*"Effect/RecollectionQuest"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5924/*"Effect/RecollectionQuest"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = SrcSpotBasePrefab_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18388/*"ef_badge_glow"*/;
  v16->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18388/*"ef_badge_glow"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = SrcSpotBasePrefab_TypeInfo;
  SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0.3;
  v24->static_fields->DEFAULT_NEXT_POS_Y = 100.0;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E9290 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22473/*"smfSpotBtn_Click"*/, v12, v13, v14);
    byte_42E9290 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_22473/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_22473/*"smfSpotBtn_Click"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.msSmfNameForBtnClick, v15, v2, v3, v4, v5, v6, v7);
  this->fields.selfScale = UnityEngine_Vector3__get_one(0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v16;
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo_234ED58 *v22; // x2
  bool v23; // zf
  UnityEngine_BoxCollider_o *v24; // x20
  int v25; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v29; // s2
  System_Nullable_Vector3__o v30; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v31; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v32; // 0:x0.12
  System_Nullable_Vector3__o v33; // 0:x0.16

  v4 = *(_QWORD *)&centerPosition.fields.value.fields.z;
  has_value = size.fields.has_value;
  v30 = centerPosition;
  v31 = size;
  if ( (byte_42E9285 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BoxCollider___,
      LODWORD(size.fields.value.fields.x),
      *(_DWORD *)&size.fields.has_value,
      *(_QWORD *)&centerPosition.fields.value.fields.x);
    sub_B5D5C4(&Method_System_Nullable_Vector2__get_HasValue__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Nullable_Vector2__get_Value__, v16, v17, v18);
    byte_42E9285 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v23 = (v4 & 0xFF00000000LL) == 0;
  v24 = (UnityEngine_BoxCollider_o *)Component_srcLineSprite;
  if ( !v23 )
  {
    *(_QWORD *)&v33.fields.value.fields.x = &v30;
    *(_QWORD *)&v33.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v25 = System_Nullable_Vector3___get_Value(v33, v22);
    if ( !v24 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
    has_value = v31.fields.has_value;
  }
  if ( !has_value )
    return;
  v32.fields.value = (struct UnityEngine_Vector2_o)&v31;
  *(_DWORD *)&v32.fields.has_value = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v32, (const MethodInfo_234E96C *)v22);
  if ( !v24 )
LABEL_11:
    sub_B5D69C(gameObject, v20);
  v29 = 0;
  UnityEngine_BoxCollider__set_size(v24, *(UnityEngine_Vector3_o *)&Value.fields.x, 0LL);
}


void __fastcall SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
}


void __fastcall SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x21
  SrcSpotBasePrefab_StateNone_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v44; // x21
  SrcSpotBasePrefab_StateMapMain_o *v45; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v46; // x21
  SrcSpotBasePrefab_StateQaaHide_o *v47; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v48; // x21
  SrcSpotBasePrefab_StateQaaGray_o *v49; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v50; // x21
  SrcSpotBasePrefab_StateQaaDisp_o *v51; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v52; // x20
  SrcSpotBasePrefab_StateQaaChange_o *v53; // x21
  const MethodInfo *v54; // x3
  MapModelManager_c *v55; // x0

  if ( (byte_42E927B & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SrcSpotBasePrefab___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_SrcSpotBasePrefab__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_SrcSpotBasePrefab__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MapModelManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SrcSpotBasePrefab_StateNone_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v29, v30, v31);
    byte_42E927B = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v33,
      (QAASpotStateController_IMapSpot_o *)this,
      6,
      (const MethodInfo_2BB2630 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v33;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mFSM,
      (System_Int32_array **)v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    mFSM = this->fields.mFSM;
    v41 = (SrcSpotBasePrefab_StateNone_o *)sub_B5D694(SrcSpotBasePrefab_StateNone_TypeInfo);
    SrcSpotBasePrefab_StateNone___ctor(v41, 0LL);
    if ( !mFSM )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      0,
      (IState_T__o *)v41,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v44 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v45 = (SrcSpotBasePrefab_StateMapMain_o *)sub_B5D694(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    SrcSpotBasePrefab_StateMapMain___ctor(v45, 0LL);
    if ( !v44 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v44,
      1,
      (IState_T__o *)v45,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v46 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v47 = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B5D694(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    SrcSpotBasePrefab_StateQaaHide___ctor(v47, 0LL);
    if ( !v46 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v46,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v48 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v49 = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B5D694(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    SrcSpotBasePrefab_StateQaaGray___ctor(v49, 0LL);
    if ( !v48 )
      goto LABEL_15;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v48,
      3,
      (IState_T__o *)v49,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v50 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM;
    v51 = (SrcSpotBasePrefab_StateQaaDisp_o *)sub_B5D694(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    SrcSpotBasePrefab_StateQaaDisp___ctor(v51, 0LL);
    if ( !v50
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v50,
            4,
            (IState_T__o *)v51,
            (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v52 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_mFSM,
          v53 = (SrcSpotBasePrefab_StateQaaChange_o *)sub_B5D694(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          SrcSpotBasePrefab_StateQaaChange___ctor(v53, 0LL),
          !v52) )
    {
LABEL_15:
      sub_B5D69C(v42, v43);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v52,
      5,
      (IState_T__o *)v53,
      (const MethodInfo_2BB26FC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v54);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v55 = MapModelManager_TypeInfo;
  if ( (BYTE3(MapModelManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v55 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v55->static_fields->LAYER_LOWER_ID;
}


bool __fastcall SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  __int64 v22; // x1
  int32_t current; // w19
  QuestTree_o *v24; // x0
  __int64 v25; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v27; // x1
  QuestEntity_o *Mine; // x0
  __int64 v29; // x1
  char v30; // w19
  int v31; // w20
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E928E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v17, v18, v19);
    byte_42E928E = 1;
  }
  memset(&v34, 0, sizeof(v34));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_B5D69C(0LL, v22);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      AvailableQuestIdList,
      (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v34,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      current = v34.fields.current;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v24 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v24 )
        sub_B5D69C(0LL, v25);
      QuestInfo = QuestTree__GetQuestInfo(v24, current, 0LL);
      if ( !QuestInfo )
        sub_B5D69C(0LL, v27);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_B5D69C(0LL, v29);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v30 = 1;
        v31 = 4;
        goto LABEL_16;
      }
    }
    v30 = 0;
    v31 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v34,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = (v31 == 4) & v30;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9279 & 1) == 0 )
  {
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9279 = 1;
  }
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  SrcSpotBasePrefab__DestroyEffect_26197604(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_26197604(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SrcSpotBasePrefab_o *v4; // x19
  BattleServantConfConponent_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v4 = spot;
  if ( (byte_42E927A & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E927A = 1;
  }
  if ( !v4 )
    sub_B5D69C(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v4->fields.mParticleSystemObj;
  p_mParticleSystemObj = (BattleServantConfConponent_o *)&v4->fields.mParticleSystemObj;
  v6 = mParticleSystemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_B5D560(p_mParticleSystemObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_B5D69C(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-4h] BYREF

  v9 = id;
  if ( (byte_42E9278 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13153/*"Spot_"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v4, v5, v6);
    byte_42E9278 = 1;
  }
  v7 = System_Int32__ToString_39741776((int32_t)&v9, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_13153/*"Spot_"*/, v7, 0LL);
}


MapControl_SpotInfo_o *__fastcall SrcSpotBasePrefab__GetMapCtrl_SpotInfo(
        SrcSpotBasePrefab_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotInfo;
}


float __fastcall SrcSpotBasePrefab__GetScaleOnMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v5; // s8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E9287 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9287 = 1;
  }
  v5 = 1.0;
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
      v8 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v8 )
        sub_B5D69C(0LL, v7);
      gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v17 = GameObjectExtensions__GetLocalPosition(v13, 0LL);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      return 2000.0 / UnityEngine_Vector3__Distance(v16, v17, 0LL);
    }
  }
  return v5;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SrcSpotBasePrefab_o *v4; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v4 = this;
  if ( (byte_42E9288 & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_B5D5C4(
                                    &Method_CStateManager_SrcSpotBasePrefab__getState__,
                                    (_DWORD)method,
                                    v2,
                                    v3);
    byte_42E9288 = 1;
  }
  mFSM = v4->fields.mFSM;
  if ( !mFSM )
    sub_B5D69C(this, method);
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
    sub_B5D69C(mcSpotSprite, v7);
  }
  return 0;
}


void __fastcall SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  UnityEngine_Component_o *mNoticeNumber; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v37; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v39; // x21

  if ( (byte_42E928C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)endCallback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v15, v16, v17);
    sub_B5D5C4(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v18, v19, v20);
    byte_42E928C = 1;
  }
  v21 = sub_B5D694(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass112_0___ctor((SrcSpotBasePrefab___c__DisplayClass112_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_18;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)endCallback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_18:
    sub_B5D69C(mNoticeNumber, v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v37 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v37 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v37->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v39,
      (Il2CppObject *)v21,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v39, 1, 0LL);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Object_o *mcRootGobjP; // x21
  float realtimeSinceStartup; // s8
  SrcSpotBasePrefab_c *v29; // x0
  __int64 v30; // x1
  float v31; // s0
  SrcSpotBasePrefab_c *v32; // x0
  float v33; // s8
  void *mMapCtrl_SpotInfo; // x0
  int v35; // w8
  UnityEngine_GameObject_o *v36; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v42; // x0
  System_String_o *v43; // x20
  CommonUI_o *v44; // x21
  SrcSpotBasePrefab___c_c *v45; // x8
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x9
  System_Action_o *_9__75_0; // x23
  System_String_o *v48; // x22
  Il2CppObject *v49; // x24
  struct SrcSpotBasePrefab___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42E9281 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isPlaySe, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v18, v19, v20);
    sub_B5D5C4(&SrcSpotBasePrefab___c_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42E9281 = 1;
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
    v29 = SrcSpotBasePrefab_TypeInfo;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v29 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v29->static_fields->clickTime) > v29->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v31 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v32 = SrcSpotBasePrefab_TypeInfo;
      v33 = v31;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v32 = SrcSpotBasePrefab_TypeInfo;
      }
      v32->static_fields->clickTime = v33;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v35 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v35 != 2 )
      {
        if ( v35 != 1 )
          return;
        v36 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v36 )
        {
          UnityEngine_GameObject__SendMessage_41595104(
            v36,
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
          if ( !byte_42E4B55 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v38, v39, v40);
            byte_42E4B55 = 1;
          }
          v42 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_49:
        sub_B5D69C(mMapCtrl_SpotInfo, v30);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_49;
      v43 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v43, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v44 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v45 = SrcSpotBasePrefab___c_TypeInfo;
      if ( (BYTE3(SrcSpotBasePrefab___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v45 = SrcSpotBasePrefab___c_TypeInfo;
      }
      static_fields = v45->static_fields;
      _9__75_0 = static_fields->__9__75_0;
      v48 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v49, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        v50 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        v50->__9__75_0 = _9__75_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v50->__9__75_0,
          (System_Int32_array **)_9__75_0,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
      }
      if ( !v44 )
        goto LABEL_49;
      CommonUI__OpenNotificationDialog(v44, v48, v43, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42E9284 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled, (_DWORD)method, v3);
    byte_42E9284 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B5D69C(gameObject, v7);
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
    sub_B5D69C(mcSpotSprite, v11);
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
  __int64 v3; // x3
  UnityEngine_Object_o *mNoticeNumber; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w20
  bool v11; // w1

  if ( (byte_42E928F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E928F = 1;
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
      sub_B5D69C(gameObject, v8);
    }
    v11 = dispType == 1 && isDisp;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
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
  sub_B5D560(
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
  SrcSpotBasePrefab__SetQaaColorAnim_26204164(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_26204164(this, isActive, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_26204164(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UISprite_o *mcSpotSprite; // x8
  float r; // w8
  float v39; // s0
  System_Action_o *v40; // x19
  EasingObject_o *v41; // x21
  System_Action_o *v42; // x22

  if ( (byte_42E928B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isActive, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9, v10);
    sub_B5D5C4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v14, v15, v16);
    sub_B5D5C4(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v17, v18, v19);
    byte_42E928B = 1;
  }
  v20 = sub_B5D694(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  SrcSpotBasePrefab___c__DisplayClass107_0___ctor((SrcSpotBasePrefab___c__DisplayClass107_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_11;
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v20 + 32) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v39 = 0.5;
  if ( isActive )
    v39 = 1.0;
  *(float *)(v20 + 24) = v39;
  *(float *)(v20 + 28) = r;
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v20,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v41 = *(EasingObject_o **)(v20 + 32);
    v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v20,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v41 )
    {
      EasingObject__Play(v41, time, v42, v40, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(v21, v22);
  }
  ActionExtensions__Call(v40, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26203776(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_26203776(this, isDisp, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_26203776(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s11
  float y; // s12
  float z; // s13
  float v15; // s9
  float v16; // s10
  float v17; // s14
  TweenWidth_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UnityEngine_GameObject_o **p_eventReceiver; // x19
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E928A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, isDisp, (_DWORD)method, v4);
    sub_B5D5C4(&StringLiteral_2163/*"AtScaleAnimEnd"*/, v8, v9, v10);
    byte_42E928A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    x = this->fields.selfScale.fields.x;
    y = this->fields.selfScale.fields.y;
    z = this->fields.selfScale.fields.z;
    v15 = zero.fields.x;
    v16 = zero.fields.y;
    v17 = zero.fields.z;
  }
  else
  {
    v15 = this->fields.selfScale.fields.x;
    v16 = this->fields.selfScale.fields.y;
    v17 = this->fields.selfScale.fields.z;
    v35 = UnityEngine_Vector3__get_zero(0LL);
    x = v35.fields.x;
    y = v35.fields.y;
    z = v35.fields.z;
  }
  if ( time <= 0.0 )
  {
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    GameObjectExtensions__SetLocalScale(gameObject, v36, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v18 = UITweener__Begin_TweenWidth_(
            gameObject,
            time,
            (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
    if ( !v18 )
      sub_B5D69C(0LL, v19);
    v18->fields.eventReceiver = gameObject;
    p_eventReceiver = &v18->fields.eventReceiver;
    *(float *)&v18->fields.from = v15;
    *(float *)&v18->fields.to = v16;
    *(float *)&v18->fields.updateTable = v17;
    *((float *)&v18->fields.updateTable + 1) = x;
    *(float *)&v18->fields.mWidget = y;
    *((float *)&v18->fields.mWidget + 1) = z;
    v18->fields.style = 2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v18->fields.eventReceiver,
      (System_Int32_array **)gameObject,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v27 = (System_Int32_array **)StringLiteral_2163/*"AtScaleAnimEnd"*/;
    p_eventReceiver[1] = (struct UnityEngine_GameObject_o *)StringLiteral_2163/*"AtScaleAnimEnd"*/;
    sub_B5D560((BattleServantConfConponent_o *)(p_eventReceiver + 1), v27, v28, v29, v30, v31, v32, v33);
  }
}


void __fastcall SrcSpotBasePrefab__SetRecollectionSpotEffect(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E928D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42E928D = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v8 = this->fields.recollectionQuestSpotEffect;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isActive, 0LL);
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
  if ( (byte_42E927F & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B5D5C4(
                                                              &StringLiteral_19885/*"img_spotname_bg"*/,
                                                              (_DWORD)sp,
                                                              (_DWORD)lb,
                                                              spotName);
    byte_42E927F = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_19885/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_19885/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_B5D69C(atlases, sp);
  }
  UISprite__set_atlas(sp, (UIAtlas_o *)atlases, 0LL);
  UISprite__set_spriteName(sp, v9, 0LL);
  if ( lb->fields.mWidth + 50 <= 40 )
    v10 = 40;
  else
    v10 = lb->fields.mWidth + 50;
  UIWidget__set_width((UIWidget_o *)sp, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetSpotUI(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        SpotEntity_o *spotEnt,
        int32_t spotImageId,
        float innerOfsY,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v10; // x21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  UnityEngine_Object_o *mAtlas; // x21
  bool v37; // w0
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v40; // x0
  int v41; // w2
  __int64 v42; // x3
  System_String_o *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x8
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x22
  int v47; // w2
  __int64 v48; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *v49; // x0
  __int64 v50; // x8
  __int64 v51; // x8
  AssetData_o *v52; // x0
  UnityEngine_Object_o *v53; // x21
  UnityEngine_GameObject_o *v54; // x21
  UnityEngine_Component_o *v55; // x0
  int32_t v56; // [xsp+8h] [xbp-48h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-44h] BYREF

  v10 = atlases;
  v57 = spotImageId;
  if ( (byte_42E927E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)sp, (_DWORD)spotEnt, *(_QWORD *)&spotImageId);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9038/*"MapSpotEffect_{0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_986/*"000000"*/, v26, v27, v28);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B5D5C4(&StringLiteral_22523/*"spot_"*/, v29, v30, v31);
    byte_42E927E = 1;
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
    v33 = System_Int32__ToString_39741776((int32_t)&v57, (System_String_o *)StringLiteral_986/*"000000"*/, 0LL);
    v34 = System_String__Concat_44577788((System_String_o *)StringLiteral_22523/*"spot_"*/, v33, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v34, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v37 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v37, 0LL);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0LL) )
    {
      UISprite__set_spriteName(sp, v34, 0LL);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)sp,
                                                                0LL);
      if ( spotEnt )
      {
        imageOfsY = spotEnt->fields.imageOfsY;
        imageOfsX = spotEnt->fields.imageOfsX;
LABEL_54:
        GameObjectExtensions__SetLocalPosition_32430496(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_56;
    }
    v56 = v57;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
    v43 = System_String__Format((System_String_o *)StringLiteral_9038/*"MapSpotEffect_{0}"*/, v40, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)sp, v41, v42);
      byte_42E4B1E = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v44 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v44 )
      goto LABEL_56;
    v45 = *(_QWORD *)(v44 + 256);
    if ( !v45 )
      goto LABEL_56;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v45 + 232);
    if ( !atlases )
      goto LABEL_56;
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               (AssetData_o *)atlases,
                                                               v43,
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
      v49 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
      goto LABEL_52;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)sp, v47, v48);
      byte_42E4B1E = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v50 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v50 )
      goto LABEL_56;
    v51 = *(_QWORD *)(v50 + 256);
    if ( !v51 )
      goto LABEL_56;
    v52 = *(AssetData_o **)(v51 + 240);
    if ( v52 )
    {
      v53 = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      v52,
                                      v43,
                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v49 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v53;
LABEL_52:
        v54 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            v49,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v55 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent(v54, v55, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v54;
          goto LABEL_54;
        }
LABEL_56:
        sub_B5D69C(atlases, sp);
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
  if ( (byte_42E927D & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_B5D5C4(
                                                              &SrcSpotBasePrefab_TypeInfo,
                                                              (_DWORD)sp,
                                                              (_DWORD)spotEnt,
                                                              method);
    byte_42E927D = 1;
  }
  if ( !spotEnt )
    sub_B5D69C(atlases, sp);
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

  if ( (byte_42E9289 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SrcSpotBasePrefab__setState__, state, (_DWORD)endAct, method);
    byte_42E9289 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_B5D560(
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
    sub_B5D69C(0LL, v11);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_B5D69C(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_26202644(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_26202644(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_42E9283 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, (_DWORD)method, v2, v3);
    byte_42E9283 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_B5D69C(gameObject, v6);
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
  __int64 v3; // x3
  char *mSpotNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9286 & 1) == 0 )
  {
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, (_DWORD)cam, (_DWORD)method, v3);
    byte_42E9286 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    gameObject,
                                    (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_B5D69C(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 3) = cam;
  sub_B5D560(
    (BattleServantConfConponent_o *)(mSpotNameLabel + 24),
    (System_Int32_array **)cam,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x0

  if ( (byte_42E927C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_SrcSpotBasePrefab__update__, (_DWORD)method, v2, v3);
    byte_42E927C = 1;
  }
  mFSM = this->fields.mFSM;
  if ( mFSM )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)mFSM,
      (const MethodInfo_2BB2778 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *v37; // x22
  SpotLayerEntity_o *SpotLayerEntity; // x0
  const MethodInfo *v39; // x2
  SpotLayerEntity_o *v40; // x20
  bool IsEnabledDispSpot; // w24
  const MethodInfo *v42; // x2
  bool *p_IsMapModel_k__BackingField; // x26
  char v44; // w21
  struct MapControl_SpotInfo_o *v45; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Object_o *mcSpotSprite; // x23
  const MethodInfo *v51; // x4
  int spotChangeImgId; // w23
  System_Collections_Generic_List_UIAtlas__o *atlases; // x24
  UISprite_o *v54; // x25
  UnityEngine_Object_o *mSpotNameLabel; // x23
  const MethodInfo *v56; // x2
  UnityEngine_GameObject_o *v57; // x23
  const MethodInfo *v58; // x2
  struct MapControl_SpotInfo_o *v59; // x8
  int32_t dispType; // w8
  bool HasFlag; // w24
  char v63; // w8
  const MethodInfo *v64; // x4
  System_Collections_Generic_List_UIAtlas__o *v65; // x25
  UILabel_o *v66; // x22
  UISprite_o *mcSpotNameSp; // x24
  System_String_o *mSpotNameStr; // x23
  const MethodInfo *v69; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x22
  UnityEngine_Object_o *mNoticeNumber; // x23
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x23
  UnityEngine_GameObject_o *v73; // x23
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct MapControl_SpotInfo_o *v81; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x22
  System_Action_o *v83; // x22
  const MethodInfo *v84; // x2
  bool v85; // w1
  char v86; // w22
  int v87; // w2
  __int64 v88; // x3
  __int64 v89; // x8
  struct MapControl_SpotInfo_o *v90; // x8
  UnityEngine_Transform_o *transform; // x22
  float v92; // s0
  float v93; // s1
  float v94; // s2
  struct UISprite_o *v95; // x8
  int mWidth; // s14
  float v97; // s10
  float v98; // s9
  float v99; // s8
  float v100; // s12
  float v101; // s13
  float v102; // s11
  float v103; // s0
  float v104; // s1
  float v105; // s2
  int v106; // w2
  __int64 v107; // x3
  struct MapControl_SpotInfo_o *v108; // x8
  int32_t spotId; // w22
  _BOOL4 v110; // w23
  int v111; // w24
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o right; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9280 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isForce, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v21, v22, v23);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12463/*"SPOT_FREE_QUEST_LAST_TIME"*/, v33, v34, v35);
    byte_42E9280 = 1;
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
    v37 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v40 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, v39);
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotLayerEntity__IsEnabledSpot(v40, this->fields.currentLayerId, v42);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v44 = (char)mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v45 = this->fields.mMapCtrl_SpotInfo;
        if ( !v45 )
          goto LABEL_127;
        if ( v45->fields.dispType )
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
      v44 = 0;
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
        if ( !v37 )
          goto LABEL_127;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v37, (const MethodInfo *)isForce);
      }
      atlases = this->fields.atlases;
      v54 = this->fields.mcSpotSprite;
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      SrcSpotBasePrefab__SetSpotUI(atlases, v54, v37, spotChangeImgId, -32.0, v51);
    }
    if ( v40 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v44 & 1, 0LL);
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
    if ( !v37 )
      goto LABEL_127;
    v57 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__HasFlag(v37, 8, v56);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_46;
    v59 = this->fields.mMapCtrl_SpotInfo;
    if ( !v59 )
      goto LABEL_127;
    dispType = v59->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v37, 16, v58);
      goto LABEL_47;
    }
    if ( dispType != 1 )
LABEL_46:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_47:
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SpotEntity__IsOverRideName(v37, &spotName, v58);
    if ( ((unsigned __int8)mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = ((unsigned __int8)mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v57 )
      goto LABEL_127;
    if ( !this->fields._IsMapModel_k__BackingField || v40 == 0LL )
      v63 = -1;
    else
      v63 = v44;
    UnityEngine_GameObject__SetActive(v57, v63 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_32430496(
      v57,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v65 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v66 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    }
    SrcSpotBasePrefab__SetSpotNameUI(v65, mcSpotNameSp, v66, mSpotNameStr, v64);
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
        v73 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent(v73, (UnityEngine_Component_o *)this, 0LL);
        if ( !v73 )
          goto LABEL_127;
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v73,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
          Component_srcLineSprite,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80);
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_127;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v81 = this->fields.mMapCtrl_SpotInfo;
      if ( !v81 )
        goto LABEL_127;
      if ( v81->fields.dispType != 1 )
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
        v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v83, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v83, v84);
        goto LABEL_85;
      }
      v85 = 1;
    }
    else
    {
      v85 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v85, v69);
LABEL_85:
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_127;
    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)MapControl_SpotInfo__IsNextDisp(mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_127;
    v86 = (char)mMapCtrl_SpotInfo;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v86 & 1, 0LL);
    if ( (v86 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, isForce, v87, v88);
        byte_42E4B1E = 1;
      }
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)TerminalSceneComponent_TypeInfo;
      }
      v89 = *(_QWORD *)mMapCtrl_SpotInfo[2].monitor;
      if ( !v89 )
        goto LABEL_127;
      mMapCtrl_SpotInfo = *(MapControl_SpotInfo_o **)(v89 + 256);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_127;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v90 = this->fields.mMapCtrl_SpotInfo;
    if ( v90 )
    {
      mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v90->fields.freeQuestCount > 0) & (v44 | (v40 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0LL);
          *(UnityEngine_Vector3_o *)&v92 = UnityEngine_Vector3__get_right(0LL);
          v95 = this->fields.mcSpotNameSp;
          if ( v95 )
          {
            mWidth = v95->fields.mWidth;
            v97 = v92;
            v98 = v93;
            v99 = v94;
            right = UnityEngine_Vector3__get_right(0LL);
            v100 = right.fields.x;
            v101 = right.fields.y;
            v102 = right.fields.z;
            *(UnityEngine_Vector3_o *)&v103 = UnityEngine_Vector3__get_up(0LL);
            if ( transform )
            {
              v115.fields.x = (float)((float)((float)(v97 * (float)mWidth) * 0.5) - (float)(v100 * 26.0))
                            - (float)(v103 * 15.0);
              v115.fields.y = (float)((float)((float)(v98 * (float)mWidth) * 0.5) - (float)(v101 * 26.0))
                            - (float)(v104 * 15.0);
              v115.fields.z = (float)((float)((float)(v99 * (float)mWidth) * 0.5) - (float)(v102 * 26.0))
                            - (float)(v105 * 15.0);
              UnityEngine_Transform__set_localPosition(transform, v115, 0LL);
              v108 = this->fields.mMapCtrl_SpotInfo;
              if ( v108 )
              {
                spotId = v108->fields.spotId;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42E5CDB )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, isForce, v106, v107);
                  byte_42E5CDB = 1;
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
                  v110 = *p_IsMapModel_k__BackingField;
                  v111 = *((_DWORD *)mMapCtrl_SpotInfo[2].monitor + 15);
                  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v111) & (v44 | (v40 == 0LL || !v110)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12463/*"SPOT_FREE_QUEST_LAST_TIME"*/,
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
    sub_B5D69C(mMapCtrl_SpotInfo, isForce);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  __int64 v22; // x1
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x25
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x21
  SrcSpotBasePrefab_c *v35; // x8

  if ( (byte_42E9282 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, qOfsX, qOfsY, *(_QWORD *)&nOfsX);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v17, v18, v19);
    byte_42E9282 = 1;
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
    v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v24, (UnityEngine_Component_o *)this, 0LL);
    if ( !v24 )
LABEL_20:
      sub_B5D69C(mcSpotNextSp, v22);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v24,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mNoticeNumber,
      Component_srcLineSprite,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_32430496(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v34 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v35 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v35 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_32430496(
    v34,
    (float)nOfsX,
    (float)(v35->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *v11; // x19
  SrcSpotBasePrefab_o *v12; // x0
  __int64 v13; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  struct SrcSpotBasePrefab_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_42E643F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v5, v6, v7);
    sub_B5D5C4(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v8, v9, v10);
    byte_42E643F = 1;
  }
  v11 = (SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *)sub_B5D694(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  v11->fields.that = that;
  sub_B5D560(&v11->fields);
  v12 = v11->fields.that;
  if ( !v12 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v12->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(v12, 0, 0LL);
      v16 = v11->fields.that;
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v11,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v16 )
      {
        v16->fields.mAfterScaleAnim = v17;
        sub_B5D560(&v16->fields.mAfterScaleAnim);
        return;
      }
LABEL_12:
      sub_B5D69C(v12, v13);
    }
  }
  else
  {
    SrcSpotBasePrefab__StateQaaEnd(v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SrcSpotBasePrefab_o *that; // x0
  struct SrcSpotBasePrefab_o *v9; // x19
  System_Action_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42F5482 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5, v6, v7);
    byte_42F5482 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, 0LL), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim(that, 1, 0LL),
        v9 = this->fields.that,
        v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)v9, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v9) )
  {
    sub_B5D69C(that, method);
  }
  v9->fields.mAfterScaleAnim = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.mAfterScaleAnim,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TerminalSceneComponent_c *v20; // x0
  __int64 v21; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v24; // x20
  struct UnityEngine_GameObject_o *mQaaDispEffObj; // x20
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x20
  int v28; // w2
  __int64 v29; // x3
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v32; // x0
  int v33; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float ScaleOnMapModel; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6440 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SeManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v17, v18, v19);
    byte_42E6440 = 1;
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
      v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v24;
      sub_B5D560(&that->fields.mAfterScaleAnim);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, 0LL);
  mQaaDispEffObj = that->fields.mQaaDispEffObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)mQaaDispEffObj,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v27 = v26;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_32436388(v27, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_32430604(v27, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v27, 0LL);
    GameObjectExtensions__ResetLocalScale(v27, 0LL);
    goto LABEL_30;
  }
  GameObjectExtensions__SetParent_32436388(v26, that->fields._MapModelEffectRootObj_k__BackingField, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v21, v28, v29);
    byte_42E4B1E = 1;
  }
  v20 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v20 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v20->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = GameObjectExtensions__GetLocalPosition(v32, 0LL),
        !mTerminalMap) )
  {
LABEL_31:
    sub_B5D69C(v20, v21);
  }
  v41 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v33, 0LL);
  GameObjectExtensions__SetLocalPosition(v27, v41, 0LL);
  GameObjectExtensions__ResetLocalRotation(v27, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, 0LL);
  v42.fields.y = y * ScaleOnMapModel;
  v42.fields.z = z * ScaleOnMapModel;
  v42.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v27, v42, 0LL);
LABEL_30:
  that->fields.mParticleSystemObj = v27;
  sub_B5D560(&that->fields.mParticleSystemObj);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v10; // x20

  if ( (byte_42E6441 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_B5D5C4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5, v6, v7);
    byte_42E6441 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B5D69C(this, that);
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
      v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v10;
      sub_B5D560(&that->fields.mAfterScaleAnim);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v10; // x20

  if ( (byte_42E6442 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_B5D5C4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5, v6, v7);
    byte_42E6442 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_B5D69C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim(that, 0, 0LL);
      v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v10;
      sub_B5D560(&that->fields.mAfterScaleAnim);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0

  if ( (byte_42E643D & 1) == 0 )
  {
    sub_B5D5C4(&SrcSpotBasePrefab___c_TypeInfo, v1, v2, v3);
    byte_42E643D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  SrcSpotBasePrefab___c__DisplayClass112_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  SrcSpotBasePrefab_c *v15; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  SrcSpotBasePrefab___c__DisplayClass112_0_Fields *p_fields; // x21
  struct SrcSpotBasePrefab_o *_4__this; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v19; // x20
  struct SrcSpotBasePrefab_o *v20; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0

  v5 = this;
  if ( (byte_42E643E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)effectAssetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v12, v13, v14);
    byte_42E643E = 1;
  }
  if ( !effectAssetData )
  {
    p_fields = &v5->fields;
    goto LABEL_19;
  }
  v15 = SrcSpotBasePrefab_TypeInfo;
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v15 = SrcSpotBasePrefab_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     effectAssetData,
                                     v15->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  p_fields = &v5->fields;
  _4__this = v5->fields.__4__this;
  v19 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                         v19,
                                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(&_4__this->fields.recollectionQuestSpotEffect);
  if ( !p_fields->__4__this )
    goto LABEL_22;
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)p_fields->__4__this->fields.recollectionQuestSpotEffect,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = p_fields->__4__this;
    if ( p_fields->__4__this )
    {
      this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v20->fields.mNoticeNumber;
      if ( this )
      {
        recollectionQuestSpotEffect = v20->fields.recollectionQuestSpotEffect;
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
    sub_B5D69C(this, effectAssetData);
  }
LABEL_19:
  if ( !p_fields->__4__this )
    goto LABEL_22;
  p_fields->__4__this->fields.isLoadingRecollectionEffectAsset = 0;
  this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v5->fields.endCallback;
  if ( !this )
    goto LABEL_22;
  System_Action__Invoke((System_Action_o *)this, 0LL);
}