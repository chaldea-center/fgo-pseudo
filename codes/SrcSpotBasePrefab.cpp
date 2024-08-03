void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F9927 & 1) == 0 )
  {
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_18732/*"ef_badge_glow"*/, v4);
    sub_1B640C8(&StringLiteral_5821/*"Effect/RecollectionQuest"*/, v5);
    byte_49F9927 = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_5821/*"Effect/RecollectionQuest"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SrcSpotBasePrefab_TypeInfo->static_fields,
    StringLiteral_5821/*"Effect/RecollectionQuest"*/,
    v2,
    v3);
  v6 = StringLiteral_18732/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18732/*"ef_badge_glow"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME, v6, v8, v9);
  *(_QWORD *)&SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0x42C800003E99999ALL;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F9926 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_23279/*"smfSpotBtn_Click"*/, v6);
    byte_49F9926 = 1;
  }
  v7 = StringLiteral_23279/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23279/*"smfSpotBtn_Click"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.msSmfNameForBtnClick, v7, v2, v3);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49F7116 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlases, (int32_t)v12, v13, v14);
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
  Il2CppObject *Component_object; // x0
  const MethodInfo_35D202C *v13; // x2
  bool v14; // zf
  UnityEngine_BoxCollider_o *v15; // x20
  int v16; // s0
  UnityEngine_Vector2_o Value; // kr00_8
  int v20; // s2
  System_Nullable_Vector3__o v21; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector2__o v22; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v23; // 0:x0.12
  System_Nullable_Vector3__o v24; // 0:x0.16

  hasValue = centerPosition.fields.hasValue;
  v5 = size.fields.hasValue;
  v21 = centerPosition;
  v22 = size;
  if ( (byte_49F991B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, *(_QWORD *)&size.fields.hasValue);
    sub_1B640C8(&Method_System_Nullable_Vector2__get_HasValue__, v7);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_HasValue__, v8);
    sub_1B640C8(&Method_System_Nullable_Vector2__get_Value__, v9);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_Value__, v10);
    byte_49F991B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v14 = !hasValue;
  v15 = (UnityEngine_BoxCollider_o *)Component_object;
  if ( !v14 )
  {
    *(_QWORD *)&v24.fields.hasValue = &v21;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v16 = System_Nullable_Vector3___get_Value(v24, v13);
    if ( !v15 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
    v5 = v22.fields.hasValue;
  }
  if ( !v5 )
    return;
  *(_QWORD *)&v23.fields.hasValue = &v22;
  LODWORD(v23.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
  Value = System_Nullable_Vector2___get_Value(v23, (const MethodInfo_35D1C08 *)v13);
  if ( !v15 )
LABEL_11:
    sub_1B64324(gameObject);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_T__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  CStateManager_T__o *mFSM; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  CStateManager_T__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  CStateManager_T__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x22
  CStateManager_T__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x22
  CStateManager_T__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x22
  CStateManager_T__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *v41; // x21
  const MethodInfo *v42; // x3
  MapModelManager_c *v43; // x0

  if ( (byte_49F9911 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SrcSpotBasePrefab___ctor__, method);
    sub_1B640C8(&Method_CStateManager_SrcSpotBasePrefab__add__, v4);
    sub_1B640C8(&CStateManager_SrcSpotBasePrefab__TypeInfo, v5);
    sub_1B640C8(&MapModelManager_TypeInfo, v6);
    sub_1B640C8(&SrcSpotBasePrefab_StateMapMain_TypeInfo, v7);
    sub_1B640C8(&SrcSpotBasePrefab_StateNone_TypeInfo, v8);
    sub_1B640C8(&SrcSpotBasePrefab_StateQaaChange_TypeInfo, v9);
    sub_1B640C8(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v10);
    sub_1B640C8(&SrcSpotBasePrefab_StateQaaGray_TypeInfo, v11);
    sub_1B640C8(&SrcSpotBasePrefab_StateQaaHide_TypeInfo, v12);
    byte_49F9911 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v14 = (CStateManager_T__o *)sub_1B64314(CStateManager_SrcSpotBasePrefab__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v14,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_30612BC *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v14, v15, v16);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v20 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateNone_TypeInfo, v18, v19);
    System_Object___ctor(v20, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v20,
      (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v25 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateMapMain_TypeInfo, v23, v24);
    System_Object___ctor(v25, 0LL);
    if ( !v22 )
      goto LABEL_14;
    CStateManager_object___add(
      v22,
      1,
      (IState_T__o *)v25,
      (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v26 = (CStateManager_T__o *)*p_mFSM;
    v29 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateQaaHide_TypeInfo, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !v26 )
      goto LABEL_14;
    CStateManager_object___add(
      v26,
      2,
      (IState_T__o *)v29,
      (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v30 = (CStateManager_T__o *)*p_mFSM;
    v33 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateQaaGray_TypeInfo, v31, v32);
    System_Object___ctor(v33, 0LL);
    if ( !v30 )
      goto LABEL_14;
    CStateManager_object___add(
      v30,
      3,
      (IState_T__o *)v33,
      (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v34 = (CStateManager_T__o *)*p_mFSM;
    v37 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateQaaDisp_TypeInfo, v35, v36);
    System_Object___ctor(v37, 0LL);
    if ( !v34
      || (CStateManager_object___add(
            v34,
            4,
            (IState_T__o *)v37,
            (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v38 = (CStateManager_T__o *)*p_mFSM,
          v41 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab_StateQaaChange_TypeInfo, v39, v40),
          System_Object___ctor(v41, 0LL),
          !v38) )
    {
LABEL_14:
      sub_1B64324(v21);
    }
    CStateManager_object___add(
      v38,
      5,
      (IState_T__o *)v41,
      (const MethodInfo_3061364 *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v42);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v43 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v43 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v43->static_fields->LAYER_LOWER_ID;
}


bool __fastcall SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  System_Collections_Generic_List_int__o *AvailableQuestIdList; // x0
  bool v9; // w19
  int32_t current; // w20
  Il2CppObject *Instance; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  QuestEntity_o *Mine; // x0
  int v14; // w20
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F9924 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v5);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_49F9924 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      AvailableQuestIdList,
      (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v17,
             (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v9 )
        break;
      current = v17.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1B64324(0LL);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1B64324(0LL);
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
      (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v9 && v14 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_49F990F & 1) == 0 )
  {
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, method);
    byte_49F990F = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__DestroyEffect_34327968(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_34327968(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  ServantStatusBattleListViewItem_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = spot;
  if ( (byte_49F9910 & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9910 = 1;
  }
  if ( !v2 )
    sub_1B64324(spot);
  mParticleSystemObj = (UnityEngine_Object_o *)v2->fields.mParticleSystemObj;
  p_mParticleSystemObj = (ServantStatusBattleListViewItem_o *)&v2->fields.mParticleSystemObj;
  v4 = mParticleSystemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1B6406C(p_mParticleSystemObj, 0, v7, v8);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1B64324(this);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  v5 = id;
  if ( (byte_49F990E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12841/*"Spot_"*/, method);
    sub_1B640C8(&StringLiteral_1222/*"00"*/, v2);
    byte_49F990E = 1;
  }
  v3 = System_Int32__ToString_62180668((int32_t)&v5, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_12841/*"Spot_"*/, v3, 0LL);
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
  __int64 v11; // x1
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s11
  float v16; // s9
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F991D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F991D = 1;
  }
  v3 = 1.0;
  if ( this->fields._IsMapModel_k__BackingField )
  {
    MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v5 )
        sub_1B64324(0LL);
      gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v19 = GameObjectExtensions__GetLocalPosition(v10, 0LL);
      v12 = v19.fields.x;
      v13 = v19.fields.y;
      v14 = v19.fields.z;
      if ( !byte_49F710F )
      {
        sub_1B640C8(&System_Math_TypeInfo, v11);
        byte_49F710F = 1;
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
  if ( (byte_49F991E & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1B640C8(&Method_CStateManager_SrcSpotBasePrefab__getState__, method);
    byte_49F991E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(this);
  return mFSM->fields.m_state;
}


bool __fastcall SrcSpotBasePrefab__IsDisp(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s9
  float y; // s8
  UnityEngine_GameObject_o *mcSpotSprite; // x0
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
    sub_1B64324(mcSpotSprite);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *gameObject; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  SrcSpotBasePrefab_c *v19; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_49F9922 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, endCallback);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1B640C8(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__, v8);
    sub_1B640C8(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, v9);
    byte_49F9922 = 1;
  }
  v10 = sub_1B64314(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo, endCallback, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endCallback, v14, v15);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1B64324(mNoticeNumber);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v19 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v19 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v19->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v10,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v21, 1, 0LL);
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
  void *mMapCtrl_SpotInfo; // x0
  int v19; // w8
  UnityEngine_GameObject_o *v20; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  const MethodInfo *v22; // x1
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v24; // x0
  System_String_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  CommonUI_o *v28; // x21
  SrcSpotBasePrefab___c_c *v29; // x8
  System_Action_o *_9__75_0; // x23
  System_String_o *v31; // x22
  Il2CppObject *v32; // x24
  struct SrcSpotBasePrefab___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x1

  if ( (byte_49F9917 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isPlaySe);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    sub_1B640C8(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, v9);
    sub_1B640C8(&SrcSpotBasePrefab___c_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49F9917 = 1;
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
      v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      v16 = SrcSpotBasePrefab_TypeInfo;
      v17 = v15;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
        v16 = SrcSpotBasePrefab_TypeInfo;
      }
      v16->static_fields->clickTime = v17;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v19 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v19 != 2 )
      {
        if ( v19 != 1 )
          return;
        v20 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v20 )
        {
          UnityEngine_GameObject__SendMessage_69109108(
            v20,
            msSmfNameForBtnClick,
            (Il2CppObject *)mMapCtrl_SpotInfo,
            0LL);
          if ( isPlaySe )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlaySystemSE(0, v22);
          }
          miSpotID = this->fields.miSpotID;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F904E )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v22);
            byte_49F904E = 1;
          }
          v24 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v24 = TerminalPramsManager_TypeInfo;
          }
          v24->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_40:
        sub_1B64324(mMapCtrl_SpotInfo);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v25 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v25, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v29 = SrcSpotBasePrefab___c_TypeInfo;
      if ( !SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo);
        v29 = SrcSpotBasePrefab___c_TypeInfo;
      }
      _9__75_0 = v29->static_fields->__9__75_0;
      v31 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = SrcSpotBasePrefab___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v29->static_fields->__9;
        _9__75_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
        System_Action___ctor(_9__75_0, v32, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v34, v35);
      }
      if ( !v28 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v28, v31, v25, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__PlaySystemSE(0, v36);
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

  if ( (byte_49F991A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnabled);
    byte_49F991A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1B64324(gameObject);
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
    sub_1B64324(mcSpotSprite);
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
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w20

  if ( (byte_49F9925 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F9925 = 1;
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
      sub_1B64324(gameObject);
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

  this->fields.mMapCtrl_SpotInfo = spotInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_SpotInfo,
    (int32_t)spotInfo,
    (int32_t)method,
    v3);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_34336908(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_34336908(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_34336908(
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
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v23; // s1
  System_Action_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  EasingObject_o *v27; // x21
  System_Action_o *v28; // x22

  if ( (byte_49F9921 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isActive);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B640C8(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__, v8);
    sub_1B640C8(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__, v9);
    sub_1B640C8(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, v10);
    byte_49F9921 = 1;
  }
  v11 = sub_1B64314(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo, isActive, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 32) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)Component_object, v17, v18);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v23 = 0.5;
  if ( isActive )
    v23 = 1.0;
  *(float *)(v11 + 24) = v23;
  *(float *)(v11 + 28) = r;
  v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v27 = *(EasingObject_o **)(v11 + 32);
    v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v11,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v27 )
    {
      EasingObject__Play(v27, time, v28, v24, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(v12);
  }
  ActionExtensions__Call(v24, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_34336464(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_34336464(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_34336464(
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
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x19
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9920 & 1) == 0 )
  {
    sub_1B640C8(&Method_UITweener_Begin_TweenScale___, isDisp);
    sub_1B640C8(&StringLiteral_2526/*"AtScaleAnimEnd"*/, v7);
    byte_49F9920 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
      byte_49F7111 = 1;
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
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
      byte_49F7111 = 1;
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
    v26.fields.x = p_selfScale->zeroVector.fields.x;
    v26.fields.y = *p_y;
    v26.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v26, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v19 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_2EEADCC *)Method_UITweener_Begin_TweenScale___);
    if ( !v19 )
      sub_1B64324(0LL);
    v22 = v19;
    v19[8].klass = v13;
    *(float *)&v19[8].monitor = z;
    *((float *)&v19[8].monitor + 1) = x;
    *(float *)&v19[9].klass = v17;
    *((float *)&v19[9].klass + 1) = v18;
    LODWORD(v19[2].klass) = 2;
    v19[5].klass = (Il2CppClass *)gameObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19[5], (int32_t)gameObject, v20, v21);
    v23 = StringLiteral_2526/*"AtScaleAnimEnd"*/;
    v22[5].monitor = (void *)StringLiteral_2526/*"AtScaleAnimEnd"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22[5].monitor, v23, v24, v25);
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

  if ( (byte_49F9923 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isActive);
    byte_49F9923 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v6 = this->fields.recollectionQuestSpotEffect;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_49F7116 )
  {
    v6 = scaleVal;
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    scaleVal = v6;
    byte_49F7116 = 1;
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
  if ( (byte_49F9915 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B640C8(&StringLiteral_20392/*"img_spotname_bg"*/, sp);
    byte_49F9915 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20392/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20392/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1B64324(atlases);
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
  __int64 v27; // x1
  System_String_o *v28; // x21
  __int64 v29; // x8
  __int64 v30; // x8
  Il2CppObject *Object_object__48347676; // x22
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x8
  __int64 v35; // x8
  AssetData_o *v36; // x0
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x21
  UnityEngine_Component_o *v39; // x0
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF

  v10 = atlases;
  v41 = spotImageId;
  if ( (byte_49F9914 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, sp);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_8835/*"MapSpotEffect_{0}"*/, v15);
    sub_1B640C8(&StringLiteral_1226/*"000000"*/, v16);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B640C8(&StringLiteral_23333/*"spot_"*/, v17);
    byte_49F9914 = 1;
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
    v19 = System_Int32__ToString_62180668((int32_t)&v41, (System_String_o *)StringLiteral_1226/*"000000"*/, 0LL);
    v20 = System_String__Concat_61375396((System_String_o *)StringLiteral_23333/*"spot_"*/, v19, 0LL);
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
        GameObjectExtensions__SetLocalPosition_33375460(
          (UnityEngine_GameObject_o *)atlases,
          (float)imageOfsX,
          (float)-imageOfsY + innerOfsY,
          0LL);
        return;
      }
      goto LABEL_47;
    }
    v40 = v41;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v28 = System_String__Format((System_String_o *)StringLiteral_8835/*"MapSpotEffect_{0}"*/, v26, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
      byte_49F76BD = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v29 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v29 )
      goto LABEL_47;
    v30 = *(_QWORD *)(v29 + 264);
    if ( !v30 )
      goto LABEL_47;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v30 + 240);
    if ( !atlases )
      goto LABEL_47;
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                (AssetData_o *)atlases,
                                v28,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v33 = Object_object__48347676;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v32);
      byte_49F76BD = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v34 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v34 )
      goto LABEL_47;
    v35 = *(_QWORD *)(v34 + 264);
    if ( !v35 )
      goto LABEL_47;
    v36 = *(AssetData_o **)(v35 + 248);
    if ( v36 )
    {
      v37 = AssetData__GetObject_object__48347676(
              v36,
              v28,
              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v33 = v37;
LABEL_43:
        v38 = UnityEngine_Object__Instantiate_object_(
                v33,
                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v39 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0LL);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v38, v39, 0LL);
        if ( spotEnt )
        {
          imageOfsY = spotEnt->fields.imageOfsY;
          imageOfsX = spotEnt->fields.imageOfsX;
          atlases = (System_Collections_Generic_List_UIAtlas__o *)v38;
          goto LABEL_45;
        }
LABEL_47:
        sub_1B64324(atlases);
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
  if ( (byte_49F9913 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, sp);
    byte_49F9913 = 1;
  }
  if ( !spotEnt )
    sub_1B64324(atlases);
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
  CStateManager_T__o *mFSM; // x0

  if ( (byte_49F991F & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SrcSpotBasePrefab__setState__, *(_QWORD *)&state);
    byte_49F991F = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mStateEndAct,
    (int32_t)endAct,
    (int32_t)endAct,
    (int32_t)method);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1B64324(this);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_34335320(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_34335320(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_49F9919 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    byte_49F9919 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1B64324(gameObject);
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
  int32_t v8; // w3

  if ( (byte_49F991C & 1) == 0 )
  {
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___, cam);
    byte_49F991C = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1B64324(mSpotNameLabel);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(mSpotNameLabel + 32), (int32_t)cam, v7, v8);
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

  if ( (byte_49F9912 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_SrcSpotBasePrefab__update__, method);
    byte_49F9912 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30613CC *)Method_CStateManager_SrcSpotBasePrefab__update__);
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
  __int64 mMapCtrl_SpotInfo; // x0
  SpotEntity_o *v16; // x23
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v18; // x20
  bool IsEnabledDispSpot; // w25
  bool *p_IsMapModel_k__BackingField; // x27
  char v21; // w21
  struct MapControl_SpotInfo_o *v22; // x8
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x24
  const MethodInfo *v29; // x4
  int spotChangeImgId; // w24
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *v32; // x26
  UnityEngine_Object_o *mSpotNameLabel; // x24
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *v35; // x24
  struct MapControl_SpotInfo_o *v36; // x8
  int32_t dispType; // w8
  bool HasFlag; // w25
  char v40; // w8
  const MethodInfo *v41; // x4
  System_Collections_Generic_List_UIAtlas__o *v42; // x26
  UILabel_o *v43; // x23
  UISprite_o *mcSpotNameSp; // x25
  System_String_o *mSpotNameStr; // x24
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x23
  UnityEngine_Object_o *mNoticeNumber; // x24
  Il2CppObject *mNoticeNumberPrefab; // x24
  Il2CppObject *v51; // x24
  Il2CppObject *Component_object; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct MapControl_SpotInfo_o *v55; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x23
  __int64 v57; // x1
  System_Action_o *v58; // x23
  const MethodInfo *v59; // x2
  bool v60; // w1
  char v61; // w23
  __int64 v62; // x1
  __int64 v63; // x8
  struct MapControl_SpotInfo_o *v64; // x8
  __int64 v65; // x1
  UnityEngine_Transform_o *v66; // x23
  struct UISprite_o *v67; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v71; // d9
  float32x2_t v77; // d4
  unsigned __int64 v78; // d0
  int v79; // s1
  __int64 v80; // x1
  struct MapControl_SpotInfo_o *v81; // x8
  int32_t spotId; // w22
  _BOOL4 v83; // w24
  int v84; // w25
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9916 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isForce);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, v10);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v11);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_12156/*"SPOT_FREE_QUEST_LAST_TIME"*/, v14);
    byte_49F9916 = 1;
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
    v16 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v18 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      mMapCtrl_SpotInfo = SpotLayerEntity__IsEnabledSpot(v18, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v21 = mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v22 = this->fields.mMapCtrl_SpotInfo;
        if ( !v22 )
          goto LABEL_120;
        if ( v22->fields.dispType )
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
            if ( !byte_49F7111 )
            {
              sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
              byte_49F7111 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v87.fields.x = p_selfScale->zeroVector.fields.x;
          v87.fields.y = *p_y;
          v87.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v87, 0LL);
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
    mMapCtrl_SpotInfo = UnityEngine_Object__op_Inequality(0LL, mcSpotSprite, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v16 )
          goto LABEL_120;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v16, 0LL);
      }
      atlases = this->fields.atlases;
      v32 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      SrcSpotBasePrefab__SetSpotUI(atlases, v32, v16, spotChangeImgId, -32.0, v29);
    }
    if ( v18 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v21 & 1, 0LL);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !v16 )
      goto LABEL_120;
    v35 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = SpotEntity__HasFlag(v16, 8, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_44;
    v36 = this->fields.mMapCtrl_SpotInfo;
    if ( !v36 )
      goto LABEL_120;
    dispType = v36->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v16, 16, 0LL);
      goto LABEL_45;
    }
    if ( dispType != 1 )
LABEL_44:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_45:
    mMapCtrl_SpotInfo = SpotEntity__IsOverRideName(v16, &spotName, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = (mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v35 )
      goto LABEL_120;
    if ( !this->fields._IsMapModel_k__BackingField || v18 == 0LL )
      v40 = -1;
    else
      v40 = v21;
    UnityEngine_GameObject__SetActive(v35, v40 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_33375460(
      v35,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v42 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v43 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    SrcSpotBasePrefab__SetSpotNameUI(v42, mcSpotNameSp, v43, mSpotNameStr, v41);
LABEL_57:
    if ( SrcSpotBasePrefab__GetState(this, v34) == 1 )
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
        v51 = UnityEngine_Object__Instantiate_object_(
                mNoticeNumberPrefab,
                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v51, (UnityEngine_Component_o *)this, 0LL);
        if ( !v51 )
          goto LABEL_120;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v51,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber,
          (int32_t)Component_object,
          v53,
          v54);
      }
      mMapCtrl_SpotInfo = (__int64)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_120;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v55 = this->fields.mMapCtrl_SpotInfo;
      if ( !v55 )
        goto LABEL_120;
      if ( v55->fields.dispType != 1 )
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
    if ( this->fields.mMapCtrl_SpotInfo && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, v46) )
    {
      recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
      {
        v58 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v57, v47);
        System_Action___ctor(v58, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v58, v59);
        goto LABEL_79;
      }
      v60 = 1;
    }
    else
    {
      v60 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v60, v47);
LABEL_79:
    mMapCtrl_SpotInfo = (__int64)this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_120;
    v61 = mMapCtrl_SpotInfo;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v61 & 1, 0LL);
    if ( (v61 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v62);
        byte_49F76BD = 1;
      }
      mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v63 = **(_QWORD **)(mMapCtrl_SpotInfo + 184);
      if ( !v63 )
        goto LABEL_120;
      mMapCtrl_SpotInfo = *(_QWORD *)(v63 + 264);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v64 = this->fields.mMapCtrl_SpotInfo;
    if ( v64 )
    {
      mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v64->fields.freeQuestCount > 0) & (v21 | (v18 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                         0LL);
          v66 = (UnityEngine_Transform_o *)mMapCtrl_SpotInfo;
          if ( !byte_49F7118 )
          {
            mMapCtrl_SpotInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v65);
            byte_49F7118 = 1;
          }
          v67 = this->fields.mcSpotNameSp;
          if ( v67 )
          {
            mWidth = v67->fields.mWidth;
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            z = static_fields->rightVector.fields.z;
            v71.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
            if ( !byte_49F7119 )
            {
              mMapCtrl_SpotInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v65);
              byte_49F7119 = 1;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            }
            if ( v66 )
            {
              __asm
              {
                FMOV            V3.2S, #-26.0
                FMOV            V2.2S, #-15.0
              }
              v77.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
              _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                             + (float)(static_fields->upVector.fields.z * -15.0);
              v78 = vadd_f32(
                      vadd_f32(
                        vmul_f32(vmul_n_f32(v71, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                        vmul_f32(v71, _D3)),
                      v77).n64_u64[0];
              v79 = HIDWORD(v78);
              UnityEngine_Transform__set_localPosition(v66, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
              v81 = this->fields.mMapCtrl_SpotInfo;
              if ( v81 )
              {
                spotId = v81->fields.spotId;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_49F9041 )
                {
                  sub_1B640C8(&TerminalPramsManager_TypeInfo, v80);
                  byte_49F9041 = 1;
                }
                mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( this->fields.loopLastTime )
                {
                  v83 = *p_IsMapModel_k__BackingField;
                  v84 = *(_DWORD *)(*(_QWORD *)(mMapCtrl_SpotInfo + 184) + 60LL);
                  mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v84) & (v21 | (v18 == 0LL || !v83)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    mMapCtrl_SpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
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
    sub_1B64324(mMapCtrl_SpotInfo);
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
  struct System_Collections_Generic_List_UIAtlas__o **p_atlases; // x19

  this->fields.atlases = atlases;
  p_atlases = &this->fields.atlases;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlases, (int32_t)atlases, (int32_t)method, v3);
  *((_BYTE *)p_atlases - 72) = 1;
}


void __fastcall SrcSpotBasePrefab__mfSetCommopn(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *rootGameObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mcRootGobjP = rootGameObject;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.mcRootGobjP,
    (int32_t)rootGameObject,
    (int32_t)method,
    v3);
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
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v17; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  Il2CppObject *Component_object; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  SrcSpotBasePrefab_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x21

  if ( (byte_49F9918 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&qOfsX);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v13);
    byte_49F9918 = 1;
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
    v17 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v17, (UnityEngine_Component_o *)this, 0LL);
    if ( !v17 )
LABEL_17:
      sub_1B64324(mcSpotNextSp);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v17,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v20, v21);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_33375460(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v23 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v24 = SrcSpotBasePrefab_TypeInfo;
  v25 = v23;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v24 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_33375460(
    v25,
    (float)nOfsX,
    (float)(v24->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mSpotNameStr, (int32_t)name, offsetX, offsetY);
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

  this->fields._MapModelCamera_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SrcSpotBasePrefab__set_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MapModelEffectRootObj_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._MapModelEffectRootObj_k__BackingField,
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_Action_o *mStateEndAct; // x19

  if ( (byte_49F992B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__, v4);
    sub_1B640C8(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, v5);
    byte_49F992B = 1;
  }
  v6 = sub_1B64314(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo, that, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_12;
  *(_QWORD *)(v6 + 16) = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)that, v8, v9);
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
      SrcSpotBasePrefab__SetQaaScaleAnim_34336464(v7, 0, 0.5, v10);
      v14 = *(_QWORD *)(v6 + 16);
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v6,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 216) = v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 216), (int32_t)v17, v18, v19);
        return;
      }
LABEL_12:
      sub_1B64324(v7);
    }
  }
  else
  {
    mStateEndAct = v7->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v7, 1, 0LL, v11);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F992C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaEnd__, v4);
    byte_49F992C = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_34336464(that, 1, 0.5, v6),
        v7 = this->fields.that,
        v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(v10, (Il2CppObject *)v7, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v7) )
  {
    sub_1B64324(that);
  }
  v7->fields.mAfterScaleAnim = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->fields.mAfterScaleAnim, (int32_t)v10, v11, v12);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Action_o *mStateEndAct; // x20
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  __int64 v27; // x1
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v30; // x0
  int v31; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v37; // x1
  float ScaleOnMapModel; // s0
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F992A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaEnd__, v6);
    sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__, v7);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    byte_49F992A = 1;
  }
  v9 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlayCommonSe(v10, 17, 0LL);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_34336908(that, 1, 0.5, v13);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v14);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v12);
      SrcSpotBasePrefab__SetQaaScaleAnim_34336464(that, 1, 0.5, v17);
      v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v20, v21, v22);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v12);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v25 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v26 = (UnityEngine_GameObject_o *)v25;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_33381176(v26, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_33375564(v26, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v26, 0LL);
    GameObjectExtensions__ResetLocalScale(v26, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_33381176(
    (UnityEngine_GameObject_o *)v25,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
    byte_49F76BD = 1;
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
        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v31 = GameObjectExtensions__GetLocalPosition(v30, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1B64324(v11);
  }
  v42 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v31, 0LL);
  GameObjectExtensions__SetLocalPosition(v26, v42, 0LL);
  GameObjectExtensions__ResetLocalRotation(v26, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v37);
  v43.fields.y = y * ScaleOnMapModel;
  v43.fields.z = z * ScaleOnMapModel;
  v43.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v26, v43, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&that->fields.mParticleSystemObj, (int32_t)v26, v39, v40);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_49F9929 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_49F9929 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1B64324(this);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_34336908(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_34336464(that, 1, 0.5, v8);
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(v11, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v11, v12, v13);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_49F9928 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1B640C8(&Method_SrcSpotBasePrefab_StateQaaEnd__, v5);
    byte_49F9928 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1B64324(this);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_34336464(that, 0, 0.5, method);
      v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(v10, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v10;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v10, v11, v12);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F992D & 1) == 0 )
  {
    sub_1B640C8(&SrcSpotBasePrefab___c_TypeInfo, v1);
    byte_49F992D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SrcSpotBasePrefab___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(this);
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
  Il2CppObject *Object_object__48347676; // x0
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct SrcSpotBasePrefab_o *v14; // x8
  struct SrcSpotBasePrefab_o *v15; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v18; // x8
  struct SrcSpotBasePrefab_o *v19; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_49F992E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, effectAssetData);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v7);
    byte_49F992E = 1;
  }
  if ( effectAssetData )
  {
    v8 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v8 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                effectAssetData,
                                v8->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    _4__this = v4->fields.__4__this;
    v11 = Object_object__48347676;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v11,
                                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int32_t)this,
      v12,
      v13);
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
      sub_1B64324(this);
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