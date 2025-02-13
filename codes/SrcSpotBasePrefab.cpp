void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD9954 & 1) == 0 )
  {
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&StringLiteral_19128/*"ef_badge_glow"*/);
    sub_1C21E38(&StringLiteral_6004/*"Effect/RecollectionQuest"*/);
    byte_4BD9954 = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_6004/*"Effect/RecollectionQuest"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab_TypeInfo->static_fields,
    StringLiteral_6004/*"Effect/RecollectionQuest"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19128/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_19128/*"ef_badge_glow"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)&SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0x42C800003E99999ALL;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD9953 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C21E38(&StringLiteral_23805/*"smfSpotBtn_Click"*/);
    byte_4BD9953 = 1;
  }
  v9 = StringLiteral_23805/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23805/*"smfSpotBtn_Click"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.msSmfNameForBtnClick, v9, v2, v3, v4, v5, v6, v7);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.atlases, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__AdjustBtnColliderArea(
        SrcSpotBasePrefab_o *this,
        System_Nullable_Vector2__o size,
        System_Nullable_Vector3__o centerPosition,
        const MethodInfo *method)
{
  bool hasValue; // w20
  bool v5; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo_376FA44 *v10; // x2
  bool v11; // zf
  UnityEngine_BoxCollider_o *v12; // x20
  int v13; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v17; // s2
  System_Nullable_Vector3__o v18; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector2__o v19; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v20; // 0:x0.12
  System_Nullable_Vector3__o v21; // 0:x0.16

  hasValue = centerPosition.fields.hasValue;
  v5 = size.fields.hasValue;
  v18 = centerPosition;
  v19 = size;
  if ( (byte_4BD9948 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_Vector2__get_Value__);
    sub_1C21E38(&Method_System_Nullable_Vector3__get_Value__);
    byte_4BD9948 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v11 = !hasValue;
  v12 = (UnityEngine_BoxCollider_o *)Component_object;
  if ( !v11 )
  {
    *(_QWORD *)&v21.fields.hasValue = &v18;
    *(_QWORD *)&v21.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v13 = System_Nullable_Vector3___get_Value(v21, v10);
    if ( !v12 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
    v5 = v19.fields.hasValue;
  }
  if ( !v5 )
    return;
  *(_QWORD *)&v20.fields.hasValue = &v19;
  LODWORD(v20.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v20, (const MethodInfo_376F620 *)v10);
  if ( !v12 )
LABEL_11:
    sub_1C22094(gameObject, v8);
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
  CStateManager_T__o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x21
  Il2CppObject *v22; // x22
  CStateManager_T__o *v23; // x20
  Il2CppObject *v24; // x21
  const MethodInfo *v25; // x3
  MapModelManager_c *v26; // x0

  if ( (byte_4BD993E & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_SrcSpotBasePrefab___ctor__);
    sub_1C21E38(&Method_CStateManager_SrcSpotBasePrefab__add__);
    sub_1C21E38(&CStateManager_SrcSpotBasePrefab__TypeInfo);
    sub_1C21E38(&MapModelManager_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateMapMain_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateNone_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateQaaChange_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    byte_4BD993E = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1C22084(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_31E6A20 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v12 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateNone_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_14;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v17 )
      goto LABEL_14;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v19 = (CStateManager_T__o *)*p_mFSM;
    v20 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    System_Object___ctor(v20, 0LL);
    if ( !v19 )
      goto LABEL_14;
    CStateManager_object___add(
      v19,
      3,
      (IState_T__o *)v20,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v21 = (CStateManager_T__o *)*p_mFSM;
    v22 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !v21
      || (CStateManager_object___add(
            v21,
            4,
            (IState_T__o *)v22,
            (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v23 = (CStateManager_T__o *)*p_mFSM,
          v24 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          System_Object___ctor(v24, 0LL),
          !v23) )
    {
LABEL_14:
      sub_1C22094(v13, v14);
    }
    CStateManager_object___add(
      v23,
      5,
      (IState_T__o *)v24,
      (const MethodInfo_31E6AC8 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v25);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v26 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
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
  bool v6; // w19
  int32_t current; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v11; // x1
  QuestEntity_o *Mine; // x0
  __int64 v13; // x1
  int v14; // w20
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BD9951 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BD9951 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1C22094(0LL, v5);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      AvailableQuestIdList,
      (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v17,
             (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v6 )
        break;
      current = v17.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v9);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1C22094(0LL, v11);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1C22094(0LL, v13);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v14 = 5;
        goto LABEL_13;
      }
    }
    v14 = 6;
LABEL_13:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v17,
      (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v6 && v14 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_4BD993C & 1) == 0 )
  {
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    byte_4BD993C = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__DestroyEffect_35806000(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_35806000(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  PartyOrganizationUtility_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v2 = spot;
  if ( (byte_4BD993D & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD993D = 1;
  }
  if ( !v2 )
    sub_1C22094(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v2->fields.mParticleSystemObj;
  p_mParticleSystemObj = (PartyOrganizationUtility_o *)&v2->fields.mParticleSystemObj;
  v4 = mParticleSystemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1C21DDC(p_mParticleSystemObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1C22094(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_4BD993B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13157/*"Spot_"*/);
    sub_1C21E38(&StringLiteral_1220/*"00"*/);
    byte_4BD993B = 1;
  }
  v2 = System_Int32__ToString_63921084((int32_t)&v4, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_13157/*"Spot_"*/, v2, 0LL);
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
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s11
  float v16; // s9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD994A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD994A = 1;
  }
  v3 = 1.0;
  if ( this->fields._IsMapModel_k__BackingField )
  {
    MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL) )
    {
      v6 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v6 )
        sub_1C22094(0LL, v5);
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v19 = GameObjectExtensions__GetLocalPosition(v11, 0LL);
      v12 = v19.fields.x;
      v13 = v19.fields.y;
      v14 = v19.fields.z;
      if ( !byte_4BD6BAF )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD6BAF = 1;
      }
      v15 = x - v12;
      v16 = y - v13;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      return 2000.0
           / sqrtf((float)((float)(z - v14) * (float)(z - v14)) + (float)((float)(v15 * v15) + (float)(v16 * v16)));
    }
  }
  return v3;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BD994B & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1C21E38(&Method_CStateManager_SrcSpotBasePrefab__getState__);
    byte_4BD994B = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(this, method);
  return mFSM->fields.m_state;
}


bool __fastcall SrcSpotBasePrefab__IsDisp(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_GameObject_o *mcSpotSprite; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  mcSpotSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !mcSpotSprite )
    goto LABEL_7;
  if ( !UnityEngine_GameObject__get_activeSelf(mcSpotSprite, 0LL) )
    return 0;
  mcSpotSprite = (UnityEngine_GameObject_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
LABEL_7:
    sub_1C22094(mcSpotSprite, v7);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)mcSpotSprite, 0LL) )
    return x > 0.0 && y > 0.0;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v21; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x21

  if ( (byte_4BD994F & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__);
    sub_1C21E38(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
    byte_4BD994F = 1;
  }
  v5 = sub_1C22084(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1C22094(mNoticeNumber, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v21 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v21 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v21->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)v5,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  const MethodInfo *v16; // x1
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v18; // x0
  System_String_o *v19; // x20
  CommonUI_o *v20; // x21
  SrcSpotBasePrefab___c_c *v21; // x8
  System_Action_o *_9__75_0; // x23
  System_String_o *v23; // x22
  Il2CppObject *v24; // x24
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4BD9944 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__);
    sub_1C21E38(&SrcSpotBasePrefab___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9944 = 1;
  }
  mcRootGobjP = (UnityEngine_Object_o *)this->fields.mcRootGobjP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mcRootGobjP, 0LL, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v7 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v7 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v7->static_fields->clickTime) > v7->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v9 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v10 = SrcSpotBasePrefab_TypeInfo;
      v11 = v9;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v10 = SrcSpotBasePrefab_TypeInfo;
      }
      v10->static_fields->clickTime = v11;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
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
          UnityEngine_GameObject__SendMessage_70850984(
            v14,
            msSmfNameForBtnClick,
            (Il2CppObject *)mMapCtrl_SpotInfo,
            0LL);
          if ( isPlaySe )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlaySystemSE(0, v16);
          }
          miSpotID = this->fields.miSpotID;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD909F )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD909F = 1;
          }
          v18 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v18 = TerminalPramsManager_TypeInfo;
          }
          v18->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_40:
        sub_1C22094(mMapCtrl_SpotInfo, v8);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v19 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v19, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v21 = SrcSpotBasePrefab___c_TypeInfo;
      if ( !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v21 = SrcSpotBasePrefab___c_TypeInfo;
      }
      _9__75_0 = v21->static_fields->__9__75_0;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = SrcSpotBasePrefab___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v24, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
          (int64_t)_9__75_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      if ( !v20 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v20, v23, v19, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__PlaySystemSE(0, v32);
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

  if ( (byte_4BD9947 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4BD9947 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1C22094(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, isEnabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetContrast(SrcSpotBasePrefab_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcSpotSprite; // x0
  float v5; // s3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_5;
  v5 = 1.0;
  UIWidget__set_color(mcSpotSprite, *(UnityEngine_Color_o *)&val, 0LL);
  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotNameSp;
  if ( !mcSpotSprite
    || (v9.fields.a = 1.0,
        v9.fields.r = val,
        v9.fields.g = val,
        v9.fields.b = val,
        UIWidget__set_color(mcSpotSprite, v9, 0LL),
        (mcSpotSprite = (UIWidget_o *)this->fields.mSpotNameLabel) == 0LL) )
  {
LABEL_5:
    sub_1C22094(mcSpotSprite, method);
  }
  v10.fields.a = 1.0;
  v10.fields.r = val;
  v10.fields.g = val;
  v10.fields.b = val;
  UIWidget__set_color(mcSpotSprite, v10, 0LL);
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

  if ( (byte_4BD9952 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9952 = 1;
  }
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mNoticeNumber, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo
      || (gameObject = (UnityEngine_Component_o *)this->fields.mNoticeNumber) == 0LL
      || (dispType = mMapCtrl_SpotInfo->fields.dispType,
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL) )
    {
      sub_1C22094(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, dispType == 1 && isDisp, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mMapCtrl_SpotInfo = spotInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_SpotInfo,
    (int64_t)spotInfo,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_35815012(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_35815012(this, isActive, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_35815012(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v26; // s1
  System_Action_o *v27; // x19
  EasingObject_o *v28; // x21
  System_Action_o *v29; // x22

  if ( (byte_4BD994E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__);
    sub_1C21E38(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__);
    sub_1C21E38(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
    byte_4BD994E = 1;
  }
  v7 = sub_1C22084(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 32) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)Component_object, v18, v19, v20, v21, v22, v23);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v26 = 0.5;
  if ( isActive )
    v26 = 1.0;
  *(float *)(v7 + 24) = v26;
  *(float *)(v7 + 28) = r;
  v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v28 = *(EasingObject_o **)(v7 + 32);
    v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
    sub_1C22094(v8, v9);
  }
  ActionExtensions__Call(v27, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35814568(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35814568(this, isDisp, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_35814568(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  Il2CppClass *v11; // d12
  float z; // s13
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float x; // s11
  float v15; // s10
  float v16; // s9
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *v25; // x19
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD994D & 1) == 0 )
  {
    sub_1C21E38(&Method_UITweener_Begin_TweenScale___);
    sub_1C21E38(&StringLiteral_2569/*"AtScaleAnimEnd"*/);
    byte_4BD994D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    p_y = &this->fields.selfScale.fields.y;
    p_z = &this->fields.selfScale.fields.z;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v11 = *(Il2CppClass **)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    p_selfScale = (struct UnityEngine_Vector3_StaticFields *)&this->fields.selfScale;
  }
  else
  {
    v11 = *(Il2CppClass **)&this->fields.selfScale.fields.x;
    z = this->fields.selfScale.fields.z;
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_selfScale->zeroVector.fields.y;
    p_z = &p_selfScale->zeroVector.fields.z;
  }
  x = p_selfScale->zeroVector.fields.x;
  v15 = *p_y;
  v16 = *p_z;
  if ( time <= 0.0 )
  {
    v33.fields.x = p_selfScale->zeroVector.fields.x;
    v33.fields.y = *p_y;
    v33.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v33, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v17 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_30647F8 *)Method_UITweener_Begin_TweenScale___);
    if ( !v17 )
      sub_1C22094(0LL, v18);
    v25 = v17;
    v17[8].klass = v11;
    *(float *)&v17[8].monitor = z;
    *((float *)&v17[8].monitor + 1) = x;
    *(float *)&v17[9].klass = v15;
    *((float *)&v17[9].klass + 1) = v16;
    LODWORD(v17[2].klass) = 2;
    v17[5].klass = (Il2CppClass *)gameObject;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v17[5], (int64_t)gameObject, v19, v20, v21, v22, v23, v24);
    v26 = StringLiteral_2569/*"AtScaleAnimEnd"*/;
    v25[5].monitor = (void *)StringLiteral_2569/*"AtScaleAnimEnd"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v25[5].monitor, v26, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_4BD9950 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9950 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_4BD6BB6 )
  {
    v6 = scaleVal;
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    scaleVal = v6;
    byte_4BD6BB6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = static_fields->oneVector.fields.z * scaleVal;
  *(float32x2_t *)&this->fields.selfScale.fields.x = vmul_n_f32(
                                                       *(float32x2_t *)&static_fields->oneVector.fields.x,
                                                       scaleVal);
  this->fields.selfScale.fields.z = v5;
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
  if ( (byte_4BD9942 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C21E38(&StringLiteral_20841/*"img_spotname_bg"*/);
    byte_4BD9942 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20841/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20841/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1C22094(atlases, sp);
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
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x8
  Il2CppObject *Object_object__49880776; // x22
  Il2CppObject *v27; // x0
  __int64 v28; // x8
  __int64 v29; // x8
  AssetData_o *v30; // x0
  Il2CppObject *v31; // x21
  Il2CppObject *v32; // x21
  UnityEngine_Component_o *v33; // x0
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  v10 = atlases;
  v35 = spotImageId;
  if ( (byte_4BD9941 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_9067/*"MapSpotEffect_{0}"*/);
    sub_1C21E38(&StringLiteral_1224/*"000000"*/);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C21E38(&StringLiteral_23859/*"spot_"*/);
    byte_4BD9941 = 1;
  }
  if ( !sp )
    goto LABEL_47;
  atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)sp,
                                                            0LL);
  if ( !atlases )
    goto LABEL_47;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)atlases, 0LL) >= 1 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
    TransformHelper__DestroyChildren(transform, 0LL);
  }
  if ( spotImageId >= 1 )
  {
    v12 = System_Int32__ToString_63921084((int32_t)&v35, (System_String_o *)StringLiteral_1224/*"000000"*/, 0LL);
    v13 = System_String__Concat_63115476((System_String_o *)StringLiteral_23859/*"spot_"*/, v12, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v13, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_45:
        GameObjectExtensions__SetLocalPosition_34797668(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_47;
    }
    v34 = v35;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v17, v18, v19);
    v23 = System_String__Format((System_String_o *)StringLiteral_9067/*"MapSpotEffect_{0}"*/, v22, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v24 )
      goto LABEL_47;
    v25 = *(_QWORD *)(v24 + 264);
    if ( !v25 )
      goto LABEL_47;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v25 + 248);
    if ( !atlases )
      goto LABEL_47;
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                (AssetData_o *)atlases,
                                v23,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = Object_object__49880776;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v28 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v28 )
      goto LABEL_47;
    v29 = *(_QWORD *)(v28 + 264);
    if ( !v29 )
      goto LABEL_47;
    v30 = *(AssetData_o **)(v29 + 256);
    if ( v30 )
    {
      v31 = AssetData__GetObject_object__49880776(
              v30,
              v23,
              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v27 = v31;
LABEL_43:
        v32 = UnityEngine_Object__Instantiate_object_(
                v27,
                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v33 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v32, v33, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v32;
          goto LABEL_45;
        }
LABEL_47:
        sub_1C22094(atlases, sp);
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
  if ( (byte_4BD9940 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    byte_4BD9940 = 1;
  }
  if ( !spotEnt )
    sub_1C22094(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, 0LL);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v9);
}


void __fastcall SrcSpotBasePrefab__SetState(
        SrcSpotBasePrefab_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BD994C & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_SrcSpotBasePrefab__setState__);
    byte_4BD994C = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mStateEndAct,
    (int64_t)endAct,
    (int64_t)endAct,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C22094(0LL, v11);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31E6B54 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1C22094(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_35813424(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_35813424(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4BD9946 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    byte_4BD9946 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1C22094(gameObject, v4);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BD9949 & 1) == 0 )
  {
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___);
    byte_4BD9949 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1C22094(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1C21DDC((PartyOrganizationUtility_o *)(mSpotNameLabel + 32), (int64_t)cam, v7, v8, v9, v10, v11, v12);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4BD993F & 1) == 0 )
  {
    sub_1C21E38(&Method_CStateManager_SrcSpotBasePrefab__update__);
    byte_4BD993F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31E6B30 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  QuestTree_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  MapControl_SpotInfo_o **p_mMapCtrl_SpotInfo; // x21
  MapControl_SpotInfo_o *SpotInfo; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  SpotEntity_o *v16; // x24
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v18; // x20
  bool IsEnabledDispSpot; // w26
  bool *p_IsMapModel_k__BackingField; // x28
  char v21; // w22
  UnityEngine_GameObject_o *gameObject; // x25
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x25
  const MethodInfo *v27; // x4
  int spotChangeImgId; // w25
  System_Collections_Generic_List_UIAtlas__o *atlases; // x26
  UISprite_o *v30; // x27
  UnityEngine_Object_o *mSpotNameLabel; // x25
  UnityEngine_GameObject_o *v32; // x25
  int32_t dispType; // w8
  bool HasFlag; // w26
  char v36; // w8
  const MethodInfo *v37; // x4
  System_Collections_Generic_List_UIAtlas__o *v38; // x27
  UILabel_o *v39; // x24
  UISprite_o *v40; // x26
  System_String_o *mSpotNameStr; // x25
  const MethodInfo *v42; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v46; // x25
  Il2CppObject *Component_object; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct MapControl_SpotInfo_o *v54; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x24
  System_Action_o *v56; // x24
  const MethodInfo *v57; // x2
  bool v58; // w1
  char v59; // w24
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Transform_o *v61; // x24
  struct UISprite_o *mcSpotNameSp; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v66; // d9
  float32x2_t v72; // d4
  unsigned __int64 v73; // d0
  int v74; // s1
  int32_t spotId; // w21
  _BOOL4 v76; // w24
  int items_high; // w25
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9943 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_12449/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_4BD9943 = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    p_mMapCtrl_SpotInfo = &this->fields.mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo || !Instance )
      goto LABEL_124;
    SpotInfo = QuestTree__GetSpotInfo(Instance, mMapCtrl_SpotInfo->fields.spotId, 0LL);
    if ( SpotInfo )
    {
      *p_mMapCtrl_SpotInfo = SpotInfo;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_SpotInfo,
        (int64_t)SpotInfo,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    Instance = (QuestTree_o *)*p_mMapCtrl_SpotInfo;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    Instance = (QuestTree_o *)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0LL);
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    v16 = (SpotEntity_o *)Instance;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(*p_mMapCtrl_SpotInfo, 0LL);
    v18 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      Instance = (QuestTree_o *)SpotLayerEntity__IsEnabledSpot(v18, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v21 = (char)Instance;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        if ( !*p_mMapCtrl_SpotInfo )
          goto LABEL_124;
        if ( (*p_mMapCtrl_SpotInfo)->fields.dispType )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( IsEnabledDispSpot )
          {
            p_selfScale = (struct UnityEngine_Vector3_StaticFields *)&this->fields.selfScale;
            p_y = &this->fields.selfScale.fields.y;
            p_z = &this->fields.selfScale.fields.z;
          }
          else
          {
            if ( !byte_4BD6BB1 )
            {
              sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB1 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v80.fields.x = p_selfScale->zeroVector.fields.x;
          v80.fields.y = *p_y;
          v80.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v80, 0LL);
        }
      }
    }
    else
    {
      v21 = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v16 )
          goto LABEL_124;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v16, 0LL);
      }
      atlases = this->fields.atlases;
      v30 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      SrcSpotBasePrefab__SetSpotUI(atlases, v30, v16, spotChangeImgId, -32.0, v27);
    }
    if ( v18 && *p_IsMapModel_k__BackingField )
    {
      Instance = (QuestTree_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (QuestTree_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, v21 & 1, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(0LL, mSpotNameLabel, 0LL) )
    {
LABEL_62:
      if ( SrcSpotBasePrefab__GetState(this, v6) == 1 )
      {
        p_mNoticeNumber = &this->fields.mNoticeNumber;
        mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
        {
          mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v46 = UnityEngine_Object__Instantiate_object_(
                  mNoticeNumberPrefab,
                  (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
          GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v46, (UnityEngine_Component_o *)this, 0LL);
          if ( !v46 )
            goto LABEL_124;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v46,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
          *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
            (int64_t)Component_object,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
        Instance = (QuestTree_o *)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_124;
        NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, this->fields.miQuestCount, 0LL);
        v54 = this->fields.mMapCtrl_SpotInfo;
        if ( !v54 )
          goto LABEL_124;
        if ( v54->fields.dispType != 1 )
        {
          Instance = (QuestTree_o *)*p_mNoticeNumber;
          if ( !*p_mNoticeNumber )
            goto LABEL_124;
          Instance = (QuestTree_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
      }
      if ( *p_mMapCtrl_SpotInfo && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, v6) )
      {
        recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
        {
          v56 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v56, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
          SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v56, v57);
          goto LABEL_84;
        }
        v58 = 1;
      }
      else
      {
        v58 = 0;
      }
      SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v58, v42);
LABEL_84:
      Instance = (QuestTree_o *)*p_mMapCtrl_SpotInfo;
      if ( !*p_mMapCtrl_SpotInfo )
        goto LABEL_124;
      Instance = (QuestTree_o *)MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)Instance, 0LL);
      if ( !this->fields.mcSpotNextSp )
        goto LABEL_124;
      v59 = (char)Instance;
      Instance = (QuestTree_o *)UnityEngine_Component__get_transform(
                                  (UnityEngine_Component_o *)this->fields.mcSpotNextSp,
                                  0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (QuestTree_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (QuestTree_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v59 & 1, 0LL);
      if ( (v59 & 1) != 0 && !this->fields.isDisplayNext )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BD7183 )
        {
          sub_1C21E38(&TerminalSceneComponent_TypeInfo);
          byte_4BD7183 = 1;
        }
        Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = Instance[1].fields.questReleaseEntList->klass;
        if ( !klass )
          goto LABEL_124;
        Instance = *(QuestTree_o **)&klass->_2.thread_static_fields_offset;
        if ( !Instance )
          goto LABEL_124;
        ScrTerminalMap__SetMapButtonNextBySpotInfo((ScrTerminalMap_o *)Instance, this->fields.mMapCtrl_SpotInfo, 0LL);
        this->fields.isDisplayNext = 1;
      }
      if ( *p_mMapCtrl_SpotInfo )
      {
        Instance = (QuestTree_o *)this->fields.loopIcon;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)Instance,
            ((*p_mMapCtrl_SpotInfo)->fields.freeQuestCount > 0) & (v21 | (v18 == 0LL
                                                                       || !this->fields._IsMapModel_k__BackingField)),
            0LL);
          Instance = (QuestTree_o *)this->fields.loopIcon;
          if ( Instance )
          {
            Instance = (QuestTree_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
            v61 = (UnityEngine_Transform_o *)Instance;
            if ( !byte_4BD6BB8 )
            {
              Instance = (QuestTree_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB8 = 1;
            }
            mcSpotNameSp = this->fields.mcSpotNameSp;
            if ( mcSpotNameSp )
            {
              mWidth = mcSpotNameSp->fields.mWidth;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              z = static_fields->rightVector.fields.z;
              v66.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
              if ( !byte_4BD6BB9 )
              {
                Instance = (QuestTree_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                byte_4BD6BB9 = 1;
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              }
              if ( v61 )
              {
                __asm
                {
                  FMOV            V3.2S, #-26.0
                  FMOV            V2.2S, #-15.0
                }
                v72.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
                _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                               + (float)(static_fields->upVector.fields.z * -15.0);
                v73 = vadd_f32(
                        vadd_f32(
                          vmul_f32(vmul_n_f32(v66, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                          vmul_f32(v66, _D3)),
                        v72).n64_u64[0];
                v74 = HIDWORD(v73);
                UnityEngine_Transform__set_localPosition(v61, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
                if ( *p_mMapCtrl_SpotInfo )
                {
                  spotId = (*p_mMapCtrl_SpotInfo)->fields.spotId;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4BD8FB8 )
                  {
                    sub_1C21E38(&TerminalPramsManager_TypeInfo);
                    byte_4BD8FB8 = 1;
                  }
                  Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    Instance = (QuestTree_o *)TerminalPramsManager_TypeInfo;
                  }
                  if ( this->fields.loopLastTime )
                  {
                    v76 = *p_IsMapModel_k__BackingField;
                    items_high = HIDWORD(Instance[1].fields.questReleaseEntList[1].fields._items);
                    Instance = (QuestTree_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)Instance,
                        (spotId == items_high) & (v21 | (v18 == 0LL || !v76)),
                        0LL);
                      loopLastTime = this->fields.loopLastTime;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (QuestTree_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
                      if ( loopLastTime )
                      {
                        UILabel__set_text(loopLastTime, (System_String_o *)Instance, 0LL);
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
LABEL_124:
      sub_1C22094(Instance, v6);
    }
    Instance = (QuestTree_o *)this->fields.mSpotNameLabel;
    if ( !Instance )
      goto LABEL_124;
    Instance = (QuestTree_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (QuestTree_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (QuestTree_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (QuestTree_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v16 )
      goto LABEL_124;
    v32 = (UnityEngine_GameObject_o *)Instance;
    Instance = (QuestTree_o *)SpotEntity__HasFlag(v16, 8, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_48;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    dispType = (*p_mMapCtrl_SpotInfo)->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v16, 16, 0LL);
      goto LABEL_50;
    }
    if ( dispType != 1 )
LABEL_48:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_50:
    Instance = (QuestTree_o *)SpotEntity__IsOverRideName(v16, &spotName, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (QuestTree_o *)System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = ((unsigned __int8)Instance & 1) == 0;
    }
    if ( !v32 )
      goto LABEL_124;
    if ( !this->fields._IsMapModel_k__BackingField || v18 == 0LL )
      v36 = -1;
    else
      v36 = v21;
    UnityEngine_GameObject__SetActive(v32, v36 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_34797668(
      v32,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v38 = this->fields.atlases;
    v40 = this->fields.mcSpotNameSp;
    v39 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    SrcSpotBasePrefab__SetSpotNameUI(v38, v40, v39, mSpotNameStr, v37);
    goto LABEL_62;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_List_UIAtlas__o **p_atlases; // x19

  this->fields.atlases = atlases;
  p_atlases = &this->fields.atlases;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.atlases,
    (int64_t)atlases,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.mcRootGobjP = rootGameObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mcRootGobjP,
    (int64_t)rootGameObject,
    (int64_t)method,
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
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v15; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  SrcSpotBasePrefab_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x21

  if ( (byte_4BD9945 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    byte_4BD9945 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v15, (UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
LABEL_17:
      sub_1C22094(mcSpotNextSp, v13);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_34797668(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
  mcSpotNextSp = (UnityEngine_Component_o *)this->fields.mcSpotNextSp;
  if ( !mcSpotNextSp )
    goto LABEL_17;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mcSpotNextSp, 0LL);
  if ( !mcSpotNextSp )
    goto LABEL_17;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)mcSpotNextSp,
                                              0LL);
  if ( !mcSpotNextSp )
    goto LABEL_17;
  v25 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v26 = SrcSpotBasePrefab_TypeInfo;
  v27 = v25;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v26 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_34797668(
    v27,
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_mSpotNameStr; // x21

  this->fields.mSpotNameStr = name;
  p_mSpotNameStr = &this->fields.mSpotNameStr;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mSpotNameStr,
    (int64_t)name,
    *(int64_t *)&offsetX,
    offsetY,
    (System_String_o *)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelCamera_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MapModelEffectRootObj_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._MapModelEffectRootObj_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  SrcSpotBasePrefab__UpdateDisp(that, 0, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v17; // x20
  System_Action_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o *mStateEndAct; // x19

  if ( (byte_4BD9958 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__);
    sub_1C21E38(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
    byte_4BD9958 = 1;
  }
  v4 = sub_1C22084(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_12;
  *(_QWORD *)(v4 + 16) = that;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)that, v7, v8, v9, v10, v11, v12);
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
      SrcSpotBasePrefab__SetQaaScaleAnim_35814568(v5, 0, 0.5, v13);
      v17 = *(_QWORD *)(v4 + 16);
      v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 216) = v18;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 216), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_1C22094(v5, v6);
    }
  }
  else
  {
    mStateEndAct = v5->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v5, 1, 0LL, v14);
    ActionExtensions__Call(mStateEndAct, 0LL);
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
  const MethodInfo *v2; // x2
  SrcSpotBasePrefab_o *that; // x0
  const MethodInfo *v5; // x2
  struct SrcSpotBasePrefab_o *v6; // x19
  System_Action_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD9959 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4BD9959 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_35814568(that, 1, 0.5, v5),
        v6 = this->fields.that,
        v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)v6, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v6) )
  {
    sub_1C22094(that, method);
  }
  v6->fields.mAfterScaleAnim = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.mAfterScaleAnim, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  TerminalSceneComponent_c *v6; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v12; // x2
  System_Action_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *mStateEndAct; // x20
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v26; // x0
  int v27; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v33; // x1
  float ScaleOnMapModel; // s0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9957 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9957 = 1;
  }
  v4 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 17, 0, 0LL);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_35815012(that, 1, 0.5, v8);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v9);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v7);
      SrcSpotBasePrefab__SetQaaScaleAnim_35814568(that, 1, 0.5, v12);
      v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v13;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim,
        (int64_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v7);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v23 = (UnityEngine_GameObject_o *)v22;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_34803496(v23, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_34797772(v23, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v23, 0LL);
    GameObjectExtensions__ResetLocalScale(v23, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_34803496(
    (UnityEngine_GameObject_o *)v22,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = GameObjectExtensions__GetLocalPosition(v26, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1C22094(v6, v7);
  }
  v42 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v27, 0LL);
  GameObjectExtensions__SetLocalPosition(v23, v42, 0LL);
  GameObjectExtensions__ResetLocalRotation(v23, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v33);
  v43.fields.y = y * ScaleOnMapModel;
  v43.fields.z = z * ScaleOnMapModel;
  v43.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v23, v43, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v23;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&that->fields.mParticleSystemObj,
    (int64_t)v23,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  const MethodInfo *v3; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v7; // x2
  System_Action_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4BD9956 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4BD9956 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1C22094(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_35815012(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_35814568(that, 1, 0.5, v7);
      v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v8;
      sub_1C21DDC((PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  const MethodInfo *v3; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4BD9955 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1C21E38(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4BD9955 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1C22094(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_35814568(that, 0, 0.5, method);
      v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    }
  }
  else
  {
    mStateEndAct = that->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
    ActionExtensions__Call(mStateEndAct, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD995A & 1) == 0 )
  {
    sub_1C21E38(&SrcSpotBasePrefab___c_TypeInfo);
    byte_4BD995A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  struct SrcSpotBasePrefab_o *_4__this; // x0
  const MethodInfo *v4; // x3
  System_Action_o *mStateEndAct; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SrcSpotBasePrefab__SetContrast(_4__this, this->fields.to, method), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  mStateEndAct = _4__this->fields.mStateEndAct;
  SrcSpotBasePrefab__SetState(_4__this, 1, 0LL, v4);
  ActionExtensions__Call(mStateEndAct, 0LL);
}


void __fastcall SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__1(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9

  easingObj = this->fields.easingObj;
  if ( !easingObj || !this->fields.__4__this )
    sub_1C22094(this, method);
  SrcSpotBasePrefab__SetContrast(
    this->fields.__4__this,
    this->fields.from + (float)((float)(this->fields.to - this->fields.from) * easingObj->fields.mNow),
    method);
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
  Il2CppObject *Object_object__49880776; // x0
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct SrcSpotBasePrefab_o *v15; // x8
  struct SrcSpotBasePrefab_o *v16; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v19; // x8
  struct SrcSpotBasePrefab_o *v20; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_4BD995B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    byte_4BD995B = 1;
  }
  if ( effectAssetData )
  {
    v5 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v5 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                effectAssetData,
                                v5->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    _4__this = v4->fields.__4__this;
    v8 = Object_object__49880776;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v8,
                                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int64_t)this,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = v4->fields.__4__this;
    if ( !v15 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v15->fields.recollectionQuestSpotEffect,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v16 = v4->fields.__4__this;
      if ( v16 )
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
            v19 = v4->fields.__4__this;
            if ( v19 )
            {
              GameObjectExtensions__ResetLocalScale(v19->fields.recollectionQuestSpotEffect, 0LL);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_1C22094(this, effectAssetData);
    }
  }
LABEL_16:
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_19;
  v20->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = v4->fields.endCallback;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
}