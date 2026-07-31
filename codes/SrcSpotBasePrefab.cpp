void SrcSpotBasePrefab___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935826 & 1) == 0 )
  {
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    sub_21FFC50(&StringLiteral_19619/*"ef_badge_glow"*/);
    sub_21FFC50(&StringLiteral_6125/*"Effect/RecollectionQuest"*/);
    byte_5935826 = 1;
  }
  v7 = StringLiteral_6125/*"Effect/RecollectionQuest"*/;
  SrcSpotBasePrefab_TypeInfo->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME = (struct System_String_o *)StringLiteral_6125/*"Effect/RecollectionQuest"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)SrcSpotBasePrefab_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_19619/*"ef_badge_glow"*/;
  static_fields = SrcSpotBasePrefab_TypeInfo->static_fields;
  static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME = (struct System_String_o *)StringLiteral_19619/*"ef_badge_glow"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)&SrcSpotBasePrefab_TypeInfo->static_fields->CLICK_DISABLE_INTERVAL_TIME = 0x42C800003E99999ALL;
}


void SrcSpotBasePrefab___ctor(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_Collections_Generic_List_UIAtlas__c *v10; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  System_Collections_Generic_List_object__o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5935825 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_21FFC50(&StringLiteral_24752/*"smfSpotBtn_Click"*/);
    byte_5935825 = 1;
  }
  v9 = StringLiteral_24752/*"smfSpotBtn_Click"*/;
  this->fields.msSmfNameForBtnClick = (struct System_String_o *)StringLiteral_24752/*"smfSpotBtn_Click"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.msSmfNameForBtnClick, v9, v2, v3, v4, v5, v6, v7);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  v10 = System_Collections_Generic_List_UIAtlas__TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->oneVector.fields.z;
  *(_QWORD *)&this->fields.selfScale.fields.x = *(_QWORD *)&static_fields->oneVector.fields.x;
  this->fields.selfScale.fields.z = z;
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v10);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlases = (struct System_Collections_Generic_List_UIAtlas__o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.atlases, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__AdjustBtnColliderArea(
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
  const MethodInfo_45B5034 *v10; // x2
  bool v11; // zf
  UnityEngine_BoxCollider_o *v12; // x20
  UnityEngine_Vector2_o v13; // kr00_8 OVERLAPPED
  int v14; // s2
  System_Nullable_Vector3__o v15; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_Vector2__o v16; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v17; // 0:x0.12
  System_Nullable_Vector3__o v18; // 0:x0.16
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4

  hasValue = centerPosition.fields.hasValue;
  v5 = size.fields.hasValue;
  v15 = centerPosition;
  v16 = size;
  if ( (byte_593581A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_Vector2__get_Value__);
    sub_21FFC50(&Method_System_Nullable_Vector3__get_Value__);
    byte_593581A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  v11 = !hasValue;
  v12 = (UnityEngine_BoxCollider_o *)Component_object;
  if ( !v11 )
  {
    *(_QWORD *)&v18.fields.hasValue = &v15;
    *(_QWORD *)&v18.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    Value = System_Nullable_Vector3___get_Value(v18, v10);
    if ( !v12 )
      goto LABEL_11;
    UnityEngine_BoxCollider__set_center(v12, Value, 0);
  }
  if ( !v5 )
    return;
  *(_QWORD *)&v17.fields.hasValue = &v16;
  LODWORD(v17.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
  v13 = System_Nullable_Vector2___get_Value(v17, (const MethodInfo_45B47EC *)v10);
  if ( !v12 )
LABEL_11:
    sub_21FFECC(gameObject, v8);
  v14 = 0;
  UnityEngine_BoxCollider__set_size(v12, *(UnityEngine_Vector3_o *)&v13.fields.x, 0);
}


void SrcSpotBasePrefab__AtScaleAnimEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.mAfterScaleAnim, 0);
}


void SrcSpotBasePrefab__Awake(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct CStateManager_SrcSpotBasePrefab__o **p_mFSM; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CStateManager_T__o *mFSM; // x21
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x20
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x3
  MapModelManager_c *v27; // x0

  if ( (byte_5935810 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_SrcSpotBasePrefab___ctor__);
    sub_21FFC50(&Method_CStateManager_SrcSpotBasePrefab__add__);
    sub_21FFC50(&CStateManager_SrcSpotBasePrefab__TypeInfo);
    sub_21FFC50(&MapModelManager_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateMapMain_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateNone_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateQaaChange_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    byte_5935810 = 1;
  }
  p_mFSM = &this->fields.mFSM;
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_SrcSpotBasePrefab__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      6,
      (const MethodInfo_3E505AC *)Method_CStateManager_SrcSpotBasePrefab___ctor__);
    this->fields.mFSM = (struct CStateManager_SrcSpotBasePrefab__o *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v13 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !mFSM )
      goto LABEL_14;
    CStateManager_object___add(
      mFSM,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v16 = (CStateManager_T__o *)*p_mFSM;
    v17 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateMapMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_14;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v18 = (CStateManager_T__o *)*p_mFSM;
    v19 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateQaaHide_TypeInfo);
    System_Object___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_14;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v20 = (CStateManager_T__o *)*p_mFSM;
    v21 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateQaaGray_TypeInfo);
    System_Object___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_14;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    v22 = (CStateManager_T__o *)*p_mFSM;
    v23 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateQaaDisp_TypeInfo);
    System_Object___ctor(v23, 0);
    if ( !v22
      || (CStateManager_object___add(
            v22,
            4,
            (IState_T__o *)v23,
            (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__),
          v24 = (CStateManager_T__o *)*p_mFSM,
          v25 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab_StateQaaChange_TypeInfo),
          System_Object___ctor(v25, 0),
          !v24) )
    {
LABEL_14:
      sub_21FFECC(v14, v15);
    }
    CStateManager_object___add(
      v24,
      5,
      (IState_T__o *)v25,
      (const MethodInfo_3E5065C *)Method_CStateManager_SrcSpotBasePrefab__add__);
    SrcSpotBasePrefab__SetState(this, 1, 0, v26);
  }
  this->fields._IsMapModel_k__BackingField = 0;
  v27 = MapModelManager_TypeInfo;
  if ( !*(&MapModelManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MapModelManager_TypeInfo, method, v2);
    v27 = MapModelManager_TypeInfo;
  }
  this->fields.currentLayerId = v27->static_fields->LAYER_LOWER_ID;
}


bool SrcSpotBasePrefab__CheckDisplayRecollectionEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5935823 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5935823 = 1;
  }
  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  memset(&v16, 0, sizeof(v16));
  if ( mMapCtrl_SpotInfo )
  {
    AvailableQuestIdList = MapControl_SpotInfo__GetAvailableQuestIdList(mMapCtrl_SpotInfo, 0, 0);
    if ( !AvailableQuestIdList )
      sub_21FFECC(0, v5);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      AvailableQuestIdList,
      (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v16,
             (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v6 )
        break;
      current = v16.fields._current;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v9);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, current, 0);
      if ( !QuestInfo )
        sub_21FFECC(0, v11);
      Mine = MapControl_QuestInfo__GetMine(QuestInfo, 0);
      if ( !Mine )
        sub_21FFECC(0, v13);
    }
    while ( !QuestEntity__IsActiveRecollectionQuest(Mine, 0) );
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v16,
      (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  }
  else
  {
    return 0;
  }
  return v6;
}


void SrcSpotBasePrefab__DestroyEffect(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593580E & 1) == 0 )
  {
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    byte_593580E = 1;
  }
  if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, method, v2);
  SrcSpotBasePrefab__DestroyEffect_44070080(this, method);
}


void SrcSpotBasePrefab__DestroyEffect_44070080(SrcSpotBasePrefab_o *spot, const MethodInfo *method)
{
  __int64 v2; // x2
  SrcSpotBasePrefab_o *v3; // x19
  MissionNaviTransitionBoardItem_o *p_mParticleSystemObj; // x19
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *mParticleSystemObj; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v3 = spot;
  if ( (byte_593580F & 1) == 0 )
  {
    spot = (SrcSpotBasePrefab_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593580F = 1;
  }
  if ( !v3 )
    sub_21FFECC(spot, method);
  mParticleSystemObj = (UnityEngine_Object_o *)v3->fields.mParticleSystemObj;
  p_mParticleSystemObj = (MissionNaviTransitionBoardItem_o *)&v3->fields.mParticleSystemObj;
  v5 = mParticleSystemObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mParticleSystemObj->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_mParticleSystemObj->klass = 0;
    sub_21FFBF4(p_mParticleSystemObj, 0, v10, v11, v12, v13, v14, v15);
  }
}


float SrcSpotBasePrefab__GetContrast(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  struct UISprite_o *mcSpotSprite; // x8

  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    sub_21FFECC(this, method);
  return mcSpotSprite->fields.mColor.fields.r;
}


System_String_o *SrcSpotBasePrefab__GetGobjName(int32_t id, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-24h] BYREF

  v4 = id;
  if ( (byte_593580D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13525/*"Spot_"*/);
    sub_21FFC50(&StringLiteral_1205/*"00"*/);
    byte_593580D = 1;
  }
  v2 = System_Int32__ToString_76925352((int32_t)&v4, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_13525/*"Spot_"*/, v2, 0);
}


MapControl_SpotInfo_o *SrcSpotBasePrefab__GetMapCtrl_SpotInfo(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields.mMapCtrl_SpotInfo;
}


float SrcSpotBasePrefab__GetScaleOnMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s8
  UnityEngine_Object_o *MapModelCamera_k__BackingField; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s10
  float z; // s9
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  float v15; // s11
  float v16; // s12
  float v17; // s13
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593581C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593581C = 1;
  }
  v4 = 1.0;
  if ( this->fields._IsMapModel_k__BackingField )
  {
    MapModelCamera_k__BackingField = (UnityEngine_Object_o *)this->fields._MapModelCamera_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(MapModelCamera_k__BackingField, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)this->fields._MapModelCamera_k__BackingField;
      if ( !v7 )
        sub_21FFECC(0, v6);
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
      x = LocalPosition.fields.x;
      y = LocalPosition.fields.y;
      z = LocalPosition.fields.z;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v20 = GameObjectExtensions__GetLocalPosition(v12, 0);
      v15 = v20.fields.x;
      v16 = v20.fields.y;
      v17 = v20.fields.z;
      if ( !byte_593193E )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593193E = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
      return 2000.0
           / sqrtf(
               (float)((float)(z - v17) * (float)(z - v17))
             + (float)((float)((float)(x - v15) * (float)(x - v15)) + (float)((float)(y - v16) * (float)(y - v16))));
    }
  }
  return v4;
}


int32_t SrcSpotBasePrefab__GetState(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab_o *v2; // x19
  struct CStateManager_SrcSpotBasePrefab__o *mFSM; // x8

  v2 = this;
  if ( (byte_593581D & 1) == 0 )
  {
    this = (SrcSpotBasePrefab_o *)sub_21FFC50(&Method_CStateManager_SrcSpotBasePrefab__getState__);
    byte_593581D = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(this, method);
  return mFSM->fields.m_state;
}


bool SrcSpotBasePrefab__IsDisp(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *mcSpotSprite; // x0
  __int64 v7; // x1
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalScale = GameObjectExtensions__GetLocalScale(gameObject, 0);
  x = LocalScale.fields.x;
  y = LocalScale.fields.y;
  mcSpotSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !mcSpotSprite )
    goto LABEL_13;
  if ( !UnityEngine_GameObject__get_activeSelf(mcSpotSprite, 0) )
    return 0;
  mcSpotSprite = (UnityEngine_GameObject_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
LABEL_13:
    sub_21FFECC(mcSpotSprite, v7);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)mcSpotSprite, 0) )
    return 0;
  return y > 0.0 && x > 0.0;
}


void SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(
        SrcSpotBasePrefab_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *mNoticeNumber; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *gameObject; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  SrcSpotBasePrefab_c *v25; // x0
  System_String_o *RECOLLECTION_EFFECT_ASSETS_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2

  if ( (byte_5935821 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    sub_21FFC50(&Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__);
    sub_21FFC50(&SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
    byte_5935821 = 1;
  }
  v5 = sub_21FFEBC(SrcSpotBasePrefab___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
  if ( this->fields.isLoadingRecollectionEffectAsset )
    return;
  mNoticeNumber = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
  if ( !mNoticeNumber )
LABEL_15:
    sub_21FFECC(mNoticeNumber, v7);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(mNoticeNumber, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
  {
    this->fields.isLoadingRecollectionEffectAsset = 1;
    v25 = SrcSpotBasePrefab_TypeInfo;
    if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v23, v24);
      v25 = SrcSpotBasePrefab_TypeInfo;
    }
    RECOLLECTION_EFFECT_ASSETS_NAME = v25->static_fields->RECOLLECTION_EFFECT_ASSETS_NAME;
    v27 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v27,
      (Il2CppObject *)v5,
      Method_SrcSpotBasePrefab___c__DisplayClass112_0__LoadRecollectionQuestSpotEffect_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28, v29);
    AssetManager__loadAssetStorage(RECOLLECTION_EFFECT_ASSETS_NAME, v27, 1, 0, 0);
  }
}


// attributes: thunk
void SrcSpotBasePrefab__OnDisable(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  SrcSpotBasePrefab__DestroyEffect(this, method);
}


void SrcSpotBasePrefab__RequestChangeSpotImage(SrcSpotBasePrefab_o *this, int32_t imageId, const MethodInfo *method)
{
  this->fields.spotChangeImgId = imageId;
}


void SrcSpotBasePrefab__RequestDispUpdate(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  this->fields.mtIsUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__SelectSpot(SrcSpotBasePrefab_o *this, bool isPlaySe, const MethodInfo *method)
{
  UnityEngine_Object_o *mcRootGobjP; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  float realtimeSinceStartup; // s0
  SrcSpotBasePrefab_c *v9; // x0
  float v10; // s8
  __int64 v11; // x1
  __int64 v12; // x2
  float v13; // s0
  SrcSpotBasePrefab_c *v14; // x0
  float v15; // s8
  struct SrcSpotBasePrefab_StaticFields *static_fields; // x8
  void *mMapCtrl_SpotInfo; // x0
  int v18; // w8
  UnityEngine_GameObject_o *v19; // x21
  System_String_o *msSmfNameForBtnClick; // x22
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  int32_t miSpotID; // w19
  TerminalPramsManager_c *v24; // x0
  System_String_o *v25; // x20
  __int64 v26; // x2
  CommonUI_o *v27; // x21
  SrcSpotBasePrefab___c_c *v28; // x8
  struct SrcSpotBasePrefab___c_StaticFields *v29; // x9
  System_Action_o *_9__75_0; // x23
  System_String_o *v31; // x22
  Il2CppObject *v32; // x24
  struct SrcSpotBasePrefab___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x1
  __int64 v41; // x2

  if ( (byte_5935816 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__);
    sub_21FFC50(&SrcSpotBasePrefab___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935816 = 1;
  }
  mcRootGobjP = (UnityEngine_Object_o *)this->fields.mcRootGobjP;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPlaySe, method);
  if ( !UnityEngine_Object__op_Equality(mcRootGobjP, 0, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    v9 = SrcSpotBasePrefab_TypeInfo;
    v10 = realtimeSinceStartup;
    if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v6, v7);
      v9 = SrcSpotBasePrefab_TypeInfo;
    }
    if ( (float)(v10 - v9->static_fields->clickTime) > v9->static_fields->CLICK_DISABLE_INTERVAL_TIME )
    {
      v13 = UnityEngine_Time__get_realtimeSinceStartup(0);
      v14 = SrcSpotBasePrefab_TypeInfo;
      v15 = v13;
      if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v11, v12);
        v14 = SrcSpotBasePrefab_TypeInfo;
      }
      static_fields = v14->static_fields;
      mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
      static_fields->clickTime = v15;
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v18 = *((_DWORD *)mMapCtrl_SpotInfo + 5);
      if ( v18 != 2 )
      {
        if ( v18 != 1 )
          return;
        v19 = this->fields.mcRootGobjP;
        msSmfNameForBtnClick = this->fields.msSmfNameForBtnClick;
        mMapCtrl_SpotInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( v19 )
        {
          UnityEngine_GameObject__SendMessage_83224784(v19, msSmfNameForBtnClick, (Il2CppObject *)mMapCtrl_SpotInfo, 0);
          if ( isPlaySe )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
            TerminalPramsManager__PlaySystemSE(0, v21);
          }
          miSpotID = this->fields.miSpotID;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
          if ( !byte_5931FBA )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5931FBA = 1;
          }
          v24 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
            v24 = TerminalPramsManager_TypeInfo;
          }
          v24->static_fields->_SpotId_k__BackingField = miSpotID;
          return;
        }
LABEL_40:
        sub_21FFECC(mMapCtrl_SpotInfo, v11);
      }
      mMapCtrl_SpotInfo = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)mMapCtrl_SpotInfo, 0);
      if ( !mMapCtrl_SpotInfo )
        goto LABEL_40;
      v25 = (System_String_o *)*((_QWORD *)mMapCtrl_SpotInfo + 17);
      if ( System_String__IsNullOrEmpty(v25, 0) )
        return;
      mMapCtrl_SpotInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = (CommonUI_o *)mMapCtrl_SpotInfo;
      v28 = SrcSpotBasePrefab___c_TypeInfo;
      if ( !*(&SrcSpotBasePrefab___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab___c_TypeInfo, v11, v26);
        v28 = SrcSpotBasePrefab___c_TypeInfo;
      }
      v29 = v28->static_fields;
      _9__75_0 = v29->__9__75_0;
      v31 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__75_0 )
      {
        if ( !*(&v28->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v28, v11, v26);
          v29 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)v29->__9;
        _9__75_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__75_0, v32, Method_SrcSpotBasePrefab___c__SelectSpot_b__75_0__, 0);
        v33 = SrcSpotBasePrefab___c_TypeInfo->static_fields;
        v33->__9__75_0 = _9__75_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v33->__9__75_0,
          (int32_t)_9__75_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( !v27 )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(v27, v31, v25, _9__75_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      if ( isPlaySe )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v40, v41);
        TerminalPramsManager__PlaySystemSE(0, v40);
      }
    }
  }
}


void SrcSpotBasePrefab__SetBtnColliderEnable(SrcSpotBasePrefab_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_5935819 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_5935819 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
  {
    sub_21FFECC(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, isEnabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__SetContrast(SrcSpotBasePrefab_o *this, float val, const MethodInfo *method)
{
  UIWidget_o *mcSpotSprite; // x0
  float v7; // s3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_5;
  v7 = 1.0;
  UIWidget__set_color(mcSpotSprite, *(UnityEngine_Color_o *)&val, 0);
  mcSpotSprite = (UIWidget_o *)this->fields.mcSpotNameSp;
  if ( !mcSpotSprite
    || (v9.fields.r = val,
        v9.fields.g = val,
        v9.fields.b = val,
        v9.fields.a = 1.0,
        UIWidget__set_color(mcSpotSprite, v9, 0),
        (mcSpotSprite = (UIWidget_o *)this->fields.mSpotNameLabel) == 0) )
  {
LABEL_5:
    sub_21FFECC(mcSpotSprite, method);
  }
  v10.fields.a = 1.0;
  v10.fields.r = val;
  v10.fields.g = val;
  v10.fields.b = val;
  UIWidget__set_color(mcSpotSprite, v10, 0);
}


void SrcSpotBasePrefab__SetCurrentLayerId(SrcSpotBasePrefab_o *this, int32_t layerId, const MethodInfo *method)
{
  this->fields.currentLayerId = layerId;
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__SetDispNoticeNumber(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumber; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v7; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  bool v9; // w1

  if ( (byte_5935824 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935824 = 1;
  }
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mNoticeNumber, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( mMapCtrl_SpotInfo )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.mNoticeNumber;
      if ( mMapCtrl_SpotInfo->fields.dispType == 1 )
      {
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( gameObject )
          {
            v9 = isDisp;
LABEL_15:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
            return;
          }
        }
      }
      else if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          v9 = 0;
          goto LABEL_15;
        }
      }
    }
    sub_21FFECC(gameObject, v7);
  }
}


void SrcSpotBasePrefab__SetFreeQuestCount(SrcSpotBasePrefab_o *this, int32_t freeQuestCount, const MethodInfo *method)
{
  this->fields.freeQuestCount = freeQuestCount;
  this->fields.mtIsUpdate = 1;
}


void SrcSpotBasePrefab__SetMapCtrl_SpotInfo(
        SrcSpotBasePrefab_o *this,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mMapCtrl_SpotInfo = spotInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCtrl_SpotInfo,
    (int32_t)spotInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SrcSpotBasePrefab__SetQaaColorAnim(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_44076796(this, isActive, 0.5, method);
}


void SrcSpotBasePrefab__SetQaaColorAnimQuick(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaColorAnim_44076796(this, isActive, 0.0, method);
}


void SrcSpotBasePrefab__SetQaaColorAnim_44076796(
        SrcSpotBasePrefab_o *this,
        bool isActive,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UISprite_o *mcSpotSprite; // x8
  float v25; // s0
  float r; // s1
  System_Action_c *v27; // x0
  System_Action_o *v28; // x20
  EasingObject_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_5935820 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__);
    sub_21FFC50(&Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__);
    sub_21FFC50(&SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
    byte_5935820 = 1;
  }
  v7 = sub_21FFEBC(SrcSpotBasePrefab___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 32) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
  mcSpotSprite = this->fields.mcSpotSprite;
  if ( !mcSpotSprite )
    goto LABEL_11;
  v25 = 0.5;
  if ( isActive )
    v25 = 1.0;
  r = mcSpotSprite->fields.mColor.fields.r;
  v27 = System_Action_TypeInfo;
  *(float *)(v7 + 24) = v25;
  *(float *)(v7 + 28) = r;
  v28 = (System_Action_o *)sub_21FFEBC(v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__0__,
    0);
  if ( time > 0.0 )
  {
    v29 = *(EasingObject_o **)(v7 + 32);
    v30 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v7,
      Method_SrcSpotBasePrefab___c__DisplayClass107_0__SetQaaColorAnim_b__1__,
      0);
    if ( v29 )
    {
      EasingObject__Play(v29, time, v30, v28, 0.0, 17, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(v8, v9);
  }
  ActionExtensions__Call(v28, 0);
}


void SrcSpotBasePrefab__SetQaaScaleAnim(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_44076360(this, isDisp, 0.5, method);
}


void SrcSpotBasePrefab__SetQaaScaleAnimQuick(SrcSpotBasePrefab_o *this, bool isDisp, const MethodInfo *method)
{
  SrcSpotBasePrefab__SetQaaScaleAnim_44076360(this, isDisp, 0.0, method);
}


void SrcSpotBasePrefab__SetQaaScaleAnim_44076360(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x19
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593581F & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenScale___);
    sub_21FFC50(&StringLiteral_2518/*"AtScaleAnimEnd"*/);
    byte_593581F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( isDisp )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
    GameObjectExtensions__SetLocalScale(gameObject, v33, 0);
    ActionExtensions__Call(this->fields.mAfterScaleAnim, 0);
  }
  else
  {
    v17 = UITweener__Begin_object_(gameObject, time, (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenScale___);
    if ( !v17 )
      sub_21FFECC(0, v18);
    v25 = v17;
    v17[8].klass = v11;
    *(float *)&v17[8].monitor = z;
    *((float *)&v17[8].monitor + 1) = x;
    *(float *)&v17[9].klass = v15;
    *((float *)&v17[9].klass + 1) = v16;
    LODWORD(v17[2].klass) = 2;
    v17[5].klass = (Il2CppClass *)gameObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17[5], (int32_t)gameObject, v19, v20, v21, v22, v23, v24);
    v26 = StringLiteral_2518/*"AtScaleAnimEnd"*/;
    v25[5].monitor = (void *)StringLiteral_2518/*"AtScaleAnimEnd"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25[5].monitor, v26, v27, v28, v29, v30, v31, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__SetRecollectionSpotEffect(SrcSpotBasePrefab_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5935822 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935822 = 1;
  }
  recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive, method);
  if ( !UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0, 0) )
  {
    v7 = this->fields.recollectionQuestSpotEffect;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void SrcSpotBasePrefab__SetSelfScale(SrcSpotBasePrefab_o *this, float scaleVal, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s1
  float v6; // [xsp+0h] [xbp-30h]

  if ( !byte_5931945 )
  {
    v6 = scaleVal;
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    scaleVal = v6;
    byte_5931945 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = static_fields->oneVector.fields.z * scaleVal;
  *(float32x2_t *)&this->fields.selfScale.fields.x = vmul_n_f32(
                                                       *(float32x2_t *)&static_fields->oneVector.fields.x,
                                                       scaleVal);
  this->fields.selfScale.fields.z = v5;
}


void SrcSpotBasePrefab__SetSpotNameUI(
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
  if ( (byte_5935814 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_21FFC50(&StringLiteral_21538/*"img_spotname_bg"*/);
    byte_5935814 = 1;
  }
  if ( !lb
    || (UILabel__set_text(lb, spotName, 0),
        v9 = (System_String_o *)StringLiteral_21538/*"img_spotname_bg"*/,
        atlases = (System_Collections_Generic_List_UIAtlas__o *)UIAtlas__GetUIAtlasBySpriteName(
                                                                  v8,
                                                                  (System_String_o *)StringLiteral_21538/*"img_spotname_bg"*/,
                                                                  0),
        !sp) )
  {
    sub_21FFECC(atlases, sp);
  }
  UISprite__set_atlas(sp, (UIAtlas_o *)atlases, 0);
  UISprite__set_spriteName(sp, v9, 0);
  if ( lb->fields.mWidth + 50 <= 40 )
    v10 = 40;
  else
    v10 = lb->fields.mWidth + 50;
  UIWidget__set_width((UIWidget_o *)sp, v10, 0);
}


void SrcSpotBasePrefab__SetSpotUI(
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
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *mAtlas; // x21
  bool v18; // w0
  UnityEngine_GameObject_o *v19; // x21
  Il2CppObject *v20; // x0
  __int64 v21; // x2
  System_String_o *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *Object_object__58323140; // x22
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  __int64 v30; // x8
  __int64 v31; // x8
  AssetData_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Component_o *v38; // x0
  int32_t v39; // [xsp+8h] [xbp-58h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-54h] BYREF

  v10 = atlases;
  v40 = spotImageId;
  if ( (byte_5935813 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_9275/*"MapSpotEffect_{0}"*/);
    sub_21FFC50(&StringLiteral_1209/*"000000"*/);
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_21FFC50(&StringLiteral_24810/*"spot_"*/);
    byte_5935813 = 1;
  }
  if ( !sp )
    goto LABEL_46;
  atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)sp,
                                                            0);
  if ( !atlases )
    goto LABEL_46;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)atlases, 0) >= 1 )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0);
    TransformHelper__DestroyChildren(transform, 0, 0);
  }
  if ( spotImageId >= 1 )
  {
    v12 = System_Int32__ToString_76925352((int32_t)&v40, (System_String_o *)StringLiteral_1209/*"000000"*/, 0);
    v13 = System_String__Concat_75438412((System_String_o *)StringLiteral_24810/*"spot_"*/, v12, 0);
    UIAtlasBySpriteName = UIAtlas__GetUIAtlasBySpriteName(v10, v13, 0);
    UISprite__set_atlas(sp, UIAtlasBySpriteName, 0);
    mAtlas = (UnityEngine_Object_o *)sp->fields.mAtlas;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    v18 = UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)sp, v18, 0);
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)sp, 0) )
    {
      UISprite__set_spriteName(sp, v13, 0);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)sp,
                                                                0);
      if ( spotEnt )
      {
        v19 = (UnityEngine_GameObject_o *)atlases;
LABEL_44:
        GameObjectExtensions__SetLocalPosition_42876120(
          v19,
          (float)spotEnt->fields.imageOfsX,
          (float)-spotEnt->fields.imageOfsY + innerOfsY,
          0);
        return;
      }
LABEL_46:
      sub_21FFECC(atlases, sp);
    }
    v39 = v40;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v39);
    v22 = System_String__Format((System_String_o *)StringLiteral_9275/*"MapSpotEffect_{0}"*/, v20, 0);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp, v21);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp, v21);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v23 )
      goto LABEL_46;
    v24 = *(_QWORD *)(v23 + 264);
    if ( !v24 )
      goto LABEL_46;
    atlases = *(System_Collections_Generic_List_UIAtlas__o **)(v24 + 248);
    if ( !atlases )
      goto LABEL_46;
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                (AssetData_o *)atlases,
                                v22,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sp, v28);
      v29 = Object_object__58323140;
      goto LABEL_43;
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp, v28);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, sp, v28);
      atlases = (System_Collections_Generic_List_UIAtlas__o *)TerminalSceneComponent_TypeInfo;
    }
    v30 = **(_QWORD **)&atlases[4].fields._size;
    if ( !v30 )
      goto LABEL_46;
    v31 = *(_QWORD *)(v30 + 264);
    if ( !v31 )
      goto LABEL_46;
    v32 = *(AssetData_o **)(v31 + 256);
    if ( v32 )
    {
      v35 = AssetData__GetObject_object__58323140(
              v32,
              v22,
              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
        v29 = v35;
LABEL_43:
        v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            v29,
                                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v38 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)sp, 0);
        GameObjectExtensions__SafeSetParent(v19, v38, 0);
        if ( spotEnt )
          goto LABEL_44;
        goto LABEL_46;
      }
    }
  }
}


void SrcSpotBasePrefab__SetSpotUIWithOffsetY(
        System_Collections_Generic_List_UIAtlas__o *atlases,
        UISprite_o *sp,
        SpotEntity_o *spotEnt,
        float innerOfsY,
        const MethodInfo *method)
{
  System_Collections_Generic_List_UIAtlas__o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  int32_t PrioredImgId; // w22

  v8 = atlases;
  if ( (byte_5935812 & 1) == 0 )
  {
    atlases = (System_Collections_Generic_List_UIAtlas__o *)sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    byte_5935812 = 1;
  }
  if ( !spotEnt )
    sub_21FFECC(atlases, sp);
  PrioredImgId = SpotEntity__GetPrioredImgId(spotEnt, 0);
  if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v9, v10);
  SrcSpotBasePrefab__SetSpotUI(v8, sp, spotEnt, PrioredImgId, innerOfsY, v11);
}


void SrcSpotBasePrefab__SetState(
        SrcSpotBasePrefab_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  CStateManager_T__o *mFSM; // x0

  if ( (byte_593581E & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_SrcSpotBasePrefab__setState__);
    byte_593581E = 1;
  }
  this->fields.mStateEndAct = endAct;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mStateEndAct,
    (int32_t)endAct,
    (System_String_o *)endAct,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_21FFECC(0, v11);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_SrcSpotBasePrefab__setState__);
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__SetTouchType(SrcSpotBasePrefab_o *this, int32_t type, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    sub_21FFECC(this, *(_QWORD *)&type);
  mMapCtrl_SpotInfo->fields.touchType = type;
  SrcSpotBasePrefab__SetTouchType_44075224(this, *(const MethodInfo **)&type);
}


void SrcSpotBasePrefab__SetTouchType_44075224(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8

  if ( (byte_5935818 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    byte_5935818 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   gameObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIButton___),
        (mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo) == 0)
    || !gameObject )
  {
    sub_21FFECC(gameObject, v4);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, mMapCtrl_SpotInfo->fields.touchType == 1, 0);
}


void SrcSpotBasePrefab__SetUISacleSameCamera(
        SrcSpotBasePrefab_o *this,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  char *mSpotNameLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593581B & 1) == 0 )
  {
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___);
    byte_593581B = 1;
  }
  mSpotNameLabel = (char *)this->fields.mSpotNameLabel;
  if ( !mSpotNameLabel
    || (mSpotNameLabel = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mSpotNameLabel, 0)) == 0
    || (mSpotNameLabel = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mSpotNameLabel, 0)) == 0
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mSpotNameLabel, 0),
        (mSpotNameLabel = (char *)GameObjectExtensions__SafeGetComponent_object_(
                                    gameObject,
                                    (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UIScaleSame___)) == 0) )
  {
    sub_21FFECC(mSpotNameLabel, cam);
  }
  *((_QWORD *)mSpotNameLabel + 4) = cam;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(mSpotNameLabel + 32), (int32_t)cam, v7, v8, v9, v10, v11, v12);
}


void SrcSpotBasePrefab__StateQaaEnd(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *mStateEndAct; // x19

  mStateEndAct = this->fields.mStateEndAct;
  SrcSpotBasePrefab__SetState(this, 1, 0, v2);
  ActionExtensions__Call(mStateEndAct, 0);
}


void SrcSpotBasePrefab__Update(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_5935811 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_SrcSpotBasePrefab__update__);
    byte_5935811 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_3E506C4 *)Method_CStateManager_SrcSpotBasePrefab__update__);
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__UpdateDisp(SrcSpotBasePrefab_o *this, bool isForce, const MethodInfo *method)
{
  _BOOL4 mtIsUpdate; // w8
  __int64 Instance; // x0
  const MethodInfo *v7; // x1
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  MapControl_SpotInfo_o **p_mMapCtrl_SpotInfo; // x21
  MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  SpotEntity_o *v17; // x23
  SpotLayerEntity_o *SpotLayerEntity; // x0
  __int64 v19; // x2
  SpotLayerEntity_o *v20; // x20
  bool IsEnabledDispSpot; // w25
  char v22; // w22
  bool *p_IsMapModel_k__BackingField; // x27
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *p_selfScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Object_o *mcSpotSprite; // x24
  __int64 v29; // x2
  const MethodInfo *v30; // x4
  int spotChangeImgId; // w24
  System_Collections_Generic_List_UIAtlas__o *atlases; // x25
  UISprite_o *v33; // x26
  UnityEngine_Object_o *mSpotNameLabel; // x24
  UnityEngine_GameObject_o *v35; // x24
  int32_t dispType; // w8
  bool HasFlag; // w25
  bool v38; // w9
  bool v40; // w1
  __int64 v41; // x1
  __int64 v42; // x2
  const MethodInfo *v43; // x4
  UISprite_o *v44; // x24
  UILabel_o *v45; // x25
  System_Collections_Generic_List_UIAtlas__o *v46; // x23
  System_String_o *mSpotNameStr; // x26
  const MethodInfo *v48; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumber; // x23
  UnityEngine_Object_o *mNoticeNumber; // x24
  __int64 v51; // x2
  Il2CppObject *mNoticeNumberPrefab; // x24
  Il2CppObject *v53; // x24
  Il2CppObject *Component_object; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct MapControl_SpotInfo_o *v61; // x8
  __int64 v62; // x1
  UnityEngine_Object_o *recollectionQuestSpotEffect; // x23
  System_Action_o *v64; // x23
  const MethodInfo *v65; // x2
  bool v66; // w1
  char v67; // w23
  __int64 v68; // x2
  __int64 v69; // x8
  bool v70; // zf
  bool v71; // w1
  UnityEngine_Transform_o *v72; // x23
  struct UISprite_o *mcSpotNameSp; // x8
  int mWidth; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s8
  float32x2_t v77; // d9
  float32x2_t *v82; // x8
  float32x2_t v83; // d2 OVERLAPPED
  unsigned __int64 v85; // d0
  int v86; // s1
  __int64 v87; // x2
  int32_t spotId; // w21
  _BOOL4 v89; // w24
  int v90; // w25
  bool v91; // zf
  bool v92; // w1
  __int64 v93; // x1
  __int64 v94; // x2
  UILabel_o *loopLastTime; // x20
  System_String_o *spotName; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935815 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__);
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_12787/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_5935815 = 1;
  }
  mtIsUpdate = this->fields.mtIsUpdate;
  spotName = 0;
  if ( mtIsUpdate || isForce )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    p_mMapCtrl_SpotInfo = &this->fields.mMapCtrl_SpotInfo;
    mMapCtrl_SpotInfo = this->fields.mMapCtrl_SpotInfo;
    if ( !mMapCtrl_SpotInfo || !Instance )
      goto LABEL_139;
    SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)Instance, mMapCtrl_SpotInfo->fields.spotId, 0);
    if ( SpotInfo )
    {
      *p_mMapCtrl_SpotInfo = SpotInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mMapCtrl_SpotInfo,
        (int32_t)SpotInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    Instance = (__int64)*p_mMapCtrl_SpotInfo;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_139;
    Instance = (__int64)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)Instance, 0);
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_139;
    v17 = (SpotEntity_o *)Instance;
    SpotLayerEntity = MapControl_SpotInfo__GetSpotLayerEntity(*p_mMapCtrl_SpotInfo, 0);
    v20 = SpotLayerEntity;
    if ( SpotLayerEntity )
    {
      IsEnabledDispSpot = SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity, this->fields.currentLayerId, 0);
      Instance = SpotLayerEntity__IsEnabledSpot(v20, this->fields.currentLayerId, 0);
      v22 = Instance;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
      if ( this->fields._IsMapModel_k__BackingField )
      {
        if ( !*p_mMapCtrl_SpotInfo )
          goto LABEL_139;
        if ( (*p_mMapCtrl_SpotInfo)->fields.dispType )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( IsEnabledDispSpot )
          {
            p_selfScale = (struct UnityEngine_Vector3_StaticFields *)&this->fields.selfScale;
            p_y = &this->fields.selfScale.fields.y;
            p_z = &this->fields.selfScale.fields.z;
          }
          else
          {
            if ( !byte_5931940 )
            {
              sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              byte_5931940 = 1;
            }
            p_selfScale = UnityEngine_Vector3_TypeInfo->static_fields;
            p_y = &p_selfScale->zeroVector.fields.y;
            p_z = &p_selfScale->zeroVector.fields.z;
          }
          v97.fields.x = p_selfScale->zeroVector.fields.x;
          v97.fields.y = *p_y;
          v97.fields.z = *p_z;
          GameObjectExtensions__SetLocalScale(gameObject, v97, 0);
        }
      }
    }
    else
    {
      v22 = 0;
      p_IsMapModel_k__BackingField = &this->fields._IsMapModel_k__BackingField;
    }
    mcSpotSprite = (UnityEngine_Object_o *)this->fields.mcSpotSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v19);
    Instance = UnityEngine_Object__op_Inequality(0, mcSpotSprite, 0);
    if ( (Instance & 1) != 0 )
    {
      spotChangeImgId = this->fields.spotChangeImgId;
      if ( spotChangeImgId <= 0 )
      {
        if ( !v17 )
          goto LABEL_139;
        spotChangeImgId = SpotEntity__GetPrioredImgId(v17, 0);
      }
      atlases = this->fields.atlases;
      v33 = this->fields.mcSpotSprite;
      if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v7, v29);
      SrcSpotBasePrefab__SetSpotUI(atlases, v33, v17, spotChangeImgId, -32.0, v30);
    }
    if ( v20 && *p_IsMapModel_k__BackingField )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !Instance )
        goto LABEL_139;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
      if ( !Instance )
        goto LABEL_139;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, v22 & 1, 0);
    }
    mSpotNameLabel = (UnityEngine_Object_o *)this->fields.mSpotNameLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v29);
    if ( !UnityEngine_Object__op_Inequality(0, mSpotNameLabel, 0) )
    {
LABEL_64:
      if ( SrcSpotBasePrefab__GetState(this, v7) == 1 )
      {
        p_mNoticeNumber = &this->fields.mNoticeNumber;
        mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v48);
        if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
        {
          mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v51);
          v53 = UnityEngine_Object__Instantiate_object_(
                  mNoticeNumberPrefab,
                  (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v53, (UnityEngine_Component_o *)this, 0);
          if ( !v53 )
            goto LABEL_139;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v53,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
          *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumber,
            (int32_t)Component_object,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
        }
        Instance = (__int64)*p_mNoticeNumber;
        if ( !*p_mNoticeNumber )
          goto LABEL_139;
        NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)Instance, this->fields.miQuestCount, 0);
        v61 = this->fields.mMapCtrl_SpotInfo;
        if ( !v61 )
          goto LABEL_139;
        if ( v61->fields.dispType != 1 )
        {
          Instance = (__int64)*p_mNoticeNumber;
          if ( !*p_mNoticeNumber )
            goto LABEL_139;
          Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_139;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        }
      }
      if ( *p_mMapCtrl_SpotInfo && SrcSpotBasePrefab__CheckDisplayRecollectionEffect(this, v7) )
      {
        recollectionQuestSpotEffect = (UnityEngine_Object_o *)this->fields.recollectionQuestSpotEffect;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62, v48);
        if ( UnityEngine_Object__op_Equality(recollectionQuestSpotEffect, 0, 0) )
        {
          v64 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v64, (Il2CppObject *)this, Method_SrcSpotBasePrefab__UpdateDisp_b__72_0__, 0);
          SrcSpotBasePrefab__LoadRecollectionQuestSpotEffect(this, v64, v65);
          goto LABEL_86;
        }
        v66 = 1;
      }
      else
      {
        v66 = 0;
      }
      SrcSpotBasePrefab__SetRecollectionSpotEffect(this, v66, v48);
LABEL_86:
      Instance = (__int64)*p_mMapCtrl_SpotInfo;
      if ( !*p_mMapCtrl_SpotInfo )
        goto LABEL_139;
      Instance = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)Instance, 0);
      if ( !this->fields.mcSpotNextSp )
        goto LABEL_139;
      v67 = Instance;
      Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mcSpotNextSp, 0);
      if ( !Instance )
        goto LABEL_139;
      Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_139;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_139;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v67 & 1, 0);
      if ( (v67 & 1) != 0 && !this->fields.isDisplayNext )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v68);
        if ( !byte_5931EF0 )
        {
          sub_21FFC50(&TerminalSceneComponent_TypeInfo);
          byte_5931EF0 = 1;
        }
        Instance = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v68);
          Instance = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v69 = **(_QWORD **)(Instance + 184);
        if ( !v69 )
          goto LABEL_139;
        Instance = *(_QWORD *)(v69 + 264);
        if ( !Instance )
          goto LABEL_139;
        ScrTerminalMap__SetMapButtonNextBySpotInfo((ScrTerminalMap_o *)Instance, this->fields.mMapCtrl_SpotInfo, 0);
        this->fields.isDisplayNext = 1;
      }
      if ( *p_mMapCtrl_SpotInfo )
      {
        Instance = (__int64)this->fields.loopIcon;
        if ( Instance )
        {
          v70 = !this->fields._IsMapModel_k__BackingField || v20 == 0;
          v71 = v70
              ? (*p_mMapCtrl_SpotInfo)->fields.freeQuestCount > 0
              : v22 & ((*p_mMapCtrl_SpotInfo)->fields.freeQuestCount > 0);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v71, 0);
          Instance = (__int64)this->fields.loopIcon;
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
            v72 = (UnityEngine_Transform_o *)Instance;
            if ( !byte_5931947 )
            {
              Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              byte_5931947 = 1;
            }
            mcSpotNameSp = this->fields.mcSpotNameSp;
            if ( mcSpotNameSp )
            {
              mWidth = mcSpotNameSp->fields.mWidth;
              static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
              z = static_fields->rightVector.fields.z;
              v77.n64_u64[0] = *(unsigned __int64 *)&static_fields->rightVector.fields.x;
              if ( !byte_5931948 )
              {
                Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                byte_5931948 = 1;
              }
              if ( v72 )
              {
                __asm { FMOV            V3.2S, #-26.0 }
                v82 = (float32x2_t *)UnityEngine_Vector3_TypeInfo->static_fields;
                v83.n64_u64[0] = vmul_f32(v77, _D3).n64_u64[0];
                __asm { FMOV            V3.2S, #-15.0 }
                v85 = vadd_f32(
                        vadd_f32(vmul_f32(vmul_n_f32(v77, (float)mWidth), (float32x2_t)0x3F0000003F000000LL), v83),
                        vmul_f32(v82[3], _D3)).n64_u64[0];
                v83.n64_f32[0] = (float)((float)((float)(z * (float)mWidth) * 0.5) + (float)(z * -26.0))
                               + (float)(v82[4].n64_f32[0] * -15.0);
                v86 = HIDWORD(v85);
                UnityEngine_Transform__set_localPosition(v72, *(UnityEngine_Vector3_o *)(&v83 - 1), 0);
                if ( *p_mMapCtrl_SpotInfo )
                {
                  spotId = (*p_mMapCtrl_SpotInfo)->fields.spotId;
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v87);
                  if ( !byte_5934D7E )
                  {
                    sub_21FFC50(&TerminalPramsManager_TypeInfo);
                    byte_5934D7E = 1;
                  }
                  Instance = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v87);
                    Instance = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( this->fields.loopLastTime )
                  {
                    v89 = *p_IsMapModel_k__BackingField;
                    v90 = *(_DWORD *)(*(_QWORD *)(Instance + 184) + 60LL);
                    Instance = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.loopLastTime,
                                          0);
                    if ( Instance )
                    {
                      v91 = !v89 || v20 == 0;
                      v92 = v91 ? spotId == v90 : v22 & (spotId == v90);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v92, 0);
                      loopLastTime = this->fields.loopLastTime;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93, v94);
                      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12787/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0);
                      if ( loopLastTime )
                      {
                        UILabel__set_text(loopLastTime, (System_String_o *)Instance, 0);
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
LABEL_139:
      sub_21FFECC(Instance, v7);
    }
    Instance = (__int64)this->fields.mSpotNameLabel;
    if ( !Instance )
      goto LABEL_139;
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_139;
    Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_139;
    Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_139;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !v17 )
      goto LABEL_139;
    v35 = (UnityEngine_GameObject_o *)Instance;
    Instance = SpotEntity__HasFlag(v17, 8, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_48;
    if ( !*p_mMapCtrl_SpotInfo )
      goto LABEL_139;
    dispType = (*p_mMapCtrl_SpotInfo)->fields.dispType;
    if ( dispType == 2 )
    {
      HasFlag = SpotEntity__HasFlag(v17, 16, 0);
      goto LABEL_49;
    }
    if ( dispType != 1 )
LABEL_48:
      HasFlag = 0;
    else
      HasFlag = 1;
LABEL_49:
    Instance = SpotEntity__IsOverRideName(v17, &spotName, 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = System_String__IsNullOrEmpty(spotName, 0);
      HasFlag = (Instance & 1) == 0;
    }
    if ( !v35 )
      goto LABEL_139;
    v38 = (v22 & 1) != 0 && HasFlag;
    if ( !this->fields._IsMapModel_k__BackingField || v20 == 0 )
      v40 = HasFlag;
    else
      v40 = v38;
    UnityEngine_GameObject__SetActive(v35, v40, 0);
    GameObjectExtensions__SetLocalPosition_42876120(
      v35,
      (float)this->fields.mSpotNameOfsX,
      (float)this->fields.mSpotNameOfsY,
      0);
    v44 = this->fields.mcSpotNameSp;
    v45 = this->fields.mSpotNameLabel;
    v46 = this->fields.atlases;
    mSpotNameStr = this->fields.mSpotNameStr;
    if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v41, v42);
    SrcSpotBasePrefab__SetSpotNameUI(v46, v44, v45, mSpotNameStr, v43);
    goto LABEL_64;
  }
}


void SrcSpotBasePrefab__UpdateDispIconStateOnMapModel(
        SrcSpotBasePrefab_o *this,
        bool *isCurrentDisp,
        bool existsLayerEnt,
        bool isEnabledTouchSpot,
        const MethodInfo *method)
{
  if ( this->fields._IsMapModel_k__BackingField && existsLayerEnt )
    *isCurrentDisp &= isEnabledTouchSpot;
}


void SrcSpotBasePrefab___UpdateDisp_b__72_0(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SrcSpotBasePrefab__SetRecollectionSpotEffect(this, 1, v2);
}


void SrcSpotBasePrefab__cbfBtn_Click(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SrcSpotBasePrefab__SelectSpot(this, 1, v2);
}


bool SrcSpotBasePrefab__get_IsMapModel(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields._IsMapModel_k__BackingField;
}


MapModelCamera_o *SrcSpotBasePrefab__get_MapModelCamera(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields._MapModelCamera_k__BackingField;
}


UnityEngine_GameObject_o *SrcSpotBasePrefab__get_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        const MethodInfo *method)
{
  return this->fields._MapModelEffectRootObj_k__BackingField;
}


int32_t SrcSpotBasePrefab__mfGetSpotID(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields.miSpotID;
}


System_String_o *SrcSpotBasePrefab__mfGetSpotName(SrcSpotBasePrefab_o *this, const MethodInfo *method)
{
  return this->fields.mSpotNameStr;
}


void SrcSpotBasePrefab__mfSetAtlas(
        SrcSpotBasePrefab_o *this,
        System_Collections_Generic_List_UIAtlas__o *atlases,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_UIAtlas__o **p_atlases; // x19

  this->fields.atlases = atlases;
  p_atlases = &this->fields.atlases;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.atlases,
    (int32_t)atlases,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  *((_BYTE *)p_atlases - 72) = 1;
}


void SrcSpotBasePrefab__mfSetCommopn(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *rootGameObject,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mcRootGobjP = rootGameObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mcRootGobjP,
    (int32_t)rootGameObject,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__mfSetPositions(
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
  __int64 v14; // x2
  Il2CppObject *mNoticeNumberPrefab; // x25
  Il2CppObject *v16; // x25
  UnityEngine_Component_o *mcSpotNextSp; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  SrcSpotBasePrefab_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x21

  if ( (byte_5935817 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    byte_5935817 = 1;
  }
  p_mNoticeNumber = &this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&qOfsX, *(_QWORD *)&qOfsY);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    v16 = UnityEngine_Object__Instantiate_object_(
            mNoticeNumberPrefab,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v16, (UnityEngine_Component_o *)this, 0);
    if ( !v16 )
LABEL_17:
      sub_21FFECC(mcSpotNextSp, v13);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    *p_mNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumber,
      (int32_t)Component_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  mcSpotNextSp = (UnityEngine_Component_o *)*p_mNoticeNumber;
  if ( !*p_mNoticeNumber )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0);
  GameObjectExtensions__SetLocalPosition_42876120(gameObject, (float)qOfsX, (float)qOfsY + -32.0, 0);
  mcSpotNextSp = (UnityEngine_Component_o *)this->fields.mcSpotNextSp;
  if ( !mcSpotNextSp )
    goto LABEL_17;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mcSpotNextSp, 0);
  if ( !mcSpotNextSp )
    goto LABEL_17;
  mcSpotNextSp = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)mcSpotNextSp,
                                              0);
  if ( !mcSpotNextSp )
    goto LABEL_17;
  v26 = UnityEngine_Component__get_gameObject(mcSpotNextSp, 0);
  v29 = SrcSpotBasePrefab_TypeInfo;
  v30 = v26;
  if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v27, v28);
    v29 = SrcSpotBasePrefab_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition_42876120(
    v30,
    (float)nOfsX,
    (float)(v29->static_fields->DEFAULT_NEXT_POS_Y + (float)nOfsY) + -32.0,
    0);
}


void SrcSpotBasePrefab__mfSetQuestCount(SrcSpotBasePrefab_o *this, int32_t questCount, const MethodInfo *method)
{
  this->fields.miQuestCount = questCount;
  this->fields.mtIsUpdate = 1;
}


void SrcSpotBasePrefab__mfSetSpotID(SrcSpotBasePrefab_o *this, int32_t spotId, const MethodInfo *method)
{
  this->fields.miSpotID = spotId;
  this->fields.mtIsUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void SrcSpotBasePrefab__mfSetSpotName(
        SrcSpotBasePrefab_o *this,
        System_String_o *name,
        int32_t offsetX,
        int32_t offsetY,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_mSpotNameStr; // x21

  this->fields.mSpotNameStr = name;
  p_mSpotNameStr = &this->fields.mSpotNameStr;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mSpotNameStr,
    (int32_t)name,
    *(System_String_o **)&offsetX,
    *(System_String_o **)&offsetY,
    (int32_t)method,
    v5,
    v6,
    v7);
  *((_DWORD *)p_mSpotNameStr + 2) = offsetX;
  *((_DWORD *)p_mSpotNameStr + 3) = offsetY - 32;
  *((_BYTE *)p_mSpotNameStr - 112) = 1;
}


void SrcSpotBasePrefab__set_IsMapModel(SrcSpotBasePrefab_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMapModel_k__BackingField = value;
}


void SrcSpotBasePrefab__set_MapModelCamera(
        SrcSpotBasePrefab_o *this,
        MapModelCamera_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelCamera_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelCamera_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SrcSpotBasePrefab__set_MapModelEffectRootObj(
        SrcSpotBasePrefab_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MapModelEffectRootObj_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MapModelEffectRootObj_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SrcSpotBasePrefab_StateMapMain___ctor(SrcSpotBasePrefab_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateMapMain__begin(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_21FFECC(this, 0);
  that->fields.mtIsUpdate = 1;
}


void SrcSpotBasePrefab_StateMapMain__end(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateMapMain__update(
        SrcSpotBasePrefab_StateMapMain_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  if ( !that )
    sub_21FFECC(this, 0);
  SrcSpotBasePrefab__UpdateDisp(that, 0, method);
}


void SrcSpotBasePrefab_StateNone___ctor(SrcSpotBasePrefab_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateNone__begin(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateNone__end(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateNone__update(
        SrcSpotBasePrefab_StateNone_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaChange___ctor(SrcSpotBasePrefab_StateQaaChange_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateQaaChange__begin(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  __int64 v4; // x19
  SrcSpotBasePrefab_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  unsigned int dispType; // w8
  __int64 v17; // x20
  System_Action_o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Action_o *mStateEndAct; // x19

  if ( (byte_593582A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__);
    sub_21FFC50(&SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
    byte_593582A = 1;
  }
  v4 = sub_21FFEBC(SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_12;
  *(_QWORD *)(v4 + 16) = that;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)that, v7, v8, v9, v10, v11, v12);
  v5 = *(SrcSpotBasePrefab_o **)(v4 + 16);
  if ( !v5 )
    goto LABEL_12;
  mMapCtrl_SpotInfo = v5->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_12;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( dispType < 3 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_44076360(v5, 0, 0.5, v13);
      v17 = *(_QWORD *)(v4 + 16);
      v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0__begin_b__0__,
        0);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 216) = v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 216), (int32_t)v18, v19, v20, v21, v22, v23, v24);
        return;
      }
LABEL_12:
      sub_21FFECC(v5, v6);
    }
  }
  else
  {
    mStateEndAct = v5->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(v5, 1, 0, v14);
    ActionExtensions__Call(mStateEndAct, 0);
  }
}


void SrcSpotBasePrefab_StateQaaChange__end(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaChange__update(
        SrcSpotBasePrefab_StateQaaChange_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___ctor(
        SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0___begin_b__0(
        SrcSpotBasePrefab_StateQaaChange___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SrcSpotBasePrefab_o *that; // x0
  const MethodInfo *v5; // x2
  struct SrcSpotBasePrefab_o *v6; // x19
  System_Action_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593582B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_593582B = 1;
  }
  that = this->fields.that;
  if ( !that
    || (SrcSpotBasePrefab__UpdateDisp(that, 1, v2), (that = this->fields.that) == 0)
    || (SrcSpotBasePrefab__SetQaaScaleAnim_44076360(that, 1, 0.5, v5),
        v6 = this->fields.that,
        v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v7, (Il2CppObject *)v6, Method_SrcSpotBasePrefab_StateQaaEnd__, 0),
        !v6) )
  {
    sub_21FFECC(that, method);
  }
  v6->fields.mAfterScaleAnim = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.mAfterScaleAnim, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void SrcSpotBasePrefab_StateQaaDisp___ctor(SrcSpotBasePrefab_StateQaaDisp_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateQaaDisp__begin(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *mStateEndAct; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *mQaaDispEffObj; // x20
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *v25; // x20
  __int64 v26; // x2
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x21
  UnityEngine_GameObject_o *v29; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v33; // x1
  float ScaleOnMapModel; // s0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935829 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935829 = 1;
  }
  v4 = Method_SrcSpotBasePrefab_StateQaaDisp_begin__;
  if ( (*((_BYTE *)Method_SrcSpotBasePrefab_StateQaaDisp_begin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SrcSpotBasePrefab_StateQaaDisp_begin__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 17, 0, 0);
  if ( !that )
    goto LABEL_27;
  mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_27;
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      SrcSpotBasePrefab__SetQaaColorAnim_44076796(that, 1, 0.5, v8);
      break;
    case 1:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0, v9);
      ActionExtensions__Call(mStateEndAct, 0);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 1.0, v7);
      SrcSpotBasePrefab__SetQaaScaleAnim_44076360(that, 1, 0.5, v12);
      v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0);
      that->fields.mAfterScaleAnim = v13;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&that->fields.mAfterScaleAnim,
        (int32_t)v13,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  v24 = UnityEngine_Object__Instantiate_object_(
          mQaaDispEffObj,
          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v25 = (UnityEngine_GameObject_o *)v24;
  if ( !that->fields._IsMapModel_k__BackingField )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0);
    GameObjectExtensions__SetParent_42881836(v25, gameObject, 0);
    GameObjectExtensions__SetLocalPosition_42876224(v25, 0.0, 0.0, 0.0, 0);
    GameObjectExtensions__ResetLocalRotation(v25, 0);
    GameObjectExtensions__ResetLocalScale(v25, 0);
    goto LABEL_26;
  }
  GameObjectExtensions__SetParent_42881836(
    (UnityEngine_GameObject_o *)v24,
    that->fields._MapModelEffectRootObj_k__BackingField,
    0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v26);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v26);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap,
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)that, 0),
        LocalPosition = GameObjectExtensions__GetLocalPosition(v29, 0),
        !mTerminalMap) )
  {
LABEL_27:
    sub_21FFECC(v6, v7);
  }
  v43 = ScrTerminalMap__ConvertLocalToScreenPosition(mTerminalMap, LocalPosition, 0);
  GameObjectExtensions__SetLocalPosition(v25, v43, 0);
  GameObjectExtensions__ResetLocalRotation(v25, 0);
  x = that->fields.selfScale.fields.x;
  y = that->fields.selfScale.fields.y;
  z = that->fields.selfScale.fields.z;
  ScaleOnMapModel = SrcSpotBasePrefab__GetScaleOnMapModel(that, v33);
  v44.fields.y = y * ScaleOnMapModel;
  v44.fields.z = z * ScaleOnMapModel;
  v44.fields.x = x * ScaleOnMapModel;
  GameObjectExtensions__SetLocalScale(v25, v44, 0);
LABEL_26:
  that->fields.mParticleSystemObj = v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&that->fields.mParticleSystemObj,
    (int32_t)v25,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void SrcSpotBasePrefab_StateQaaDisp__end(
        SrcSpotBasePrefab_StateQaaDisp_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaDisp__update(
        SrcSpotBasePrefab_StateQaaDisp_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaGray___ctor(SrcSpotBasePrefab_StateQaaGray_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateQaaGray__begin(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  int32_t dispType; // w8
  const MethodInfo *v7; // x2
  System_Action_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_5935828 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaGray_o *)sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_5935828 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0 )
    sub_21FFECC(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  switch ( dispType )
  {
    case 2:
      mStateEndAct = that->fields.mStateEndAct;
      SrcSpotBasePrefab__SetState(that, 1, 0, v3);
      ActionExtensions__Call(mStateEndAct, 0);
      break;
    case 1:
      SrcSpotBasePrefab__SetQaaColorAnim_44076796(that, 0, 0.5, method);
      break;
    case 0:
      SrcSpotBasePrefab__SetContrast(that, 0.5, (const MethodInfo *)that);
      SrcSpotBasePrefab__SetQaaScaleAnim_44076360(that, 1, 0.5, v7);
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0);
      that->fields.mAfterScaleAnim = v8;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&that->fields.mAfterScaleAnim,
        (int32_t)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      break;
  }
}


void SrcSpotBasePrefab_StateQaaGray__end(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaGray__update(
        SrcSpotBasePrefab_StateQaaGray_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaHide___ctor(SrcSpotBasePrefab_StateQaaHide_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab_StateQaaHide__begin(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  unsigned int dispType; // w8
  System_Action_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *mStateEndAct; // x20

  if ( (byte_5935827 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (SrcSpotBasePrefab_StateQaaHide_o *)sub_21FFC50(&Method_SrcSpotBasePrefab_StateQaaEnd__);
    byte_5935827 = 1;
  }
  if ( !that || (mMapCtrl_SpotInfo = that->fields.mMapCtrl_SpotInfo) == 0 )
    sub_21FFECC(this, that);
  dispType = mMapCtrl_SpotInfo->fields.dispType;
  if ( dispType )
  {
    if ( dispType < 3 )
    {
      SrcSpotBasePrefab__SetQaaScaleAnim_44076360(that, 0, 0.5, method);
      v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)that, Method_SrcSpotBasePrefab_StateQaaEnd__, 0);
      that->fields.mAfterScaleAnim = v7;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&that->fields.mAfterScaleAnim,
        (int32_t)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
  }
  else
  {
    mStateEndAct = that->fields.mStateEndAct;
    SrcSpotBasePrefab__SetState(that, 1, 0, v3);
    ActionExtensions__Call(mStateEndAct, 0);
  }
}


void SrcSpotBasePrefab_StateQaaHide__end(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab_StateQaaHide__update(
        SrcSpotBasePrefab_StateQaaHide_o *this,
        SrcSpotBasePrefab_o *that,
        const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593582C & 1) == 0 )
  {
    sub_21FFC50(&SrcSpotBasePrefab___c_TypeInfo);
    byte_593582C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SrcSpotBasePrefab___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SrcSpotBasePrefab___c_TypeInfo->static_fields->__9 = (struct SrcSpotBasePrefab___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SrcSpotBasePrefab___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SrcSpotBasePrefab___c___ctor(SrcSpotBasePrefab___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab___c___SelectSpot_b__75_0(SrcSpotBasePrefab___c_o *this, const MethodInfo *method)
{
  ;
}


void SrcSpotBasePrefab___c__DisplayClass107_0___ctor(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__0(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *_4__this; // x0
  const MethodInfo *v4; // x3
  System_Action_o *mStateEndAct; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SrcSpotBasePrefab__SetContrast(_4__this, this->fields.to, method), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  mStateEndAct = _4__this->fields.mStateEndAct;
  SrcSpotBasePrefab__SetState(_4__this, 1, 0, v4);
  ActionExtensions__Call(mStateEndAct, 0);
}


void SrcSpotBasePrefab___c__DisplayClass107_0___SetQaaColorAnim_b__1(
        SrcSpotBasePrefab___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9

  easingObj = this->fields.easingObj;
  if ( !easingObj || !this->fields.__4__this )
    sub_21FFECC(this, method);
  SrcSpotBasePrefab__SetContrast(
    this->fields.__4__this,
    this->fields.from + (float)((float)(this->fields.to - this->fields.from) * easingObj->fields.mNow),
    method);
}


void SrcSpotBasePrefab___c__DisplayClass112_0___ctor(
        SrcSpotBasePrefab___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SrcSpotBasePrefab___c__DisplayClass112_0___LoadRecollectionQuestSpotEffect_b__0(
        SrcSpotBasePrefab___c__DisplayClass112_0_o *this,
        AssetData_o *effectAssetData,
        const MethodInfo *method)
{
  SrcSpotBasePrefab___c__DisplayClass112_0_o *v4; // x19
  SrcSpotBasePrefab_c *v5; // x0
  Il2CppObject *Object_object__58323140; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SrcSpotBasePrefab_o *_4__this; // x21
  Il2CppObject *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct SrcSpotBasePrefab_o *v17; // x8
  struct SrcSpotBasePrefab_o *v18; // x8
  UnityEngine_GameObject_o *recollectionQuestSpotEffect; // x20
  UnityEngine_Component_o *transform; // x0
  struct SrcSpotBasePrefab_o *v21; // x8
  struct SrcSpotBasePrefab_o *v22; // x9
  struct System_Action_o *endCallback; // x8

  v4 = this;
  if ( (byte_593582D & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    byte_593582D = 1;
  }
  if ( effectAssetData )
  {
    v5 = SrcSpotBasePrefab_TypeInfo;
    if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, effectAssetData, method);
      v5 = SrcSpotBasePrefab_TypeInfo;
    }
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                effectAssetData,
                                v5->static_fields->RECOLLECTION_QUEST_SPOT_EFFECT_NAME,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    _4__this = v4->fields.__4__this;
    v10 = Object_object__58323140;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           v10,
                                                           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !_4__this )
      goto LABEL_19;
    _4__this->fields.recollectionQuestSpotEffect = (struct UnityEngine_GameObject_o *)this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.recollectionQuestSpotEffect,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = v4->fields.__4__this;
    if ( !v17 )
      goto LABEL_19;
    this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Object__op_Inequality(
                                                           (UnityEngine_Object_o *)v17->fields.recollectionQuestSpotEffect,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v18 = v4->fields.__4__this;
      if ( v18 )
      {
        this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)v18->fields.mNoticeNumber;
        if ( this )
        {
          recollectionQuestSpotEffect = v18->fields.recollectionQuestSpotEffect;
          this = (SrcSpotBasePrefab___c__DisplayClass112_0_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
          if ( this )
          {
            transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
            GameObjectExtensions__SafeSetParent(recollectionQuestSpotEffect, transform, 0);
            v21 = v4->fields.__4__this;
            if ( v21 )
            {
              GameObjectExtensions__ResetLocalScale(v21->fields.recollectionQuestSpotEffect, 0);
              goto LABEL_16;
            }
          }
        }
      }
LABEL_19:
      sub_21FFECC(this, effectAssetData);
    }
  }
LABEL_16:
  v22 = v4->fields.__4__this;
  if ( !v22 )
    goto LABEL_19;
  endCallback = v4->fields.endCallback;
  v22->fields.isLoadingRecollectionEffectAsset = 0;
  if ( !endCallback )
    goto LABEL_19;
  ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
    endCallback->fields.method_code,
    endCallback->fields.method);
}