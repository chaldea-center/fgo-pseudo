void __fastcall SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5870C & 1) == 0 )
  {
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&StringLiteral_18805/*"ef_badge_glow"*/);
    sub_1B885B0(&StringLiteral_5847/*"Effect/RecollectionQuest"*/);
    byte_4A5870C = 1;
  }
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_5847/*"Effect/RecollectionQuest"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SrcSpotBasePrefab_TypeInfo->static_fields,
    StringLiteral_5847/*"Effect/RecollectionQuest"*/,
    v1,
    v2);
  v3 = StringLiteral_18805/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_18805/*"ef_badge_glow"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME, v3, v5, v6);
  *(_QWORD *)&SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0x42C800003E99999ALL;
}


void __fastcall SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5870B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1B885B0(&StringLiteral_23377/*"smfSpotBtn_Click"*/);
    byte_4A5870B = 1;
  }
  v5 = StringLiteral_23377/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_23377/*"smfSpotBtn_Click"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.msSmfNameForBtnClick, v5, v2, v3);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlases, (int32_t)v8, v9, v10);
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
  const MethodInfo_361E564 *v10; // x2
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
  if ( (byte_4A58700 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Vector2__get_Value__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_Value__);
    byte_4A58700 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
  Value = System_Nullable_Vector2___get_Value(v20, (const MethodInfo_361E140 *)v10);
  if ( !v12 )
LABEL_11:
    sub_1B8880C(gameObject, v8);
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
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x20
  Il2CppObject *v20; // x21
  const MethodInfo *v21; // x3
  MapModelManager_c *v22; // x0

  if ( (byte_4A586F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_SrcSpotBasePrefab___ctor__);
    sub_1B885B0(&Method_CStateManager_SrcSpotBasePrefab__add__);
    sub_1B885B0(&CStateManager_SrcSpotBasePrefab__TypeInfo);
    sub_1B885B0(&MapModelManager_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateMapMain_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateNone_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateQaaChange_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    byte_4A586F6 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_30AAD34 *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFSM, (int32_t)v4, v5, v6);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v8 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v11 = (CStateManager_T__o *)*p_mFSM;
    v12 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_14;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v13 = (CStateManager_T__o *)*p_mFSM;
    v14 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_14;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v15 = (CStateManager_T__o *)*p_mFSM;
    v16 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v15 )
      goto LABEL_14;
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v17 = (CStateManager_T__o *)*p_mFSM;
    v18 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    System_Object___ctor(v18, 0LL);
    if ( !v17
      || (CStateManager_object___add(
            v17,
            4,
            (IState_T__o *)v18,
            (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v19 = (CStateManager_T__o *)*p_mFSM,
          v20 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          System_Object___ctor(v20, 0LL),
          !v19) )
    {
LABEL_14:
      sub_1B8880C(v9, v10);
    }
    CStateManager_object___add(
      v19,
      5,
      (IState_T__o *)v20,
      (const MethodInfo_30AADDC *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0LL, v21);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v22 = MapModelManager_TypeInfo;
  if ( !MapModelManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo);
    v22 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v22->static_fields->LAYER_LOWER_ID;
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

  if ( (byte_4A58709 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A58709 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0LL);
    if ( !AvailableQuestIdList )
      sub_1B8880C(0LL, v5);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      AvailableQuestIdList,
      (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v17,
             (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v6 )
        break;
      current = v17.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v9);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0LL);
      if ( !QuestInfo )
        sub_1B8880C(0LL, v11);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0LL);
      if ( !Mine )
        sub_1B8880C(0LL, v13);
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
      (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    LOBYTE(mMapCtrl_SpotInfo) = v6 && v14 == 5;
  }
  return (char)mMapCtrl_SpotInfo;
}


void __fastcall SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  if ( (byte_4A586F4 & 1) == 0 )
  {
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4A586F4 = 1;
  }
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  SrcSpotBasePrefab__DestroyEffect_34708304(this, method);
}


void __fastcall SrcSpotBasePrefab__DestroyEffect_34708304(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  ServantStatusBattleListViewItem_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = spot;
  if ( (byte_4A586F5 & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A586F5 = 1;
  }
  if ( !v2 )
    sub_1B8880C(spot, method);
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
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_mParticleSystemObj->klass = 0LL;
    sub_1B88554(p_mParticleSystemObj, 0, v7, v8);
  }
}


float __fastcall SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_1B8880C(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *__fastcall SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_4A586F3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12905/*"Spot_"*/);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    byte_4A586F3 = 1;
  }
  v2 = System_Int32__ToString_62512312((int32_t)&v4, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_12905/*"Spot_"*/, v2, 0LL);
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

  if ( (byte_4A58702 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58702 = 1;
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
        sub_1B8880C(0LL, v5);
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
      if ( !byte_4A55CDF )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A55CDF = 1;
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
  if ( (byte_4A58703 & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_1B885B0(&Method_CStateManager_SrcSpotBasePrefab__getState__);
    byte_4A58703 = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(this, method);
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
    sub_1B8880C(mcSpotSprite, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *gameObject; // x21
  SrcSpotBasePrefab_c *v13; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x21

  if ( (byte_4A58707 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__);
    sub_1B885B0(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
    byte_4A58707 = 1;
  }
  v5 = sub_1B887FC(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)endCallback, v10, v11);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_1B8880C(mNoticeNumber, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v13 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v13 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v13->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v15, 1, 0LL);
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
  int32_t v26; // w2
  int32_t v27; // w3
  const MethodInfo *v28; // x1

  if ( (byte_4A586FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__);
    sub_1B885B0(&SrcSpotBasePrefab___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A586FC = 1;
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
          UnityEngine_GameObject__SendMessage_69440752(
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
          if ( !byte_4A57DC9 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC9 = 1;
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
        sub_1B8880C(mMapCtrl_SpotInfo, v8);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v19 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v19, 0LL) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        _9__75_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v24, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0LL);
        static_fields = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        static_fields->__9__75_0 = _9__75_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v26, v27);
      }
      if ( !v20 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v20, v23, v19, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      if ( isPlaySe )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__PlaySystemSE(0, v28);
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

  if ( (byte_4A586FF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4A586FF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1B8880C(gameObject, v6);
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
    sub_1B8880C(mcSpotSprite, method);
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

  if ( (byte_4A5870A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5870A = 1;
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
      sub_1B8880C(gameObject, v7);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mMapCtrl_SpotInfo,
    (int32_t)spotInfo,
    (int32_t)method,
    v3);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_34717592(this, isActive, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_34717592(this, isActive, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaColorAnim_34717592(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UISprite_o *mcSpotSprite; // x8
  float r; // s0
  float v18; // s1
  System_Action_o *v19; // x19
  EasingObject_o *v20; // x21
  System_Action_o *v21; // x22

  if ( (byte_4A58706 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__);
    sub_1B885B0(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__);
    sub_1B885B0(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
    byte_4A58706 = 1;
  }
  v7 = sub_1B887FC(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 32) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)Component_object, v14, v15);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  r = mcSpotSprite->fields.mColor.fields.r;
  v18 = 0.5;
  if ( isActive )
    v18 = 1.0;
  *(float *)(v7 + 24) = v18;
  *(float *)(v7 + 28) = r;
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0LL);
  if ( time > 0.0 )
  {
    v20 = *(EasingObject_o **)(v7 + 32);
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v7,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0LL);
    if ( v20 )
    {
      EasingObject__Play(v20, time, v21, v19, 0.0, 17, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(v8, v9);
  }
  ActionExtensions__Call(v19, 0LL);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_34717148(this, isDisp, 0.5, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnimQuick(
        SrcSpotBasePrefab_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_34717148(this, isDisp, 0.0, method);
}


void __fastcall SrcSpotBasePrefab__SetQaaScaleAnim_34717148(
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
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x19
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A58705 & 1) == 0 )
  {
    sub_1B885B0(&Method_UITweener_Begin_TweenScale___);
    sub_1B885B0(&StringLiteral_2529/*"AtScaleAnimEnd"*/);
    byte_4A58705 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( isDisp )
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
    v25.fields.x = p_selfScale->zeroVector.fields.x;
    v25.fields.y = *p_y;
    v25.fields.z = *p_z;
    GameObjectExtensions__SetLocalScale(gameObject, v25, 0LL);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0LL);
  }
  else
  {
    v17 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenScale___);
    if ( !v17 )
      sub_1B8880C(0LL, v18);
    v21 = v17;
    v17[8].klass = v11;
    *(float *)&v17[8].monitor = z;
    *((float *)&v17[8].monitor + 1) = x;
    *(float *)&v17[9].klass = v15;
    *((float *)&v17[9].klass + 1) = v16;
    LODWORD(v17[2].klass) = 2;
    v17[5].klass = (Il2CppClass *)gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17[5], (int32_t)gameObject, v19, v20);
    v22 = StringLiteral_2529/*"AtScaleAnimEnd"*/;
    v21[5].monitor = (void *)StringLiteral_2529/*"AtScaleAnimEnd"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v21[5].monitor, v22, v23, v24);
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

  if ( (byte_4A58708 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58708 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0LL);
  }
}


void __fastcall SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_4A55CE6 )
  {
    v6 = scaleVal;
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    scaleVal = v6;
    byte_4A55CE6 = 1;
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
  if ( (byte_4A586FA & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B885B0(&StringLiteral_20473/*"img_spotname_bg"*/);
    byte_4A586FA = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0LL),
        v9 = (System_String_o *)StringLiteral_20473/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_20473/*"img_spotname_bg"*/,
                                                                  0LL),
        !sp) )
  {
    sub_1B8880C(atlases, sp);
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
  Il2CppObject *Object_object__48635516; // x22
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
  if ( (byte_4A586F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_8877/*"MapSpotEffect_{0}"*/);
    sub_1B885B0(&StringLiteral_1225/*"000000"*/);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B885B0(&StringLiteral_23431/*"spot_"*/);
    byte_4A586F9 = 1;
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
    v12 = System_Int32__ToString_62512312((int32_t)&v35, (System_String_o *)StringLiteral_1225/*"000000"*/, 0LL);
    v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_23431/*"spot_"*/, v12, 0LL);
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
        GameObjectExtensions__SetLocalPosition_33724120(
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
    v23 = System_String__Format((System_String_o *)StringLiteral_8877/*"MapSpotEffect_{0}"*/, v22, 0LL);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v25 + 240);
    if ( !atlases )
      goto LABEL_47;
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                (AssetData_o *)atlases,
                                v23,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = Object_object__48635516;
      goto LABEL_43;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    v30 = *(AssetData_o **)(v29 + 248);
    if ( v30 )
    {
      v31 = AssetData__GetObject_object__48635516(
              v30,
              v23,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        sub_1B8880C(atlases, sp);
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
  if ( (byte_4A586F8 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4A586F8 = 1;
  }
  if ( !spotEnt )
    sub_1B8880C(atlases, sp);
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
  __int64 v7; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A58704 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_SrcSpotBasePrefab__setState__);
    byte_4A58704 = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mStateEndAct,
    (int32_t)endAct,
    (int32_t)endAct,
    (int32_t)method);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B8880C(0LL, v7);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_1B8880C(this, type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_34716004(this, *(const MethodInfo **)&type);
}


void __fastcall SrcSpotBasePrefab__SetTouchType_34716004(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_4A586FE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    byte_4A586FE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0LL)
    || !gameObject )
  {
    sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A58701 & 1) == 0 )
  {
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___);
    byte_4A58701 = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0LL)) == 0LL
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0LL),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0LL) )
  {
    sub_1B8880C(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(mSpotNameLabel + 32), (int32_t)cam, v7, v8);
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

  if ( (byte_4A586F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_SrcSpotBasePrefab__update__);
    byte_4A586F7 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_30AAE44 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  __int64 mMapCtrl_SpotInfo; // x0
  SpotEntity_o *v6; // x23
  SpotLayerEntity_o *SpotLayerEntity; // x0
  SpotLayerEntity_o *v8; // x20
  bool IsEnabledDispSpot; // w25
  bool *p_IsMapModel_k__BackingField; // x27
  char v11; // w21
  struct MapControl_SpotInfo_o *v12; // x8
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x24
  const MethodInfo *v18; // x4
  int spotChangeImgId; // w24
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *v21; // x26
  UnityEngine_Object_o *mSpotNameLabel; // x24
  UnityEngine_GameObject_o *v23; // x24
  struct MapControl_SpotInfo_o *v24; // x8
  int32_t dispType; // w8
  bool HasFlag; // w25
  char v28; // w8
  const MethodInfo *v29; // x4
  System_Collections_Generic_List_UIAtlas__o *v30; // x26
  UILabel_o *v31; // x23
  UISprite_o *mcSpotNameSp; // x25
  System_String_o *mSpotNameStr; // x24
  const MethodInfo *v34; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x23
  UnityEngine_Object_o *mNoticeNumber; // x24
  Il2CppObject *mNoticeNumberPrefab; // x24
  Il2CppObject *v38; // x24
  Il2CppObject *Component_object; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct MapControl_SpotInfo_o *v42; // x8
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x23
  System_Action_o *v44; // x23
  const MethodInfo *v45; // x2
  bool v46; // w1
  char v47; // w23
  __int64 v48; // x8
  struct MapControl_SpotInfo_o *v49; // x8
  UnityEngine_Transform_o *v50; // x23
  struct UISprite_o *v51; // x9
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float32x2_t v55; // d9
  float32x2_t v61; // d4
  unsigned __int64 v62; // d0
  int v63; // s1
  struct MapControl_SpotInfo_o *v64; // x8
  int32_t spotId; // w22
  _BOOL4 v66; // w24
  int v67; // w25
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A586FB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_12211/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_4A586FB = 1;
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
    v6 = (SpotEntity_o *)mMapCtrl_SpotInfo;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(this->fields.mMapCtrl_SpotInfo, 0LL);
    v8 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0LL);
      mMapCtrl_SpotInfo = SpotLayerEntity__IsEnabledSpot(v8, this->fields.currentLayerId, 0LL);
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      v11 = mMapCtrl_SpotInfo;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        v12 = this->fields.mMapCtrl_SpotInfo;
        if ( !v12 )
          goto LABEL_120;
        if ( v12->fields.dispType )
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
            if ( !byte_4A55CE1 )
            {
              sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE1 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v70.fields.x = p_selfScale->zeroVector.fields.x;
          v70.fields.y = *p_y;
          v70.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v70, 0LL);
        }
      }
    }
    else
    {
      v11 = 0;
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
        if ( !v6 )
          goto LABEL_120;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v6, 0LL);
      }
      atlases = this->fields.atlases;
      v21 = this->fields.mcSpotSprite;
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      SrcSpotBasePrefab__SetSpotUI(atlases, v21, v6, spotChangeImgId, -32.0, v18);
    }
    if ( v8 && *p_IsMapModel_k__BackingField )
    {
      mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mMapCtrl_SpotInfo, v11 & 1, 0LL);
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
    if ( !v6 )
      goto LABEL_120;
    v23 = (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = SpotEntity__HasFlag(v6, 8, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
      goto LABEL_44;
    v24 = this->fields.mMapCtrl_SpotInfo;
    if ( !v24 )
      goto LABEL_120;
    dispType = v24->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v6, 16, 0LL);
      goto LABEL_45;
    }
    if ( dispType != 1 )
LABEL_44:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_45:
    mMapCtrl_SpotInfo = SpotEntity__IsOverRideName(v6, &spotName, 0LL);
    if ( (mMapCtrl_SpotInfo & 1) != 0 )
    {
      mMapCtrl_SpotInfo = System_String__IsNullOrEmpty(spotName, 0LL);
      HasFlag = (mMapCtrl_SpotInfo & 1) == 0;
    }
    if ( !v23 )
      goto LABEL_120;
    if ( !this->fields._IsMapModel_k__BackingField || v8 == 0LL )
      v28 = -1;
    else
      v28 = v11;
    UnityEngine_GameObject__SetActive(v23, v28 & HasFlag, 0LL);
    GameObjectExtensions__SetLocalPosition_33724120(
      v23,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0LL);
    v30 = this->fields.atlases;
    mcSpotNameSp = this->fields.mcSpotNameSp;
    v31 = this->fields.mSpotNameLabel;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    SrcSpotBasePrefab__SetSpotNameUI(v30, mcSpotNameSp, v31, mSpotNameStr, v29);
LABEL_57:
    if ( SrcSpotBasePrefab__GetState(this, (const MethodInfo *)isForce) == 1 )
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
        v38 = UnityEngine_Object__Instantiate_object_(
                mNoticeNumberPrefab,
                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v38, (UnityEngine_Component_o *)this, 0LL);
        if ( !v38 )
          goto LABEL_120;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v38,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
        *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber,
          (int32_t)Component_object,
          v40,
          v41);
      }
      mMapCtrl_SpotInfo = (__int64)*p_mNoticeNumber;
      if ( !*p_mNoticeNumber )
        goto LABEL_120;
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mMapCtrl_SpotInfo, this->fields.miQuestCount, 0LL);
      v42 = this->fields.mMapCtrl_SpotInfo;
      if ( !v42 )
        goto LABEL_120;
      if ( v42->fields.dispType != 1 )
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0LL, 0LL) )
      {
        v44 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v44, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0LL);
        SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v44, v45);
        goto LABEL_79;
      }
      v46 = 1;
    }
    else
    {
      v46 = 0;
    }
    SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v46, v34);
LABEL_79:
    mMapCtrl_SpotInfo = (__int64)this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo )
      goto LABEL_120;
    mMapCtrl_SpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0LL);
    if ( !this->fields.mcSpotNextSp )
      goto LABEL_120;
    v47 = mMapCtrl_SpotInfo;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mMapCtrl_SpotInfo, v47 & 1, 0LL);
    if ( (v47 & 1) != 0 && !this->fields.isDisplayNext )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        mMapCtrl_SpotInfo = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v48 = **(_QWORD **)(mMapCtrl_SpotInfo + 184);
      if ( !v48 )
        goto LABEL_120;
      mMapCtrl_SpotInfo = *(_QWORD *)(v48 + 264);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_120;
      ScrTerminalMap__SetMapButtonNextBySpotInfo(
        (ScrTerminalMap_o *)mMapCtrl_SpotInfo,
        this->fields.mMapCtrl_SpotInfo,
        0LL);
      this->fields.isDisplayNext = 1;
    }
    v49 = this->fields.mMapCtrl_SpotInfo;
    if ( v49 )
    {
      mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
      if ( mMapCtrl_SpotInfo )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
          (v49->fields.freeQuestCount > 0) & (v11 | (v8 == 0LL || !this->fields._IsMapModel_k__BackingField)),
          0LL);
        mMapCtrl_SpotInfo = (__int64)this->fields.loopIcon;
        if ( mMapCtrl_SpotInfo )
        {
          mMapCtrl_SpotInfo = (__int64)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                                         0LL);
          v50 = (UnityEngine_Transform_o *)mMapCtrl_SpotInfo;
          if ( !byte_4A55CE8 )
          {
            mMapCtrl_SpotInfo = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE8 = 1;
          }
          v51 = this->fields.mcSpotNameSp;
          if ( v51 )
          {
            mWidth = v51->fields.mWidth;
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            z = static_fields->rightVector.fields.z;
            v55.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
            if ( !byte_4A55CE9 )
            {
              mMapCtrl_SpotInfo = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE9 = 1;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            }
            if ( v50 )
            {
              __asm
              {
                FMOV            V3.2S, #-26.0
                FMOV            V2.2S, #-15.0
              }
              v61.n64_u64[0] = vmul_f32(*(float32x2_t *)&static_fields->upVector.fields.x, _D2).n64_u64[0];
              _D2.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                             + (float)(static_fields->upVector.fields.z * -15.0);
              v62 = vadd_f32(
                      vadd_f32(
                        vmul_f32(vmul_n_f32(v55, (float)mWidth), (float32x2_t)0x3F0000003F000000LL),
                        vmul_f32(v55, _D3)),
                      v61).n64_u64[0];
              v63 = HIDWORD(v62);
              UnityEngine_Transform__set_localPosition(v50, *(UnityEngine_Vector3_o *)(&_D2 - 1), 0LL);
              v64 = this->fields.mMapCtrl_SpotInfo;
              if ( v64 )
              {
                spotId = v64->fields.spotId;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4A57CE1 )
                {
                  sub_1B885B0(&TerminalPramsManager_TypeInfo);
                  byte_4A57CE1 = 1;
                }
                mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  mMapCtrl_SpotInfo = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( this->fields.loopLastTime )
                {
                  v66 = *p_IsMapModel_k__BackingField;
                  v67 = *(_DWORD *)(*(_QWORD *)(mMapCtrl_SpotInfo + 184) + 60LL);
                  mMapCtrl_SpotInfo = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.loopLastTime,
                                                 0LL);
                  if ( mMapCtrl_SpotInfo )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)mMapCtrl_SpotInfo,
                      (spotId == v67) & (v11 | (v8 == 0LL || !v66)),
                      0LL);
                    loopLastTime = this->fields.loopLastTime;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    mMapCtrl_SpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
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
    sub_1B8880C(mMapCtrl_SpotInfo, isForce);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlases, (int32_t)atlases, (int32_t)method, v3);
  *((_BYTE *)p_atlases - 72) = 1;
}


void __fastcall SrcSpotBasePrefab__mfSetCommopn(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *rootGameObject,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mcRootGobjP = rootGameObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.mcRootGobjP,
    (int32_t)rootGameObject,
    (int32_t)method,
    v3);
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
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  SrcSpotBasePrefab_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x21

  if ( (byte_4A586FD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4A586FD = 1;
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
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v15, (UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
LABEL_17:
      sub_1B8880C(mcSpotNextSp, v13);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mNoticeNumber, (int32_t)Component_object, v18, v19);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0LL);
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
  v21 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0LL);
  v22 = SrcSpotBasePrefab_TypeInfo;
  v23 = v21;
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    v22 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_33724120(
    v23,
    (float)nOfsX,
    (float)(v22->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSpotNameStr, (int32_t)name, offsetX, offsetY);
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
  sub_1B88554(
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
  sub_1B88554(
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  __int64 v13; // x20
  System_Action_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *mStateEndAct; // x19

  if ( (byte_4A58710 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__);
    sub_1B885B0(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
    byte_4A58710 = 1;
  }
  v4 = sub_1B887FC(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_12;
  *(_QWORD *)(v4 + 16) = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)that, v7, v8);
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
      SrcSpotBasePrefab__SetQaaScaleAnim_34717148(v5, 0, 0.5, v9);
      v13 = *(_QWORD *)(v4 + 16);
      v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)v4,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0LL);
      if ( v13 )
      {
        *(_QWORD *)(v13 + 216) = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 216), (int32_t)v14, v15, v16);
        return;
      }
LABEL_12:
      sub_1B8880C(v5, v6);
    }
  }
  else
  {
    mStateEndAct = v5->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v5, 1, 0LL, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58711 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4A58711 = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0LL)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_34717148(that, 1, 0.5, v5),
        v6 = this->fields.that,
        v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)v6, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL),
        !v6) )
  {
    sub_1B8880C(that, method);
  }
  v6->fields.mAfterScaleAnim = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.mAfterScaleAnim, (int32_t)v7, v8, v9);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_o *mStateEndAct; // x20
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v18; // x0
  UnityEngine_GameObject_o *v19; // x20
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v22; // x0
  int v23; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v29; // x1
  float ScaleOnMapModel; // s0
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5870F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5870F = 1;
  }
  v4 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 17, 0LL);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_34717592(that, 1, 0.5, v8);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v9);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v7);
      SrcSpotBasePrefab__SetQaaScaleAnim_34717148(that, 1, 0.5, v12);
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v13, v14, v15);
      break;
  }
  SrcSpotBasePrefab__DestroyEffect(that, v7);
  mQaaDispEffObj = (Il2CppObject *)that->fields.mQaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v19 = (UnityEngine_GameObject_o *)v18;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL);
    GameObjectExtensions__SetParent_33729948(v19, gameObject, 0LL);
    GameObjectExtensions__SetLocalPosition_33724224(v19, 0.0, 0.0, 0.0, 0LL);
    GameObjectExtensions__ResetLocalRotation(v19, 0LL);
    GameObjectExtensions__ResetLocalScale(v19, 0LL);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_33729948(
    (UnityEngine_GameObject_o *)v18,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = GameObjectExtensions__GetLocalPosition(v22, 0LL),
        !mTerminalMap) )
  {
LABEL_27:
    sub_1B8880C(v6, v7);
  }
  v34 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, *(UnityEngine_Vector3_o *)&v23, 0LL);
  GameObjectExtensions__SetLocalPosition(v19, v34, 0LL);
  GameObjectExtensions__ResetLocalRotation(v19, 0LL);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v29);
  v35.fields.y = y * ScaleOnMapModel;
  v35.fields.z = z * ScaleOnMapModel;
  v35.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v19, v35, 0LL);
LABEL_26:
  that->fields.mParticleSystemObj = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&that->fields.mParticleSystemObj, (int32_t)v19, v31, v32);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4A5870E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4A5870E = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1B8880C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0LL, v3);
      ActionExtensions__Call(mStateEndAct, 0LL);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_34717592(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_34717148(that, 1, 0.5, v7);
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v8, v9, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *mStateEndAct; // x20

  if ( (byte_4A5870D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_1B885B0(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_4A5870D = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0LL )
    sub_1B8880C(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_34717148(that, 0, 0.5, method);
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0LL);
      that->fields.mAfterScaleAnim = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&that->fields.mAfterScaleAnim, (int32_t)v7, v8, v9);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58712 & 1) == 0 )
  {
    sub_1B885B0(&SrcSpotBasePrefab___c_TypeInfo);
    byte_4A58712 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(this, method);
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
  Il2CppObject *Object_object__48635516; // x0
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct SrcSpotBasePrefab_o *v11; // x8
  struct SrcSpotBasePrefab_o *v12; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v15; // x8
  struct SrcSpotBasePrefab_o *v16; // x8
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_4A58713 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4A58713 = 1;
  }
  if ( effectAssetData )
  {
    v5 = SrcSpotBasePrefab_TypeInfo;
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      v5 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                effectAssetData,
                                v5->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    _4__this = v4->fields.__4__this;
    v8 = Object_object__48635516;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v8,
                                                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int32_t)this,
      v9,
      v10);
    v11 = v4->fields.__4__this;
    if ( !v11 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v11->fields.recollectionQuestSpotEffect,
                                                           0LL,
                                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v4->fields.__4__this;
      if ( v12 )
      {
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v12->fields.mNoticeNumber;
        if ( this )
        {
          recollectionQuestSpotEffect = v12->fields.recollectionQuestSpotEffect;
          this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
          if ( this )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
            GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0LL);
            v15 = v4->fields.__4__this;
            if ( v15 )
            {
              GameObjectExtensions__ResetLocalScale(v15->fields.recollectionQuestSpotEffect, 0LL);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_1B8880C(this, effectAssetData);
    }
  }
LABEL_16:
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_19;
  v16->fields.isLoadingRecollectionEffectAsset = 0;
  endCallback = v4->fields.endCallback;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
    endCallback->fields.original_method_info,
    *(_QWORD *)&endCallback->fields.extra_arg);
}