void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BC4EC5 & 1) == 0 )
  {
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_19113/*"ef_badge_glow"*/, v8);
    sub_1C1ABD4(&StringLiteral_5994/*"Effect/RecollectionQuest"*/, v9);
    byte_4BC4EC5 = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_5994/*"Effect/RecollectionQuest"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab_TypeInfo->static_fields,
    StringLiteral_5994/*"Effect/RecollectionQuest"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19113/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_19113/*"ef_badge_glow"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  __int64 v12; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BC4EC4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_23785/*"smfSpotBtn_Click"*/, v10);
    byte_4BC4EC4 = 1;
  }
  v11 = StringLiteral_23785/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23785/*"smfSpotBtn_Click"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.msSmfNameForBtnClick, v11, v2, v3, v4, v5, v6, v7);
  if ( !byte_4BC2146 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4BC2146 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.atlases, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo_375CFA8 *v14; // x2
  bool v15; // zf
  UnityEngine_BoxCollider_o *v16; // x20
  int v17; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v21; // s2
  System_Nullable_Vector3__o v22; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector2__o v23; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v24; // 0:x0.12
  System_Nullable_Vector3__o v25; // 0:x0.16

  hasValue = centerPosition.fields.hasValue;
  v5 = size.fields.hasValue;
  v22 = centerPosition;
  v23 = size;
  if ( (byte_4BC4EB9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&size.fields.hasValue);
    sub_1C1ABD4(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_1C1ABD4(&Method_System_Nullable_Vector3__get_HasValue__, v8);
    sub_1C1ABD4(&Method_System_Nullable_Vector2__get_Value__, v9);
    sub_1C1ABD4(&Method_System_Nullable_Vector3__get_Value__, v10);
    byte_4BC4EB9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v15 = !hasValue;
  v16 = (UnityEngine_BoxCollider_o *)Component_object;
  if ( !v15 )
  {
    *(_QWORD *)&v25.fields.hasValue = &v22;
    *(_QWORD *)&v25.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v17 = System_Nullable_Vector3___get_Value(v25, v14);
    if ( !v16 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
    v5 = v23.fields.hasValue;
  }
  if ( !v5 )
    return;
  *(_QWORD *)&v24.fields.hasValue = &v23;
  LODWORD(v24.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v24, (const MethodInfo_375CB84 *)v14);
  if ( !v16 )
LABEL_11:
    sub_1C1AE30(gameObject, v12);
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
  CStateManager_T__o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  CStateManager_T__o *v24; // x21
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x21
  Il2CppObject *v29; // x22
  CStateManager_T__o *v30; // x21
  Il2CppObject *v31; // x22
  CStateManager_T__o *v32; // x20
  Il2CppObject *v33; // x21
  const MethodInfo *v34; // x3
  MapModelManager_c *v35; // x0

  if ( (byte_4BC4EAF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method);
    sub_1C1ABD4(&Method_CStateManager_SrcSpotBasePrefab__add__, v3);
    sub_1C1ABD4(&CStateManager_SrcSpotBasePrefab__TypeInfo, v4);
    sub_1C1ABD4(&MapModelManager_TypeInfo, v5);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v6);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateNone_TypeInfo, v7);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v8);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v9);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v10);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v11);
    byte_4BC4EAF = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1C1AE20(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_31D32D0 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v13;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v21 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateNone_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v21,
      (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_14;
    CStateManager_object___add(
      v24,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    System_Object___ctor(v27, 0LL);
    if ( !v26 )
      goto LABEL_14;
    CStateManager_object___add(
      v26,
      2,
      (IState_T__o *)v27,
      (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v28 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    System_Object___ctor(v29, 0LL);
    if ( !v28 )
      goto LABEL_14;
    CStateManager_object___add(
      v28,
      3,
      (IState_T__o *)v29,
      (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v30 = (CStateManager_T__o *)*p_mFSM;
    v31 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    System_Object___ctor(v31, 0LL);
    if ( !v30
      || (CStateManager_object___add(
            v30,
            4,
            (IState_T__o *)v31,
            (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v32 = (CStateManager_T__o *)*p_mFSM,
          v33 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          System_Object___ctor(v33, 0LL),
          !v32) )
    {
LABEL_14:
      sub_1C1AE30(v22, v23);
    }
    CStateManager_object___add(
      v32,
      5,
      (IState_T__o *)v33,
      (const MethodInfo_31D3378 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v34);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v35 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
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
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  __int64 v9; // x1
  bool v10; // w19
  int32_t current; // w20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v15; // x1
  QuestEntity_o *Mine; // x0
  __int64 v17; // x1
  int v18; // w20
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC4EC2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4BC4EC2 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1C1AE30(0LL, v9);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      AvailableQuestIdList,
      (const MethodInfo_3620340 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_33CA42C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      current = v21.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1C1AE30(0LL, v13);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1C1AE30(0LL, v15);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1C1AE30(0LL, v17);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v18 = 5;
        goto LABEL_13;
      }
    }
    v18 = 6;
LABEL_13:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v21,
      (const MethodInfo_33CA428 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v10 && v18 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_4BC4EAD & 1) == 0 )
  {
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, method);
    byte_4BC4EAD = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__DestroyEffect_35765004(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_35765004(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
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
  if ( (byte_4BC4EAE & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4EAE = 1;
  }
  if ( !v2 )
    sub_1C1AE30(spot, method);
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
    UnityEngine_Object__Destroy_70794412(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1C1AB78(p_mParticleSystemObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1C1AE30(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_4BC4EAC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_13147/*"Spot_"*/, method);
    sub_1C1ABD4(&StringLiteral_1220/*"00"*/, v2);
    byte_4BC4EAC = 1;
  }
  v3 = System_Int32__ToString_63845976((int32_t)&v5, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
  return System_String__Concat_63040368((System_String_o *)StringLiteral_13147/*"Spot_"*/, v3, 0LL);
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
  __int64 v12; // x1
  float v13; // s11
  float v14; // s12
  float v15; // s13
  float v16; // s11
  float v17; // s9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4EBB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4EBB = 1;
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
        sub_1C1AE30(0LL, v5);
      gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v20 = GameObjectExtensions__GetLocalPosition(v11, 0LL);
      v13 = v20.fields.x;
      v14 = v20.fields.y;
      v15 = v20.fields.z;
      if ( !byte_4BC213F )
      {
        sub_1C1ABD4(&System_Math_TypeInfo, v12);
        byte_4BC213F = 1;
      }
      v16 = x - v13;
      v17 = y - v14;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      return 2000.0
           / sqrtf((float)((float)(z - v15) * (float)(z - v15)) + (float)((float)(v16 * v16) + (float)(v17 * v17)));
    }
  }
  return v3;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v2 = this;
  if ( (byte_4BC4EBC & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1C1ABD4(&Method_CStateManager_SrcSpotBasePrefab__getState__, method);
    byte_4BC4EBC = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(mcSpotSprite, v7);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)mcSpotSprite, 0LL) )
    return x > 0.0 && y > 0.0;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v26; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_4BC4EC0 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, endCallback);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v8);
    sub_1C1ABD4(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v9);
    byte_4BC4EC0 = 1;
  }
  v10 = sub_1C1AE20(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endCallback, v19, v20, v21, v22, v23, v24);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1C1AE30(mNoticeNumber, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v26 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v26 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v26->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      (Il2CppObject *)v10,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
  const MethodInfo *v23; // x1
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x20
  CommonUI_o *v27; // x21
  SrcSpotBasePrefab___c_c *v28; // x8
  System_Action_o *_9__75_0; // x23
  System_String_o *v30; // x22
  Il2CppObject *v31; // x24
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x1

  if ( (byte_4BC4EB5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isPlaySe);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v9);
    sub_1C1ABD4(&SrcSpotBasePrefab___c_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v11);
    byte_4BC4EB5 = 1;
  }
  mcRootGobjP = (UnityEngine_Object_o *)this->fields.mcRootGobjP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mcRootGobjP, 0LL, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v14 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v14 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v14->static_fields->clickTime) > v14->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v16 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v17 = SrcSpotBasePrefab_TypeInfo;
      v18 = v16;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v17 = SrcSpotBasePrefab_TypeInfo;
      }
      v17->static_fields->clickTime = v18;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
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
          UnityEngine_GameObject__SendMessage_70775784(
            v21,
            msSmfNameForBtnClick,
            (Il2CppObject *)mMapCtrl_SpotInfo,
            0LL);
          if ( isPlaySe )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlaySystemSE(0, v23);
          }
          miSpotID = this->fields.miSpotID;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BC4610 )
          {
            sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v23);
            byte_4BC4610 = 1;
          }
          v25 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v25 = TerminalPramsManager_TypeInfo;
          }
          v25->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_40:
        sub_1C1AE30(mMapCtrl_SpotInfo, v15);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v26 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v26, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v28 = SrcSpotBasePrefab___c_TypeInfo;
      if ( !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v28 = SrcSpotBasePrefab___c_TypeInfo;
      }
      _9__75_0 = v28->static_fields->__9__75_0;
      v30 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = SrcSpotBasePrefab___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v28->static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v31, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
          (int64_t)_9__75_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !v27 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v27, v30, v26, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__PlaySystemSE(0, v39);
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

  if ( (byte_4BC4EB8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled);
    byte_4BC4EB8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1C1AE30(gameObject, v6);
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
    sub_1C1AE30(mcSpotSprite, method);
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

  if ( (byte_4BC4EC3 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4BC4EC3 = 1;
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
      sub_1C1AE30(gameObject, v7);
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
  sub_1C1AB78(
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
  SrcSpotBasePrefab__SetQaaColorAnim_35774016(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_35774016(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_35774016(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v30; // s1
  System_Action_o *v31; // x19
  EasingObject_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_4BC4EBF & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isActive);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v8);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v9);
    sub_1C1ABD4(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v10);
    byte_4BC4EBF = 1;
  }
  v11 = sub_1C1AE20(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 32) = Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)Component_object, v22, v23, v24, v25, v26, v27);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v30 = 0.5;
  if ( isActive )
    v30 = 1.0;
  *(float *)(v11 + 24) = v30;
  *(float *)(v11 + 28) = r;
  v31 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v32 = *(EasingObject_o **)(v11 + 32);
    v33 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
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
    sub_1C1AE30(v12, v13);
  }
  ActionExtensions__Call(v31, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35773572(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35773572(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_35773572(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  Il2CppClass *v13; // d12
  float z; // s13
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float x; // s11
  float v17; // s10
  float v18; // s9
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x19
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4EBE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UITweener_Begin_TweenScale___, isDisp);
    sub_1C1ABD4(&StringLiteral_2560/*"AtScaleAnimEnd"*/, v7);
    byte_4BC4EBE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_4BC2141 )
    {
      sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4BC2141 = 1;
    }
    p_y = &this->fields.selfScale.fields.y;
    p_z = &this->fields.selfScale.fields.z;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = *(Il2CppClass **)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    p_selfScale = (struct UnityEngine_Vector3_StaticFields *)&this->fields.selfScale;
  }
  else
  {
    v13 = *(Il2CppClass **)&this->fields.selfScale.fields.x;
    z = this->fields.selfScale.fields.z;
    if ( !byte_4BC2141 )
    {
      sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4BC2141 = 1;
    }
    p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_selfScale->zeroVector.fields.y;
    p_z = &p_selfScale->zeroVector.fields.z;
  }
  x = p_selfScale->zeroVector.fields.x;
  v17 = *p_y;
  v18 = *p_z;
  if ( time <= 0.0 )
  {
    v35.fields.x = p_selfScale->zeroVector.fields.x;
    v35.fields.y = *p_y;
    v35.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v35, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v19 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_3053E84 *)Method_UITweener_Begin_TweenScale___);
    if ( !v19 )
      sub_1C1AE30(0LL, v20);
    v27 = v19;
    v19[8].klass = v13;
    *(float *)&v19[8].monitor = z;
    *((float *)&v19[8].monitor + 1) = x;
    *(float *)&v19[9].klass = v17;
    *((float *)&v19[9].klass + 1) = v18;
    LODWORD(v19[2].klass) = 2;
    v19[5].klass = (Il2CppClass *)gameObject;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v19[5], (int64_t)gameObject, v21, v22, v23, v24, v25, v26);
    v28 = StringLiteral_2560/*"AtScaleAnimEnd"*/;
    v27[5].monitor = (void *)StringLiteral_2560/*"AtScaleAnimEnd"*/;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v27[5].monitor, v28, v29, v30, v31, v32, v33, v34);
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

  if ( (byte_4BC4EC1 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isActive);
    byte_4BC4EC1 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_1C1AE30(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_4BC2146 )
  {
    v6 = scaleVal;
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    scaleVal = v6;
    byte_4BC2146 = 1;
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
  if ( (byte_4BC4EB3 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C1ABD4(&StringLiteral_20824/*"img_spotname_bg"*/, sp);
    byte_4BC4EB3 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20824/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20824/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1C1AE30(atlases, sp);
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x8
  Il2CppObject *Object_object__49812820; // x22
  Il2CppObject *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  AssetData_o *v37; // x0
  Il2CppObject *v38; // x21
  Il2CppObject *v39; // x21
  UnityEngine_Component_o *v40; // x0
  int32_t v41; // [xsp+8h] [xbp-58h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  v10 = atlases;
  v42 = spotImageId;
  if ( (byte_4BC4EB2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, sp);
    sub_1C1ABD4(&int_TypeInfo, v11);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v13);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_9057/*"MapSpotEffect_{0}"*/, v15);
    sub_1C1ABD4(&StringLiteral_1224/*"000000"*/, v16);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C1ABD4(&StringLiteral_23839/*"spot_"*/, v17);
    byte_4BC4EB2 = 1;
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
    v19 = System_Int32__ToString_63845976((int32_t)&v42, (System_String_o *)StringLiteral_1224/*"000000"*/, 0LL);
    v20 = System_String__Concat_63040368((System_String_o *)StringLiteral_23839/*"spot_"*/, v19, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v20, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_45:
        GameObjectExtensions__SetLocalPosition_34756308(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_47;
    }
    v41 = v42;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v24, v25, v26);
    v30 = System_String__Format((System_String_o *)StringLiteral_9057/*"MapSpotEffect_{0}"*/, v29, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, sp);
      byte_4BC2713 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v31 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v31 )
      goto LABEL_47;
    v32 = *(_QWORD *)(v31 + 264);
    if ( !v32 )
      goto LABEL_47;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v32 + 248);
    if ( !atlases )
      goto LABEL_47;
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                (AssetData_o *)atlases,
                                v30,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49812820, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = Object_object__49812820;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, sp);
      byte_4BC2713 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v35 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v35 )
      goto LABEL_47;
    v36 = *(_QWORD *)(v35 + 264);
    if ( !v36 )
      goto LABEL_47;
    v37 = *(AssetData_o **)(v36 + 256);
    if ( v37 )
    {
      v38 = AssetData__GetObject_object__49812820(
              v37,
              v30,
              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v34 = v38;
LABEL_43:
        v39 = UnityEngine_Object__Instantiate_object_(
                v34,
                (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v40 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v39, v40, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v39;
          goto LABEL_45;
        }
LABEL_47:
        sub_1C1AE30(atlases, sp);
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
  if ( (byte_4BC4EB1 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, sp);
    byte_4BC4EB1 = 1;
  }
  if ( !spotEnt )
    sub_1C1AE30(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, 0LL);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v9);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4BC4EBD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state);
    byte_4BC4EBD = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1C1AB78(
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
    sub_1C1AE30(0LL, v11);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31D3404 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1C1AE30(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_35772428(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_35772428(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4BC4EB7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    byte_4BC4EB7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1C1AE30(gameObject, v4);
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

  if ( (byte_4BC4EBA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam);
    byte_4BC4EBA = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1C1AE30(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1C1AB78((PartyOrganizationUtility_o *)(mSpotNameLabel + 32), (int64_t)cam, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BC4EB0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_CStateManager_SrcSpotBasePrefab__update__, method);
    byte_4BC4EB0 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31D33E0 *)Method_CStateManager_SrcSpotBasePrefab__update__);
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
  __int64 v15; // x1
  __int64 Instance; // x0
  const MethodInfo *v17; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  MapControl_SpotInfo_o **p_mMapCtrl_SpotInfo; // x21
  MapControl_SpotInfo_o *SpotInfo; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SpotEntity_o *v27; // x24
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v29; // x20
  bool IsEnabledDispSpot; // w26
  bool *p_IsMapModel_k__BackingField; // x28
  char v32; // w22
  __int64 v33; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x25
  const MethodInfo *v39; // x4
  int spotChangeImgId; // w25
  System_Collections_Generic_List_UIAtlas__o *atlases; // x26
  UISprite_o *v42; // x27
  UnityEngine_Object_o *mSpotNameLabel; // x25
  UnityEngine_GameObject_o *v44; // x25
  int32_t dispType; // w8
  bool HasFlag; // w26
  char v48; // w8
  const MethodInfo *v49; // x4
  System_Collections_Generic_List_UIAtlas__o *v50; // x27
  UILabel_o *v51; // x24
  UISprite_o *v52; // x26
  System_String_o *mSpotNameStr; // x25
  const MethodInfo *v54; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v58; // x25
  Il2CppObject *Component_object; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct MapControl_SpotInfo_o *v66; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x24
  System_Action_o *v68; // x24
  const MethodInfo *v69; // x2
  bool v70; // w1
  char v71; // w24
  __int64 v72; // x8
  UnityEngine_Transform_o *v73; // x24
  struct UISprite_o *mcSpotNameSp; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v78; // d9
  float32x2_t v84; // d4
  unsigned __int64 v85; // d0
  int v86; // s1
  int32_t spotId; // w21
  _BOOL4 v88; // w24
  int v89; // w25
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4EB4 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isForce);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v11);
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v13);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_12439/*"SPOT_FREE_QUEST_LAST_TIME"*/, v15);
    byte_4BC4EB4 = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    p_mMapCtrl_SpotInfo = &this->fields.mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo || !Instance )
      goto LABEL_124;
    SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, mMapCtrl_SpotInfo->fields.spotId, 0LL);
    if ( SpotInfo )
    {
      *p_mMapCtrl_SpotInfo = SpotInfo;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.mMapCtrl_SpotInfo,
        (int64_t)SpotInfo,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    Instance = (__int64)*p_mMapCtrl_SpotInfo;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    Instance = (__int64)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0LL);
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    v27 = (SpotEntity_o *)Instance;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(*p_mMapCtrl_SpotInfo, 0LL);
    v29 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      Instance = SpotLayerEntity__IsEnabledSpot(v29, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v32 = Instance;
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
            if ( !byte_4BC2141 )
            {
              sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v33);
              byte_4BC2141 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v92.fields.x = p_selfScale->zeroVector.fields.x;
          v92.fields.y = *p_y;
          v92.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v92, 0LL);
        }
      }
    }
    else
    {
      v32 = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL);
    if ( (Instance & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v27 )
          goto LABEL_124;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v27, 0LL);
      }
      atlases = this->fields.atlases;
      v42 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      SrcSpotBasePrefab__SetSpotUI(atlases, v42, v27, spotChangeImgId, -32.0, v39);
    }
    if ( v29 && *p_IsMapModel_k__BackingField )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, v32 & 1, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(0LL, mSpotNameLabel, 0LL) )
    {
LABEL_62:
      if ( SrcSpotBasePrefab__GetState(this, v17) == 1 )
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
          v58 = UnityEngine_Object__Instantiate_object_(
                  mNoticeNumberPrefab,
                  (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v58, (UnityEngine_Component_o *)this, 0LL);
          if ( !v58 )
            goto LABEL_124;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v58,
                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
          *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
            (int64_t)Component_object,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
        }
        Instance = (__int64)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_124;
        NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, this->fields.miQuestCount, 0LL);
        v66 = this->fields.mMapCtrl_SpotInfo;
        if ( !v66 )
          goto LABEL_124;
        if ( v66->fields.dispType != 1 )
        {
          Instance = (__int64)*p_mNoticeNumber;
          if ( !*p_mNoticeNumber )
            goto LABEL_124;
          Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_124;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
      }
      if ( *p_mMapCtrl_SpotInfo && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, v17) )
      {
        recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
        {
          v68 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v68, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
          SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v68, v69);
          goto LABEL_84;
        }
        v70 = 1;
      }
      else
      {
        v70 = 0;
      }
      SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v70, v54);
LABEL_84:
      Instance = (__int64)*p_mMapCtrl_SpotInfo;
      if ( !*p_mMapCtrl_SpotInfo )
        goto LABEL_124;
      Instance = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)Instance, 0LL);
      if ( !this->fields.mcSpotNextSp )
        goto LABEL_124;
      v71 = Instance;
      Instance = (__int64)UnityEngine_Component__get_transform(
                            (UnityEngine_Component_o *)this->fields.mcSpotNextSp,
                            0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v71 & 1, 0LL);
      if ( (v71 & 1) != 0 && !this->fields.isDisplayNext )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v17);
          byte_4BC2713 = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v72 = **(_QWORD **)(Instance + 184);
        if ( !v72 )
          goto LABEL_124;
        Instance = *(_QWORD *)(v72 + 264);
        if ( !Instance )
          goto LABEL_124;
        ScrTerminalMap__SetMapButtonNextBySpotInfo((ScrTerminalMap_o *)Instance, this->fields.mMapCtrl_SpotInfo, 0LL);
        this->fields.isDisplayNext = 1;
      }
      if ( *p_mMapCtrl_SpotInfo )
      {
        Instance = (__int64)this->fields.loopIcon;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)Instance,
            ((*p_mMapCtrl_SpotInfo)->fields.freeQuestCount > 0) & (v32 | (v29 == 0LL
                                                                       || !this->fields._IsMapModel_k__BackingField)),
            0LL);
          Instance = (__int64)this->fields.loopIcon;
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
            v73 = (UnityEngine_Transform_o *)Instance;
            if ( !byte_4BC2148 )
            {
              Instance = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v17);
              byte_4BC2148 = 1;
            }
            mcSpotNameSp = this->fields.mcSpotNameSp;
            if ( mcSpotNameSp )
            {
              mWidth = mcSpotNameSp->fields.mWidth;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              z = static_fields->rightVector.fields.z;
              v78.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
              if ( !byte_4BC2149 )
              {
                Instance = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v17);
                byte_4BC2149 = 1;
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              }
              if ( v73 )
              {
                __asm
                {
                  FMOV            V3.2S, #-26.0
                  FMOV            V2.2S, #-15.0
                }
                v84.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
                _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                               + (float)(static_fields->upVector.fields.z * -15.0);
                v85 = vadd_f32(
                        vadd_f32(
                          vmul_f32(vmul_n_f32(v78, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                          vmul_f32(v78, _D3)),
                        v84).n64_u64[0];
                v86 = HIDWORD(v85);
                UnityEngine_Transform__set_localPosition(v73, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
                if ( *p_mMapCtrl_SpotInfo )
                {
                  spotId = (*p_mMapCtrl_SpotInfo)->fields.spotId;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4BC4529 )
                  {
                    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v17);
                    byte_4BC4529 = 1;
                  }
                  Instance = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    Instance = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( this->fields.loopLastTime )
                  {
                    v88 = *p_IsMapModel_k__BackingField;
                    v89 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 60LL);
                    Instance = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.loopLastTime,
                                          0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)Instance,
                        (spotId == v89) & (v32 | (v29 == 0LL || !v88)),
                        0LL);
                      loopLastTime = this->fields.loopLastTime;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
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
      sub_1C1AE30(Instance, v17);
    }
    Instance = (__int64)this->fields.mSpotNameLabel;
    if ( !Instance )
      goto LABEL_124;
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_124;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v27 )
      goto LABEL_124;
    v44 = (UnityEngine_GameObject_o *)Instance;
    Instance = SpotEntity__HasFlag(v27, 8, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_48;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    dispType = (*p_mMapCtrl_SpotInfo)->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v27, 16, 0LL);
      goto LABEL_50;
    }
    if ( dispType != 1 )
LABEL_48:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_50:
    Instance = SpotEntity__IsOverRideName(v27, &spotName, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = (Instance & 1) == 0;
    }
    if ( !v44 )
      goto LABEL_124;
    if ( !this->fields._IsMapModel_k__BackingField || v29 == 0LL )
      v48 = -1;
    else
      v48 = v32;
    UnityEngine_GameObject__SetActive(v44, v48 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_34756308(
      v44,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v50 = this->fields.atlases;
    v52 = this->fields.mcSpotNameSp;
    v51 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    SrcSpotBasePrefab__SetSpotNameUI(v50, v52, v51, mSpotNameStr, v49);
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
  sub_1C1AB78(
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mcRootGobjP,
    (int64_t)rootGameObject,
    (int64_t)method,
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
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v18; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  Il2CppObject *Component_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  SrcSpotBasePrefab_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x21

  if ( (byte_4BC4EB6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&qOfsX);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v13);
    byte_4BC4EB6 = 1;
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
    v18 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v18, (UnityEngine_Component_o *)this, 0LL);
    if ( !v18 )
LABEL_17:
      sub_1C1AE30(mcSpotNextSp, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v18,
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
      (int64_t)Component_object,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_34756308(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v28 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v29 = SrcSpotBasePrefab_TypeInfo;
  v30 = v28;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v29 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_34756308(
    v30,
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_mSpotNameStr; // x21

  this->fields.mSpotNameStr = name;
  p_mSpotNameStr = &this->fields.mSpotNameStr;
  sub_1C1AB78(
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
  sub_1C1AB78(
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
  sub_1C1AB78(
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  SrcSpotBasePrefab_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v19; // x20
  System_Action_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Action_o *mStateEndAct; // x19

  if ( (byte_4BC4EC9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v4);
    sub_1C1ABD4(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v5);
    byte_4BC4EC9 = 1;
  }
  v6 = sub_1C1AE20(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_12;
  *(_QWORD *)(v6 + 16) = that;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)that, v9, v10, v11, v12, v13, v14);
  v7 = *(SrcSpotBasePrefab_o **)(v6 + 16);
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
      SrcSpotBasePrefab__SetQaaScaleAnim_35773572(v7, 0, 0.5, v15);
      v19 = *(_QWORD *)(v6 + 16);
      v20 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v6,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v19 )
      {
        *(_QWORD *)(v19 + 216) = v20;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v19 + 216), (int64_t)v20, v21, v22, v23, v24, v25, v26);
        return;
      }
LABEL_12:
      sub_1C1AE30(v7, v8);
    }
  }
  else
  {
    mStateEndAct = v7->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v7, 1, 0LL, v16);
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
  __int64 v4; // x1
  SrcSpotBasePrefab_o *that; // x0
  const MethodInfo *v6; // x2
  struct SrcSpotBasePrefab_o *v7; // x19
  System_Action_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BC4ECA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_4BC4ECA = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_35773572(that, 1, 0.5, v6),
        v7 = this->fields.that,
        v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v7, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v7) )
  {
    sub_1C1AE30(that, method);
  }
  v7->fields.mAfterScaleAnim = v8;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->fields.mAfterScaleAnim, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  TerminalSceneComponent_c *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v17; // x2
  System_Action_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Action_o *mStateEndAct; // x20
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *v28; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v31; // x0
  int v32; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v38; // x1
  float ScaleOnMapModel; // s0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC4EC8 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v6);
    sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__, v7);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BC4EC8 = 1;
  }
  v9 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C1ABEC(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
  OverwriteAssetSoundName__PlayCommonSe(v10, 17, 0, 0LL);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_35774016(that, 1, 0.5, v13);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v14);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v12);
      SrcSpotBasePrefab__SetQaaScaleAnim_35773572(that, 1, 0.5, v17);
      v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v18;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v12);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v27 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v28 = (UnityEngine_GameObject_o *)v27;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_34762136(v28, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_34756412(v28, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v28, 0LL);
    GameObjectExtensions__ResetLocalScale(v28, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_34762136(
    (UnityEngine_GameObject_o *)v27,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v12);
    byte_4BC2713 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v32 = GameObjectExtensions__GetLocalPosition(v31, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1C1AE30(v11, v12);
  }
  v47 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v32, 0LL);
  GameObjectExtensions__SetLocalPosition(v28, v47, 0LL);
  GameObjectExtensions__ResetLocalRotation(v28, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v38);
  v48.fields.y = y * ScaleOnMapModel;
  v48.fields.z = z * ScaleOnMapModel;
  v48.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v28, v48, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v28;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&that->fields.mParticleSystemObj,
    (int64_t)v28,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
  __int64 v5; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v8; // x2
  System_Action_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4BC4EC7 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_4BC4EC7 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1C1AE30(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_35774016(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_35773572(that, 1, 0.5, v8);
      v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v9;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim,
        (int64_t)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
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
  __int64 v5; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  System_Action_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4BC4EC6 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1C1ABD4(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_4BC4EC6 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1C1AE30(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_35773572(that, 0, 0.5, method);
      v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v8;
      sub_1C1AB78((PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC4ECB & 1) == 0 )
  {
    sub_1C1ABD4(&SrcSpotBasePrefab___c_TypeInfo, v1);
    byte_4BC4ECB = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(_4__this, method);
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
    sub_1C1AE30(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SrcSpotBasePrefab_c *v8; // x0
  Il2CppObject *Object_object__49812820; // x0
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SrcSpotBasePrefab_o *v18; // x8
  struct SrcSpotBasePrefab_o *v19; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v22; // x8
  struct SrcSpotBasePrefab_o *v23; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_4BC4ECC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, effectAssetData);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1C1ABD4(&SrcSpotBasePrefab_TypeInfo, v7);
    byte_4BC4ECC = 1;
  }
  if ( effectAssetData )
  {
    v8 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v8 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__49812820 = AssetData__GetObject_object__49812820(
                                effectAssetData,
                                v8->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
    _4__this = v4->fields.__4__this;
    v11 = Object_object__49812820;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v11,
                                                           (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int64_t)this,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v18 = v4->fields.__4__this;
    if ( !v18 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v18->fields.recollectionQuestSpotEffect,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v4->fields.__4__this;
      if ( v19 )
      {
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v19->fields.mNoticeNumber;
        if ( this )
        {
          recollectionQuestSpotEffect = v19->fields.recollectionQuestSpotEffect;
          this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
            GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0LL);
            v22 = v4->fields.__4__this;
            if ( v22 )
            {
              GameObjectExtensions__ResetLocalScale(v22->fields.recollectionQuestSpotEffect, 0LL);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_1C1AE30(this, effectAssetData);
    }
  }
LABEL_16:
  v23 = v4->fields.__4__this;
  if ( !v23 )
    goto LABEL_19;
  v23->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = v4->fields.endCallback;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
}