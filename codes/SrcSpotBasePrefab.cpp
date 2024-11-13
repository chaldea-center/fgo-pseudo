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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1365E & 1) == 0 )
  {
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_18999/*"ef_badge_glow"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5960/*"Effect/RecollectionQuest"*/, v10, v11);
    byte_4B1365E = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_5960/*"Effect/RecollectionQuest"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab_TypeInfo->static_fields,
    StringLiteral_5960/*"Effect/RecollectionQuest"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_18999/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18999/*"ef_badge_glow"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1365D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23625/*"smfSpotBtn_Click"*/, v11, v12);
    byte_4B1365D = 1;
  }
  v13 = StringLiteral_23625/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23625/*"smfSpotBtn_Click"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.msSmfNameForBtnClick, v13, v2, v3, v4, v5, v6, v7);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    byte_4B109C6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlases, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo_36C2D44 *v18; // x2
  bool v19; // zf
  UnityEngine_BoxCollider_o *v20; // x20
  int v21; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v25; // s2
  System_Nullable_Vector3__o v26; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector2__o v27; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v28; // 0:x0.12
  System_Nullable_Vector3__o v29; // 0:x0.16

  hasValue = centerPosition.fields.hasValue;
  v5 = size.fields.hasValue;
  v26 = centerPosition;
  v27 = size;
  if ( (byte_4B13652 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BoxCollider___,
      *(_QWORD *)&size.fields.hasValue,
      *(_QWORD *)&size.fields.value.fields.y);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__get_HasValue__, v7, v8);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_Vector2__get_Value__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v13, v14);
    byte_4B13652 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v19 = !hasValue;
  v20 = (UnityEngine_BoxCollider_o *)Component_object;
  if ( !v19 )
  {
    *(_QWORD *)&v29.fields.hasValue = &v26;
    *(_QWORD *)&v29.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v21 = System_Nullable_Vector3___get_Value(v29, v18);
    if ( !v20 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
    v5 = v27.fields.hasValue;
  }
  if ( !v5 )
    return;
  *(_QWORD *)&v28.fields.hasValue = &v27;
  LODWORD(v28.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v28, (const MethodInfo_36C2920 *)v18);
  if ( !v20 )
LABEL_11:
    sub_1BCAA3C(gameObject, v16);
  v25 = 0;
  UnityEngine_BoxCollider__set_size(v20, *(UnityEngine_Vector3_o *)&Value.fields.x, 0LL);
}


void __fastcall SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
}


void __fastcall SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_T__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  CStateManager_T__o *mFSM; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  CStateManager_T__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x22
  CStateManager_T__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  Il2CppObject *v47; // x22
  CStateManager_T__o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *v52; // x22
  CStateManager_T__o *v53; // x21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  Il2CppObject *v57; // x22
  CStateManager_T__o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  Il2CppObject *v62; // x21
  const MethodInfo *v63; // x3
  MapModelManager_c *v64; // x0

  if ( (byte_4B13648 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_SrcSpotBasePrefab__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_SrcSpotBasePrefab__TypeInfo, v7, v8);
    sub_1BCA7E0(&MapModelManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v11, v12);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateNone_TypeInfo, v13, v14);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v15, v16);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v17, v18);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v19, v20);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v21, v22);
    byte_4B13648 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v24 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_SrcSpotBasePrefab__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v24,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_313FBC4 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mFSM, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v35 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateNone_TypeInfo, v32, v33, v34);
    System_Object___ctor(v35, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v35,
      (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v38 = (CStateManager_T__o *)*p_mFSM;
    v42 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateMapMain_TypeInfo, v39, v40, v41);
    System_Object___ctor(v42, 0LL);
    if ( !v38 )
      goto LABEL_14;
    CStateManager_object___add(
      v38,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v43 = (CStateManager_T__o *)*p_mFSM;
    v47 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateQaaHide_TypeInfo, v44, v45, v46);
    System_Object___ctor(v47, 0LL);
    if ( !v43 )
      goto LABEL_14;
    CStateManager_object___add(
      v43,
      2,
      (IState_T__o *)v47,
      (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v48 = (CStateManager_T__o *)*p_mFSM;
    v52 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateQaaGray_TypeInfo, v49, v50, v51);
    System_Object___ctor(v52, 0LL);
    if ( !v48 )
      goto LABEL_14;
    CStateManager_object___add(
      v48,
      3,
      (IState_T__o *)v52,
      (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v53 = (CStateManager_T__o *)*p_mFSM;
    v57 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v54, v55, v56);
    System_Object___ctor(v57, 0LL);
    if ( !v53
      || (CStateManager_object___add(
            v53,
            4,
            (IState_T__o *)v57,
            (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v58 = (CStateManager_T__o *)*p_mFSM,
          v62 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab_StateQaaChange_TypeInfo, v59, v60, v61),
          System_Object___ctor(v62, 0LL),
          !v58) )
    {
LABEL_14:
      sub_1BCAA3C(v36, v37);
    }
    CStateManager_object___add(
      v58,
      5,
      (IState_T__o *)v62,
      (const MethodInfo_313FC6C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v63);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v64 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, method);
    v64 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v64->static_fields->LAYER_LOWER_ID;
}


bool __fastcall SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  __int64 v14; // x1
  bool v15; // w19
  int32_t current; // w20
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v20; // x1
  QuestEntity_o *Mine; // x0
  __int64 v22; // x1
  int v23; // w20
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1365B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v10, v11);
    byte_4B1365B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1BCAA3C(0LL, v14);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      AvailableQuestIdList,
      (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v26,
              (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      current = v26.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v18);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1BCAA3C(0LL, v20);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1BCAA3C(0LL, v22);
      if ( QuestEntity__IsActiveRecollectionQuest(Mine, 0LL) )
      {
        v23 = 5;
        goto LABEL_13;
      }
    }
    v23 = 6;
LABEL_13:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v26,
      (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v15 && v23 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13646 & 1) == 0 )
  {
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, method, v2);
    byte_4B13646 = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, method);
  SrcSpotBasePrefab__DestroyEffect_35316604(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_35316604(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  SrcSpotBasePrefab_o *v3; // x19
  PartyOrganizationUtility_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = spot;
  if ( (byte_4B13647 & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13647 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v3->fields.mParticleSystemObj;
  p_mParticleSystemObj = (PartyOrganizationUtility_o *)&v3->fields.mParticleSystemObj;
  v5 = mParticleSystemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1BCA784(p_mParticleSystemObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1BCAA3C(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = id;
  if ( (byte_4B13645 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13065/*"Spot_"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v3, v4);
    byte_4B13645 = 1;
  }
  v5 = System_Int32__ToString_63206828((int32_t)&v7, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_13065/*"Spot_"*/, v5, 0LL);
}


MapControl_SpotInfo_o *__fastcall SrcSpotBasePrefab__GetMapCtrl_SpotInfo(
        SrcSpotBasePrefab_o *this,
        const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotInfo;
}


float __fastcall SrcSpotBasePrefab__GetScaleOnMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s11
  float v19; // s9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13654 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13654 = 1;
  }
  v4 = 1.0;
  if ( this->fields._IsMapModel_k__BackingField )
  {
    MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL) )
    {
      v7 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v7 )
        sub_1BCAA3C(0LL, v6);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v22 = GameObjectExtensions__GetLocalPosition(v12, 0LL);
      v15 = v22.fields.x;
      v16 = v22.fields.y;
      v17 = v22.fields.z;
      if ( !byte_4B109BF )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v13, v14);
        byte_4B109BF = 1;
      }
      v18 = x - v15;
      v19 = y - v16;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
      return 2000.0
           / sqrtf((float)((float)(z - v17) * (float)(z - v17)) + (float)((float)(v18 * v18) + (float)(v19 * v19)));
    }
  }
  return v4;
}


int32_t __fastcall SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SrcSpotBasePrefab_o *v3; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v3 = this;
  if ( (byte_4B13655 & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1BCA7E0(&Method_CStateManager_SrcSpotBasePrefab__getState__, method, v2);
    byte_4B13655 = 1;
  }
  mFSM = v3->fields.mFSM;
  if ( !mFSM )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(mcSpotSprite, v7);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)mcSpotSprite, 0LL) )
    return x > 0.0 && y > 0.0;
  return 0;
}


void __fastcall SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
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
  __int64 v16; // x20
  UnityEngine_Component_o *mNoticeNumber; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  SrcSpotBasePrefab_c *v36; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x21
  __int64 v39; // x1

  if ( (byte_4B13659 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, endCallback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v12, v13);
    sub_1BCA7E0(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v14, v15);
    byte_4B13659 = 1;
  }
  v16 = sub_1BCAA2C(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, endCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_15;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)endCallback, v25, v26, v27, v28, v29, v30);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1BCAA3C(mNoticeNumber, v18);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v36 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v33);
      v36 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v36->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v34, v35);
    AssetLoader_LoadEndDataHandler___ctor(
      v38,
      (Il2CppObject *)v16,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v38, 1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  UnityEngine_Object_o *mcRootGobjP; // x21
  __int64 v20; // x1
  float realtimeSinceStartup; // s8
  SrcSpotBasePrefab_c *v22; // x0
  __int64 v23; // x1
  float v24; // s0
  SrcSpotBasePrefab_c *v25; // x0
  float v26; // s8
  void *mMapCtrl_SpotInfo; // x0
  int v28; // w8
  UnityEngine_GameObject_o *v29; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v34; // x0
  System_String_o *v35; // x20
  __int64 v36; // x2
  __int64 v37; // x3
  CommonUI_o *v38; // x21
  SrcSpotBasePrefab___c_c *v39; // x8
  System_Action_o *_9__75_0; // x23
  System_String_o *v41; // x22
  Il2CppObject *v42; // x24
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x1

  if ( (byte_4B1364E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isPlaySe, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v13, v14);
    sub_1BCA7E0(&SrcSpotBasePrefab___c_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1364E = 1;
  }
  mcRootGobjP = (UnityEngine_Object_o *)this->fields.mcRootGobjP;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlaySe);
  if ( !UnityEngine_Object__op_Equality(mcRootGobjP, 0LL, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v22 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v20);
      v22 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - v22->static_fields->clickTime) > v22->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v24 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v25 = SrcSpotBasePrefab_TypeInfo;
      v26 = v24;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v23);
        v25 = SrcSpotBasePrefab_TypeInfo;
      }
      v25->static_fields->clickTime = v26;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v28 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v28 != 2 )
      {
        if ( v28 != 1 )
          return;
        v29 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v29 )
        {
          UnityEngine_GameObject__SendMessage_70135616(
            v29,
            msSmfNameForBtnClick,
            (Il2CppObject *)mMapCtrl_SpotInfo,
            0LL);
          if ( isPlaySe )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
            TerminalPramsManager__PlaySystemSE(0, v31);
          }
          miSpotID = this->fields.miSpotID;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
          if ( !byte_4B12DCC )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v31, v32);
            byte_4B12DCC = 1;
          }
          v34 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v31);
            v34 = TerminalPramsManager_TypeInfo;
          }
          v34->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_40:
        sub_1BCAA3C(mMapCtrl_SpotInfo, v23);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v35 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v35, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v39 = SrcSpotBasePrefab___c_TypeInfo;
      if ( !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo, v23);
        v39 = SrcSpotBasePrefab___c_TypeInfo;
      }
      _9__75_0 = v39->static_fields->__9__75_0;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39, v23);
          v39 = SrcSpotBasePrefab___c_TypeInfo;
        }
        v42 = (Il2CppObject *)v39->static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v36, v37);
        System_Action___ctor(_9__75_0, v42, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
          (int64_t)_9__75_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( !v38 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v38, v41, v35, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v50);
        TerminalPramsManager__PlaySystemSE(0, v50);
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

  if ( (byte_4B13651 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled, method);
    byte_4B13651 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v6);
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
    sub_1BCAA3C(mcSpotSprite, method);
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

  if ( (byte_4B1365C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B1365C = 1;
  }
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mNoticeNumber, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo
      || (gameObject = (UnityEngine_Component_o *)this->fields.mNoticeNumber) == 0LL
      || (dispType = mMapCtrl_SpotInfo->fields.dispType,
          (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v7);
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
  sub_1BCA784(
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
  SrcSpotBasePrefab__SetQaaColorAnim_35325544(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_35325544(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_35325544(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x2
  __int64 v34; // x3
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v37; // s1
  System_Action_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  EasingObject_o *v42; // x21
  System_Action_o *v43; // x22

  if ( (byte_4B13658 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isActive, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v10, v11);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v12, v13);
    sub_1BCA7E0(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v14, v15);
    byte_4B13658 = 1;
  }
  v16 = sub_1BCAA2C(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, isActive, method, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v16 + 32) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v37 = 0.5;
  if ( isActive )
    v37 = 1.0;
  *(float *)(v16 + 24) = v37;
  *(float *)(v16 + 28) = r;
  v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v33, v34);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v16,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v42 = *(EasingObject_o **)(v16 + 32);
    v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v16,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v42 )
    {
      EasingObject__Play(v42, time, v43, v38, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(v17, v18);
  }
  ActionExtensions__Call(v38, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35325100(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_35325100(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_35325100(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  Il2CppClass *v15; // d12
  float z; // s13
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float x; // s11
  float v19; // s10
  float v20; // s9
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x19
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13657 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, isDisp, method);
    sub_1BCA7E0(&StringLiteral_2550/*"AtScaleAnimEnd"*/, v7, v8);
    byte_4B13657 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v10);
      byte_4B109C1 = 1;
    }
    p_y = &this->fields.selfScale.fields.y;
    p_z = &this->fields.selfScale.fields.z;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = *(Il2CppClass **)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
    p_selfScale = (struct UnityEngine_Vector3_StaticFields *)&this->fields.selfScale;
  }
  else
  {
    v15 = *(Il2CppClass **)&this->fields.selfScale.fields.x;
    z = this->fields.selfScale.fields.z;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v10);
      byte_4B109C1 = 1;
    }
    p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_selfScale->zeroVector.fields.y;
    p_z = &p_selfScale->zeroVector.fields.z;
  }
  x = p_selfScale->zeroVector.fields.x;
  v19 = *p_y;
  v20 = *p_z;
  if ( time <= 0.0 )
  {
    v37.fields.x = p_selfScale->zeroVector.fields.x;
    v37.fields.y = *p_y;
    v37.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v37, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v21 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
    if ( !v21 )
      sub_1BCAA3C(0LL, v22);
    v29 = v21;
    v21[8].klass = v15;
    *(float *)&v21[8].monitor = z;
    *((float *)&v21[8].monitor + 1) = x;
    *(float *)&v21[9].klass = v19;
    *((float *)&v21[9].klass + 1) = v20;
    LODWORD(v21[2].klass) = 2;
    v21[5].klass = (Il2CppClass *)gameObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&v21[5], (int64_t)gameObject, v23, v24, v25, v26, v27, v28);
    v30 = StringLiteral_2550/*"AtScaleAnimEnd"*/;
    v29[5].monitor = (void *)StringLiteral_2550/*"AtScaleAnimEnd"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v29[5].monitor, v30, v31, v32, v33, v34, v35, v36);
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

  if ( (byte_4B1365A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isActive, method);
    byte_4B1365A = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  __int64 v3; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v6; // s1
  float v7; // [xsp+0h] [xbp-30h]

  if ( !byte_4B109C6 )
  {
    v7 = scaleVal;
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v3);
    scaleVal = v7;
    byte_4B109C6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = static_fields->oneVector.fields.z * scaleVal;
  *(float32x2_t *)&this->fields.selfScale.fields.x = vmul_n_f32(
                                                       *(float32x2_t *)&static_fields->oneVector.fields.x,
                                                       scaleVal);
  this->fields.selfScale.fields.z = v6;
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
  if ( (byte_4B1364C & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BCA7E0(&StringLiteral_20692/*"img_spotname_bg"*/, sp, lb);
    byte_4B1364C = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20692/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20692/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1BCAA3C(atlases, sp);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  UIAtlas_o *UIAtlasBySpriteName; // x0
  __int64 v29; // x1
  UnityEngine_Object_o *mAtlas; // x21
  bool v31; // w0
  int32_t imageOfsY; // w8
  int32_t imageOfsX; // s0
  Il2CppObject *v34; // x0
  __int64 v35; // x2
  System_String_o *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x1
  Il2CppObject *Object_object__49237568; // x22
  __int64 v41; // x2
  Il2CppObject *v42; // x0
  __int64 v43; // x8
  __int64 v44; // x8
  AssetData_o *v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  UnityEngine_Component_o *v50; // x0
  int32_t v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  v10 = atlases;
  v52 = spotImageId;
  if ( (byte_4B1364B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, sp, spotEnt);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_9006/*"MapSpotEffect_{0}"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1221/*"000000"*/, v21, v22);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BCA7E0(&StringLiteral_23679/*"spot_"*/, v23, v24);
    byte_4B1364B = 1;
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
    v26 = System_Int32__ToString_63206828((int32_t)&v52, (System_String_o *)StringLiteral_1221/*"000000"*/, 0LL);
    v27 = System_String__Concat_62401220((System_String_o *)StringLiteral_23679/*"spot_"*/, v26, 0LL);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v27, 0LL);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0LL);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    v31 = UnityEngine_Object__op_Inequality(mAtlas, 0LL, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v31, 0LL);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0LL) )
    {
      UISprite__set_spriteName(sp, v27, 0LL);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)sp,
                                                                0LL);
      if ( spotEnt )
      {
        imageOfsY = spotEnt->fields.imageOfsY;
        imageOfsX = spotEnt->fields.imageOfsX;
LABEL_45:
        GameObjectExtensions__SetLocalPosition_34331044(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_47;
    }
    v51 = v52;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v36 = System_String__Format((System_String_o *)StringLiteral_9006/*"MapSpotEffect_{0}"*/, v34, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, sp, v35);
      byte_4B10F83 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v37 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v37 )
      goto LABEL_47;
    v38 = *(_QWORD *)(v37 + 264);
    if ( !v38 )
      goto LABEL_47;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v38 + 248);
    if ( !atlases )
      goto LABEL_47;
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                (AssetData_o *)atlases,
                                v36,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sp);
      v42 = Object_object__49237568;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, sp, v41);
      byte_4B10F83 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v43 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v43 )
      goto LABEL_47;
    v44 = *(_QWORD *)(v43 + 264);
    if ( !v44 )
      goto LABEL_47;
    v45 = *(AssetData_o **)(v44 + 256);
    if ( v45 )
    {
      v47 = AssetData__GetObject_object__49237568(
              v45,
              v36,
              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
        v42 = v47;
LABEL_43:
        v49 = UnityEngine_Object__Instantiate_object_(
                v42,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v50 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v49, v50, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v49;
          goto LABEL_45;
        }
LABEL_47:
        sub_1BCAA3C(atlases, sp);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int32_t PrioredImgId; // w22

  v8 = atlases;
  if ( (byte_4B1364A & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, sp, spotEnt);
    byte_4B1364A = 1;
  }
  if ( !spotEnt )
    sub_1BCAA3C(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, 0LL);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v9);
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v10);
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

  if ( (byte_4B13656 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state, endAct);
    byte_4B13656 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v11);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1BCAA3C(this, *(_QWORD *)&type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_35323956(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_35323956(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4B13650 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method, v2);
    byte_4B13650 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1BCAA3C(gameObject, v5);
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

  if ( (byte_4B13653 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam, method);
    byte_4B13653 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1BCAA3C(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1BCA784((PartyOrganizationUtility_o *)(mSpotNameLabel + 32), (int64_t)cam, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4B13649 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_SrcSpotBasePrefab__update__, method, v2);
    byte_4B13649 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_313FCD4 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 mMapCtrl_SpotInfo; // x0
  SpotEntity_o *v26; // x23
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v28; // x20
  bool IsEnabledDispSpot; // w25
  bool *p_IsMapModel_k__BackingField; // x27
  char v31; // w21
  struct MapControl_SpotInfo_o *v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x24
  const MethodInfo *v40; // x4
  int spotChangeImgId; // w24
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *v43; // x26
  UnityEngine_Object_o *mSpotNameLabel; // x24
  UnityEngine_GameObject_o *v45; // x24
  struct MapControl_SpotInfo_o *v46; // x8
  int32_t dispType; // w8
  bool HasFlag; // w25
  char v50; // w8
  __int64 v51; // x1
  const MethodInfo *v52; // x4
  System_Collections_Generic_List_UIAtlas__o *v53; // x26
  UILabel_o *v54; // x23
  UISprite_o *mcSpotNameSp; // x25
  System_String_o *mSpotNameStr; // x24
  const MethodInfo *v57; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x23
  UnityEngine_Object_o *mNoticeNumber; // x24
  Il2CppObject *mNoticeNumberPrefab; // x24
  Il2CppObject *v61; // x24
  Il2CppObject *Component_object; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct MapControl_SpotInfo_o *v69; // x8
  __int64 v70; // x1
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x23
  __int64 v72; // x1
  __int64 v73; // x3
  System_Action_o *v74; // x23
  const MethodInfo *v75; // x2
  bool v76; // w1
  char v77; // w23
  __int64 v78; // x2
  __int64 v79; // x8
  struct MapControl_SpotInfo_o *v80; // x8
  __int64 v81; // x2
  UnityEngine_Transform_o *v82; // x23
  struct UISprite_o *v83; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v87; // d9
  float32x2_t v93; // d4
  unsigned __int64 v94; // d0
  int v95; // s1
  __int64 v96; // x2
  struct MapControl_SpotInfo_o *v97; // x8
  int32_t spotId; // w22
  _BOOL4 v99; // w24
  int v100; // w25
  __int64 v101; // x1
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1364D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isForce, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v15, v16);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v17, v18);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_12367/*"SPOT_FREE_QUEST_LAST_TIME"*/, v23, v24);
    byte_4B1364D = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    mMapCtrl_SpotInfo = (__int64)this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mMapCtrl_SpotInfo )
      goto LABEL_120;
    v26 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v28 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      mMapCtrl_SpotInfo = SpotLayerEntity__IsEnabledSpot(v28, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v31 = mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v32 = this->fields.mMapCtrl_SpotInfo;
        if ( !v32 )
          goto LABEL_120;
        if ( v32->fields.dispType )
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
            if ( !byte_4B109C1 )
            {
              sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v33, v34);
              byte_4B109C1 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v104.fields.x = p_selfScale->zeroVector.fields.x;
          v104.fields.y = *p_y;
          v104.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v104, 0LL);
        }
      }
    }
    else
    {
      v31 = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isForce);
    mMapCtrl_SpotInfo = UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v26 )
          goto LABEL_120;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v26, 0LL);
      }
      atlases = this->fields.atlases;
      v43 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, isForce);
      SrcSpotBasePrefab__SetSpotUI(atlases, v43, v26, spotChangeImgId, -32.0, v40);
    }
    if ( v28 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v31 & 1, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isForce);
    if ( !UnityEngine_Object__op_Inequality(0LL, mSpotNameLabel, 0LL) )
      goto LABEL_57;
    mMapCtrl_SpotInfo = (__int64)this->fields.mSpotNameLabel;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                   0LL);
    if ( !v26 )
      goto LABEL_120;
    v45 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = SpotEntity__HasFlag(v26, 8, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_44;
    v46 = this->fields.mMapCtrl_SpotInfo;
    if ( !v46 )
      goto LABEL_120;
    dispType = v46->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v26, 16, 0LL);
      goto LABEL_45;
    }
    if ( dispType != 1 )
LABEL_44:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_45:
    mMapCtrl_SpotInfo = SpotEntity__IsOverRideName(v26, &spotName, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = (mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v45 )
      goto LABEL_120;
    if ( !this->fields._IsMapModel_k__BackingField || v28 == 0LL )
      v50 = -1;
    else
      v50 = v31;
    UnityEngine_GameObject__SetActive(v45, v50 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_34331044(
      v45,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v53 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v54 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v51);
    SrcSpotBasePrefab__SetSpotNameUI(v53, mcSpotNameSp, v54, mSpotNameStr, v52);
LABEL_57:
    if ( SrcSpotBasePrefab__GetState(this, (const MethodInfo *)isForce) == 1 )
    {
      p_mNoticeNumber = &this->fields.mNoticeNumber;
      mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isForce);
      if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
      {
        mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isForce);
        v61 = UnityEngine_Object__Instantiate_object_(
                mNoticeNumberPrefab,
                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v61, (UnityEngine_Component_o *)this, 0LL);
        if ( !v61 )
          goto LABEL_120;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v61,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
          (int64_t)Component_object,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
      mMapCtrl_SpotInfo = (__int64)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_120;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v69 = this->fields.mMapCtrl_SpotInfo;
      if ( !v69 )
        goto LABEL_120;
      if ( v69->fields.dispType != 1 )
      {
        mMapCtrl_SpotInfo = (__int64)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_120;
        mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                       0LL);
        if ( !mMapCtrl_SpotInfo )
          goto LABEL_120;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, 0, 0LL);
      }
    }
    if ( this->fields.mMapCtrl_SpotInfo
      && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, (const MethodInfo *)isForce) )
    {
      recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
      {
        v74 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v72, v57, v73);
        System_Action___ctor(v74, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v74, v75);
        goto LABEL_79;
      }
      v76 = 1;
    }
    else
    {
      v76 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v76, v57);
LABEL_79:
    mMapCtrl_SpotInfo = (__int64)this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_120;
    v77 = mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.mcSpotNextSp,
                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)mMapCtrl_SpotInfo,
                                   0LL);
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v77 & 1, 0LL);
    if ( (v77 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isForce);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, isForce, v78);
        byte_4B10F83 = 1;
      }
      mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, isForce);
        mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v79 = **(_QWORD **)(mMapCtrl_SpotInfo + 184);
      if ( !v79 )
        goto LABEL_120;
      mMapCtrl_SpotInfo = *(_QWORD *)(v79 + 264);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v80 = this->fields.mMapCtrl_SpotInfo;
    if ( v80 )
    {
      mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v80->fields.freeQuestCount > 0) & (v31 | (v28 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                         0LL);
          v82 = (UnityEngine_Transform_o *)mMapCtrl_SpotInfo;
          if ( !byte_4B109C8 )
          {
            mMapCtrl_SpotInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, isForce, v81);
            byte_4B109C8 = 1;
          }
          v83 = this->fields.mcSpotNameSp;
          if ( v83 )
          {
            mWidth = v83->fields.mWidth;
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            z = static_fields->rightVector.fields.z;
            v87.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
            if ( !byte_4B109C9 )
            {
              mMapCtrl_SpotInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, isForce, v81);
              byte_4B109C9 = 1;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            }
            if ( v82 )
            {
              __asm
              {
                FMOV            V3.2S, #-26.0
                FMOV            V2.2S, #-15.0
              }
              v93.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
              _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                             + (float)(static_fields->upVector.fields.z * -15.0);
              v94 = vadd_f32(
                      vadd_f32(
                        vmul_f32(vmul_n_f32(v87, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                        vmul_f32(v87, _D3)),
                      v93).n64_u64[0];
              v95 = HIDWORD(v94);
              UnityEngine_Transform__set_localPosition(v82, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
              v97 = this->fields.mMapCtrl_SpotInfo;
              if ( v97 )
              {
                spotId = v97->fields.spotId;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isForce);
                if ( !byte_4B12CE4 )
                {
                  sub_1BCA7E0(&TerminalPramsManager_TypeInfo, isForce, v96);
                  byte_4B12CE4 = 1;
                }
                mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, isForce);
                  mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( this->fields.loopLastTime )
                {
                  v99 = *p_IsMapModel_k__BackingField;
                  v100 = *(_DWORD *)(*(_QWORD *)(mMapCtrl_SpotInfo + 184) + 60LL);
                  mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v100) & (v31 | (v28 == 0LL || !v99)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101);
                    mMapCtrl_SpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12367/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
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
LABEL_120:
    sub_1BCAA3C(mMapCtrl_SpotInfo, isForce);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  __int64 v19; // x1
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v21; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  SrcSpotBasePrefab_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x21

  if ( (byte_4B1364F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___,
      *(_QWORD *)&qOfsX,
      *(_QWORD *)&qOfsY);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v15, v16);
    byte_4B1364F = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&qOfsX);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v21 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0LL);
    if ( !v21 )
LABEL_17:
      sub_1BCAA3C(mcSpotNextSp, v19);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v21,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mNoticeNumber,
      (int64_t)Component_object,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v31 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v33 = SrcSpotBasePrefab_TypeInfo;
  v34 = v31;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v32);
    v33 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_34331044(
    v34,
    (float)nOfsX,
    (float)(v33->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x19
  SrcSpotBasePrefab_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *mStateEndAct; // x19

  if ( (byte_4B13662 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v5, v6);
    sub_1BCA7E0(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v7, v8);
    byte_4B13662 = 1;
  }
  v9 = sub_1BCAA2C(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, that, method, v3);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = that;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)that, v12, v13, v14, v15, v16, v17);
  v10 = *(SrcSpotBasePrefab_o **)(v9 + 16);
  if ( !v10 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v10->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_35325100(v10, 0, 0.5, v18);
      v22 = *(_QWORD *)(v9 + 16);
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v9,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v22 )
      {
        *(_QWORD *)(v22 + 216) = v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 216), (int64_t)v26, v27, v28, v29, v30, v31, v32);
        return;
      }
LABEL_12:
      sub_1BCAA3C(v10, v11);
    }
  }
  else
  {
    mStateEndAct = v10->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v10, 1, 0LL, v19);
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
  __int64 v5; // x2
  SrcSpotBasePrefab_o *that; // x0
  const MethodInfo *v7; // x2
  struct SrcSpotBasePrefab_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B13663 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4, v5);
    byte_4B13663 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_35325100(that, 1, 0.5, v7),
        v8 = this->fields.that,
        v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11),
        System_Action___ctor(v12, (Il2CppObject *)v8, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v8) )
  {
    sub_1BCAA3C(that, method);
  }
  v8->fields.mAfterScaleAnim = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.mAfterScaleAnim, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  TerminalSceneComponent_c *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *mStateEndAct; // x20
  __int64 v34; // x1
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  __int64 v38; // x2
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v41; // x0
  int v42; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v48; // x1
  float ScaleOnMapModel; // s0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13661 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaEnd__, v8, v9);
    sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B13661 = 1;
  }
  v14 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlayCommonSe(v15, 17, 0LL);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_35325544(that, 1, 0.5, v18);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v19);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v17);
      SrcSpotBasePrefab__SetQaaScaleAnim_35325100(that, 1, 0.5, v22);
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(v26, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v26;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v17);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  v36 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v37 = (UnityEngine_GameObject_o *)v36;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_34336872(v37, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_34331148(v37, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v37, 0LL);
    GameObjectExtensions__ResetLocalScale(v37, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_34336872(
    (UnityEngine_GameObject_o *)v36,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v17, v38);
    byte_4B10F83 = 1;
  }
  v16 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v17);
    v16 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v16->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v42 = GameObjectExtensions__GetLocalPosition(v41, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1BCAA3C(v16, v17);
  }
  v57 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v42, 0LL);
  GameObjectExtensions__SetLocalPosition(v37, v57, 0LL);
  GameObjectExtensions__ResetLocalRotation(v37, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v48);
  v58.fields.y = y * ScaleOnMapModel;
  v58.fields.z = z * ScaleOnMapModel;
  v58.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v37, v58, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&that->fields.mParticleSystemObj,
    (int64_t)v37,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  __int64 v6; // x2
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4B13660 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5, v6);
    byte_4B13660 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1BCAA3C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_35325544(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_35325100(that, 1, 0.5, v9);
      v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
      System_Action___ctor(v13, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v13;
      sub_1BCA784(
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
  __int64 v6; // x2
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4B1365F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, that, method);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1BCA7E0(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5, v6);
    byte_4B1365F = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1BCAA3C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_35325100(that, 0, 0.5, method);
      v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
      System_Action___ctor(v12, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v12;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&that->fields.mAfterScaleAnim,
        (int64_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13664 & 1) == 0 )
  {
    sub_1BCA7E0(&SrcSpotBasePrefab___c_TypeInfo, v1, v2);
    byte_4B13664 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SrcSpotBasePrefab___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  SrcSpotBasePrefab_c *v11; // x0
  Il2CppObject *Object_object__49237568; // x0
  __int64 v13; // x1
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SrcSpotBasePrefab_o *v22; // x8
  struct SrcSpotBasePrefab_o *v23; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v26; // x8
  struct SrcSpotBasePrefab_o *v27; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_4B13665 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, effectAssetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v9, v10);
    byte_4B13665 = 1;
  }
  if ( effectAssetData )
  {
    v11 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, effectAssetData);
      v11 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                effectAssetData,
                                v11->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    _4__this = v4->fields.__4__this;
    v15 = Object_object__49237568;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v15,
                                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int64_t)this,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = v4->fields.__4__this;
    if ( !v22 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v22->fields.recollectionQuestSpotEffect,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v23 = v4->fields.__4__this;
      if ( v23 )
      {
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v23->fields.mNoticeNumber;
        if ( this )
        {
          recollectionQuestSpotEffect = v23->fields.recollectionQuestSpotEffect;
          this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
            GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0LL);
            v26 = v4->fields.__4__this;
            if ( v26 )
            {
              GameObjectExtensions__ResetLocalScale(v26->fields.recollectionQuestSpotEffect, 0LL);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_1BCAA3C(this, effectAssetData);
    }
  }
LABEL_16:
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_19;
  v27->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = v4->fields.endCallback;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
}