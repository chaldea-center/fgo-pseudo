void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFF32B & 1) == 0 )
  {
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_18627/*"ef_badge_glow"*/, v4);
    sub_1BC3008(&StringLiteral_5833/*"Effect/RecollectionQuest"*/, v5);
    byte_4AFF32B = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_5833/*"Effect/RecollectionQuest"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)SrcSpotBasePrefab_TypeInfo->static_fields, StringLiteral_5833/*"Effect/RecollectionQuest"*/, v2, v3);
  v6 = StringLiteral_18627/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18627/*"ef_badge_glow"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME, v6, v8, v9);
  *(_QWORD *)&SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0x42C800003E99999ALL;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  __int64 v8; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4AFF32A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5);
    sub_1BC3008(&StringLiteral_23320/*"smfSpotBtn_Click"*/, v6);
    byte_4AFF32A = 1;
  }
  v7 = StringLiteral_23320/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23320/*"smfSpotBtn_Click"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.msSmfNameForBtnClick, v7, v2, v3);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4AFBDB6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.atlases, (int32_t)v11, v12, v13);
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
  const MethodInfo_37C479C *v14; // x2
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
  if ( (byte_4AFF31F & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&size.fields.hasValue);
    sub_1BC3008(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_1BC3008(&Method_System_Nullable_Vector3__get_HasValue__, v8);
    sub_1BC3008(&Method_System_Nullable_Vector2__get_Value__, v9);
    sub_1BC3008(&Method_System_Nullable_Vector3__get_Value__, v10);
    byte_4AFF31F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  Value = System_Nullable_Vector2___get_Value(v24, (const MethodInfo_37C3F18 *)v14);
  if ( !v16 )
LABEL_11:
    sub_1BC3264(gameObject, v12);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x21
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  Il2CppObject *v27; // x22
  CStateManager_T__o *v28; // x20
  Il2CppObject *v29; // x21
  const MethodInfo *v30; // x3
  MapModelManager_c *v31; // x0

  if ( (byte_4AFF315 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method);
    sub_1BC3008(&Method_CStateManager_SrcSpotBasePrefab__add__, v3);
    sub_1BC3008(&CStateManager_SrcSpotBasePrefab__TypeInfo, v4);
    sub_1BC3008(&MapModelManager_TypeInfo, v5);
    sub_1BC3008(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v6);
    sub_1BC3008(&SrcSpotBasePrefab_StateNone_TypeInfo, v7);
    sub_1BC3008(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v8);
    sub_1BC3008(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v9);
    sub_1BC3008(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v10);
    sub_1BC3008(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v11);
    byte_4AFF315 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v13 = (CStateManager_T__o *)sub_1BC3254(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_object____ctor(
      v13,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_323D2B8 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v13, v14, v15);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v17 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateNone_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v17,
      (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_14;
    CStateManager_object___add(
      v20,
      1,
      (IState_T__o *)v21,
      (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    System_Object___ctor(v23, 0LL);
    if ( !v22 )
      goto LABEL_14;
    CStateManager_object___add(
      v22,
      2,
      (IState_T__o *)v23,
      (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v24 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    System_Object___ctor(v25, 0LL);
    if ( !v24 )
      goto LABEL_14;
    CStateManager_object___add(
      v24,
      3,
      (IState_T__o *)v25,
      (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v27 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    System_Object___ctor(v27, 0LL);
    if ( !v26
      || (CStateManager_object___add(
            v26,
            4,
            (IState_T__o *)v27,
            (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v28 = (CStateManager_T__o *)*p_mFSM,
          v29 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          System_Object___ctor(v29, 0LL),
          !v28) )
    {
LABEL_14:
      sub_1BC3264(v18, v19);
    }
    CStateManager_object___add(
      v28,
      5,
      (IState_T__o *)v29,
      (const MethodInfo_323D360 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v30);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v31 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v31 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v31->static_fields->LAYER_LOWER_ID;
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

  if ( (byte_4AFF328 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4AFF328 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1BC3264(0LL, v9);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      AvailableQuestIdList,
      (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v21,
              (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      current = v21.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1BC3264(0LL, v13);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1BC3264(0LL, v15);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1BC3264(0LL, v17);
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
      (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v10 && v18 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_4AFF313 & 1) == 0 )
  {
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, method);
    byte_4AFF313 = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__DestroyEffect_36277688(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_36277688(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  CGThumbnailListItem_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v2 = spot;
  if ( (byte_4AFF314 & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFF314 = 1;
  }
  if ( !v2 )
    sub_1BC3264(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v2->fields.mParticleSystemObj;
  p_mParticleSystemObj = (CGThumbnailListItem_o *)&v2->fields.mParticleSystemObj;
  v4 = mParticleSystemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1BC2FAC(p_mParticleSystemObj, 0, v7, v8);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1BC3264(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_4AFF312 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12878/*"Spot_"*/, method);
    sub_1BC3008(&StringLiteral_1120/*"00"*/, v2);
    byte_4AFF312 = 1;
  }
  v3 = System_Int32__ToString_63857360((int32_t)&v5, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
  return System_String__Concat_62348648((System_String_o *)StringLiteral_12878/*"Spot_"*/, v3, 0LL);
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

  if ( (byte_4AFF321 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFF321 = 1;
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
        sub_1BC3264(0LL, v5);
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
      if ( !byte_4AFBDAF )
      {
        sub_1BC3008(&System_Math_TypeInfo, v12);
        byte_4AFBDAF = 1;
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
  if ( (byte_4AFF322 & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1BC3008(&Method_CStateManager_SrcSpotBasePrefab__getState__, method);
    byte_4AFF322 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1BC3264(this, method);
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
    sub_1BC3264(mcSpotSprite, v7);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v18; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_4AFF326 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, endCallback);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1BC3008(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v8);
    sub_1BC3008(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v9);
    byte_4AFF326 = 1;
  }
  v10 = sub_1BC3254(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 24), (int32_t)endCallback, v15, v16);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1BC3264(mNoticeNumber, v12);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v18 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v18 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v18->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v20, 1, 0LL);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1

  if ( (byte_4AFF31B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isPlaySe);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v8);
    sub_1BC3008(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v9);
    sub_1BC3008(&SrcSpotBasePrefab___c_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFF31B = 1;
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
          UnityEngine_GameObject__SendMessage_70016088(
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
          if ( !byte_4AFE99D )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v23);
            byte_4AFE99D = 1;
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
        sub_1BC3264(mMapCtrl_SpotInfo, v15);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v26 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v26, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__75_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v31, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v33, v34);
      }
      if ( !v27 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v27, v30, v26, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__PlaySystemSE(0, v35);
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

  if ( (byte_4AFF31E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled);
    byte_4AFF31E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1BC3264(gameObject, v6);
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
    sub_1BC3264(mcSpotSprite, method);
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

  if ( (byte_4AFF329 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4AFF329 = 1;
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
      sub_1BC3264(gameObject, v7);
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
  const MethodInfo *v3; // x3

  this->fields.mMapCtrl_SpotInfo = spotInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mMapCtrl_SpotInfo, (int32_t)spotInfo, (int32_t)method, v3);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_36284492(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_36284492(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_36284492(
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v22; // s1
  System_Action_o *v23; // x19
  EasingObject_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_4AFF325 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isActive);
    sub_1BC3008(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1BC3008(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v8);
    sub_1BC3008(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v9);
    sub_1BC3008(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v10);
    byte_4AFF325 = 1;
  }
  v11 = sub_1BC3254(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3057480 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 32) = Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)Component_object, v18, v19);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v22 = 0.5;
  if ( isActive )
    v22 = 1.0;
  *(float *)(v11 + 24) = v22;
  *(float *)(v11 + 28) = r;
  v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v24 = *(EasingObject_o **)(v11 + 32);
    v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v24 )
    {
      EasingObject__Play(v24, time, v25, v23, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_1BC3264(v12, v13);
  }
  ActionExtensions__Call(v23, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_36284048(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_36284048(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_36284048(
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x19
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFF324 & 1) == 0 )
  {
    sub_1BC3008(&Method_UITweener_Begin_TweenScale___, isDisp);
    sub_1BC3008(&StringLiteral_2395/*"AtScaleAnimEnd"*/, v7);
    byte_4AFF324 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_4AFBDB1 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4AFBDB1 = 1;
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
    if ( !byte_4AFBDB1 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4AFBDB1 = 1;
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
    v27.fields.x = p_selfScale->zeroVector.fields.x;
    v27.fields.y = *p_y;
    v27.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v27, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v19 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_30B9C78 *)Method_UITweener_Begin_TweenScale___);
    if ( !v19 )
      sub_1BC3264(0LL, v20);
    v23 = v19;
    v19[8].klass = v13;
    *(float *)&v19[8].monitor = z;
    *((float *)&v19[8].monitor + 1) = x;
    *(float *)&v19[9].klass = v17;
    *((float *)&v19[9].klass + 1) = v18;
    LODWORD(v19[2].klass) = 2;
    v19[5].klass = (Il2CppClass *)gameObject;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v19[5], (int32_t)gameObject, v21, v22);
    v24 = StringLiteral_2395/*"AtScaleAnimEnd"*/;
    v23[5].monitor = (void *)StringLiteral_2395/*"AtScaleAnimEnd"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v23[5].monitor, v24, v25, v26);
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

  if ( (byte_4AFF327 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isActive);
    byte_4AFF327 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_4AFBDB6 )
  {
    v6 = scaleVal;
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, method);
    scaleVal = v6;
    byte_4AFBDB6 = 1;
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
  if ( (byte_4AFF319 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BC3008(&StringLiteral_20383/*"img_spotname_bg"*/, sp);
    byte_4AFF319 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20383/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20383/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1BC3264(atlases, sp);
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
  Il2CppObject *Object_object__50213776; // x22
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
  if ( (byte_4AFF318 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, sp);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_8838/*"MapSpotEffect_{0}"*/, v15);
    sub_1BC3008(&StringLiteral_1124/*"000000"*/, v16);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BC3008(&StringLiteral_23370/*"spot_"*/, v17);
    byte_4AFF318 = 1;
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
    v19 = System_Int32__ToString_63857360((int32_t)&v42, (System_String_o *)StringLiteral_1124/*"000000"*/, 0LL);
    v20 = System_String__Concat_62348648((System_String_o *)StringLiteral_23370/*"spot_"*/, v19, 0LL);
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
        GameObjectExtensions__SetLocalPosition_35211920(
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
    v30 = System_String__Format((System_String_o *)StringLiteral_8838/*"MapSpotEffect_{0}"*/, v29, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, sp);
      byte_4AFC38D = 1;
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
    Object_object__50213776 = AssetData__GetObject_object__50213776(
                                (AssetData_o *)atlases,
                                v30,
                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50213776, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v34 = Object_object__50213776;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, sp);
      byte_4AFC38D = 1;
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
      v38 = AssetData__GetObject_object__50213776(
              v37,
              v30,
              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
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
                (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        sub_1BC3264(atlases, sp);
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
  if ( (byte_4AFF317 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, sp);
    byte_4AFF317 = 1;
  }
  if ( !spotEnt )
    sub_1BC3264(atlases, sp);
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
  __int64 v7; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4AFF323 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state);
    byte_4AFF323 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mStateEndAct, (int32_t)endAct, (int32_t)endAct, method);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1BC3264(0LL, v7);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_323D3EC *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1BC3264(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_36282904(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_36282904(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4AFF31D & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    byte_4AFF31D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1BC3264(gameObject, v4);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4AFF320 & 1) == 0 )
  {
    sub_1BC3008(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam);
    byte_4AFF320 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_3057480 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1BC3264(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1BC2FAC((CGThumbnailListItem_o *)(mSpotNameLabel + 32), (int32_t)cam, v7, v8);
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

  if ( (byte_4AFF316 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_SrcSpotBasePrefab__update__, method);
    byte_4AFF316 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_323D3C8 *)Method_CStateManager_SrcSpotBasePrefab__update__);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SpotEntity_o *v23; // x24
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v25; // x20
  bool IsEnabledDispSpot; // w26
  bool *p_IsMapModel_k__BackingField; // x28
  char v28; // w22
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x25
  const MethodInfo *v35; // x4
  int spotChangeImgId; // w25
  System_Collections_Generic_List_UIAtlas__o *atlases; // x26
  UISprite_o *v38; // x27
  UnityEngine_Object_o *mSpotNameLabel; // x25
  UnityEngine_GameObject_o *v40; // x25
  int32_t dispType; // w8
  bool HasFlag; // w26
  char v44; // w8
  const MethodInfo *v45; // x4
  System_Collections_Generic_List_UIAtlas__o *v46; // x27
  UILabel_o *v47; // x24
  UISprite_o *v48; // x26
  System_String_o *mSpotNameStr; // x25
  const MethodInfo *v50; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x24
  UnityEngine_Object_o *mNoticeNumber; // x25
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v54; // x25
  Il2CppObject *Component_object; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct MapControl_SpotInfo_o *v58; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x24
  System_Action_o *v60; // x24
  const MethodInfo *v61; // x2
  bool v62; // w1
  char v63; // w24
  __int64 v64; // x8
  UnityEngine_Transform_o *v65; // x24
  struct UISprite_o *mcSpotNameSp; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v70; // d9
  float32x2_t v76; // d4
  unsigned __int64 v77; // d0
  int v78; // s1
  int32_t spotId; // w21
  _BOOL4 v80; // w24
  int v81; // w25
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFF31A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isForce);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1BC3008(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v11);
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_12178/*"SPOT_FREE_QUEST_LAST_TIME"*/, v15);
    byte_4AFF31A = 1;
  }
  spotName = 0LL;
  if ( this->fields.mtIsUpdate || isForce )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    p_mMapCtrl_SpotInfo = &this->fields.mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo || !Instance )
      goto LABEL_124;
    SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, mMapCtrl_SpotInfo->fields.spotId, 0LL);
    if ( SpotInfo )
    {
      *p_mMapCtrl_SpotInfo = SpotInfo;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mMapCtrl_SpotInfo, (int32_t)SpotInfo, v21, v22);
    }
    Instance = (__int64)*p_mMapCtrl_SpotInfo;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    Instance = (__int64)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0LL);
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    v23 = (SpotEntity_o *)Instance;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(*p_mMapCtrl_SpotInfo, 0LL);
    v25 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      Instance = SpotLayerEntity__IsEnabledSpot(v25, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v28 = Instance;
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
            if ( !byte_4AFBDB1 )
            {
              sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v29);
              byte_4AFBDB1 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v84.fields.x = p_selfScale->zeroVector.fields.x;
          v84.fields.y = *p_y;
          v84.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v84, 0LL);
        }
      }
    }
    else
    {
      v28 = 0;
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
        if ( !v23 )
          goto LABEL_124;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v23, 0LL);
      }
      atlases = this->fields.atlases;
      v38 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      SrcSpotBasePrefab__SetSpotUI(atlases, v38, v23, spotChangeImgId, -32.0, v35);
    }
    if ( v25 && *p_IsMapModel_k__BackingField )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_124;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !Instance )
        goto LABEL_124;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, v28 & 1, 0LL);
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
          v54 = UnityEngine_Object__Instantiate_object_(
                  mNoticeNumberPrefab,
                  (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v54, (UnityEngine_Component_o *)this, 0LL);
          if ( !v54 )
            goto LABEL_124;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v54,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
          *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v56, v57);
        }
        Instance = (__int64)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_124;
        NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, this->fields.miQuestCount, 0LL);
        v58 = this->fields.mMapCtrl_SpotInfo;
        if ( !v58 )
          goto LABEL_124;
        if ( v58->fields.dispType != 1 )
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
          v60 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v60, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
          SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v60, v61);
          goto LABEL_84;
        }
        v62 = 1;
      }
      else
      {
        v62 = 0;
      }
      SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v62, v50);
LABEL_84:
      Instance = (__int64)*p_mMapCtrl_SpotInfo;
      if ( !*p_mMapCtrl_SpotInfo )
        goto LABEL_124;
      Instance = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)Instance, 0LL);
      if ( !this->fields.mcSpotNextSp )
        goto LABEL_124;
      v63 = Instance;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v63 & 1, 0LL);
      if ( (v63 & 1) != 0 && !this->fields.isDisplayNext )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v17);
          byte_4AFC38D = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v64 = **(_QWORD **)(Instance + 184);
        if ( !v64 )
          goto LABEL_124;
        Instance = *(_QWORD *)(v64 + 264);
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
            ((*p_mMapCtrl_SpotInfo)->fields.freeQuestCount > 0) & (v28 | (v25 == 0LL
                                                                       || !this->fields._IsMapModel_k__BackingField)),
            0LL);
          Instance = (__int64)this->fields.loopIcon;
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
            v65 = (UnityEngine_Transform_o *)Instance;
            if ( !byte_4AFBDB8 )
            {
              Instance = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v17);
              byte_4AFBDB8 = 1;
            }
            mcSpotNameSp = this->fields.mcSpotNameSp;
            if ( mcSpotNameSp )
            {
              mWidth = mcSpotNameSp->fields.mWidth;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              z = static_fields->rightVector.fields.z;
              v70.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
              if ( !byte_4AFBDB9 )
              {
                Instance = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v17);
                byte_4AFBDB9 = 1;
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              }
              if ( v65 )
              {
                __asm
                {
                  FMOV            V3.2S, #-26.0
                  FMOV            V2.2S, #-15.0
                }
                v76.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
                _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                               + (float)(static_fields->upVector.fields.z * -15.0);
                v77 = vadd_f32(
                        vadd_f32(
                          vmul_f32(vmul_n_f32(v70, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                          vmul_f32(v70, _D3)),
                        v76).n64_u64[0];
                v78 = HIDWORD(v77);
                UnityEngine_Transform__set_localPosition(v65, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
                if ( *p_mMapCtrl_SpotInfo )
                {
                  spotId = (*p_mMapCtrl_SpotInfo)->fields.spotId;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4AFE992 )
                  {
                    sub_1BC3008(&TerminalPramsManager_TypeInfo, v17);
                    byte_4AFE992 = 1;
                  }
                  Instance = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    Instance = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( this->fields.loopLastTime )
                  {
                    v80 = *p_IsMapModel_k__BackingField;
                    v81 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 60LL);
                    Instance = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.loopLastTime,
                                          0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive(
                        (UnityEngine_GameObject_o *)Instance,
                        (spotId == v81) & (v28 | (v25 == 0LL || !v80)),
                        0LL);
                      loopLastTime = this->fields.loopLastTime;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12178/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
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
      sub_1BC3264(Instance, v17);
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
    if ( !v23 )
      goto LABEL_124;
    v40 = (UnityEngine_GameObject_o *)Instance;
    Instance = SpotEntity__HasFlag(v23, 8, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_48;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_124;
    dispType = (*p_mMapCtrl_SpotInfo)->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v23, 16, 0LL);
      goto LABEL_50;
    }
    if ( dispType != 1 )
LABEL_48:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_50:
    Instance = SpotEntity__IsOverRideName(v23, &spotName, 0LL);
    if ( (Instance & 1) != 0 )
    {
      Instance = System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = (Instance & 1) == 0;
    }
    if ( !v40 )
      goto LABEL_124;
    if ( !this->fields._IsMapModel_k__BackingField || v25 == 0LL )
      v44 = -1;
    else
      v44 = v28;
    UnityEngine_GameObject__SetActive(v40, v44 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_35211920(
      v40,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v46 = this->fields.atlases;
    v48 = this->fields.mcSpotNameSp;
    v47 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    SrcSpotBasePrefab__SetSpotNameUI(v46, v48, v47, mSpotNameStr, v45);
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
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_UIAtlas__o **p_atlases; // x19

  this->fields.atlases = atlases;
  p_atlases = &this->fields.atlases;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.atlases, (int32_t)atlases, (int32_t)method, v3);
  *((_BYTE *)p_atlases - 72) = 1;
}


void __fastcall SrcSpotBasePrefab__mfSetCommopn(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *rootGameObject,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mcRootGobjP = rootGameObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mcRootGobjP, (int32_t)rootGameObject, (int32_t)method, v3);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  SrcSpotBasePrefab_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x21

  if ( (byte_4AFF31C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&qOfsX);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v13);
    byte_4AFF31C = 1;
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
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v18, (UnityEngine_Component_o *)this, 0LL);
    if ( !v18 )
LABEL_17:
      sub_1BC3264(mcSpotNextSp, v16);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v18,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v21, v22);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_35211920(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v24 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v25 = SrcSpotBasePrefab_TypeInfo;
  v26 = v24;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v25 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_35211920(
    v26,
    (float)nOfsX,
    (float)(v25->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  struct System_String_o **p_mSpotNameStr; // x21

  this->fields.mSpotNameStr = name;
  p_mSpotNameStr = &this->fields.mSpotNameStr;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.mSpotNameStr,
    (int32_t)name,
    offsetX,
    *(const MethodInfo **)&offsetY);
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
  const MethodInfo *v3; // x3

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SrcSpotBasePrefab__set_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._MapModelEffectRootObj_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._MapModelEffectRootObj_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v15; // x20
  System_Action_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *mStateEndAct; // x19

  if ( (byte_4AFF32F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, that);
    sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v4);
    sub_1BC3008(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v5);
    byte_4AFF32F = 1;
  }
  v6 = sub_1BC3254(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_12;
  *(_QWORD *)(v6 + 16) = that;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)that, v9, v10);
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
      SrcSpotBasePrefab__SetQaaScaleAnim_36284048(v7, 0, 0.5, v11);
      v15 = *(_QWORD *)(v6 + 16);
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)v6,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v15 )
      {
        *(_QWORD *)(v15 + 216) = v16;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 216), (int32_t)v16, v17, v18);
        return;
      }
LABEL_12:
      sub_1BC3264(v7, v8);
    }
  }
  else
  {
    mStateEndAct = v7->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v7, 1, 0LL, v12);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4AFF330 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_4AFF330 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_36284048(that, 1, 0.5, v6),
        v7 = this->fields.that,
        v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)v7, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v7) )
  {
    sub_1BC3264(that, method);
  }
  v7->fields.mAfterScaleAnim = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v7->fields.mAfterScaleAnim, (int32_t)v8, v9, v10);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *mStateEndAct; // x20
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v27; // x0
  int v28; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v34; // x1
  float ScaleOnMapModel; // s0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFF32E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, that);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaEnd__, v6);
    sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__, v7);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v8);
    byte_4AFF32E = 1;
  }
  v9 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BC3020(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v9, v9[4]);
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
      SrcSpotBasePrefab__SetQaaColorAnim_36284492(that, 1, 0.5, v13);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v14);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v12);
      SrcSpotBasePrefab__SetQaaScaleAnim_36284048(that, 1, 0.5, v17);
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v18;
      sub_1BC2FAC((CGThumbnailListItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v18, v19, v20);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v12);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v24 = (UnityEngine_GameObject_o *)v23;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_35217636(v24, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_35212024(v24, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v24, 0LL);
    GameObjectExtensions__ResetLocalScale(v24, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_35217636(
    (UnityEngine_GameObject_o *)v23,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v12);
    byte_4AFC38D = 1;
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
        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v28 = GameObjectExtensions__GetLocalPosition(v27, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1BC3264(v11, v12);
  }
  v39 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v28, 0LL);
  GameObjectExtensions__SetLocalPosition(v24, v39, 0LL);
  GameObjectExtensions__ResetLocalRotation(v24, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v34);
  v40.fields.y = y * ScaleOnMapModel;
  v40.fields.z = z * ScaleOnMapModel;
  v40.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v24, v40, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&that->fields.mParticleSystemObj, (int32_t)v24, v36, v37);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4AFF32D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_4AFF32D = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1BC3264(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_36284492(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_36284048(that, 1, 0.5, v8);
      v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v9;
      sub_1BC2FAC((CGThumbnailListItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v9, v10, v11);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4AFF32C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1BC3008(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_4AFF32C = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1BC3264(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_36284048(that, 0, 0.5, method);
      v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v8;
      sub_1BC2FAC((CGThumbnailListItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v8, v9, v10);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFF331 & 1) == 0 )
  {
    sub_1BC3008(&SrcSpotBasePrefab___c_TypeInfo, v1);
    byte_4AFF331 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(_4__this, method);
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
    sub_1BC3264(this, method);
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
  Il2CppObject *Object_object__50213776; // x0
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct SrcSpotBasePrefab_o *v14; // x8
  struct SrcSpotBasePrefab_o *v15; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v18; // x8
  struct SrcSpotBasePrefab_o *v19; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_4AFF332 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, effectAssetData);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v7);
    byte_4AFF332 = 1;
  }
  if ( effectAssetData )
  {
    v8 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v8 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__50213776 = AssetData__GetObject_object__50213776(
                                effectAssetData,
                                v8->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
    _4__this = v4->fields.__4__this;
    v11 = Object_object__50213776;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v11,
                                                           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.recollectionQuestSpotEffect, (int32_t)this, v12, v13);
    v14 = v4->fields.__4__this;
    if ( !v14 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v14->fields.recollectionQuestSpotEffect,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v15 = v4->fields.__4__this;
      if ( v15 )
      {
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v15->fields.mNoticeNumber;
        if ( this )
        {
          recollectionQuestSpotEffect = v15->fields.recollectionQuestSpotEffect;
          this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
            GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0LL);
            v18 = v4->fields.__4__this;
            if ( v18 )
            {
              GameObjectExtensions__ResetLocalScale(v18->fields.recollectionQuestSpotEffect, 0LL);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_1BC3264(this, effectAssetData);
    }
  }
LABEL_16:
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_19;
  v19->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = v4->fields.endCallback;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
}